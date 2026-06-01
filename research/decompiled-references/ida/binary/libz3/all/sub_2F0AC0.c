__int64 __fastcall sub_2F0AC0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char **exception; // r13
  __m128i *v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __m128i *v11; // rdx
  unsigned int v13; // r15d
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-70h]
  _DWORD *v30; // [rsp+10h] [rbp-68h]
  unsigned int v31; // [rsp+1Ch] [rbp-5Ch]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v29 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v7 = *(__m128i **)(a1 + 600);
  if ( v7 )
  {
    v8 = v7[-1].m128i_u32[3];
    if ( v8 == v7[-1].m128i_i32[2] )
    {
      v13 = (3 * v8 + 1) >> 1;
      v31 = v13;
      v14 = 32 * v13 + 8;
      if ( 32 * v8 + 8 >= (unsigned int)v14 || v8 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_2EB560(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = sub_186B270(v14);
      v16 = *(_QWORD *)(a1 + 600);
      v30 = (_DWORD *)v15;
      v7 = (__m128i *)(v15 + 8);
      if ( v16 )
      {
        v17 = *(unsigned int *)(v16 - 4);
        v18 = v15 + 8;
        *(_DWORD *)(v15 + 4) = v17;
        v19 = v17;
        v20 = v16;
        v21 = v16 + 32 * v17;
        if ( v21 != v16 )
        {
          do
          {
            v22 = *(_QWORD *)(v20 + 8);
            v20 += 32;
            v18 += 32;
            *(_QWORD *)(v18 - 24) = v22;
            v23 = *(_QWORD *)(v20 - 32);
            *(_QWORD *)(v20 - 32) = 0;
            *(_QWORD *)(v18 - 32) = v23;
            *(_QWORD *)(v18 - 8) = *(_QWORD *)(v20 - 8);
            v24 = *(_QWORD *)(v20 - 16);
            *(_QWORD *)(v20 - 16) = 0;
            *(_QWORD *)(v18 - 16) = v24;
          }
          while ( v21 != v20 );
        }
        v25 = v16 + 32 * v17;
        if ( v19 )
        {
          do
          {
            v26 = *(_QWORD *)(v16 + 24);
            v27 = *(_QWORD *)(v16 + 16);
            v16 += 32;
            sub_2EB430(v27, v26);
            sub_2EB430(*(_QWORD *)(v16 - 32), *(_QWORD *)(v16 - 24));
          }
          while ( v16 != v25 );
          v16 = *(_QWORD *)(a1 + 600);
        }
        sub_186B220((void *)(v16 - 8));
        v11 = &v7[2 * (unsigned int)v30[1]];
        v10 = v30[1] + 1;
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        v11 = (__m128i *)(v15 + 8);
        v10 = 1;
      }
      *(_QWORD *)(a1 + 600) = v7;
      *v30 = v31;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v7[2 * v9];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x48u);
    v7 = (__m128i *)(v28 + 1);
    *v28 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 600) = v7;
    v11 = v7;
  }
  *v11 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)(unsigned __int64)v29);
  v11[1] = _mm_unpacklo_epi64((__m128i)a3, (__m128i)(unsigned __int64)v29);
  v7[-1].m128i_i32[3] = v10;
  sub_2EB430(0, v29);
  return sub_2EB430(0, v29);
}

