unsigned __int64 __fastcall sub_1AF4EE0(__int64 *a1, _QWORD *a2, __int64 a3, unsigned int a4, int a5, _WORD *a6)
{
  __int64 *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 *v18; // r15
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // r13
  __int64 *v25; // rax
  __int64 *v26; // rax
  unsigned __int8 v27; // al
  bool v28; // al
  unsigned int v29; // ecx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 *v34; // r15
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 *v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rax
  __int64 *v51; // rax
  unsigned __int8 v52; // al
  __int64 *v53; // rax
  __int64 *v54; // rax
  unsigned __int8 v55; // al
  __int64 *v56; // rax
  __int64 *v57; // rax
  unsigned __int8 v58; // al
  __int64 **v59; // rax
  __int64 **v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  __int64 *v63; // [rsp+0h] [rbp-E8h]
  __int64 *v64; // [rsp+0h] [rbp-E8h]
  __int64 *v65; // [rsp+8h] [rbp-E0h]
  __int64 *v68; // [rsp+18h] [rbp-D0h]
  _BYTE v69[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( !a6 )
    return 1;
  sub_1AEB8B0(*a1, 0x57u, a6);
  v9 = &a2[a3];
  v10 = sub_1AE7A80(a2, (__int64)v9, 102);
  if ( (_QWORD *)v13 == v10 )
  {
    v31 = sub_1AE7A80(a2, (__int64)v9, 38);
    if ( (_QWORD *)v13 == v31 )
    {
      v29 = 4429;
LABEL_26:
      sub_168B9F0((__int64)v69, a1, a4, v29, 0);
      sub_15F7200(v69);
      return 1;
    }
  }
  if ( (_QWORD *)v13 == a2 )
    goto LABEL_100;
  v14 = *a2;
  v15 = *(_DWORD *)(*a2 + 8LL);
  if ( v15 != 102 )
  {
    if ( v15 == 38 )
    {
LABEL_31:
      v32 = (unsigned int)(2 * *(_DWORD *)(v14 + 16));
      v33 = 8LL * *(unsigned int *)(v14 + 20);
      v34 = (__int64 *)(v14 + 8 * v32 + 104);
      v64 = &v34[(unsigned __int64)v33 / 8];
      v35 = v33 >> 3;
      v36 = v33 >> 5;
      if ( !v36 )
        goto LABEL_107;
      v37 = &v34[4 * v36];
      do
      {
        if ( !sub_1AE9CA0(*v34, (__int64)v9, v32, v11, v12, v13) )
          goto LABEL_38;
        if ( !sub_1AE9CA0(v34[1], (__int64)v9, v46, v47, v48, v49) )
        {
          v28 = v64 == v34 + 1;
          goto LABEL_24;
        }
        if ( !sub_1AE9CA0(v34[2], (__int64)v9, v38, v39, v40, v41) )
        {
          v28 = v64 == v34 + 2;
          goto LABEL_24;
        }
        if ( !sub_1AE9CA0(v34[3], (__int64)v9, v42, v43, v44, v45) )
        {
          v28 = v64 == v34 + 3;
          goto LABEL_24;
        }
        v34 += 4;
      }
      while ( v37 != v34 );
      v35 = v64 - v34;
LABEL_107:
      if ( v35 == 2 )
        goto LABEL_121;
      if ( v35 != 3 )
      {
        if ( v35 != 1 )
          goto LABEL_100;
        goto LABEL_110;
      }
      if ( sub_1AE9CA0(*v34, (__int64)v9, v32, v11, v12, v13) )
      {
        ++v34;
LABEL_121:
        if ( sub_1AE9CA0(*v34, (__int64)v9, v32, v11, v12, v13) )
        {
          ++v34;
LABEL_110:
          if ( sub_1AE9CA0(*v34, (__int64)v9, v32, v11, v12, v13) )
            goto LABEL_100;
        }
      }
LABEL_38:
      v28 = v64 == v34;
      goto LABEL_24;
    }
    v62 = a2 + 1;
    while ( 1 )
    {
      if ( (_QWORD *)v13 == v62 )
        goto LABEL_100;
      v14 = *v62;
      v11 = *(unsigned int *)(*v62 + 8LL);
      if ( (_DWORD)v11 == 102 )
        break;
      ++v62;
      if ( (_DWORD)v11 == 38 )
        goto LABEL_31;
    }
  }
  v16 = (unsigned int)(2 * *(_DWORD *)(v14 + 16));
  v17 = 8LL * *(unsigned int *)(v14 + 20);
  v18 = (__int64 *)(v14 + 8 * v16 + 104);
  v65 = &v18[(unsigned __int64)v17 / 8];
  v19 = v17 >> 3;
  v20 = v17 >> 5;
  if ( !v20 )
    goto LABEL_96;
  v63 = &v18[4 * v20];
  do
  {
    v24 = *v18;
    if ( !*v18 || (*(_BYTE *)(v24 + 29) & 1) == 0 )
      goto LABEL_7;
    v25 = sub_B8C3D0(*v18, (__int64)v9, v16, v11, v12, v13);
    v11 = *v25;
    v9 = (__int64 *)(*v25 + 8LL * *((unsigned int *)v25 + 2));
    if ( *v25 >= (unsigned __int64)v9 )
    {
      if ( (__int64 *)v11 == v9 )
        goto LABEL_7;
      if ( *(_WORD *)(*v9 + 36) != 295 )
      {
        v59 = (__int64 **)(v9 + 1);
        do
        {
          v9 = (__int64 *)v59;
          if ( (__int64 **)v11 == v59 )
            goto LABEL_7;
          v9 = *v59++;
        }
        while ( *((_WORD *)v9 + 18) != 295 );
      }
    }
    else
    {
      v26 = (__int64 *)*v25;
      while ( 1 )
      {
        v11 = *v26;
        if ( *(_WORD *)(*v26 + 36) == 295 )
          break;
        if ( v9 == ++v26 )
          goto LABEL_7;
      }
      if ( v9 == v26 )
        goto LABEL_7;
    }
    v27 = sub_B81B70(v24);
    if ( !v27 )
      goto LABEL_124;
    if ( v27 <= 3u )
      goto LABEL_23;
    if ( v27 > 6u )
      goto LABEL_124;
    if ( (sub_B81B00(v24) & 0x18) == 0 )
      goto LABEL_23;
LABEL_7:
    v21 = v18[1];
    if ( !v21 || (*(_BYTE *)(v21 + 29) & 1) == 0 )
      goto LABEL_9;
    v50 = sub_B8C3D0(v18[1], (__int64)v9, v16, v11, v12, v13);
    v11 = *v50;
    v9 = (__int64 *)(*v50 + 8LL * *((unsigned int *)v50 + 2));
    if ( *v50 >= (unsigned __int64)v9 )
    {
      if ( (__int64 *)v11 == v9 )
        goto LABEL_9;
      if ( *(_WORD *)(*v9 + 36) != 295 )
      {
        v60 = (__int64 **)(v9 + 1);
        do
        {
          v9 = (__int64 *)v60;
          if ( (__int64 **)v11 == v60 )
            goto LABEL_9;
          v9 = *v60++;
        }
        while ( *((_WORD *)v9 + 18) != 295 );
      }
    }
    else
    {
      v51 = (__int64 *)*v50;
      while ( 1 )
      {
        v11 = *v51;
        if ( *(_WORD *)(*v51 + 36) == 295 )
          break;
        if ( v9 == ++v51 )
          goto LABEL_9;
      }
      if ( v9 == v51 )
        goto LABEL_9;
    }
    v68 = v18 + 1;
    v52 = sub_B81B70(v21);
    if ( !v52 )
      goto LABEL_124;
    if ( v52 <= 3u )
      goto LABEL_48;
    if ( v52 > 6u )
      goto LABEL_124;
    if ( (sub_B81B00(v21) & 0x18) == 0 )
      goto LABEL_48;
LABEL_9:
    v22 = v18[2];
    if ( !v22 || (*(_BYTE *)(v22 + 29) & 1) == 0 )
      goto LABEL_11;
    v53 = sub_B8C3D0(v18[2], (__int64)v9, v16, v11, v12, v13);
    v11 = *v53;
    v9 = (__int64 *)(*v53 + 8LL * *((unsigned int *)v53 + 2));
    if ( *v53 >= (unsigned __int64)v9 )
    {
      if ( (__int64 *)v11 == v9 )
        goto LABEL_11;
      while ( *(_WORD *)(*v9 + 36) != 295 )
      {
        if ( (__int64 *)v11 == ++v9 )
          goto LABEL_11;
      }
    }
    else
    {
      v54 = (__int64 *)*v53;
      while ( 1 )
      {
        v11 = *v54;
        if ( *(_WORD *)(*v54 + 36) == 295 )
          break;
        if ( v9 == ++v54 )
          goto LABEL_11;
      }
      if ( v9 == v54 )
        goto LABEL_11;
    }
    v68 = v18 + 2;
    v55 = sub_B81B70(v22);
    if ( !v55 )
      goto LABEL_124;
    if ( v55 <= 3u )
      goto LABEL_48;
    if ( v55 > 6u )
      goto LABEL_124;
    if ( (sub_B81B00(v22) & 0x18) == 0 )
    {
LABEL_48:
      v28 = v65 == v68;
      goto LABEL_24;
    }
LABEL_11:
    v23 = v18[3];
    if ( !v23 || (*(_BYTE *)(v23 + 29) & 1) == 0 )
      goto LABEL_13;
    v56 = sub_B8C3D0(v18[3], (__int64)v9, v16, v11, v12, v13);
    v11 = *v56;
    v9 = (__int64 *)(*v56 + 8LL * *((unsigned int *)v56 + 2));
    if ( *v56 >= (unsigned __int64)v9 )
    {
      if ( (__int64 *)v11 == v9 )
        goto LABEL_13;
      while ( *(_WORD *)(*v9 + 36) != 295 )
      {
        if ( (__int64 *)v11 == ++v9 )
          goto LABEL_13;
      }
    }
    else
    {
      v57 = (__int64 *)*v56;
      while ( 1 )
      {
        v11 = *v57;
        if ( *(_WORD *)(*v57 + 36) == 295 )
          break;
        if ( v9 == ++v57 )
          goto LABEL_13;
      }
      if ( v9 == v57 )
        goto LABEL_13;
    }
    v58 = sub_B81B70(v23);
    if ( !v58 )
      goto LABEL_124;
    if ( v58 <= 3u )
      goto LABEL_66;
    if ( v58 > 6u )
LABEL_124:
      BUG();
    if ( (sub_B81B00(v23) & 0x18) == 0 )
    {
LABEL_66:
      v28 = v18 + 3 == v65;
      goto LABEL_24;
    }
LABEL_13:
    v18 += 4;
  }
  while ( v63 != v18 );
  v19 = v65 - v18;
LABEL_96:
  if ( v19 == 2 )
    goto LABEL_115;
  if ( v19 != 3 )
  {
    if ( v19 == 1 )
      goto LABEL_99;
    goto LABEL_100;
  }
  if ( !sub_1AE9CA0(*v18, (__int64)v9, v16, v11, v12, v13) )
  {
    v28 = v18 == v65;
LABEL_24:
    if ( v28 )
      goto LABEL_100;
    v29 = 4445;
    goto LABEL_26;
  }
  ++v18;
LABEL_115:
  if ( !sub_1AE9CA0(*v18, (__int64)v9, v16, v11, v12, v13) )
    goto LABEL_23;
  ++v18;
LABEL_99:
  if ( !sub_1AE9CA0(*v18, (__int64)v9, v16, v11, v12, v13) )
  {
LABEL_23:
    v28 = v65 == v18;
    goto LABEL_24;
  }
LABEL_100:
  v61 = (_QWORD *)sub_168B6C0((__int64)a1);
  return sub_EFFF40(v61, a4, a5, a2, a3, (__int64)a6);
}
