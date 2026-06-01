__int64 __fastcall sub_E01D70(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char **exception; // r15
  __int64 v7; // rdi
  __int64 v9; // rax
  __m128i *v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __m128i *v14; // rdx
  unsigned int v15; // r14d
  size_t v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _DWORD *v19; // r12
  __int64 v20; // r10
  __int64 v21; // rdx
  int v22; // r11d
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  _QWORD *v28; // r10
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  __int64 v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // [rsp+0h] [rbp-78h]
  __int64 v36; // [rsp+8h] [rbp-70h]
  _QWORD *v37; // [rsp+10h] [rbp-68h]
  _QWORD *v38; // [rsp+10h] [rbp-68h]
  _QWORD *v39; // [rsp+18h] [rbp-60h]
  _QWORD *v40; // [rsp+18h] [rbp-60h]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a1[110];
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7);
  v9 = a1[108];
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 72) + 104LL))(v9 + 72);
  sub_DFBCB0(a1);
  v35 = a1[37];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_DFBCB0(a1);
  v36 = a1[37];
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v10 = (__m128i *)a1[77];
  if ( v10 )
  {
    v11 = v10[-1].m128i_u32[3];
    if ( v11 == v10[-1].m128i_i32[2] )
    {
      v15 = (3 * v11 + 1) >> 1;
      v16 = 32 * v15 + 8;
      if ( 32 * v11 + 8 >= (unsigned int)v16 || v11 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0(v41, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = sub_186B270(v16);
      v18 = (_QWORD *)a1[77];
      v19 = (_DWORD *)v17;
      v10 = (__m128i *)(v17 + 8);
      if ( v18 )
      {
        v20 = *((unsigned int *)v18 - 1);
        v21 = v17 + 8;
        *(_DWORD *)(v17 + 4) = v20;
        v22 = v20;
        v23 = v18;
        v24 = &v18[4 * v20];
        if ( v24 != v18 )
        {
          do
          {
            v25 = v23[1];
            v23 += 4;
            v21 += 32;
            *(_QWORD *)(v21 - 24) = v25;
            v26 = *(v23 - 4);
            *(v23 - 4) = 0;
            *(_QWORD *)(v21 - 32) = v26;
            *(_QWORD *)(v21 - 8) = *(v23 - 1);
            v27 = *(v23 - 2);
            *(v23 - 2) = 0;
            *(_QWORD *)(v21 - 16) = v27;
          }
          while ( v24 != v23 );
        }
        v28 = &v18[4 * v20];
        if ( v22 )
        {
          do
          {
            v32 = v18[2];
            if ( v32 )
            {
              v33 = v18[3];
              v31 = (*(_DWORD *)(v32 + 8))-- == 1;
              if ( v31 )
              {
                v39 = v28;
                v37 = v18;
                sub_15D7BC0(v33, v32);
                v28 = v39;
                v18 = v37;
              }
            }
            v29 = *v18;
            if ( *v18 )
            {
              v30 = v18[1];
              v31 = (*(_DWORD *)(v29 + 8))-- == 1;
              if ( v31 )
              {
                v40 = v28;
                v38 = v18;
                sub_15D7BC0(v30, v29);
                v28 = v40;
                v18 = v38;
              }
            }
            v18 += 4;
          }
          while ( v18 != v28 );
          v18 = (_QWORD *)a1[77];
        }
        sub_186B220(v18 - 1);
        v14 = &v10[2 * (unsigned int)v19[1]];
        v13 = v19[1] + 1;
      }
      else
      {
        *(_DWORD *)(v17 + 4) = 0;
        v14 = (__m128i *)(v17 + 8);
        v13 = 1;
      }
      a1[77] = v10;
      *v19 = v15;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[2 * v12];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x48u);
    v10 = (__m128i *)(v34 + 1);
    *v34 = 2;
    v13 = 1;
    a1[77] = v10;
    v14 = v10;
  }
  *v14 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)(unsigned __int64)v35);
  v14[1] = _mm_unpacklo_epi64((__m128i)a3, (__m128i)(unsigned __int64)v36);
  v10[-1].m128i_i32[3] = v13;
  sub_DF6300(0, v36);
  return sub_DF6300(0, v35);
}

