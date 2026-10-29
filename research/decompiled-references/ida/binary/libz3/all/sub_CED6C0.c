void *__fastcall sub_CED6C0(const __m128i *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // r12
  _OWORD *v4; // rax
  __m128i *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  bool v9; // zf
  void *v10; // rcx
  __m128i si128; // xmm0
  unsigned int *v12; // rax
  void *v13; // rcx
  __int64 *v14; // rdi
  __int64 *v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 *v19; // r14
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 *v24; // rax
  void *result; // rax
  void *v26; // rbx
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  void *v28; // [rsp+10h] [rbp-48h]
  void *v29; // [rsp+18h] [rbp-40h]

  v1 = sub_186B270(0x20u);
  v2 = a1[3].m128i_i64[0];
  v3 = v1;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v3 + 24) = v2;
  *(_QWORD *)v3 = v4;
  *(_QWORD *)(v3 + 8) = 8;
  *(_DWORD *)(v3 + 16) = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (__m128i *)sub_186B270(0x10u);
  *v5 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 3), (__m128i)(unsigned __int64)v3);
  v6 = sub_186B270(0x228u);
  v7 = a1[3].m128i_i64[0];
  v8 = v6;
  v9 = *(_DWORD *)(v7 + 712) == 0;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v3);
  sub_CED450(v6, v7, !v9, v6 + 536);
  v10 = (void *)a1[1].m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)ptr);
  *(_QWORD *)v8 = &off_1C59CB8;
  v12 = (unsigned int *)a1[2].m128i_i64[0];
  v29 = v10;
  v13 = (void *)a1[1].m128i_i64[1];
  ptr[0] = v12;
  a1[2].m128i_i64[0] = v3;
  a1[1].m128i_i64[0] = (__int64)v5;
  v28 = v13;
  a1[1].m128i_i64[1] = v8;
  *(__m128i *)(v8 + 536) = si128;
  if ( v12 )
  {
    v14 = *(__int64 **)v12;
    v15 = *(__int64 **)v12;
    v16 = *(_QWORD *)v12 + 16LL * v12[2];
    if ( *(_QWORD *)v12 != v16 )
    {
      while ( (unsigned __int64)*v15 <= 1 )
      {
        v15 += 2;
        if ( (__int64 *)v16 == v15 )
          goto LABEL_32;
      }
      if ( (__int64 *)v16 != v15 )
      {
        v17 = *v15;
        while ( 1 )
        {
          v18 = v15[1];
          v19 = *(__int64 **)v18;
          v20 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
          v21 = *((_QWORD *)ptr[0] + 3);
          if ( *(_QWORD *)v18 != v20 )
          {
            while ( (unsigned __int64)*v19 <= 1 )
            {
              if ( (__int64 *)v20 == ++v19 )
                goto LABEL_21;
            }
            if ( (__int64 *)v20 != v19 )
              break;
          }
LABEL_21:
          if ( v17 )
          {
            v9 = (*(_DWORD *)(v17 + 8))-- == 1;
            if ( v9 )
              sub_15D7BC0(v21, v17);
          }
          if ( *(_QWORD *)v18 )
            sub_186B220(*(void **)v18);
          sub_186B220((void *)v18);
          v24 = v15 + 2;
          if ( (__int64 *)v16 != v15 + 2 )
          {
            while ( 1 )
            {
              v17 = *v24;
              v15 = v24;
              if ( (unsigned __int64)*v24 > 1 )
                break;
              v24 += 2;
              if ( (__int64 *)v16 == v24 )
                goto LABEL_31;
            }
            if ( (__int64 *)v16 != v24 )
              continue;
          }
LABEL_31:
          v14 = *(__int64 **)ptr[0];
          goto LABEL_32;
        }
        v22 = *v19;
        if ( *v19 )
        {
          while ( 1 )
          {
            v9 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( !v9 )
              break;
            sub_15D7BC0(v21, v22);
            v21 = *((_QWORD *)ptr[0] + 3);
            v23 = v19 + 1;
            if ( (__int64 *)v20 == v19 + 1 )
              goto LABEL_21;
LABEL_17:
            while ( 1 )
            {
              v22 = *v23;
              v19 = v23;
              if ( (unsigned __int64)*v23 > 1 )
                break;
              if ( (__int64 *)v20 == ++v23 )
                goto LABEL_21;
            }
            if ( (__int64 *)v20 == v23 )
              goto LABEL_21;
          }
        }
        v23 = v19 + 1;
        if ( (__int64 *)v20 == v19 + 1 )
          goto LABEL_21;
        goto LABEL_17;
      }
    }
LABEL_32:
    if ( v14 )
      sub_186B220(v14);
    sub_186B220(ptr[0]);
  }
  result = v29;
  if ( v29 )
    result = (void *)sub_186B220(v29);
  v26 = v28;
  if ( v28 )
  {
    (**(void (__fastcall ***)(void *))v28)(v28);
    return (void *)sub_186B220(v26);
  }
  return result;
}

