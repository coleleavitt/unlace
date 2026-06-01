__int64 __fastcall sub_7BE270(__int64 a1, unsigned __int8 *a2, double a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(_QWORD); // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64); // rdx
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  bool v22; // zf
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  int v28; // esi
  int v29; // eax
  __int64 result; // rax
  int v31; // eax
  const char *v32; // rdx
  __int64 (__fastcall *v33)(__int64); // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 (__fastcall *v37)(_QWORD); // rdx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  unsigned int v41; // ecx
  unsigned int v42; // ebx
  unsigned int v43; // r12d
  int v44; // eax
  __int64 (__fastcall *v45)(__int64, __int64); // rax
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  __m128i v49; // xmm1
  __int64 v50; // rdi
  double v51; // xmm0_8
  __int64 v52; // rsi
  __int64 v53; // rbx
  int v54; // edx
  __int64 v55; // rbx
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned __int8 *v66; // rsi
  __int64 v67; // rdi
  __int64 (__fastcall *v68)(__int64); // rax
  int v69; // eax
  __int64 v70; // rbp
  __int64 v71; // rbp
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  unsigned int *v75; // r14
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // rdi
  __m128i v79; // xmm2
  double v80; // xmm0_8
  __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rbx
  int v84; // edx
  __int64 v85; // rbx
  __int64 v86; // rbx
  __int64 v87; // rbx
  __int64 v88; // rbx
  __int64 v89; // rdi
  __int64 v90; // rbx
  unsigned int v91; // [rsp+20h] [rbp-88h]
  __int64 v92; // [rsp+20h] [rbp-88h]
  int v93; // [rsp+28h] [rbp-80h]
  unsigned int v94; // [rsp+28h] [rbp-80h]
  unsigned int v95; // [rsp+28h] [rbp-80h]
  __int64 v96; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v97[2]; // [rsp+40h] [rbp-68h] BYREF
  int v98[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v99; // [rsp+60h] [rbp-48h]

  v5 = *((_DWORD *)a2 + 4);
  if ( v5 != -2 )
  {
    v6 = v5;
    v7 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
    if ( v7 == sub_7C55E0 )
    {
      v6 = v5;
      if ( (unsigned int)sub_7C55E0(a1) != -1 )
        goto LABEL_4;
LABEL_44:
      result = sub_180B130(a1);
      if ( (unsigned int)result > 1 )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v34 = sub_180B150(a1, v6);
          std::__ostream_insert<char,std::char_traits<char>>();
          v35 = sub_7E42B0(v34, a2);
          std::operator<<<std::char_traits<char>>();
          return sub_186A500(v35, "\n");
        }
        else
        {
          v82 = sub_180B150(a1, v6);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7E42B0(v82, a2);
          return std::operator<<<std::char_traits<char>>();
        }
      }
      return result;
    }
    if ( ((unsigned int (__fastcall *)(__int64, _QWORD))v7)(a1, v5) == -1 )
      goto LABEL_44;
    v36 = *((_DWORD *)a2 + 4);
    if ( v36 != -2 )
    {
      v6 = v36;
      v37 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
      if ( v37 != sub_7C55E0 )
      {
        v8 = ((__int64 (__fastcall *)(__int64, _QWORD))v37)(a1, v36);
LABEL_5:
        if ( v8 == 1 )
        {
          if ( (unsigned int)sub_180B130(a1) > 0x63 )
          {
            if ( (unsigned __int8)sub_186A530(a3) )
            {
              sub_186A4C0(a3);
              v70 = sub_180B150(a1, v6);
              std::__ostream_insert<char,std::char_traits<char>>();
              (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
                a2,
                v70,
                a1 + 80,
                1);
              sub_186A500(a2, v70);
            }
            else
            {
              v71 = sub_180B150(a1, v6);
              std::__ostream_insert<char,std::char_traits<char>>();
              (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
                a2,
                v71,
                a1 + 80,
                1);
            }
          }
          sub_7E4500(a2, a1 + 80);
          sub_7AFDF0((_QWORD *)a1, (__int64)a2);
        }
        goto LABEL_6;
      }
LABEL_4:
      v8 = sub_7C55E0(a1);
      goto LABEL_5;
    }
  }
LABEL_6:
  if ( !*((_DWORD *)a2 + 8) )
  {
    if ( *((_DWORD *)a2 + 15) != 1 )
    {
LABEL_34:
      if ( *((_DWORD *)a2 + 4) == -2 )
        return sub_7AFDF0((_QWORD *)a1, (__int64)a2);
      goto LABEL_35;
    }
    if ( *((_DWORD *)a2 + 4) != -2 )
    {
LABEL_35:
      v33 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 536LL);
      if ( v33 == sub_7C55E0 )
        result = sub_7C55E0(a1);
      else
        result = v33(a1);
      if ( (_DWORD)result != 1 )
        return result;
      return sub_7AFDF0((_QWORD *)a1, (__int64)a2);
    }
LABEL_68:
    (*(void (__fastcall **)(__int64 *, unsigned __int8 *))(*(_QWORD *)a2 + 72LL))(&v96, a2);
    v48 = a2[48];
    v49 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
    *(_QWORD *)&v98[2] = 0;
    v50 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)&v51 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v48 + 1), v49).m128i_u64[0];
    *(double *)v98 = v51;
    if ( v96 )
      v52 = *(unsigned int *)(v96 - 4);
    else
      v52 = 0;
    sub_11C4C20(v50, v52, v96, v98, v46, v47);
    if ( (unsigned int)sub_180B130(v50) > 0x63 )
    {
      if ( (unsigned __int8)sub_186A530(v51) )
      {
        sub_186A4C0(v51);
        v53 = sub_180B150(v50, v52);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v96 )
          v54 = *(_DWORD *)(v96 - 4);
        else
          v54 = 0;
        LODWORD(v97[0]) = v54;
        v97[1] = v96;
        v55 = sub_7C5E30(v53, v97);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
          a2,
          v55,
          a1 + 80,
          1);
        sub_186A500(a2, v55);
      }
      else
      {
        v83 = sub_180B150(v50, v52);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v96 )
          v84 = *(_DWORD *)(v96 - 4);
        else
          v84 = 0;
        v98[0] = v84;
        *(_QWORD *)&v98[2] = v96;
        v85 = sub_7C5E30(v83, v98);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
          a2,
          v85,
          a1 + 80,
          1);
      }
    }
    sub_7AFFA0(a1, a2, "implies clause", v51);
    result = v96;
    if ( v96 )
      return sub_186B220((void *)(v96 - 8));
    return result;
  }
  v93 = 0;
  v9 = 0;
  v10 = 0;
  v91 = 0;
  do
  {
    while ( 1 )
    {
      v12 = (__int64)a2;
      v14 = (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, v9);
      v15 = *(_QWORD *)(a1 + 24);
      v11 = v14;
      v16 = v14 >> 1;
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 3328) + v16) )
      {
        if ( !a2[48] )
        {
          sub_1872CE0("");
          sub_1873130(114, 91);
        }
        v32 = "contains eliminated";
        return sub_7AFFA0(a1, a2, v32, a3);
      }
      v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 536LL);
      if ( v17 == sub_7C55E0 )
      {
        v18 = *(_QWORD *)(a1 + 160);
        if ( v18 )
        {
          v19 = *(_DWORD *)(*(_QWORD *)(v18 + 880) + 4 * v16);
          if ( v19 < *(_DWORD *)(v18 + 888) )
            break;
          if ( (((unsigned __int8)v11 ^ (unsigned __int8)v19) & 1) != 0 )
          {
LABEL_24:
            ++v10;
            goto LABEL_10;
          }
          goto LABEL_9;
        }
        v31 = *(_DWORD *)(*(_QWORD *)(v15 + 3288) + 4 * v11);
      }
      else
      {
        v12 = a1;
        v31 = v17(a1);
      }
      if ( v31 == -1 )
        goto LABEL_24;
      if ( v31 != 1 )
        break;
LABEL_9:
      v11 = v9;
      v12 = (__int64)a2;
      v91 += (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, v9);
LABEL_10:
      v13 = *((_DWORD *)a2 + 8);
      if ( ++v9 >= v13 )
        goto LABEL_16;
    }
    v11 = v9;
    v12 = (__int64)a2;
    ++v9;
    v20 = (*(__int64 (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)a2 + 160LL))(a2, v11);
    v13 = *((_DWORD *)a2 + 8);
    v93 += v20;
  }
  while ( v9 < v13 );
LABEL_16:
  v21 = *((_DWORD *)a2 + 15);
  if ( v21 == 1 )
  {
    v11 = *((unsigned int *)a2 + 4);
    if ( (_DWORD)v11 != -2 )
    {
      if ( v91 | v10 )
        goto LABEL_18;
      goto LABEL_35;
    }
    goto LABEL_68;
  }
  if ( !(v91 | v10) )
    goto LABEL_34;
LABEL_18:
  if ( v91 >= v21 )
  {
    if ( (unsigned int)sub_180B130(v12) > 0x63 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v64 = sub_180B150(v12, v11);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
          a2,
          v64,
          a1 + 80,
          1);
        sub_186A500(a2, v64);
      }
      else
      {
        v86 = sub_180B150(v12, v11);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
          a2,
          v86,
          a1 + 80,
          1);
      }
    }
    v28 = *((_DWORD *)a2 + 4);
    if ( v28 != -2 )
    {
      v27 = *(_QWORD *)(a1 + 24);
LABEL_23:
      v29 = *(_DWORD *)(v27 + 3612);
      *(_QWORD *)&v98[2] = 0;
      LODWORD(v99) = 0;
      v98[0] = v29;
      return sub_7C5F00(v27, v28, v23, v24, v25, v26, (__int128)_mm_load_si128((const __m128i *)v98), v99);
    }
    v32 = "is true";
    return sub_7AFFA0(a1, a2, v32, a3);
  }
  v22 = v91 + v93 == v21;
  if ( v91 + v93 >= v21 )
  {
    v38 = *(_QWORD *)a2;
    if ( v22 )
    {
      (*(void (__fastcall **)(int *, unsigned __int8 *))(v38 + 72))(v98, a2);
      sub_7BDE30((_QWORD *)a1, *((_DWORD *)a2 + 4), (unsigned int **)v98, v56, v57, v58);
      sub_7AFFA0(a1, a2, "is tight", a3);
      result = *(_QWORD *)v98;
      if ( *(_QWORD *)v98 )
        return sub_186B220((void *)(*(_QWORD *)v98 - 8LL));
    }
    else
    {
      v94 = v13;
      v39 = (__int64)a2;
      v40 = a1 + 80;
      (*(void (__fastcall **)(unsigned __int8 *, __int64))(v38 + 16))(a2, a1 + 80);
      v41 = v94;
      if ( v94 )
      {
        v42 = 0;
        v43 = 0;
        do
        {
          v95 = v41;
          v40 = (*(unsigned int (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, v42);
          v45 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 536LL);
          v39 = a1;
          if ( (char *)v45 == (char *)sub_7C55E0 )
            v44 = sub_7C55E0(a1);
          else
            v44 = v45(a1, v40);
          v41 = v95;
          if ( !v44 )
          {
            if ( v43 != v42 )
            {
              v40 = v42;
              v39 = (__int64)a2;
              (*(void (__fastcall **)(unsigned __int8 *, _QWORD, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, v42, v43);
              v41 = v95;
            }
            ++v43;
          }
          ++v42;
        }
        while ( v41 != v42 );
      }
      else
      {
        v43 = 0;
      }
      if ( dword_1C7DF74 == *((_DWORD *)a2 + 13) )
      {
        v87 = sub_180B150(v39, v40);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
          a2,
          v87,
          a1 + 80,
          1);
      }
      v65 = *(_QWORD *)a2;
      if ( *((_DWORD *)a2 + 15) - v91 == 1 && *((_DWORD *)a2 + 4) == -2 )
      {
        (*(void (__fastcall **)(int *, unsigned __int8 *))(v65 + 72))(v98, a2);
        v74 = *(_QWORD *)v98;
        if ( v43 )
        {
          v75 = *(unsigned int **)v98;
          v76 = 0;
          v92 = *(_QWORD *)v98 + 4LL * v43;
          do
          {
            v97[0] = v76;
            sub_7B4F60(v97, v75++);
            v76 = v97[0];
          }
          while ( v75 != (unsigned int *)v92 );
          v74 = *(_QWORD *)v98;
        }
        else
        {
          v76 = 0;
        }
        if ( v74 )
          sub_186B220((void *)(v74 - 8));
        v77 = a2[48];
        v78 = *(_QWORD *)(a1 + 24);
        v79 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
        *(_QWORD *)&v98[2] = 0;
        *(_QWORD *)&v80 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v77 + 1), v79).m128i_u64[0];
        *(double *)v98 = v80;
        sub_11C4C20(v78, v43, v76, v98, v72, v73);
        result = sub_7AFFA0(a1, a2, "is clause", v80);
        if ( v76 )
          return sub_186B220((void *)(v76 - 8));
      }
      else
      {
        *((_DWORD *)a2 + 8) = v43;
        (*(void (__fastcall **)(unsigned __int8 *))(v65 + 152))(a2);
        v66 = (unsigned __int8 *)*((unsigned int *)a2 + 4);
        if ( (_DWORD)v66 == -2
          || ((v67 = a1, v68 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 536LL), v68 != sub_7C55E0)
            ? (v69 = v68(a1))
            : (v69 = sub_7C55E0(a1)),
              v69 == 1) )
        {
          v66 = a2;
          v67 = a1;
          sub_7AFDF0((_QWORD *)a1, (__int64)a2);
        }
        result = *((unsigned int *)a2 + 13);
        if ( dword_1C7DF74 == (_DWORD)result )
        {
          v88 = sub_180B150(v67, v66);
          std::__ostream_insert<char,std::char_traits<char>>();
          (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
            a2,
            v88,
            a1 + 80,
            1);
          sub_180B150(a2, v88);
          result = std::operator<<<std::char_traits<char>>();
        }
        dword_1C7DF74 = 11111111;
        *(_BYTE *)(a1 + 952) = 1;
      }
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 4) != -2 )
    {
      if ( (unsigned int)sub_180B130(v12) > 2 )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v81 = sub_180B150(v12, v11);
          std::__ostream_insert<char,std::char_traits<char>>();
          (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
            a2,
            v81,
            a1 + 80,
            1);
          sub_186A500(a2, v81);
        }
        else
        {
          v90 = sub_180B150(v12, v11);
          std::__ostream_insert<char,std::char_traits<char>>();
          (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(
            a2,
            v90,
            a1 + 80,
            1);
        }
      }
      v27 = *(_QWORD *)(a1 + 24);
      v28 = *((_DWORD *)a2 + 4) ^ 1;
      goto LABEL_23;
    }
    if ( (unsigned int)sub_180B130(v12) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v89 = sub_180B150(v12, v11);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v89, "unsat during simplification\n");
      }
      else
      {
        sub_180B150(v12, v11);
        std::operator<<<std::char_traits<char>>();
      }
    }
    v98[0] = 0;
    v63 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)&v98[2] = 0;
    LODWORD(v99) = 0;
    return sub_11B4C90(v63, -2, v59, v60, v61, v62, (__int128)_mm_load_si128((const __m128i *)v98), 0);
  }
  return result;
}

