__int64 __fastcall sub_10AC30(__m128i *a1, __int64 a2, __int64 a3, char a4)
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
  char v19; // al
  __int64 v20; // rbp
  __int64 v21; // r12
  int v22; // r13d
  char v23; // al
  int v24; // ebp
  __int64 v25; // rbx
  int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r9d
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  int v36; // eax
  int v37; // r12d
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int32 v47; // esi
  int v48; // r12d
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  char v63; // dl
  __int64 v64; // rax
  char v65; // al
  __int64 v66; // rdx
  __m128i *v67; // rdi
  __int64 v68; // rbx
  __int64 v69; // r12
  __int64 v70; // rdx
  char v71; // al
  __m128i *v72; // rdi
  unsigned __int64 *v73; // rax
  _QWORD *v74; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v75; // [rsp+20h] [rbp-E8h]
  int v76; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v77[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v79; // [rsp+58h] [rbp-B0h]
  __int64 v80; // [rsp+70h] [rbp-98h] BYREF
  __int64 v81; // [rsp+78h] [rbp-90h]
  __int64 v82; // [rsp+80h] [rbp-88h] BYREF
  __int128 v83; // [rsp+88h] [rbp-80h]
  const __m128i *v84; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-60h]
  __int64 v86; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v87; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+C8h] [rbp-40h]

  v5 = &a1[3].m128i_i64[1];
  v88 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_63F80(&a1[3].m128i_i64[1]) || (v11 = 0, a1[5].m128i_i64[0]) )
    v11 = a4 ^ a1[8].m128i_i8[4];
  a1[8].m128i_i8[5] = v11;
  v12 = *(_BYTE *)a2;
  v13 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 8 )
  {
    v27 = *(_QWORD *)(a2 + 8);
    v28 = a1->m128i_i64[1];
    v79 = 0;
    v77[0] = 0;
    v77[1] = 0;
    v78 = 0;
    sub_11C190(v27, (unsigned int)v77, v28, v8, v9, v10);
    sub_102690(a1[3].m128i_i64[0], a1->m128i_i64[1], v77, a1[8].m128i_i32[0]);
    if ( !(unsigned __int8)sub_63F80(v5) || a1[5].m128i_i64[0] )
    {
      v74 = (_QWORD *)(v27 + 96);
      sub_63D40(v77, (__int64 *)(v27 + 96), v29, v30, v31, v32);
      sub_63E00(v77, v5);
      sub_314B70(&v78, &a1[4].m128i_u64[1]);
      sub_63D40(v5, v77, v43, v44, v45, v46);
      sub_314710(&a1[4].m128i_u64[1], &v78);
      v47 = a1[7].m128i_i32[2];
      v48 = *(_DWORD *)(v27 + 12) % v47;
      if ( v48 )
      {
        v49 = *(_QWORD *)(v27 + 32);
        if ( v49 )
        {
          v50 = *(_QWORD *)(v27 + 24);
          v51 = v50 + 80 * v49;
          if ( v50 != v51 )
          {
            while ( *(_DWORD *)(v50 + 56) != 1 )
            {
              v50 += 80;
              if ( v51 == v50 )
                goto LABEL_67;
            }
            v52 = *(_QWORD *)(v50 + 64) & -v47;
            if ( v52 != -1 )
            {
              v53 = *(int *)(v27 + 16);
              v54 = v52 + *(int *)(v27 + 12);
              if ( v54 >= v53 )
              {
                if ( !under_debugger )
                  sub_37EA20(52577);
                BUG();
              }
              v55 = a1->m128i_i64[1];
              v56 = v53 - v54;
              v80 = 0;
              v81 = 0;
              v82 = 0;
              v83 = 0;
              v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v55 + 1440) + v54);
              v87 = 0;
              v58 = v57;
              v84 = 0;
              v85 = 0;
              v86 = 0;
              if ( v56 + v57 - 1 >= v57 )
              {
                v75 = v56;
                v86 = qvector_reserve();
                v73 = (unsigned __int64 *)(16 * v87 + v86);
                *v73 = v58;
                v73[1] = v75;
                *(_QWORD *)&v87 = v87 + 1;
              }
              sub_63980(&v80, (__int64 *)&v84);
              sub_313730(&v82, &v86);
              sub_92DA0((__int64)&v84);
              sub_63E00(&v80, v77);
              sub_314B70(&v82, &v78);
              if ( !(unsigned __int8)sub_63F80(&v80) || (_QWORD)v83 )
              {
                sub_10A310(a1, (__int64)&v80, v48);
                sub_63D40(v77, &v80, v59, v60, v61, v62);
                sub_314710(&v78, &v82);
              }
              sub_92DA0((__int64)&v80);
            }
          }
        }
      }
LABEL_67:
      sub_10A310(a1, (__int64)v77, 0);
    }
    else
    {
      v74 = (_QWORD *)(v27 + 96);
    }
    sub_102690(a1[3].m128i_i64[0], a1->m128i_i64[1], v74, a1[8].m128i_i32[0]);
    v35 = a1[8].m128i_u32[0];
    if ( (v35 & 4) != 0 )
    {
      sub_1025F0(a1[3].m128i_i64[0], a1->m128i_i64[1], v27 + 216, v35, v33, v34);
      LODWORD(v35) = a1[8].m128i_i32[0];
    }
    sub_102690(a1[3].m128i_i64[0], a1->m128i_i64[1], (_QWORD *)(v27 + 240), v35);
    v36 = sub_32C6A0(*(_QWORD *)(a1->m128i_i64[1] + 1496), *(unsigned int *)(v27 + 284));
    v37 = v36;
    if ( v36 == -1 )
      goto LABEL_52;
    v38 = *(_DWORD *)(v27 + 284);
    if ( v38 > 0x24 )
      goto LABEL_52;
    v39 = 1LL << v38;
    if ( ((1LL << v38) & 0x80000001CLL) == 0 )
    {
      if ( (v39 & 0x400000020LL) == 0 )
      {
        if ( (v39 & 0x1000000040LL) != 0 )
        {
          v40 = sub_32BDC0(*(_QWORD *)(v27 + 24) + 80LL, v36);
          if ( v40 >= 0 )
          {
            v41 = a1->m128i_i64[1];
            v84 = (const __m128i *)0xFFFFFFFF00000000LL;
            v85 = 0;
            sub_11E5D0(&v84, *(_QWORD *)(v41 + 1504), v40, *(unsigned int *)(*(_QWORD *)(v41 + 1504) + 84LL), -1, 0);
            v42 = *(_QWORD *)(v27 + 24);
            if ( *(_BYTE *)v42 == 10 )
              sub_10A8D0((__int64)a1, *(_QWORD *)(v42 + 8), (__int64)&v84, v37);
            sub_11A960(&v84);
          }
        }
LABEL_52:
        sub_92DA0((__int64)v77);
        goto LABEL_21;
      }
      v64 = *(_QWORD *)(v27 + 24);
      if ( *(_BYTE *)(v64 + 80) != 10 )
      {
LABEL_79:
        if ( *(_BYTE *)v64 == 10 )
          sub_10A8D0((__int64)a1, *(_QWORD *)(v64 + 8), v64 + 160, v37);
        goto LABEL_52;
      }
      sub_10A8D0((__int64)a1, *(_QWORD *)(v64 + 88), v64 + 160, v37);
    }
    v64 = *(_QWORD *)(v27 + 24);
    goto LABEL_79;
  }
  if ( (unsigned __int8)v12 > 8u )
  {
    if ( v12 == 15 )
    {
      sub_10AB00();
      goto LABEL_21;
    }
    goto LABEL_23;
  }
  if ( v12 == 1 )
  {
    v14 = a1[8].m128i_i32[0];
    goto LABEL_71;
  }
  if ( v12 != 5 )
  {
LABEL_23:
    if ( a4 )
      return 0;
LABEL_24:
    if ( v13 != 14 )
      return 0;
    goto LABEL_25;
  }
  v14 = a1[8].m128i_i32[0];
  if ( (v14 & 4) == 0 )
  {
    if ( !(unsigned __int8)sub_100F40((_QWORD *)a1->m128i_i64[1], *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
      goto LABEL_21;
    v63 = *(_BYTE *)a2;
    v11 = a1[8].m128i_i8[5];
    v80 = -1;
    v81 = 0;
    v14 = a1[8].m128i_i32[0];
    if ( v63 != 1 )
    {
      if ( v63 != 5 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_71:
    v15 = *(int *)(a2 + 8);
    v12 = 1;
    goto LABEL_10;
  }
  LOBYTE(v81) = 0;
LABEL_9:
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_10:
  LOBYTE(v81) = v12;
  v80 = v15;
LABEL_11:
  HIDWORD(v81) = *(_DWORD *)(a2 + 4);
  if ( v11 )
  {
    if ( (v14 & 2) != 0
      && (unsigned __int8)sub_101090(a2)
      && (*(_BYTE *)a2 == 1
        ? (v17 = sub_63B40(v5, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4)))
        : (v16 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 8) + 1496LL) + 24LL) + 16LL)
                                 & (*(_QWORD *)(**(_QWORD **)(a2 + 8) + 1440LL) + *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL))),
           v85 = *(int *)(a2 + 4),
           v84 = v16,
           v17 = sub_314680(&a1[4].m128i_u64[1], &v84)),
          !v17) )
    {
      v14 = a1[8].m128i_i32[0];
    }
    else
    {
      v84 = (const __m128i *)&v80;
      sub_109CD0(a1 + 6, (__int64)&v80, &v84);
      v14 = a1[8].m128i_i32[0];
    }
  }
  sub_10A230((__m128i *)a1[3].m128i_i64[0], (_QWORD *)a1->m128i_i64[1], (__int64)&v80, v14);
LABEL_21:
  if ( a4 )
    return 0;
  v13 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 != 1 )
  {
    if ( v13 == 5 )
    {
      if ( (unsigned __int8)sub_100F40(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
        goto LABEL_25;
      v13 = *(_BYTE *)a2;
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( !(unsigned __int8)sub_11BE80(a1[2].m128i_i64[0], &v76, v77, 0) )
    return 0;
  v19 = *(_BYTE *)a2;
  v20 = v76;
  if ( *(_BYTE *)a2 != 14 )
  {
    if ( v19 == 1 )
      goto LABEL_98;
    if ( v19 != 5 || !(unsigned __int8)sub_100F40(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
      goto LABEL_83;
    v71 = *(_BYTE *)a2;
    LOBYTE(v85) = 0;
    if ( v71 == 1 )
    {
LABEL_98:
      v70 = *(int *)(a2 + 8);
      v71 = 1;
    }
    else
    {
      v70 = -1;
      if ( v71 != 5 )
        goto LABEL_100;
      v70 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
    }
    LOBYTE(v85) = v71;
LABEL_100:
    v72 = (__m128i *)a1[3].m128i_i64[0];
    v84 = (const __m128i *)(v70 + v20);
    v80 = (__int64)&v84;
    sub_109CD0(v72, (__int64)&v84, (const __m128i **)&v80);
    goto LABEL_30;
  }
  v21 = *(_QWORD *)(a2 + 8);
  v22 = *(_DWORD *)(v21 + 4);
  if ( v76 > v22 )
  {
    v69 = v21 + 16;
    if ( (unsigned __int8)sub_101090(v69) )
      sub_10A000((__int64)a1, v69, v20 - v22);
  }
  else if ( (unsigned __int8)sub_101090(*(_QWORD *)(a2 + 8)) )
  {
    sub_10A000((__int64)a1, v21, v20);
  }
LABEL_30:
  v23 = *(_BYTE *)a2;
  v24 = v76 + LODWORD(v77[0]);
  if ( *(_BYTE *)a2 != 14 )
  {
    if ( v23 == 1 )
      goto LABEL_97;
    if ( v23 == 5 && (unsigned __int8)sub_100F40(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
    {
      v65 = *(_BYTE *)a2;
      LOBYTE(v85) = 0;
      if ( v65 != 1 )
      {
        v66 = -1;
        if ( v65 != 5 )
        {
LABEL_89:
          v67 = (__m128i *)a1[3].m128i_i64[0];
          v80 = (__int64)&v84;
          v84 = (const __m128i *)(v66 + v24);
          sub_109CD0(v67, (__int64)&v84, (const __m128i **)&v80);
          return 0;
        }
        v66 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_96:
        LOBYTE(v85) = v65;
        goto LABEL_89;
      }
LABEL_97:
      v66 = *(int *)(a2 + 8);
      v65 = 1;
      goto LABEL_96;
    }
LABEL_83:
    sub_100580();
  }
  v25 = *(_QWORD *)(a2 + 8);
  v26 = *(_DWORD *)(v25 + 4);
  if ( v24 > v26 )
  {
    v68 = v25 + 16;
    if ( (unsigned __int8)sub_101090(v68) )
      sub_10A000((__int64)a1, v68, v24 - v26);
  }
  else if ( (unsigned __int8)sub_101090(v25) )
  {
    sub_10A000((__int64)a1, v25, v24);
  }
  return 0;
}
