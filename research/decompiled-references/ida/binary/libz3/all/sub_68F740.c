__int64 __fastcall sub_68F740(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __m128i *v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __m128i *v10; // rdx
  unsigned int v12; // r15d
  size_t v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v27; // rax
  char **exception; // r13
  __int64 v29; // [rsp+8h] [rbp-70h]
  _DWORD *v30; // [rsp+10h] [rbp-68h]
  unsigned int v31; // [rsp+1Ch] [rbp-5Ch]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v29 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v6 = *(__m128i **)(a1 + 4832);
  if ( v6 )
  {
    v7 = v6[-1].m128i_u32[3];
    if ( v7 == v6[-1].m128i_i32[2] )
    {
      v12 = (3 * v7 + 1) >> 1;
      v31 = v12;
      v13 = 32 * v12 + 8;
      if ( 32 * v7 + 8 >= (unsigned int)v13 || v7 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_68CF80(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = sub_186B270(v13);
      v15 = *(_QWORD *)(a1 + 4832);
      v30 = (_DWORD *)v14;
      v6 = (__m128i *)(v14 + 8);
      if ( v15 )
      {
        v16 = *(unsigned int *)(v15 - 4);
        v17 = v14 + 8;
        *(_DWORD *)(v14 + 4) = v16;
        v18 = v16;
        v19 = v15;
        v20 = v15 + 32 * v16;
        if ( v20 != v15 )
        {
          do
          {
            v21 = *(_QWORD *)(v19 + 8);
            v19 += 32;
            v17 += 32;
            *(_QWORD *)(v17 - 24) = v21;
            v22 = *(_QWORD *)(v19 - 32);
            *(_QWORD *)(v19 - 32) = 0;
            *(_QWORD *)(v17 - 32) = v22;
            *(_QWORD *)(v17 - 8) = *(_QWORD *)(v19 - 8);
            v23 = *(_QWORD *)(v19 - 16);
            *(_QWORD *)(v19 - 16) = 0;
            *(_QWORD *)(v17 - 16) = v23;
          }
          while ( v20 != v19 );
        }
        v24 = v15 + 32 * v16;
        if ( v18 )
        {
          do
          {
            v25 = *(_QWORD *)(v15 + 24);
            v26 = *(_QWORD *)(v15 + 16);
            v15 += 32;
            sub_68CF60(v26, v25);
            sub_68CF60(*(_QWORD *)(v15 - 32), *(_QWORD *)(v15 - 24));
          }
          while ( v15 != v24 );
          v15 = *(_QWORD *)(a1 + 4832);
        }
        sub_186B220((void *)(v15 - 8));
        v10 = &v6[2 * (unsigned int)v30[1]];
        v9 = v30[1] + 1;
      }
      else
      {
        *(_DWORD *)(v14 + 4) = 0;
        v10 = (__m128i *)(v14 + 8);
        v9 = 1;
      }
      *(_QWORD *)(a1 + 4832) = v6;
      *v30 = v31;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[2 * v8];
    }
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x48u);
    v6 = (__m128i *)(v27 + 1);
    *v27 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 4832) = v6;
    v10 = v6;
  }
  *v10 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)(unsigned __int64)v29);
  v10[1] = _mm_unpacklo_epi64((__m128i)a3, (__m128i)(unsigned __int64)v29);
  v6[-1].m128i_i32[3] = v9;
  sub_68CF60(0, v29);
  return sub_68CF60(0, v29);
}

