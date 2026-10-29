__int64 __fastcall sub_827320(__int64 a1, _QWORD *a2, __int64 a3, int *a4)
{
  unsigned int v5; // r13d
  __int64 (__fastcall *v6)(__int64, unsigned int); // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rdx
  void (__fastcall *v10)(_DWORD *, __int64); // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int *v14; // r12
  __int64 v15; // r14
  int v16; // edx
  void (__fastcall *v17)(__m128i *); // rax
  unsigned int v18; // ecx
  __m128i *v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r15d
  unsigned int v26; // r13d
  unsigned int v27; // r12d
  __int64 v28; // r8
  int *v29; // r14
  __int64 (__fastcall *v30)(__int64, unsigned int); // r11
  unsigned int v31; // esi
  int v32; // eax
  __int64 (__fastcall *v33)(__int64, unsigned int, unsigned int); // rax
  int v34; // edx
  __int64 v35; // rax
  __int64 (__fastcall *v36)(__int64, unsigned int); // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  int v41; // edx
  void (__fastcall *v42)(_DWORD *, __int64); // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  int *v46; // r12
  int v47; // edx
  unsigned int v48; // r12d
  int *v49; // r14
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // r12d
  unsigned int *v55; // r14
  __int64 (__fastcall *v56)(__int64, unsigned int); // rdx
  __int64 v57; // rsi
  unsigned int v58; // edx
  unsigned int v59; // eax
  __int64 (__fastcall *v60)(__int64, unsigned int, unsigned int); // rax
  unsigned int v61; // edx
  unsigned int v62; // eax
  __int64 (__fastcall *v63)(__int64, unsigned int); // r11
  unsigned int *v64; // r12
  __int64 v65; // rdx
  int v66; // r13d
  int v67; // eax
  void (__fastcall *v68)(_DWORD *, __int64); // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rax
  int *v72; // r14
  __int64 v73; // r12
  int v74; // edx
  int v75; // eax
  int *v76; // r12
  __int64 v77; // rdx
  int *v78; // [rsp+0h] [rbp-58h]
  int *v79; // [rsp+0h] [rbp-58h]
  int v80; // [rsp+0h] [rbp-58h]
  unsigned int v81; // [rsp+0h] [rbp-58h]
  unsigned int v82; // [rsp+0h] [rbp-58h]
  unsigned int v83; // [rsp+0h] [rbp-58h]
  unsigned int v84; // [rsp+0h] [rbp-58h]
  unsigned int v85; // [rsp+8h] [rbp-50h]
  int v86; // [rsp+8h] [rbp-50h]
  int *v87; // [rsp+8h] [rbp-50h]
  __int64 v88; // [rsp+8h] [rbp-50h]
  unsigned int v89; // [rsp+8h] [rbp-50h]
  __int64 v90; // [rsp+8h] [rbp-50h]
  __int64 (__fastcall *v91)(__int64, unsigned int); // [rsp+10h] [rbp-48h]
  __int64 (__fastcall *v92)(__int64, unsigned int); // [rsp+10h] [rbp-48h]
  __int64 (__fastcall *v93)(__int64, unsigned int); // [rsp+10h] [rbp-48h]
  __int64 v94; // [rsp+10h] [rbp-48h]
  __int64 v95; // [rsp+18h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 == -2 )
    goto LABEL_29;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
  if ( v6 == sub_7C5630 )
  {
    v7 = a2[10];
    if ( v7 )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v7 + 880) + 4LL * (v5 >> 1));
      if ( v8 < *(_DWORD *)(v7 + 888) || (((unsigned __int8)v5 ^ (unsigned __int8)v8) & 1) == 0 )
        goto LABEL_26;
      goto LABEL_6;
    }
    v67 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4LL * v5);
  }
  else
  {
    v67 = v6((__int64)a2, v5);
  }
  if ( v67 != -1 )
    goto LABEL_26;
LABEL_6:
  v9 = *(_QWORD *)a1;
  v10 = *(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v10 != sub_826A70 )
  {
    v10((_DWORD *)a1, (__int64)a2);
LABEL_13:
    v9 = *(_QWORD *)a1;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(a1 + 20) != -2 || *(_DWORD *)(a1 + 16) == -2 )
  {
    v11 = *(_DWORD *)(a1 + 60);
    v12 = *(unsigned int *)(a1 + 32);
    *(_DWORD *)(a1 + 20) = -2;
    v13 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v13 > (unsigned int)v12 )
      v13 = v12;
    if ( (_DWORD)v13 )
    {
      v14 = (int *)(a1 + 64);
      v15 = a1 + 64 + 4 * v13;
      do
      {
        v16 = *v14++;
        sub_7E4390(a1, (__int64)a2, v16);
      }
      while ( (int *)v15 != v14 );
      goto LABEL_13;
    }
  }
LABEL_14:
  v17 = *(void (__fastcall **)(__m128i *))(v9 + 104);
  if ( v17 == sub_8268C0 )
  {
    v18 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 16) ^= 1u;
    if ( v18 )
    {
      if ( v18 - 1 <= 2 )
      {
        v22 = 0;
        goto LABEL_20;
      }
      v19 = (__m128i *)a1;
      v20 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      do
      {
        v21 = _mm_loadu_si128(v19 + 4);
        ++v19;
        v19[3] = _mm_xor_si128(v21, v20);
      }
      while ( (__m128i *)(a1 + 16LL * (v18 >> 2)) != v19 );
      v22 = v18 & 0xFFFFFFFC;
      if ( (v18 & 3) != 0 )
      {
LABEL_20:
        *(_DWORD *)(a1 + 4LL * v22 + 64) ^= 1u;
        v23 = v22 + 1;
        if ( (unsigned int)v23 < v18 )
        {
          v24 = v22 + 2;
          *(_DWORD *)(a1 + 4 * v23 + 64) ^= 1u;
          if ( (unsigned int)v24 < v18 )
            *(_DWORD *)(a1 + 4 * v24 + 64) ^= 1u;
        }
      }
    }
    a4 = (int *)(v18 + 1 - *(_DWORD *)(a1 + 60));
    *(_DWORD *)(a1 + 60) = (_DWORD)a4;
    goto LABEL_24;
  }
  v17((__m128i *)a1);
LABEL_24:
  if ( v5 != -1 )
  {
    v5 ^= 1u;
LABEL_26:
    if ( !(unsigned __int8)sub_7E4330(a1, (__int64)a2, v5) )
      sub_7E4540(a1, (__int64)a2, v5);
    if ( !*(_BYTE *)(a1 + 56) )
    {
      v66 = v5 ^ 1;
      if ( !(unsigned __int8)sub_7E4330(a1, (__int64)a2, v66) )
        sub_7E4540(a1, (__int64)a2, v66);
    }
  }
LABEL_29:
  v25 = *(_DWORD *)(a1 + 32);
  v26 = *(_DWORD *)(a1 + 60);
  if ( v25 == v26 )
  {
    v64 = (unsigned int *)(a1 + 64);
    if ( 4LL * v25 )
    {
      do
      {
        v65 = *v64++;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a2 + 104LL))(a2, a1, v65);
      }
      while ( (unsigned int *)(a1 + 64 + 4LL * v25) != v64 );
    }
    return 0;
  }
  if ( !v25 )
  {
    if ( !v26 )
      return 0;
    v75 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 20) != v75 || v75 == -2 )
    {
      v54 = *(_DWORD *)(a1 + 64);
      v53 = *a2;
LABEL_82:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v53 + 112))(a2, a1, v54);
      return 0;
    }
    v28 = 0;
LABEL_96:
    v68 = *(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 16LL);
    if ( v68 == sub_826A70 )
    {
      v69 = *(_DWORD *)(a1 + 60);
      v70 = *(unsigned int *)(a1 + 32);
      *(_DWORD *)(a1 + 20) = -2;
      v71 = (unsigned int)(v69 + 1);
      if ( (unsigned int)v71 > (unsigned int)v70 )
        v71 = v70;
      if ( (_DWORD)v71 )
      {
        v72 = (int *)(a1 + 64);
        v73 = a1 + 64 + 4 * v71;
        do
        {
          v74 = *v72++;
          v83 = v28;
          sub_7E4390(a1, (__int64)a2, v74);
          v28 = v83;
        }
        while ( (int *)v73 != v72 );
      }
    }
    else
    {
      v84 = v28;
      ((void (__fastcall *)(__int64, _QWORD *, void (__fastcall *)(_DWORD *, __int64), int *))v68)(
        a1,
        a2,
        sub_826A70,
        a4);
      v28 = v84;
    }
LABEL_70:
    v52 = (unsigned int)v28;
    v53 = *a2;
    v54 = *(_DWORD *)(a1 + 4LL * (unsigned int)v28 + 64);
    if ( v26 < v25 )
    {
      v55 = (unsigned int *)(a1 + 4LL * v26 + 64);
      while ( 1 )
      {
        while ( 1 )
        {
          v56 = *(__int64 (__fastcall **)(__int64, unsigned int))(v53 + 40);
          if ( v56 == sub_7C56B0 )
            break;
          v88 = v52;
          v81 = v28;
          v62 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(__int64, unsigned int), __int64, __int64, __int64 (__fastcall *)(__int64, unsigned int)))v56)(
                  a2,
                  v54,
                  v56,
                  v52,
                  v28,
                  sub_7C56B0);
          v28 = v81;
          v52 = v88;
          v58 = v62;
          v53 = *a2;
          v63 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 40LL);
          if ( v63 != sub_7C56B0 )
          {
            v94 = v88;
            v89 = v58;
            v59 = v63((__int64)a2, *v55);
            v52 = v94;
            v58 = v89;
            v28 = v81;
            goto LABEL_77;
          }
          if ( !a2[10] )
          {
            v57 = *(a2 - 7);
            goto LABEL_76;
          }
LABEL_72:
          ++v26;
          ++v55;
          if ( v25 == v26 )
            goto LABEL_82;
        }
        if ( a2[10] )
          goto LABEL_72;
        v57 = *(a2 - 7);
        v58 = *(_DWORD *)(*(_QWORD *)(v57 + 3296) + 24LL * (v54 >> 1));
LABEL_76:
        v59 = *(_DWORD *)(*(_QWORD *)(v57 + 3296) + 24LL * (*v55 >> 1));
LABEL_77:
        if ( v58 < v59 )
        {
          v60 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int))(*(_QWORD *)a1 + 80LL);
          if ( v60 == sub_7C5540 )
          {
            v61 = *v55;
            *v55 = *(_DWORD *)(a1 + 4 * (v52 + 16));
            *(_DWORD *)(a1 + 4 * (v52 + 16)) = v61;
          }
          else
          {
            v90 = v52;
            v82 = v28;
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64, unsigned int)))v60)(
              a1,
              v26,
              (unsigned int)v28,
              v52,
              v28,
              sub_7C56B0);
            v52 = v90;
            v28 = v82;
          }
          v54 = *(_DWORD *)(a1 + 4 * v52 + 64);
        }
        ++v26;
        v53 = *a2;
        ++v55;
        if ( v25 == v26 )
          goto LABEL_82;
      }
    }
    goto LABEL_82;
  }
  v27 = 0;
  v28 = 0;
  v95 = a1 + 64;
  a4 = (int *)(a1 + 64);
  v29 = (int *)(a1 + 64);
  v30 = sub_7C5630;
  do
  {
    while ( 1 )
    {
      v36 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a2 + 24LL);
      if ( v36 != v30 )
        break;
      v37 = a2[10];
      v38 = (unsigned int)*a4;
      if ( !v37 )
      {
        v39 = *(_DWORD *)(*(_QWORD *)(*(a2 - 7) + 3288LL) + 4 * v38);
        goto LABEL_44;
      }
      v31 = *(_DWORD *)(*(_QWORD *)(v37 + 880) + 4LL * ((unsigned int)v38 >> 1));
      if ( v31 < *(_DWORD *)(v37 + 888) || (((unsigned __int8)v38 ^ (unsigned __int8)v31) & 1) == 0 )
      {
LABEL_34:
        if ( v27 != (_DWORD)v28 )
        {
          v32 = *(_DWORD *)(a1 + 16);
          if ( *(_DWORD *)(a1 + 20) == v32 && v32 != -2 && v26 >= (unsigned int)v28 && v26 < v27 )
          {
            v92 = v30;
            v86 = v28;
            v79 = a4;
            sub_7E4390(a1, (__int64)a2, *(_DWORD *)(a1 + 4LL * (unsigned int)v28 + 64));
            sub_7E4540(a1, (__int64)a2, *v79);
            v30 = v92;
            LODWORD(v28) = v86;
            a4 = v79;
          }
          v33 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int))(*(_QWORD *)a1 + 80LL);
          if ( v33 == sub_7C5540 )
          {
            v34 = *a4;
            v35 = (unsigned int)v28 + 16LL;
            *a4 = *(_DWORD *)(a1 + 4 * v35);
            *(_DWORD *)(a1 + 4 * v35) = v34;
          }
          else
          {
            v93 = v30;
            v87 = a4;
            v80 = v28;
            v33(a1, v27, v28);
            v30 = v93;
            a4 = v87;
            LODWORD(v28) = v80;
          }
        }
        v28 = (unsigned int)(v28 + 1);
      }
      ++v27;
      ++a4;
      if ( v25 == v27 )
        goto LABEL_46;
    }
    v91 = v30;
    v85 = v28;
    v78 = a4;
    v39 = v36((__int64)a2, *a4);
    v30 = v91;
    v28 = v85;
    a4 = v78;
LABEL_44:
    if ( v39 != -1 )
      goto LABEL_34;
    ++v27;
    ++a4;
  }
  while ( v25 != v27 );
LABEL_46:
  if ( (unsigned int)v28 < v26 )
  {
    v51 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 20) != v51 || v51 == -2 )
      goto LABEL_70;
    goto LABEL_96;
  }
  if ( (_DWORD)v28 == v26 )
  {
    if ( (_DWORD)v28 )
    {
      v76 = (int *)(v95 + 4 * v28);
      do
      {
        v77 = (unsigned int)*v29++;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, int *))(*a2 + 104LL))(a2, a1, v77, a4);
      }
      while ( v76 != v29 );
    }
    return 0;
  }
  v40 = *(_DWORD *)(a1 + 20);
  v41 = *(_DWORD *)(a1 + 16);
  if ( v40 == v41 )
  {
    if ( v40 != -2 )
      return 1;
    v42 = *(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 16LL);
    if ( v42 == sub_826A70 )
      goto LABEL_52;
LABEL_106:
    v42((_DWORD *)a1, (__int64)a2);
    goto LABEL_57;
  }
  v42 = *(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v42 != sub_826A70 )
    goto LABEL_106;
  if ( v40 != -2 || v41 == -2 )
  {
LABEL_52:
    v43 = *(_DWORD *)(a1 + 60);
    v44 = *(unsigned int *)(a1 + 32);
    *(_DWORD *)(a1 + 20) = -2;
    v45 = (unsigned int)(v43 + 1);
    if ( (unsigned int)v45 > (unsigned int)v44 )
      v45 = v44;
    if ( (_DWORD)v45 )
    {
      v46 = (int *)(v95 + 4 * v45);
      do
      {
        v47 = *v29++;
        sub_7E4390(a1, (__int64)a2, v47);
      }
      while ( v46 != v29 );
    }
  }
LABEL_57:
  v48 = 0;
  do
  {
    while ( 1 )
    {
      v49 = (int *)(a1 + 4LL * v48 + 64);
      if ( !(unsigned __int8)sub_7E4330(a1, (__int64)a2, *v49) )
        break;
      if ( v26 < ++v48 )
        goto LABEL_61;
    }
    ++v48;
    sub_7E4540(a1, (__int64)a2, *v49);
  }
  while ( v26 >= v48 );
LABEL_61:
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
  return 1;
}

