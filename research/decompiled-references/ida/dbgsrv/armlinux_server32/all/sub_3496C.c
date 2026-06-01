/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3496C
// Address: 0x0003496C

//----- (0003496C) --------------------------------------------------------
int __fastcall sub_3496C(int a1, int (***a2)())
{
  int v3; // r0
  bool v4; // r9
  int *v5; // r3
  int (**v6)(); // r3
  int v7; // r11
  void *v8; // r0
  int v9; // r7
  int v10; // r9
  void *v11; // r6
  int v12; // r10
  int v13; // r6
  void *v14; // r0
  void *v15; // r0
  void *v16; // r0
  int v17; // r7
  int v18; // r6
  void *v19; // r5
  int v20; // r9
  int v21; // r5
  void *v22; // r0
  void *v23; // r0
  unsigned int v25; // r5
  int v26; // r3
  unsigned __int64 v27; // r0
  __int64 v28; // r0
  void *v29; // r0
  char *v30; // r6
  int (*v31)(); // r3
  int *v32; // r1
  void *v33; // r3
  unsigned __int64 v34; // r0
  _DWORD *v35; // r11
  int (*v36)(); // r1
  bool v37; // cf
  int (*v38)(); // r3
  int *v39; // r1
  void *v40; // r3
  int (*v41)(); // r3
  int *v42; // r1
  void *v43; // r3
  unsigned __int64 v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  unsigned int v48; // [sp+28h] [bp-43Ch] BYREF
  __int64 v49; // [sp+2Ch] [bp-438h] BYREF
  int v50; // [sp+34h] [bp-430h]
  unsigned int v51; // [sp+38h] [bp-42Ch] BYREF
  int v52; // [sp+3Ch] [bp-428h]
  int v53; // [sp+40h] [bp-424h]
  int v54; // [sp+44h] [bp-420h]
  _DWORD *v55; // [sp+48h] [bp-41Ch] BYREF
  void *v56; // [sp+4Ch] [bp-418h]
  int v57; // [sp+50h] [bp-414h]
  int v58; // [sp+54h] [bp-410h]
  char v59; // [sp+58h] [bp-40Ch]
  _DWORD v60[4]; // [sp+88h] [bp-3DCh] BYREF
  void *v61; // [sp+98h] [bp-3CCh]
  int v62; // [sp+9Ch] [bp-3C8h]
  int v63; // [sp+A4h] [bp-3C0h]
  _DWORD v64[4]; // [sp+B0h] [bp-3B4h] BYREF
  char *v65; // [sp+C0h] [bp-3A4h]
  unsigned int v66; // [sp+C4h] [bp-3A0h]
  unsigned int v67; // [sp+E4h] [bp-380h]
  unsigned int v68; // [sp+F4h] [bp-370h]
  unsigned int v69; // [sp+104h] [bp-360h]
  char v70; // [sp+138h] [bp-32Ch]
  void *v71; // [sp+160h] [bp-304h]
  int v72; // [sp+164h] [bp-300h]
  __int64 v73[15]; // [sp+190h] [bp-2D4h] BYREF
  bool (__fastcall *v74)(int, int, int, int); // [sp+208h] [bp-25Ch]
  unsigned __int8 v75; // [sp+210h] [bp-254h]
  unsigned __int8 v76; // [sp+211h] [bp-253h]
  __int64 v77; // [sp+22Ch] [bp-238h]
  void *v78; // [sp+254h] [bp-210h]
  int v79; // [sp+258h] [bp-20Ch]
  int v80; // [sp+260h] [bp-204h]
  int s[123]; // [sp+270h] [bp-1F4h] BYREF

  sub_30B7C((int)v60, a1, 0);
  v74 = sub_22E80;
  if ( !sub_2A2D4((int)v60) )
    goto LABEL_116;
  v3 = sub_2A6F8((int)v60);
  v4 = v3;
  if ( !v3 || (unsigned int)v75 - 1 > 1 || (unsigned int)v76 - 1 > 1 )
    goto LABEL_116;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  if ( !v77 )
    goto LABEL_8;
  if ( !sub_30DBC((int)v60) )
  {
LABEL_116:
    v7 = -1;
    goto LABEL_29;
  }
  dword_D49E8 = v63;
LABEL_8:
  sub_33254((int)v60);
  v51 = v64[0];
  v52 = v64[1];
  v53 = v64[2];
  v54 = v64[3];
  if ( !v64[0] )
  {
    v51 = v60[0];
    v52 = v60[1];
    v53 = v60[2];
    v54 = v60[3];
  }
  v5 = s;
  do
  {
    *(_QWORD *)v5 = 0;
    v5 += 8;
    *((_QWORD *)v5 - 3) = 0;
    *((_QWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 4) = 0;
    *(v5 - 1) = 0;
  }
  while ( &s[120] != v5 );
  memset(s, 0, 0x1E8u);
  if ( !v51 )
    goto LABEL_13;
  v49 = 0;
  v50 = 0;
  LODWORD(v49) = sub_78018((int)&v49, nullptr, 0xAu, 0x10u);
  HIDWORD(v28) = &v49;
  LODWORD(v28) = v60;
  if ( sub_32080(v28, &v51) && sub_2EF58((int)v60, (int)s, &v49) && ((unsigned int)a2[1] & 4) != 0 )
  {
    sub_2AD00((int)v60, (int)v73, s);
    v35 = (_DWORD *)v49;
    if ( 16 * HIDWORD(v49) )
    {
      while ( 1 )
      {
        v55 = nullptr;
        v56 = nullptr;
        v57 = 0;
        v37 = 1;
        if ( (*v35 != 0) + v35[1] == 1 )
          v37 = (unsigned int)(*v35 - 1) >= 0x1D;
        if ( !v37 )
        {
          switch ( *v35 )
          {
            case 1:
            case 0xE:
            case 0xF:
            case 0x1D:
              sub_325D8((int)v60, (int)&v55, v73, v35[2]);
              v36 = (*a2)[3];
              if ( v36 == sub_15BD0 )
                goto LABEL_126;
              goto LABEL_129;
            default:
              break;
          }
        }
        v36 = (*a2)[3];
        if ( v36 != sub_15BD0 )
        {
LABEL_129:
          if ( ((int (__fastcall *)(int (***)()))v36)(a2) )
          {
            if ( v55 )
            {
              v56 = nullptr;
              sub_77F70(v55);
            }
            goto LABEL_65;
          }
LABEL_126:
          if ( v55 )
          {
            v56 = nullptr;
            sub_77F70(v55);
          }
        }
        v29 = (void *)v49;
        v35 += 4;
        if ( v35 == (_DWORD *)(v49 + 16 * HIDWORD(v49)) )
          goto LABEL_66;
      }
    }
    v29 = (void *)v49;
    if ( !(_DWORD)v49 )
    {
LABEL_13:
      v6 = a2[1];
      if ( ((unsigned __int8)v6 & 2) == 0 )
        goto LABEL_14;
      goto LABEL_68;
    }
  }
  else
  {
LABEL_65:
    v29 = (void *)v49;
LABEL_66:
    if ( !v29 )
      goto LABEL_13;
  }
  HIDWORD(v49) = 0;
  sub_77F70(v29);
  v6 = a2[1];
  if ( ((unsigned __int8)v6 & 2) == 0 )
    goto LABEL_14;
LABEL_68:
  if ( !v68 )
    goto LABEL_14;
  if ( !v70 )
    sub_14960();
  if ( v68 >= v66 || (v30 = &v65[64 * v68]) == nullptr )
  {
LABEL_14:
    v7 = (unsigned __int8)v6 & 1;
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v25 = v67;
      if ( v69 | v67 )
      {
        if ( v69 )
        {
          if ( !v70 )
            sub_14960();
          if ( v69 >= v66 )
            HIDWORD(v34) = 0;
          else
            HIDWORD(v34) = v65;
          if ( v69 < v66 )
            HIDWORD(v34) += v69 << 6;
          LODWORD(v34) = v60;
          v7 = sub_32828(v34, 1, a2);
          v4 = v7 == 0;
        }
        else
        {
          v7 = 0;
        }
        if ( v25 )
          v26 = v4;
        else
          v26 = 0;
        if ( v26 )
        {
          if ( !v70 )
            sub_14960();
          LODWORD(v27) = v60;
          if ( v25 >= v66 )
            HIDWORD(v27) = 0;
          else
            HIDWORD(v27) = v65;
          if ( v25 < v66 )
            HIDWORD(v27) += v25 << 6;
          v7 = sub_32828(v27, 2, a2);
        }
      }
      else if ( sub_2F66C((int)s, &v55, 1) )
      {
        HIDWORD(v44) = &v55;
        LODWORD(v44) = v60;
        v7 = sub_32828(v44, 2, a2);
      }
      else
      {
        v7 = 0;
      }
      v6 = a2[1];
    }
    v55 = v60;
    v56 = nullptr;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    if ( ((unsigned __int8)v6 & 0x10) != 0 )
    {
      if ( sub_33B98((int)v60, (int)&v55) )
      {
        v49 = 0;
        v50 = 0;
        if ( sub_3489C((int)&v55, (int)&v49) )
        {
          v38 = (*a2)[4];
          if ( HIDWORD(v49) )
            v39 = (int *)v49;
          else
            v39 = &dword_8DB98;
          if ( v38 == sub_15BD4 )
          {
            v40 = (void *)v49;
            v7 = 0;
          }
          else
          {
            v47 = ((int (__fastcall *)(int (***)(), int *))v38)(a2, v39);
            v40 = (void *)v49;
            v7 = v47;
            if ( v47 )
            {
              if ( (_DWORD)v49 )
              {
                HIDWORD(v49) = 0;
                sub_77F70((void *)v49);
              }
              goto LABEL_18;
            }
          }
        }
        else
        {
          v40 = (void *)v49;
        }
        if ( v40 )
        {
          HIDWORD(v49) = 0;
          sub_77F70(v40);
        }
      }
      if ( ((unsigned int)a2[1] & 0x20) == 0 )
        goto LABEL_18;
    }
    else if ( ((unsigned __int8)v6 & 0x20) == 0 )
    {
      goto LABEL_29;
    }
    v49 = 0;
    v50 = 0;
    if ( v70 )
    {
      if ( sub_3393C((int)v64, (int)&v49, &v48) )
      {
        v41 = (*a2)[5];
        if ( HIDWORD(v49) )
          v42 = (int *)v49;
        else
          v42 = &dword_8DB98;
        if ( v41 == sub_15BD8 )
        {
          v43 = (void *)v49;
          v7 = 0;
        }
        else
        {
          v46 = ((int (__fastcall *)(int (***)(), int *, unsigned int))v41)(a2, v42, v48);
          v43 = (void *)v49;
          v7 = v46;
          if ( v46 )
          {
            if ( (_DWORD)v49 )
            {
              HIDWORD(v49) = 0;
              sub_77F70((void *)v49);
            }
            goto LABEL_18;
          }
        }
      }
      else
      {
        v43 = (void *)v49;
      }
      if ( v43 )
      {
        HIDWORD(v49) = 0;
        sub_77F70(v43);
      }
    }
LABEL_18:
    v8 = v56;
    if ( v56 )
    {
      v9 = v57;
      if ( v57 )
      {
        v10 = 0;
        v11 = v56;
        v12 = 0;
        while ( 1 )
        {
          v13 = (int)v11 + v10;
          v14 = *(void **)(v13 + 12);
          if ( v14 )
          {
            *(_DWORD *)(v13 + 16) = 0;
            sub_77F70(v14);
          }
          v15 = *(void **)v13;
          if ( *(_DWORD *)v13 )
          {
            *(_DWORD *)(v13 + 4) = 0;
            sub_77F70(v15);
          }
          ++v12;
          v10 += 28;
          if ( v9 == v12 )
            break;
          v11 = v56;
        }
        v8 = v56;
      }
      v57 = 0;
      sub_77F70(v8);
    }
    goto LABEL_29;
  }
  v55 = nullptr;
  v56 = nullptr;
  v57 = 0;
  sub_32430((int)v60, (void **)&v55, *((_DWORD *)v30 + 6), *((_DWORD *)v30 + 7));
  v31 = (*a2)[1];
  if ( v56 )
    v32 = v55;
  else
    v32 = &dword_8DB98;
  if ( v31 == sub_15BC8 )
  {
    v33 = v55;
LABEL_77:
    if ( v33 )
    {
      v56 = nullptr;
      sub_77F70(v33);
    }
    v6 = a2[1];
    goto LABEL_14;
  }
  v45 = ((int (__fastcall *)(int (***)(), int *))v31)(a2, v32);
  v33 = v55;
  v7 = v45;
  if ( !v45 )
    goto LABEL_77;
  if ( v55 )
  {
    v56 = nullptr;
    sub_77F70(v55);
  }
LABEL_29:
  if ( v80 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 4))(v80);
  if ( v78 )
  {
    v79 = 0;
    sub_77F70(v78);
  }
  v16 = v71;
  if ( v71 )
  {
    v17 = v72;
    if ( v72 )
    {
      v18 = 0;
      v19 = v71;
      v20 = 0;
      while ( 1 )
      {
        v21 = (int)v19 + v18;
        v22 = *(void **)(v21 + 12);
        if ( v22 )
        {
          *(_DWORD *)(v21 + 16) = 0;
          sub_77F70(v22);
        }
        v23 = *(void **)v21;
        if ( *(_DWORD *)v21 )
        {
          *(_DWORD *)(v21 + 4) = 0;
          sub_77F70(v23);
        }
        ++v20;
        v18 += 68;
        if ( v17 == v20 )
          break;
        v19 = v71;
      }
      v16 = v71;
    }
    v72 = 0;
    sub_77F70(v16);
  }
  if ( v65 )
  {
    v66 = 0;
    sub_77F70(v65);
  }
  if ( v61 )
  {
    v62 = 0;
    sub_77F70(v61);
  }
  return v7;
}
// 8DB98: using guessed type int dword_8DB98;
// D49E8: using guessed type int dword_D49E8;
