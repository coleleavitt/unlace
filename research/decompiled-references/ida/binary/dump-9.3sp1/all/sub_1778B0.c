__int64 __fastcall sub_1778B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, int a7)
{
  bool v9; // zf
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r14
  _BYTE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  bool v27; // dl
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v39; // [rsp+8h] [rbp-140h]
  __int64 v40; // [rsp+10h] [rbp-138h]
  __int64 v41; // [rsp+10h] [rbp-138h]
  __int64 v42; // [rsp+10h] [rbp-138h]
  __int64 v43; // [rsp+18h] [rbp-130h]
  __m128i v44; // [rsp+20h] [rbp-128h] BYREF
  __m128 v45; // [rsp+30h] [rbp-118h] BYREF
  __m128 v46; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v47[2]; // [rsp+50h] [rbp-F8h] BYREF
  __m128 v48; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+78h] [rbp-D0h]
  void *v51; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v52; // [rsp+98h] [rbp-B0h] BYREF
  __m128i v53; // [rsp+A8h] [rbp-A0h]
  __int64 (__fastcall **v54)(); // [rsp+C0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-80h]
  __int64 v56; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v57; // [rsp+D8h] [rbp-70h] BYREF
  char v58; // [rsp+E8h] [rbp-60h]
  __int64 v59; // [rsp+F0h] [rbp-58h]
  __m128 *v60; // [rsp+F8h] [rbp-50h]
  int v61; // [rsp+100h] [rbp-48h]
  bool v62; // [rsp+104h] [rbp-44h]
  unsigned __int64 v63; // [rsp+108h] [rbp-40h]

  v9 = a2[3] == 0;
  v63 = __readfsqword(0x28u);
  if ( v9 )
    goto LABEL_13;
  v11 = *(_QWORD *)(a1 + 64);
  v51 = nullptr;
  v52 = 0;
  v12 = *(_QWORD *)(v11 + 240);
  if ( v12 )
  {
    v41 = v11;
    *((_QWORD *)&v52 + 1) = *(_QWORD *)(v11 + 240);
    v51 = (void *)qalloc_or_throw(16 * v12, (__int64)a2, v11, a4);
    memcpy(v51, *(const void **)(v41 + 232), 16 * v12);
    *(_QWORD *)&v52 = v12;
  }
  if ( *(_DWORD *)(a1 + 72) == a7 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    v43 = *(_QWORD *)(v40 + 1440);
    v19 = a3;
    if ( !a3 )
    {
LABEL_44:
      if ( *(_DWORD *)(a1 + 76) == 3 )
      {
        if ( *(_DWORD *)(a1 + 376) != 1 )
        {
          if ( !under_debugger )
            sub_383060(51773);
          BUG();
        }
        v25 = *(_DWORD **)(a1 + 368);
        v44.m128i_i32[0] = *(_DWORD *)(v40 + 64);
        if ( *v25 == v44.m128i_i32[0] - 1 )
        {
          v48 = _mm_loadh_ps((const double *)(v40 + 136));
          sub_317BD0(&v51, &v48);
        }
      }
LABEL_34:
      v46 = _mm_loadh_ps((const double *)(a1 + 328));
      sub_317BD0(&v51, &v46);
      if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
      {
        v45 = _mm_loadh_ps((const double *)(a1 + 520));
        sub_317BD0(&v51, &v45);
      }
      v21 = *(_QWORD *)(a1 + 336);
      v22 = *(_QWORD *)(v40 + 168);
      if ( v21 > v22 )
      {
        v55 = v21 - v22;
        v54 = (__int64 (__fastcall **)())(v22 + v43);
        sub_317BD0(&v51, &v54);
      }
      goto LABEL_5;
    }
    while ( 1 )
    {
      v20 = sub_120380((_BYTE *)v19, 0);
      if ( v20 )
      {
        if ( v20[64] != 8 )
          goto LABEL_30;
        v23 = *((_QWORD *)v20 + 9);
        v24 = *(_QWORD *)(sub_1CFD00(v40, *(int *)(v23 + 16)) + 8);
        v47[1] = *(int *)(v23 + 16) - v24;
        v47[0] = v43 + v24;
        sub_317BD0(&v51, v47);
        v19 = *(_QWORD *)(v19 + 8);
        if ( !v19 )
          goto LABEL_44;
      }
      else
      {
        if ( a5 == v19 )
        {
          if ( *(_DWORD *)a5 == 1 )
            goto LABEL_34;
          v55 = 0;
          v56 = 0;
          v57 = 0u;
          v54 = &off_4DDED8;
          if ( (unsigned int)sub_11F760((_BYTE *)a5, &v54) )
            goto LABEL_34;
        }
        else if ( (unsigned __int8)sub_11EC90((_BYTE *)v19) )
        {
          goto LABEL_34;
        }
LABEL_30:
        v19 = *(_QWORD *)(v19 + 8);
        if ( !v19 )
          goto LABEL_44;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int8)sub_318470(a2 + 2, &v51) )
  {
    if ( a5 )
    {
      sub_124680((__int64)&v54, a1, a5, 0x2001u);
      sub_3180C0(&v51, &v56);
      if ( !(unsigned __int8)sub_318470(a2 + 2, &v51) )
      {
        if ( v56 )
        {
          v57.m128i_i64[0] = 0;
          qfree(v56);
        }
        qfree((__int64)v54);
        goto LABEL_11;
      }
      if ( v56 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v56);
      }
      qfree((__int64)v54);
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree((__int64)v51);
    }
    return 0;
  }
LABEL_11:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree((__int64)v51);
  }
LABEL_13:
  v13 = sub_A9D90(a1, a2, a3, a4, 0x2001u);
  if ( a5 && a5 != v13 )
    return 0;
  if ( v13 )
  {
    v15 = sub_A9D90(a1, a2, *(_QWORD *)(v13 + 8), a4, 0x2001u);
    if ( v15 )
    {
      if ( !a5 || !*(_BYTE *)(a5 + 64) )
        return 0;
      v39 = *(_QWORD *)(a5 + 8);
      sub_124680((__int64)&v48, a1, a5, 1u);
      v51 = nullptr;
      v52 = 0u;
      v53 = 0;
      while ( 1 )
      {
        v44.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (unsigned __int8)sub_1205A0((_BYTE *)a5, v44.m128i_i64[0], 0, v16, v17, v18) )
          goto LABEL_22;
        if ( sub_11DC70((int *)a5) || (v26 = sub_11E0C0(a5), v27 = 0, v26) )
          v27 = sub_1201A0((_BYTE *)v15, v44.m128i_i64[0]);
        v9 = *(_DWORD *)a5 == 8;
        v55 = 0;
        v54 = &off_4DDE68;
        v57 = 0u;
        v58 = 0;
        v59 = a5;
        v60 = &v48;
        v61 = 0;
        v62 = v27;
        v56 = a1;
        if ( v9
          || !sub_125B90((unsigned __int8 *)a5, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int *)v15, 0)
          || *(_DWORD *)(v59 + 68) != *(_DWORD *)(v15 + 68) )
        {
          v61 = 0;
          if ( (unsigned int)sub_11E900((_BYTE *)v15, (__int64)&v54) || v61 <= 0 )
          {
LABEL_22:
            if ( *((_QWORD *)&v52 + 1) )
            {
              v53.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v52 + 1));
            }
            qfree((__int64)v51);
            if ( v49 )
            {
              v50 = 0;
              qfree(v49);
            }
            qfree(v48.m128_i64[0]);
            return 0;
          }
        }
        if ( (unsigned __int8)sub_64880(&v51) && !v53.m128i_i64[0] )
        {
          sub_127A20((__int64)&v54, a1, a5, 0, v28, v29);
          sub_648D0((__int64 *)&v51, (__int64 *)&v54);
          v30 = v56;
          v56 = 0;
          v31 = _mm_loadu_si128(&v57);
          v57 = 0;
          if ( *((_QWORD *)&v52 + 1) )
          {
            v42 = v30;
            v44 = v31;
            v53.m128i_i64[0] = 0;
            qfree(*((__int64 *)&v52 + 1));
            v32 = _mm_load_si128(&v44);
            *((_QWORD *)&v52 + 1) = v42;
            v53 = v32;
            if ( v56 )
            {
              v57.m128i_i64[0] = 0;
              qfree(v56);
            }
          }
          else
          {
            *((_QWORD *)&v52 + 1) = v30;
            v53 = v31;
          }
          qfree((__int64)v54);
          if ( (unsigned __int8)sub_64780(&v51, &v48) )
            goto LABEL_22;
          v44.m128i_i64[0] = (__int64)&v49;
          if ( (unsigned __int8)sub_318470((char *)&v52 + 8, &v49) )
            goto LABEL_22;
          sub_64280((__int64 *)&v51, (__int64 *)&v48);
          sub_316CB0((char *)&v52 + 8, v44.m128i_i64[0]);
        }
        if ( sub_A9AA0(a1, &v51, v39, v15, 0x2001u) )
          goto LABEL_22;
        v33 = a6[1];
        v34 = *a6;
        if ( a6[2] < (unsigned __int64)(v33 + 1) )
        {
          v36 = qvector_reserve((__int64)a6, v34, v33 + 1, 8);
          *a6 = v36;
          v34 = v36;
          v33 = a6[1];
        }
        *(_QWORD *)(v34 + 8 * v33) = v15;
        ++a6[1];
        v35 = sub_A9D90(a1, a2, *(_QWORD *)(v15 + 8), a4, 0x2001u);
        v39 = v15;
        if ( !v35 )
          break;
        v15 = v35;
      }
      if ( *((_QWORD *)&v52 + 1) )
      {
        v53.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v52 + 1));
      }
      qfree((__int64)v51);
      if ( v49 )
      {
        v50 = 0;
        qfree(v49);
      }
      qfree(v48.m128_i64[0]);
    }
  }
  return 1;
}
