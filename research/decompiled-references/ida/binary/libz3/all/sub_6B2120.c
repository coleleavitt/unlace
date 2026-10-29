__int64 __fastcall sub_6B2120(const __m128i *a1, _QWORD *a2, __int64 a3)
{
  __int64 **v5; // r13
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rcx
  __int64 *v19; // r14
  __int64 v20; // rsi
  int v21; // eax
  __m128i **v22; // rsi
  __int64 v23; // r15
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __m128i *v26; // rbx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rdi
  unsigned int v35; // ebx
  __int64 result; // rax
  __int64 v37; // rdi
  char v38; // r15
  __int64 *v39; // rbx
  __int64 *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdi
  _QWORD *v43; // rax
  char **exception; // rbx
  __int64 **v45; // [rsp+0h] [rbp-68h]
  __int64 *v46; // [rsp+0h] [rbp-68h]
  unsigned int v48; // [rsp+8h] [rbp-60h]
  __m128i v49; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v50; // [rsp+20h] [rbp-48h]

  v5 = (__int64 **)a1[52].m128i_i64[0];
  if ( v5 )
  {
    v45 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 == v45 )
      goto LABEL_27;
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = (__int64 *)v6[20];
        if ( v7 )
        {
          v8 = &v7[*((unsigned int *)v7 - 1)];
          if ( v7 >= v8 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 )
              {
                v10 = v6[19];
                v11 = (*(_DWORD *)(v9 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v7 >= v8 )
                goto LABEL_11;
            }
            sub_15D7BC0(v10, v9);
            ++v7;
          }
          while ( v7 < v8 );
LABEL_11:
          v7 = (__int64 *)v6[20];
          if ( v7 )
LABEL_12:
            sub_186B220(v7 - 1);
        }
        v12 = (void *)v6[18];
        v6[12] = (__int64)&off_1C62200;
        if ( v12 )
          sub_186B220(v12);
        v13 = (void *)v6[15];
        if ( v13 )
          sub_186B220(v13);
        v14 = (void *)v6[11];
        v6[5] = (__int64)&off_1C62200;
        if ( v14 )
          sub_186B220(v14);
        v15 = (void *)v6[8];
        if ( v15 )
          sub_186B220(v15);
        v16 = *v6;
        if ( *v6 )
        {
          v17 = v6[1];
          v11 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v17, v16);
        }
        sub_186B220(v6);
      }
      ++v5;
    }
    while ( v45 != v5 );
    v45 = (__int64 **)a1[52].m128i_i64[0];
    if ( v45 )
LABEL_27:
      *((_DWORD *)v45 - 1) = 0;
  }
  a1[51].m128i_i64[1] = (__int64)a2;
  v18 = *(__int64 **)(a3 + 8);
  a1[51].m128i_i64[0] = a3;
  if ( v18 )
  {
    v46 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 != v46 )
    {
      v19 = v18;
      while ( 1 )
      {
        v23 = *v19;
        v24 = (__m128i *)sub_186B270(0xB0u);
        v25 = _mm_loadl_epi64(a1 + 3);
        v26 = v24;
        *v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, v25);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v27 = (_QWORD *)a1[52].m128i_i64[0];
        v24[1].m128i_i64[1] = v23;
        v24[1].m128i_i64[0] = (__int64)&off_1C4E7B8;
        v24[2].m128i_i64[0] = (__int64)v24[1].m128i_i64;
        v24[2].m128i_i64[1] = (__int64)&off_1C62200;
        v24[3].m128i_i64[1] = 0;
        v24[4].m128i_i64[0] = 0;
        v24[5].m128i_i64[0] = 0;
        v24[5].m128i_i64[1] = 0;
        v24[6].m128i_i64[0] = (__int64)&off_1C62200;
        v24[7].m128i_i64[0] = 0;
        v24[7].m128i_i64[1] = 0;
        v24[8].m128i_i64[1] = 0;
        v24[9].m128i_i64[0] = 0;
        v24[10].m128i_i64[0] = 0;
        v24[10].m128i_i8[8] = 1;
        v24[9].m128i_i64[1] = v25.m128i_i64[0];
        if ( !v27 )
          break;
        v28 = *((_DWORD *)v27 - 1);
        if ( v28 == *((_DWORD *)v27 - 2) )
        {
          v29 = (3 * v28 + 1) >> 1;
          v30 = 8 * v29 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_6A99E0(v49.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v49);
            sub_233E40((__int64)&v49);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = (3 * v28 + 1) >> 1;
          ++v19;
          v31 = (unsigned int *)sub_186B300(v27 - 1, v30);
          v32 = v31[1];
          *v31 = v48;
          a1[52].m128i_i64[0] = (__int64)(v31 + 2);
          *(_QWORD *)&v31[2 * v32 + 2] = v26;
          v31[1] = v32 + 1;
          if ( v46 == v19 )
            goto LABEL_40;
        }
        else
        {
          v20 = v28;
          v21 = v28 + 1;
          v22 = (__m128i **)&v27[v20];
LABEL_32:
          *v22 = v26;
          ++v19;
          *((_DWORD *)v27 - 1) = v21;
          if ( v46 == v19 )
            goto LABEL_40;
        }
      }
      v43 = (_QWORD *)sub_186B270(0x18u);
      v27 = v43 + 1;
      *v43 = 2;
      v21 = 1;
      a1[52].m128i_i64[0] = (__int64)v27;
      v22 = (__m128i **)v27;
      goto LABEL_32;
    }
  }
  do
  {
LABEL_40:
    v33 = _mm_loadl_epi64(a1 + 3);
    v34 = *a2;
    v50 = nullptr;
    v49 = _mm_unpacklo_epi64(v33, v33);
    sub_15EEF60(v34);
    v35 = 0;
LABEL_41:
    result = a1[2].m128i_i64[1];
    if ( result )
    {
      while ( v35 < *(_DWORD *)(result - 4) )
      {
        v37 = *(_QWORD *)(result + 8LL * v35);
        if ( v37 )
        {
          v38 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD))(*(_QWORD *)v37 + 40LL))(v37, &v49, *a2);
          ++v35;
          if ( !v38 )
            goto LABEL_41;
          v39 = v50;
          if ( !v50 )
            goto LABEL_40;
          goto LABEL_46;
        }
        ++v35;
      }
    }
    v39 = v50;
    if ( !v50 )
      break;
    v38 = 0;
LABEL_46:
    result = *((unsigned int *)v39 - 1);
    v40 = &v39[result];
    if ( v39 >= v40 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v41 = *v39;
        if ( *v39 )
        {
          v42 = v49.m128i_i64[1];
          v11 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v39 >= v40 )
          goto LABEL_52;
      }
      result = sub_15D7BC0(v42, v41);
      ++v39;
    }
    while ( v39 < v40 );
LABEL_52:
    v39 = v50;
    if ( v50 )
LABEL_53:
      result = sub_186B220(v39 - 1);
  }
  while ( v38 );
  return result;
}

