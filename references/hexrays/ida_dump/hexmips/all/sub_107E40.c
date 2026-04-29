__int64 __fastcall sub_107E40(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v5; // r12
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int8 v11; // al
  char v12; // r13
  char v13; // dl
  __int32 v14; // ecx
  __int64 v15; // rdx
  const __m128i *v16; // rax
  char v17; // al
  __m128i *v18; // r8
  char v20; // al
  __int64 v21; // rbp
  __int64 v22; // r12
  int v23; // r13d
  char v24; // al
  int v25; // ebp
  __int64 v26; // rbx
  int v27; // r12d
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // eax
  int v38; // r12d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  __int32 v48; // esi
  int v49; // r12d
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  char v64; // dl
  __int64 v65; // rax
  char v66; // al
  __int64 v67; // rdx
  __m128i *v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // r12
  __int64 v71; // rdx
  char v72; // al
  __m128i *v73; // rdi
  unsigned __int64 *v74; // rax
  _QWORD *v75; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v76; // [rsp+20h] [rbp-E8h]
  int v77; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v78[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v80; // [rsp+58h] [rbp-B0h]
  __int64 v81; // [rsp+70h] [rbp-98h] BYREF
  __int64 v82; // [rsp+78h] [rbp-90h]
  __int64 v83; // [rsp+80h] [rbp-88h] BYREF
  __int128 v84; // [rsp+88h] [rbp-80h]
  const __m128i *v85; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-60h]
  __int64 v87; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v89; // [rsp+C8h] [rbp-40h]

  v5 = &a1[3].m128i_i64[1];
  v89 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_60680(&a1[3].m128i_i64[1]) || (v11 = 0, a1[5].m128i_i64[0]) )
    v11 = a4 ^ a1[8].m128i_i8[4];
  a1[8].m128i_i8[5] = v11;
  v12 = *(_BYTE *)a2;
  v13 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 8 )
  {
    v28 = *(_QWORD *)(a2 + 8);
    v29 = a1->m128i_i64[1];
    v80 = 0;
    v78[0] = 0;
    v78[1] = 0;
    v79 = 0;
    sub_11A3D0(v28, (unsigned int)v78, v29, v8, v9, v10);
    sub_FFCF0(a1[3].m128i_i64[0], a1->m128i_i64[1], v78, a1[8].m128i_i32[0]);
    if ( !(unsigned __int8)sub_60680(v5) || a1[5].m128i_i64[0] )
    {
      v75 = (_QWORD *)(v28 + 96);
      sub_60440(v78, (__int64 *)(v28 + 96), v30, v31, v32, v33);
      sub_60500(v78, v5);
      sub_313340(&v79, &a1[4].m128i_u64[1]);
      sub_60440(v5, v78, v44, v45, v46, v47);
      sub_312EE0(&a1[4].m128i_u64[1], &v79);
      v48 = a1[7].m128i_i32[2];
      v49 = *(_DWORD *)(v28 + 12) % v48;
      if ( v49 )
      {
        v50 = *(_QWORD *)(v28 + 32);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v28 + 24);
          v52 = v51 + 80 * v50;
          if ( v51 != v52 )
          {
            while ( *(_DWORD *)(v51 + 56) != 1 )
            {
              v51 += 80;
              if ( v52 == v51 )
                goto LABEL_69;
            }
            v53 = *(_QWORD *)(v51 + 64) & -v48;
            if ( v53 != -1 )
            {
              v54 = *(int *)(v28 + 16);
              v55 = v53 + *(int *)(v28 + 12);
              if ( v55 >= v54 )
              {
                if ( !under_debugger )
                  sub_37E160(52577);
                BUG();
              }
              v56 = a1->m128i_i64[1];
              v57 = v54 - v55;
              v81 = 0;
              v82 = 0;
              v83 = 0;
              v84 = 0;
              v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v56 + 1440) + v55);
              v88 = 0;
              v59 = v58;
              v85 = nullptr;
              v86 = 0;
              v87 = 0;
              if ( v57 + v58 - 1 >= v58 )
              {
                v76 = v57;
                v87 = qvector_reserve(&v87, 0, 1, 16);
                v74 = (unsigned __int64 *)(16 * v88 + v87);
                *v74 = v59;
                v74[1] = v76;
                *(_QWORD *)&v88 = v88 + 1;
              }
              sub_60080(&v81, (__int64 *)&v85);
              sub_311F30(&v83, &v87);
              sub_8F940(&v85);
              sub_60500(&v81, v78);
              sub_313340(&v83, &v79);
              if ( !(unsigned __int8)sub_60680(&v81) || (_QWORD)v84 )
              {
                sub_107520(a1, (__int64)&v81, v49);
                sub_60440(v78, &v81, v60, v61, v62, v63);
                sub_312EE0(&v79, &v83);
              }
              sub_8F940(&v81);
            }
          }
        }
      }
LABEL_69:
      sub_107520(a1, (__int64)v78, 0);
    }
    else
    {
      v75 = (_QWORD *)(v28 + 96);
    }
    sub_FFCF0(a1[3].m128i_i64[0], a1->m128i_i64[1], v75, a1[8].m128i_i32[0]);
    v36 = a1[8].m128i_u32[0];
    if ( (v36 & 4) != 0 )
    {
      sub_FFC50(a1[3].m128i_i64[0], a1->m128i_i64[1], v28 + 216, v36, v34, v35);
      LODWORD(v36) = a1[8].m128i_i32[0];
    }
    sub_FFCF0(a1[3].m128i_i64[0], a1->m128i_i64[1], (_QWORD *)(v28 + 240), v36);
    v37 = sub_32AAB0(*(_QWORD *)(a1->m128i_i64[1] + 1496), *(unsigned int *)(v28 + 284));
    v38 = v37;
    if ( v37 == -1 )
      goto LABEL_54;
    v39 = *(_DWORD *)(v28 + 284);
    if ( v39 > 0x24 )
      goto LABEL_54;
    v40 = 1LL << v39;
    if ( ((1LL << v39) & 0x80000001CLL) == 0 )
    {
      if ( (v40 & 0x400000020LL) == 0 )
      {
        if ( (v40 & 0x1000000040LL) != 0 )
        {
          v41 = sub_32A1D0(*(_QWORD *)(v28 + 24) + 80LL, v37);
          if ( v41 >= 0 )
          {
            v42 = a1->m128i_i64[1];
            v85 = (const __m128i *)0xFFFFFFFF00000000LL;
            v86 = 0;
            sub_11C810(&v85, *(_QWORD *)(v42 + 1504), v41, *(unsigned int *)(*(_QWORD *)(v42 + 1504) + 84LL), -1, 0);
            v43 = *(_QWORD *)(v28 + 24);
            if ( *(_BYTE *)v43 == 10 )
              sub_107AE0((__int64)a1, *(_QWORD *)(v43 + 8), (__int64)&v85, v38);
            sub_118BA0(&v85);
          }
        }
LABEL_54:
        sub_8F940(v78);
        goto LABEL_23;
      }
      v65 = *(_QWORD *)(v28 + 24);
      if ( *(_BYTE *)(v65 + 80) != 10 )
      {
LABEL_81:
        if ( *(_BYTE *)v65 == 10 )
          sub_107AE0((__int64)a1, *(_QWORD *)(v65 + 8), v65 + 160, v38);
        goto LABEL_54;
      }
      sub_107AE0((__int64)a1, *(_QWORD *)(v65 + 88), v65 + 160, v38);
    }
    v65 = *(_QWORD *)(v28 + 24);
    goto LABEL_81;
  }
  if ( (unsigned __int8)v12 <= 8u )
  {
    if ( v12 == 1 )
    {
      v14 = a1[8].m128i_i32[0];
      goto LABEL_73;
    }
    if ( v12 == 5 )
    {
      v14 = a1[8].m128i_i32[0];
      if ( (v14 & 4) != 0 )
      {
        LOBYTE(v82) = 0;
LABEL_9:
        v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_10:
        LOBYTE(v82) = v12;
        v81 = v15;
LABEL_11:
        HIDWORD(v82) = *(_DWORD *)(a2 + 4);
        if ( v11 )
        {
          if ( (v14 & 2) != 0
            && (unsigned __int8)sub_FE610(a2)
            && (*(_BYTE *)a2 == 1
              ? (v17 = sub_60240(v5, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4)))
              : (v16 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 8) + 1496LL) + 24LL)
                                                   + 16LL)
                                       & (*(_QWORD *)(**(_QWORD **)(a2 + 8) + 1440LL)
                                        + *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL))),
                 v86 = *(int *)(a2 + 4),
                 v85 = v16,
                 v17 = sub_312E50(&a1[4].m128i_u64[1], &v85)),
                !v17) )
          {
            v14 = a1[8].m128i_i32[0];
          }
          else
          {
            v85 = (const __m128i *)&v81;
            sub_106EE0(a1 + 6, (__int64)&v81, &v85);
            v14 = a1[8].m128i_i32[0];
          }
        }
        sub_107440((__m128i *)a1[3].m128i_i64[0], (_QWORD *)a1->m128i_i64[1], (__int64)&v81, v14);
        goto LABEL_23;
      }
      if ( !(unsigned __int8)sub_FE4C0((_QWORD *)a1->m128i_i64[1], *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
        goto LABEL_23;
      v64 = *(_BYTE *)a2;
      v11 = a1[8].m128i_i8[5];
      v81 = -1;
      v82 = 0;
      v14 = a1[8].m128i_i32[0];
      if ( v64 != 1 )
      {
        if ( v64 != 5 )
          goto LABEL_11;
        goto LABEL_9;
      }
LABEL_73:
      v15 = *(int *)(a2 + 8);
      v12 = 1;
      goto LABEL_10;
    }
LABEL_25:
    if ( a4 )
      return 0;
LABEL_26:
    if ( v13 != 14 )
      return 0;
    goto LABEL_27;
  }
  if ( v12 != 15 )
    goto LABEL_25;
  v18 = a1 + 6;
  if ( !v11 )
    v18 = nullptr;
  sub_107D10(
    (_QWORD *)a1->m128i_i64[1],
    *(_QWORD *)(a2 + 8),
    *(unsigned int *)(a2 + 4),
    (__m128i *)a1[3].m128i_i64[0],
    v18,
    a1[8].m128i_i32[0]);
LABEL_23:
  if ( a4 )
    return 0;
  v13 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 != 1 )
  {
    if ( v13 == 5 )
    {
      if ( (unsigned __int8)sub_FE4C0(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
        goto LABEL_27;
      v13 = *(_BYTE *)a2;
    }
    goto LABEL_26;
  }
LABEL_27:
  if ( !(unsigned __int8)sub_11A0C0(a1[2].m128i_i64[0], &v77, v78, 0) )
    return 0;
  v20 = *(_BYTE *)a2;
  v21 = v77;
  if ( *(_BYTE *)a2 != 14 )
  {
    if ( v20 == 1 )
      goto LABEL_100;
    if ( v20 != 5 || !(unsigned __int8)sub_FE4C0(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
      goto LABEL_85;
    v72 = *(_BYTE *)a2;
    LOBYTE(v86) = 0;
    if ( v72 == 1 )
    {
LABEL_100:
      v71 = *(int *)(a2 + 8);
      v72 = 1;
    }
    else
    {
      v71 = -1;
      if ( v72 != 5 )
        goto LABEL_102;
      v71 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
    }
    LOBYTE(v86) = v72;
LABEL_102:
    v73 = (__m128i *)a1[3].m128i_i64[0];
    v85 = (const __m128i *)(v71 + v21);
    v81 = (__int64)&v85;
    sub_106EE0(v73, (__int64)&v85, (const __m128i **)&v81);
    goto LABEL_32;
  }
  v22 = *(_QWORD *)(a2 + 8);
  v23 = *(_DWORD *)(v22 + 4);
  if ( v77 > v23 )
  {
    v70 = v22 + 16;
    if ( (unsigned __int8)sub_FE610(v70) )
      sub_107210((__int64)a1, v70, v21 - v23);
  }
  else if ( (unsigned __int8)sub_FE610(*(_QWORD *)(a2 + 8)) )
  {
    sub_107210((__int64)a1, v22, v21);
  }
LABEL_32:
  v24 = *(_BYTE *)a2;
  v25 = v77 + LODWORD(v78[0]);
  if ( *(_BYTE *)a2 != 14 )
  {
    if ( v24 == 1 )
      goto LABEL_99;
    if ( v24 == 5 && (unsigned __int8)sub_FE4C0(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
    {
      v66 = *(_BYTE *)a2;
      LOBYTE(v86) = 0;
      if ( v66 != 1 )
      {
        v67 = -1;
        if ( v66 != 5 )
        {
LABEL_91:
          v68 = (__m128i *)a1[3].m128i_i64[0];
          v81 = (__int64)&v85;
          v85 = (const __m128i *)(v67 + v25);
          sub_106EE0(v68, (__int64)&v85, (const __m128i **)&v81);
          return 0;
        }
        v67 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_98:
        LOBYTE(v86) = v66;
        goto LABEL_91;
      }
LABEL_99:
      v67 = *(int *)(a2 + 8);
      v66 = 1;
      goto LABEL_98;
    }
LABEL_85:
    sub_FDB90();
  }
  v26 = *(_QWORD *)(a2 + 8);
  v27 = *(_DWORD *)(v26 + 4);
  if ( v25 > v27 )
  {
    v69 = v26 + 16;
    if ( (unsigned __int8)sub_FE610(v69) )
      sub_107210((__int64)a1, v69, v25 - v27);
  }
  else if ( (unsigned __int8)sub_FE610(v26) )
  {
    sub_107210((__int64)a1, v26, v25);
  }
  return 0;
}
