unsigned __int64 __fastcall sub_470AC0(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  char *v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  char *v9; // rax
  void *v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rbp
  __m128i si128; // xmm1
  _QWORD *v22; // rbx
  __int64 *v23; // rbp
  unsigned int v24; // r15d
  int v25; // r12d
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 *v32; // rbp
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  void *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+0h] [rbp-C8h]
  __int64 *v46; // [rsp+8h] [rbp-C0h]
  int *v47; // [rsp+10h] [rbp-B8h]
  int v48[2]; // [rsp+18h] [rbp-B0h]
  int v49[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v50[2]; // [rsp+30h] [rbp-98h] BYREF
  int v51[4]; // [rsp+38h] [rbp-90h]
  int v52[2]; // [rsp+48h] [rbp-80h]
  int v53; // [rsp+50h] [rbp-78h]
  int v54; // [rsp+58h] [rbp-70h]
  int v55[2]; // [rsp+60h] [rbp-68h] BYREF
  int v56[2]; // [rsp+68h] [rbp-60h]
  int v57[4]; // [rsp+70h] [rbp-58h]
  int v58; // [rsp+80h] [rbp-48h]
  int v59[2]; // [rsp+88h] [rbp-40h]
  int v60; // [rsp+90h] [rbp-38h]
  void *v61; // [rsp+98h] [rbp-30h]
  __int64 v62; // [rsp+A0h] [rbp-28h]
  int v63; // [rsp+A8h] [rbp-20h]
  int v64; // [rsp+B0h] [rbp-18h]
  int v65; // [rsp+B8h] [rbp-10h]
  __int64 v66; // [rsp+C0h] [rbp-8h]

  v4 = a1[1];
  v46 = a2;
  *(_QWORD *)v59 = __readfsqword(0x28u);
  v6 = (char *)a1[22];
  *(_QWORD *)v48 = v4;
  if ( v6 )
  {
    v7 = a1[23];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = &v6[40 * i];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)a1[22];
        }
      }
    }
    a1[23] = 0;
    qfree(v6);
    a1[22] = 0;
    a1[24] = 0;
  }
  v11 = a1[23];
  v45 = a3;
  if ( a3 != v11 )
  {
    v53 = -1;
    *(_QWORD *)v50 = 0;
    *(_QWORD *)v52 = 0;
    *(_OWORD *)v51 = 0;
    if ( a3 < v11 )
    {
      v38 = a3;
      do
      {
        v39 = a1[22] + 40 * v38;
        v40 = *(void **)v39;
        if ( *(_QWORD *)v39 )
        {
          *(_QWORD *)(v39 + 8) = 0;
          qfree(v40);
        }
        ++v38;
      }
      while ( v38 < v11 );
      a1[23] = a3;
    }
    else
    {
      v12 = a1[22];
      v13 = a1[24];
      v14 = a1 + 22;
      if ( (unsigned __int64)v50 < v12 || (unsigned __int64)v50 >= v12 + 40 * v13 )
      {
        if ( v13 < a3 )
        {
          v43 = qvector_reserve(v14, v12, a3, 40);
          v11 = a1[23];
          a1[22] = v43;
        }
        if ( v11 < a3 )
        {
          v15 = 40 * v11;
          do
          {
            ++v11;
            v16 = v15 + a1[22];
            v15 += 40;
            *(_QWORD *)v16 = 0;
            *(_QWORD *)(v16 + 24) = 0;
            *(_DWORD *)(v16 + 32) = -1;
            *(_OWORD *)(v16 + 8) = 0;
          }
          while ( a3 != v11 );
        }
      }
      else
      {
        if ( v13 < a3 )
        {
          v44 = qvector_reserve(v14, v12, a3, 40);
          v11 = a1[23];
          a1[22] = v44;
        }
        if ( v11 < a3 )
        {
          v41 = 40 * v11;
          do
          {
            ++v11;
            v42 = v41 + a1[22];
            v41 += 40;
            *(_QWORD *)v42 = 0;
            *(_QWORD *)(v42 + 24) = 0;
            *(_DWORD *)(v42 + 32) = -1;
            *(_OWORD *)(v42 + 8) = 0;
          }
          while ( a3 != v11 );
        }
      }
      a1[23] = a3;
    }
  }
  v17 = 0;
  v47 = v55;
  *(__m128i *)v49 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2B02420),
                      (__m128i)(unsigned __int64)sub_46B520);
  if ( a3 > 0 )
  {
    do
    {
      v18 = switch_dbctx(*(int *)(*(_QWORD *)v48 + 4 * v17 + 16));
      v19 = a1[22];
      *(_QWORD *)v56 = 0;
      v20 = *(__int64 **)(v18 + 1480);
      si128 = _mm_load_si128((const __m128i *)v49);
      v22 = (_QWORD *)(v19 + 40 * v17);
      *(_QWORD *)v55 = v22;
      *(__m128i *)v57 = si128;
      sub_46B550(v20, (__int64)v47);
      if ( *(_QWORD *)v57 )
        (*(void (__fastcall **)(int *, int *, __int64))v57)(v47, v47, 3);
      v23 = v20 + 194;
      v24 = 0;
      v25 = sub_4EC8E0(v23);
      if ( v25 > 0 )
      {
        do
        {
          v26 = sub_4EE890(v23, v24);
          if ( v26 )
            rangeset_t_sub(
              (int)v22,
              v26,
              v27,
              v28,
              v29,
              v30,
              v45,
              (int)v46,
              (int)v47,
              v48[0],
              v49[0],
              v49[2],
              v50[0],
              v51[0],
              v51[2],
              v52[0],
              v53,
              v54,
              v55[0],
              v56[0],
              v57[0],
              v57[2],
              v58,
              v59[0],
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66);
          ++v24;
        }
        while ( v24 != v25 );
      }
      if ( v46 )
      {
        if ( v45 != v46[1] )
          sub_46CE40(v46, v45);
        v32 = (__int64 *)(*v46 + 24 * v17);
        if ( v22[1] )
        {
          v33 = v32[1];
          v34 = 0;
          do
          {
            v35 = *v32;
            v36 = *(_QWORD *)(*v22 + 8LL * (int)v34);
            if ( v32[2] < (unsigned __int64)(v33 + 1) )
            {
              v37 = qvector_reserve(v32, v35, v33 + 1, 8);
              v33 = v32[1];
              *v32 = v37;
              v35 = v37;
            }
            *(_QWORD *)(v35 + 8 * v33) = v36;
            ++v34;
            v33 = v32[1] + 1;
            v32[1] = v33;
          }
          while ( v34 < v22[1] );
        }
      }
      ++v17;
    }
    while ( v45 != v17 );
  }
  return *(_QWORD *)v59 - __readfsqword(0x28u);
}

