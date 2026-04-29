unsigned __int64 __fastcall sub_10BCB0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned __int64 **a4)
{
  __int64 *v4; // r11
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned __int64 **v9; // rbp
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 *v13; // rdi
  __int64 *v14; // rdi
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // r10
  int v30; // ebx
  __int64 v31; // rbp
  int v32; // r12d
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // r10
  char v38; // al
  _QWORD *v39; // rdi
  unsigned __int64 v40; // rsi
  int v41; // eax
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // eax
  char v46; // al
  unsigned __int64 v47; // rsi
  char v48; // al
  unsigned __int64 v49; // r11
  const __m128i *v50; // r10
  char v51; // al
  unsigned __int64 v52; // r12
  __int64 v53; // rbx
  const __m128i *v54; // rsi
  __int64 v55; // rax
  __int64 *v56; // r11
  __int64 v57; // rsi
  __int64 v58; // rbx
  unsigned __int64 **v59; // r14
  __int64 v60; // rbx
  __int64 v61; // r12
  unsigned __int64 *v62; // rdx
  unsigned __int64 *v63; // rdx
  __int64 *v66; // [rsp+0h] [rbp-E8h]
  __int64 *v67; // [rsp+0h] [rbp-E8h]
  _QWORD *v68; // [rsp+0h] [rbp-E8h]
  unsigned __int64 *v69; // [rsp+0h] [rbp-E8h]
  __int64 v70; // [rsp+0h] [rbp-E8h]
  __int64 v71; // [rsp+0h] [rbp-E8h]
  __int64 *v73; // [rsp+10h] [rbp-D8h]
  __int64 v74; // [rsp+18h] [rbp-D0h]
  const __m128i *v75; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v76; // [rsp+18h] [rbp-D0h]
  const __m128i *v77; // [rsp+18h] [rbp-D0h]
  __int64 v78; // [rsp+18h] [rbp-D0h]
  const __m128i *v79; // [rsp+18h] [rbp-D0h]
  __int64 *v80; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v81; // [rsp+20h] [rbp-C8h]
  __int64 *v83; // [rsp+38h] [rbp-B0h]
  __int64 v84; // [rsp+40h] [rbp-A8h]
  __int64 v85; // [rsp+48h] [rbp-A0h]
  __m128i *v86; // [rsp+50h] [rbp-98h]
  __int64 v87; // [rsp+58h] [rbp-90h]
  bool v88; // [rsp+63h] [rbp-85h]
  int v89; // [rsp+64h] [rbp-84h]
  const __m128i *v90; // [rsp+68h] [rbp-80h]
  unsigned __int64 v91; // [rsp+68h] [rbp-80h]
  _QWORD v92[2]; // [rsp+70h] [rbp-78h] BYREF
  int v93; // [rsp+80h] [rbp-68h]
  __int64 v94; // [rsp+90h] [rbp-58h] BYREF
  __int64 v95; // [rsp+98h] [rbp-50h]
  int v96; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-40h]

  v4 = a3;
  v5 = a1;
  v97 = __readfsqword(0x28u);
  v6 = a3[1];
  if ( v6 )
  {
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (unsigned __int64 **)(*a3 + 24 * v7);
        v10 = *v9;
        if ( *v9 )
          break;
LABEL_14:
        if ( v6 == ++v7 )
          goto LABEL_15;
      }
      v11 = *v10;
      if ( !v9[1] )
      {
        *v10 = *v10 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v9 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v9, (__m128i)(unsigned __int64)*v9);
        **v9 &= ~1uLL;
        **v9 |= 2u;
        v15 = *v9;
        if ( !*v9 )
          goto LABEL_14;
        goto LABEL_24;
      }
      v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
LABEL_13:
      *v10 = v11 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v9 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v9, (__m128i)(unsigned __int64)*v9);
      **v9 &= ~1uLL;
      **v9 |= 2u;
      v15 = *v9;
      v9[1] = nullptr;
      if ( !v15 )
        goto LABEL_14;
LABEL_24:
      qfree(v15);
      if ( v6 == ++v7 )
      {
LABEL_15:
        v5 = a1;
        v4 = a3;
        goto LABEL_16;
      }
    }
    v13 = *(__int64 **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(__int64 **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_27;
    }
    else
    {
      sub_FE6F0(v13);
      v14 = *(__int64 **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_9;
    }
    sub_FE6F0(v14);
LABEL_9:
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_10:
      if ( v11 > 3 )
        qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = *v9;
      v11 = **v9;
      goto LABEL_13;
    }
LABEL_27:
    v21 = *(_QWORD *)(v12 + 24);
    if ( v21 )
    {
      *(_QWORD *)(v12 + 32) = 0;
      qfree(v21);
    }
    *(_QWORD *)v12 |= 2uLL;
    goto LABEL_10;
  }
LABEL_16:
  v4[1] = 0;
  v16 = *(int *)(v5 + 16);
  if ( !*(_DWORD *)(v5 + 16) )
  {
    if ( !a4 )
      return v97 - __readfsqword(0x28u);
    goto LABEL_31;
  }
  v17 = *v4;
  v92[0] = 0;
  v92[1] = 0;
  v18 = v4[2];
  v93 = -1;
  if ( (unsigned __int64)v92 < v17 || (unsigned __int64)v92 >= v17 + 24 * v18 )
  {
    v52 = 0;
    if ( v18 >= v16 )
      goto LABEL_97;
    v73 = v4;
    v55 = qvector_reserve(v4, 0, v16, 24);
    v56 = v73;
    v70 = v55;
    v57 = v73[2];
    v58 = v73[1];
    v73[2] = v18;
    v59 = (unsigned __int64 **)*v73;
    v60 = v58 - 1;
    if ( v60 >= 0 )
    {
      v61 = v55;
      do
      {
        v62 = *v59;
        *v59 = nullptr;
        *(_QWORD *)v61 = v62;
        v63 = v59[1];
        v59[1] = nullptr;
        *(_QWORD *)(v61 + 8) = v63;
        *(_DWORD *)(v61 + 16) = *((_DWORD *)v59 + 4);
        if ( *v59 )
        {
          sub_102C30(v59);
          if ( *v59 )
            qfree(*v59);
        }
        v59 += 3;
        v61 += 24;
      }
      while ( v60-- != 0 );
      v56 = v73;
      v59 = (unsigned __int64 **)*v73;
    }
    v80 = v56;
    qfree(v59);
    v4 = v80;
    v17 = v70;
    v52 = v80[1];
    *v80 = v70;
    v80[2] = v57;
    if ( v52 < v16 )
    {
LABEL_97:
      while ( 1 )
      {
        v69 = (unsigned __int64 *)v4;
        v53 = v17 + 24 * v52;
        sub_10B560((__int64 *)v53, (__int64)v92);
        ++v52;
        *(_DWORD *)(v53 + 16) = -1;
        v4 = (__int64 *)v69;
        if ( v52 >= v16 )
          break;
        v17 = *v69;
      }
    }
    v4[1] = v16;
  }
  else
  {
    v94 = 0;
    v95 = 0;
    v96 = -1;
    v66 = v4;
    sub_10B770(v4, (unsigned __int64 *)v16, (__int64)&v94);
    v4 = v66;
  }
  if ( a4 )
  {
LABEL_31:
    v67 = v4;
    sub_102C30(a4);
    v22 = *(_QWORD *)(v5 + 320);
    v4 = v67;
    v20 = *(_QWORD *)(v22 + 128);
    v81 = *(_QWORD *)(v22 + 568);
    if ( *(int *)(v5 + 16) <= 0 )
    {
LABEL_50:
      v94 = (__int64)a4;
      LODWORD(v95) = *(_DWORD *)(v5 + 312);
      sub_100570(v5, (_QWORD *)(v5 + 248), (__int64)sub_104180, 0, (__int64)&v94);
      return v97 - __readfsqword(0x28u);
    }
    goto LABEL_32;
  }
  v19 = *(_QWORD *)(v5 + 320);
  v20 = *(_QWORD *)(v19 + 128);
  v81 = *(_QWORD *)(v19 + 568);
  if ( *(int *)(v5 + 16) <= 0 )
    return v97 - __readfsqword(0x28u);
LABEL_32:
  v85 = v20;
  v83 = v4;
  v88 = v20 != 0;
  v23 = 0;
  do
  {
    v89 = v23;
    v24 = 24 * v23 + *a2;
    v25 = *v83 + 24 * v23;
    *(_DWORD *)(v25 + 16) = v23;
    v86 = (__m128i *)v25;
    v94 = v25;
    LODWORD(v95) = -1;
    v84 = 40 * v23;
    if ( (*(_BYTE *)(v5 + 316) & 1) != 0 )
      v68 = (_QWORD *)(*(_QWORD *)(v5 + 200) + v84);
    else
      v68 = (_QWORD *)(*(_QWORD *)(v5 + 176) + 40 * v23);
    v74 = v23;
    sub_100570(v5, v68, (__int64)sub_104180, 0, (__int64)&v94);
    v26 = 0;
    v27 = v24;
    v28 = sub_60F20((_QWORD *)v24, 0);
    v29 = v74;
    if ( v28 == *(_DWORD *)(v24 + 8) )
      goto LABEL_46;
    v87 = v74;
    v30 = 0;
    v31 = 0;
    v32 = v28;
    v33 = v5;
    do
    {
      v34 = *(_QWORD *)(v33 + 56);
      if ( v32 >= (unsigned __int64)*(int *)(v34 + 4 * v31) )
      {
        do
          v31 = ++v30;
        while ( v32 >= (unsigned __int64)*(int *)(v34 + 4LL * v30) );
      }
      v35 = *(_QWORD *)(v33 + 128) + 16LL * v32;
      v36 = v35;
      v37 = *(_QWORD *)(v33 + 104) + 16LL * *(_QWORD *)v35;
      v38 = *(_BYTE *)(v37 + 8);
      if ( v38 == 1 )
      {
        v43 = *(_QWORD *)(v33 + 320);
        v44 = *(_QWORD *)(v43 + 1504);
        v45 = *(_DWORD *)(v44 + 60);
        if ( (int)*(_QWORD *)v37 >= v45 && (int)*(_QWORD *)v37 < *(_DWORD *)(v44 + 84) + v45
          || (*(_BYTE *)(v33 + 316) & 2) == 0 )
        {
          goto LABEL_44;
        }
        goto LABEL_55;
      }
      if ( v38 != 5 )
        sub_FE2F0(v27, v26, v35, v34);
      v39 = *(_QWORD **)(v33 + 320);
      v40 = *(_QWORD *)v37;
      if ( v39[16] <= *(_QWORD *)v37 )
      {
        if ( !under_debugger )
          sub_37EEE0(50154);
LABEL_94:
        BUG();
      }
      v41 = *(_DWORD *)(v33 + 316);
      if ( (v41 & 2) != 0 )
      {
        v78 = *(_QWORD *)(v33 + 104) + 16LL * *(_QWORD *)v35;
        v51 = sub_FEC80(v39, v40, *(int *)(v35 + 8));
        v37 = v78;
        if ( !v51 )
        {
LABEL_56:
          if ( (*(_BYTE *)(v33 + 316) & 4) == 0 || *(_BYTE *)(v37 + 8) != 5 )
            goto LABEL_44;
          v39 = *(_QWORD **)(v33 + 320);
          v40 = *(_QWORD *)v37;
          goto LABEL_59;
        }
        v43 = *(_QWORD *)(v33 + 320);
LABEL_55:
        v75 = (const __m128i *)v37;
        v46 = sub_32B360(v37, v43, v68, 1);
        v37 = (__int64)v75;
        if ( v46 )
        {
          sub_103FD0(v86, v75, *(_DWORD *)(v36 + 8), v30);
          goto LABEL_44;
        }
        goto LABEL_56;
      }
      if ( (v41 & 4) == 0 )
        goto LABEL_44;
LABEL_59:
      v47 = *(_QWORD *)(*(_QWORD *)(v39[187] + 24LL) + 16LL) & (v39[180] + v40);
      if ( v47 < v81 || !v88 || v81 + v85 - 1 < v47 )
      {
        if ( !under_debugger )
          sub_37EEE0(50160);
        goto LABEL_94;
      }
      v90 = (const __m128i *)v37;
      v76 = v47;
      v48 = sub_312EC0(v68 + 2, v47);
      v49 = v47;
      v50 = v90;
      if ( v48 )
      {
        v54 = v90;
        v91 = v76;
        v79 = v50;
        sub_103FD0(v86, v54, *(_DWORD *)(v36 + 8), v30);
        v49 = v91;
        v50 = v79;
      }
      if ( *(_DWORD *)(v33 + 312) == (_DWORD)v87 )
      {
        if ( !a4 )
        {
          if ( !under_debugger )
            sub_37EEE0(50161);
          goto LABEL_94;
        }
        v77 = v50;
        if ( !(unsigned __int8)sub_312EC0(*(_QWORD *)(v33 + 200) + v84 + 16, v49) )
          sub_103FD0((__m128i *)a4, v77, *(_DWORD *)(v36 + 8), v30);
      }
LABEL_44:
      v26 = (unsigned int)(v32 + 1);
      v27 = v24;
      v32 = sub_60F20((_QWORD *)v24, v26);
    }
    while ( v32 != *(_DWORD *)(v24 + 8) );
    v29 = v87;
    v5 = v33;
LABEL_46:
    if ( (*(_BYTE *)(v5 + 316) & 2) != 0 )
    {
      v71 = v29;
      sub_104DA0(v5, (unsigned __int64 *)v86, v89);
      v29 = v71;
    }
    v23 = v29 + 1;
  }
  while ( *(_DWORD *)(v5 + 16) > (int)v23 );
  if ( a4 )
    goto LABEL_50;
  return v97 - __readfsqword(0x28u);
}
