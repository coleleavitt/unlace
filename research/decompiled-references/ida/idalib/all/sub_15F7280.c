__int64 *__fastcall sub_15F7280(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  unsigned int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rsi
  __int64 v41; // r13
  _QWORD *v42; // rbx
  unsigned __int64 v43; // r14
  __int64 *v44; // r14
  __int64 i; // r12
  __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rax
  __int64 j; // r14
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 *v57; // rax
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // [rsp-10h] [rbp-128h]
  __int64 v66; // [rsp-8h] [rbp-120h]
  _QWORD *v67; // [rsp+0h] [rbp-118h]
  unsigned int v68; // [rsp+8h] [rbp-110h]
  _QWORD *v69; // [rsp+8h] [rbp-110h]
  __int64 v70; // [rsp+18h] [rbp-100h]
  _DWORD *v72; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v74; // [rsp+38h] [rbp-E0h]
  __int64 v75; // [rsp+40h] [rbp-D8h] BYREF
  char v76; // [rsp+48h] [rbp-D0h]
  _QWORD v77[3]; // [rsp+50h] [rbp-C8h] BYREF
  int v78; // [rsp+68h] [rbp-B0h]
  unsigned int v79; // [rsp+70h] [rbp-A8h]
  char v80; // [rsp+74h] [rbp-A4h]

  v6 = a2;
  v7 = *(unsigned int *)(a2 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v7 - 8);
  v72 = (_DWORD *)a4;
  v70 = v8;
  v9 = *(_QWORD **)(v8 + 408);
  if ( *(_BYTE *)(v8 + 428) )
    v10 = &v9[*(unsigned int *)(v8 + 420)];
  else
    v10 = &v9[*(unsigned int *)(v8 + 416)];
  v67 = v10;
  if ( v9 == v10 )
    goto LABEL_8;
  if ( *v9 == -2 || *v9 == -1 )
  {
    do
    {
      if ( v10 == ++v9 )
        goto LABEL_8;
    }
    while ( *v9 >= 0xFFFFFFFFFFFFFFFELL );
  }
LABEL_32:
  while ( 2 )
  {
    v41 = *v9;
    v42 = *(_QWORD **)(*v9 + 104LL);
    if ( v42 == &v42[2 * *(unsigned int *)(*v9 + 112LL)] )
      goto LABEL_44;
    v69 = &v42[2 * *(unsigned int *)(*v9 + 112LL)];
    do
    {
      v43 = *v42 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v43 + 29) & 1) != 0 )
      {
        v57 = sub_B8C3D0(*v42 & 0xFFFFFFFFFFFFFFF8LL, a2, v7, a4, a5, a6);
        v7 = *v57;
        a4 = *v57 + 8LL * *((unsigned int *)v57 + 2);
        if ( *v57 >= a4 )
        {
          if ( v7 != a4 )
          {
            if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 148 )
              goto LABEL_70;
            a4 += 8LL;
            while ( v7 != a4 )
            {
              v59 = *(_QWORD *)a4;
              a4 += 8LL;
              if ( *(_WORD *)(v59 + 36) == 148 )
                goto LABEL_70;
            }
          }
        }
        else
        {
          v58 = (__int64 *)*v57;
          while ( 1 )
          {
            v7 = *v58;
            if ( *(_WORD *)(*v58 + 36) == 148 )
              break;
            if ( (__int64 *)a4 == ++v58 )
              goto LABEL_62;
          }
          if ( (__int64 *)a4 != v58 )
          {
LABEL_70:
            if ( (*(_BYTE *)(v41 + 50) & 2) != 0 )
              goto LABEL_43;
            *(_BYTE *)(v43 + 98) |= 0x20u;
            v43 = *v42 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_35;
          }
        }
LABEL_62:
        v43 = *v42 & 0xFFFFFFFFFFFFFFF8LL;
      }
LABEL_35:
      v44 = (__int64 *)(*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      for ( i = *v44; ; i = *(_QWORD *)(*(_QWORD *)(v47 + 32) & 0xFFFFFFFFFFFFFFF0LL) )
      {
        v46 = (unsigned int)*(unsigned __int8 *)(i + 16) - 2;
        v47 = i;
        if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
            break;
          v47 = sub_F63050(i, a2, v46, a4);
          if ( !v47 )
            break;
        }
      }
      v48 = sub_F63240(i, a2, v46, a4, a5, a6);
      if ( v48 && (unsigned __int8)sub_F58560((__int64)v48) )
      {
LABEL_42:
        a2 = *(_QWORD *)((*v42 & 0xFFFFFFFFFFFFFFF8LL) + 48);
        sub_17D0CF0(v6, a2, *(unsigned int *)(v41 + 24), 7, 6);
        goto LABEL_43;
      }
      for ( j = *v44; ; j = *(_QWORD *)(*(_QWORD *)(j + 32) & 0xFFFFFFFFFFFFFFF0LL) )
      {
        if ( (unsigned __int8)(*(_BYTE *)(j + 16) - 2) <= 4u )
          continue;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          break;
        v55 = sub_F63050(j, a2, v49, v50);
        if ( !v55 )
          break;
        j = v55;
      }
      v56 = sub_F63240(j, a2, v49, v50, v51, v52);
      if ( v56 && sub_F58570((__int64)v56) )
        goto LABEL_42;
LABEL_43:
      v42 += 2;
    }
    while ( v69 != v42 );
LABEL_44:
    if ( v9 + 1 == v67 )
      goto LABEL_8;
    if ( v9[1] < 0xFFFFFFFFFFFFFFFELL )
    {
      ++v9;
      continue;
    }
    break;
  }
  v53 = v9 + 2;
  while ( 1 )
  {
    v9 = v53;
    if ( v53 == v67 )
      break;
    ++v53;
    if ( *v9 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_32;
  }
LABEL_8:
  v11 = v70;
  v12 = *(_QWORD *)(v70 + 440) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v70 + 440) & 4) != 0 )
  {
    v13 = *(__int64 **)v12;
    v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
LABEL_10:
    while ( (__int64 *)v14 != v13 )
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( sub_B73970(*v13) )
        {
          if ( (unsigned __int8)sub_F613D0(
                                  *(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL),
                                  v11,
                                  v16,
                                  v17,
                                  v18,
                                  v19) )
            break;
        }
        if ( (__int64 *)v14 == ++v13 )
          goto LABEL_25;
      }
      v20 = *(_QWORD *)(v15 + 48);
      sub_18C74E0(v6, 6, 0, 4);
      v21 = *(_DWORD *)(v15 + 24);
      v77[0] = 0;
      v68 = v21;
      v22 = sub_EEE9A0(32, *(_QWORD **)(v6 + 248), 8u);
      sub_BF7BD0(v22, *(_QWORD *)(v6 + 248), v15, 0, v20, 1, v68, v77, 0);
      LODWORD(v77[0]) = 13;
      v77[1] = 0;
      v79 = v68;
      v23 = *(_QWORD *)(v6 + 232);
      v77[2] = v20;
      v78 = 0;
      v80 = 0;
      if ( (*(_BYTE *)(v23 + 2) & 1) != 0 )
      {
        v24 = sub_C0A3E0(*(_QWORD **)(v6 + 248), v20, 5, v22, 0, 2, 0);
        v11 = (__int64)v77;
        v25 = sub_1A24E20(v6, v77, 0, v24, 0, 0);
        v28 = v65;
        v29 = v66;
      }
      else
      {
        v11 = (__int64)v77;
        v75 = v15;
        v76 = 1;
        v25 = sub_1C37220(v6, v77, &v75, v22, 0);
      }
      if ( v25 != 1 )
      {
        v30 = sub_19A3E60(v6, v25, v28);
        v31 = *(_QWORD *)(v6 + 248);
        v74 = v30 & 0xFFFFFFFFFFFFFFFELL;
        v32 = sub_18B2EA0(v6, v30 & 0xFFFFFFFFFFFFFFFELL);
        v11 = v15;
        sub_AB1F40(v31, v15, v74, v32 != 0, v33, v34);
      }
      v35 = sub_F63270(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v11, v28, v29, v26, v27);
      if ( v35 )
      {
        v36 = sub_B97300((__int64)v35);
        if ( v36 )
        {
          v38 = (_QWORD *)(*(_QWORD *)(v36 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v38 + 16LL) != 26 )
            sub_F63050(*v38, v11, *v38, v37);
          v11 = v68;
          sub_18B0530(v6, v68);
        }
      }
      ++v13;
      sub_190D5E0(v6);
    }
  }
  else
  {
    v13 = (__int64 *)(v70 + 440);
    if ( v12 )
    {
      v14 = v70 + 448;
      goto LABEL_10;
    }
  }
LABEL_25:
  v39 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 40))-- - 8);
  *a1 = v6;
  a1[1] = v39;
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 232) + 64LL) )
    sub_1AF2C30(*(_QWORD *)(v6 + 760));
  if ( a3 && v72 )
  {
    sub_1827580(v6, v72);
    sub_15957C0((__int64 *)(v6 + 352), *a3, a1[1], v72, a5);
  }
  else
  {
    v60 = a1[1];
    v61 = *(_QWORD *)(v60 + 448);
    v62 = v61 + 40LL * *(unsigned int *)(v60 + 456);
    while ( v62 != v61 )
    {
      v63 = *(unsigned int *)(v61 + 24);
      v64 = v61;
      v61 += 40;
      sub_168CDE0(v77, v6 + 8, v63, v64, 0);
      sub_15F7200(v77);
    }
  }
  return a1;
}
