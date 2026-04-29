__int64 __fastcall sub_2F3240(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // r15
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // r14
  _QWORD *v12; // r11
  _QWORD *v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // r12d
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __m128i v27; // xmm0
  int v28; // r10d
  __m128i v29; // xmm0
  int v30; // r10d
  __int64 v31; // r10
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // [rsp+0h] [rbp-130h]
  __int64 v37; // [rsp+10h] [rbp-120h]
  __int64 v38; // [rsp+10h] [rbp-120h]
  __int64 v39; // [rsp+18h] [rbp-118h]
  _QWORD v40[2]; // [rsp+38h] [rbp-F8h] BYREF
  char v41; // [rsp+48h] [rbp-E8h]
  __int64 v42; // [rsp+50h] [rbp-E0h]
  __m128i v43; // [rsp+58h] [rbp-D8h] BYREF
  __m128i v44; // [rsp+68h] [rbp-C8h] BYREF
  _QWORD v45[2]; // [rsp+78h] [rbp-B8h] BYREF
  _BYTE v46[48]; // [rsp+88h] [rbp-A8h] BYREF
  char v47; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-58h]
  __int64 v50; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v51; // [rsp+F0h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v2 = a1[22];
  v45[0] = a1[1];
  v3 = (__int64 *)v46;
  v45[1] = v2;
  v4 = (__int64 *)v46;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != &v48 );
  v48 = 0;
  v50 = 0;
  v49 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = a1[v5 + 19];
      if ( v7 )
      {
        switch_dbctx(*(int *)(v7 + 8));
        v8 = *(_QWORD *)(v7 + 80);
        v9 = *(_QWORD *)(v7 + 64);
        v41 = 109;
        v40[1] = v8;
        v40[0] = &off_4DB800;
        v42 = 0;
        v10 = (__int64 *)sub_2B67B0(v9, (__int64)v40, 0);
        v11 = v10;
        if ( v10 )
        {
          v12 = (_QWORD *)*v10;
          if ( *v10 )
          {
            if ( v10[1] )
            {
              v13 = (_QWORD *)v12[1];
              if ( v12 != v13 )
              {
                while ( 1 )
                {
                  v14 = v4[1];
                  v15 = v13 + 3;
                  if ( v4[2] < (unsigned __int64)(v14 + 1) )
                  {
                    v37 = v4[2];
                    v36 = v12;
                    v22 = qvector_reserve(v4, 0, v14 + 1, 64);
                    v23 = *v4;
                    v24 = v22;
                    v25 = v4[2];
                    v26 = v4[1] - 1;
                    v4[2] = v37;
                    if ( v26 >= 0 )
                    {
                      do
                      {
                        v27 = _mm_loadu_si128((const __m128i *)(v23 + 8));
                        v28 = *(_DWORD *)(v23 + 24);
                        v22 += 64;
                        v23 += 64;
                        *(__m128i *)(v22 - 56) = v27;
                        v29 = _mm_loadu_si128((const __m128i *)(v23 - 32));
                        *(_DWORD *)(v22 - 40) = v28;
                        v30 = *(_DWORD *)(v23 - 16);
                        *(__m128i *)(v22 - 32) = v29;
                        *(_DWORD *)(v22 - 16) = v30;
                        v31 = *(_QWORD *)(v23 - 8);
                        *(_QWORD *)(v22 - 64) = off_4DD348;
                        *(_QWORD *)(v22 - 8) = v31;
                      }
                      while ( v26-- != 0 );
                      v23 = *v4;
                    }
                    v39 = v25;
                    v38 = v24;
                    qfree(v23);
                    v14 = v4[1];
                    v15 = v13 + 3;
                    *v4 = v38;
                    v12 = v36;
                    v4[2] = v39;
                  }
                  v16 = *v4 + (v14 << 6);
                  ++v6;
                  *(_QWORD *)(v16 + 8) = -1;
                  *(_DWORD *)(v16 + 16) = -1;
                  *(_DWORD *)(v16 + 24) = 0;
                  *(_QWORD *)(v16 + 32) = -1;
                  *(_DWORD *)(v16 + 40) = -1;
                  *(_DWORD *)(v16 + 48) = -2;
                  *(_QWORD *)v16 = off_4DD348;
                  *(_QWORD *)(v16 + 56) = -1;
                  ++v4[1];
                  *(_QWORD *)(v16 + 8) = *v15;
                  *(_DWORD *)(v16 + 16) = *((_DWORD *)v15 + 2);
                  *(_DWORD *)(v16 + 24) = *((_DWORD *)v15 + 4);
                  if ( (*v13 & 2) != 0 )
                    goto LABEL_14;
                  v17 = (_QWORD *)v13[2];
                  if ( (*(_BYTE *)v17 & 2) != 0 )
                  {
                    v33 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
                    v34 = *v33;
                    if ( (*v33 & 2) == 0 )
                    {
                      while ( (_QWORD *)v33[2] == v13 )
                      {
                        v13 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                        v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v34 & 2) != 0 )
                          goto LABEL_14;
                        v35 = v33;
                        v33 = v13;
                        v13 = v35;
                      }
                    }
                    v13 = v33;
                    if ( v12 == v33 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v13 = v17;
                      v17 = (_QWORD *)v17[1];
                    }
                    while ( (*(_BYTE *)v17 & 2) == 0 );
LABEL_14:
                    if ( v12 == v13 )
                      break;
                  }
                }
              }
            }
          }
          sub_829E0(v11);
          qfree(v11);
        }
      }
      ++v5;
      v4 += 3;
    }
    while ( v5 < a1[22] );
    if ( v6 )
    {
      v44 = 0u;
      v43 = 0;
      if ( sub_2ADA40 )
      {
        v43.m128i_i64[0] = (__int64)sub_2ADA40;
        v44 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD458), (__m128i)(unsigned __int64)sub_2AD5E0);
      }
      sub_2F19A0(v45, &v43, 1);
      sub_66650((__int64)&v43);
      sub_2C6800(v45, a1 + 19, 1);
      v18 = 1;
    }
    else
    {
      v18 = 0;
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = (unsigned __int64 *)&v47;
  do
  {
    v20 = *v19;
    if ( *v19 )
    {
      v19[1] = 0;
      qfree(v20);
    }
    v19 -= 3;
  }
  while ( &v44.m128i_u64[1] != v19 );
  return v18;
}
