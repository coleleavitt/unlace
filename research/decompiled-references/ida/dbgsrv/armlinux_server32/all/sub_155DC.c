/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_155DC
// Address: 0x000155DC

//----- (000155DC) --------------------------------------------------------
char *__fastcall sub_155DC(int a1, char **a2)
{
  char *v3; // r0
  char *v4; // r5
  int v5; // r7
  char *i; // r4
  char *v7; // r4
  void *v8; // r0
  void *v9; // r0
  int v10; // r5
  int v11; // r0
  size_t v12; // r0
  size_t v13; // r7
  int v14; // r0
  unsigned int v15; // r9
  size_t v16; // r7
  const char *v17; // r10
  char *v18; // r0
  FILE *v19; // r0
  FILE *v20; // r7
  signed int v21; // r5
  unsigned int v22; // r9
  unsigned int v23; // r7
  char *v24; // r1
  size_t v25; // r5
  signed int v26; // r7
  size_t v27; // r10
  char *v28; // r1
  size_t v29; // r5
  size_t v30; // r5
  char *v31; // r3
  unsigned int v32; // r5
  char *v33; // r3
  void *v34; // r0
  void *v35; // r0
  char *v36; // r4
  unsigned int v38; // r9
  void *v39; // r0
  char *v40; // r0
  __int64 v41; // kr08_8
  int v42; // r9
  char *v43; // r5
  char *v44; // r10
  int v45; // r3
  int v46; // r3
  int v47; // r3
  int v48; // r3
  int v49; // r3
  void *v50; // r0
  void *v51; // r0
  unsigned int v52; // r10
  char *v53; // r1
  size_t v54; // r9
  char *v55; // r1
  size_t v56; // r9
  signed int v57; // r9
  char *s; // [sp+8h] [bp-54B4h]
  __pid_t v60; // [sp+Ch] [bp-54B0h]
  unsigned int v61; // [sp+18h] [bp-54A4h]
  size_t v62; // [sp+18h] [bp-54A4h]
  signed int v63; // [sp+20h] [bp-549Ch]
  unsigned int v64; // [sp+28h] [bp-5494h]
  char *v65; // [sp+34h] [bp-5488h] BYREF
  size_t v66; // [sp+38h] [bp-5484h]
  int v67; // [sp+3Ch] [bp-5480h]
  int v68; // [sp+40h] [bp-547Ch]
  void *v69; // [sp+44h] [bp-5478h] BYREF
  size_t v70; // [sp+48h] [bp-5474h]
  unsigned int v71; // [sp+4Ch] [bp-5470h]
  int v72; // [sp+50h] [bp-546Ch]
  char *v73; // [sp+54h] [bp-5468h] BYREF
  unsigned int v74; // [sp+58h] [bp-5464h]
  unsigned int v75; // [sp+5Ch] [bp-5460h]
  int v76; // [sp+60h] [bp-545Ch]
  void *v77; // [sp+64h] [bp-5458h]
  size_t v78; // [sp+68h] [bp-5454h]
  size_t v79; // [sp+6Ch] [bp-5450h]
  int v80; // [sp+70h] [bp-544Ch]
  void *v81; // [sp+74h] [bp-5448h]
  size_t v82; // [sp+78h] [bp-5444h]
  size_t v83; // [sp+7Ch] [bp-5440h]
  char v84[4]; // [sp+80h] [bp-543Ch] BYREF
  char v85[52]; // [sp+84h] [bp-5438h] BYREF
  int v86; // [sp+20A0h] [bp-341Ch]
  int v87; // [sp+20A8h] [bp-3414h]
  char v88[972]; // [sp+40B4h] [bp-1408h] BYREF
  _BYTE v89[4044]; // [sp+44B4h] [bp-1008h] BYREF

  v60 = getpid();
  v3 = *a2;
  if ( *a2 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = *a2; ; i = *a2 )
      {
        v7 = &i[32 * v5];
        v8 = *((void **)v7 + 5);
        if ( v8 )
        {
          *((_DWORD *)v7 + 6) = 0;
          sub_77F70(v8);
        }
        v9 = *((void **)v7 + 1);
        if ( v9 )
        {
          *((_DWORD *)v7 + 2) = 0;
          sub_77F70(v9);
        }
        if ( v4 == (char *)++v5 )
          break;
      }
      v3 = *a2;
    }
    a2[1] = nullptr;
    sub_77F70(v3);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  v87 = 0;
  v86 = 0;
  if ( !sub_7678C("/proc/*", (int)v84, 0x4000) )
  {
    while ( 1 )
    {
      v10 = v85[0] & 0x80;
      if ( v10 || (unsigned int)(unsigned __int8)v85[0] - 48 > 9 )
        goto LABEL_48;
      v69 = nullptr;
      v70 = 0;
      v71 = 0;
      v73 = nullptr;
      v74 = 0;
      v75 = 0;
      v11 = strtol(v85, nullptr, 10);
      v68 = v11;
      if ( v60 != v11 )
      {
        if ( (*(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)a1 + 328))(a1, v11, v88, 1024) )
          break;
      }
      if ( v73 )
      {
        v74 = 0;
        sub_77F70(v73);
      }
      v35 = v69;
      if ( !v69 )
        goto LABEL_48;
LABEL_47:
      v70 = 0;
      sub_77F70(v35);
LABEL_48:
      if ( sub_76708((int)v84) )
        goto LABEL_49;
    }
    v12 = strlen(v88);
    v13 = v12;
    if ( v12 )
    {
      v38 = v12 + 1;
      v39 = v69;
      if ( v38 > v71 )
      {
        v39 = sub_78018((int)&v69, v69, v38, 1u);
        v69 = v39;
      }
      v70 = v38;
      memmove(v39, v88, v13);
      *((_BYTE *)v69 + v13) = 0;
    }
    else
    {
      v70 = 0;
    }
    v14 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 332))(a1, v68);
    v72 = v14;
    if ( v14 == 4 )
    {
      v16 = 4;
      v15 = 5;
      v17 = "[32]";
    }
    else if ( v14 == 8 )
    {
      v15 = 5;
      v16 = 4;
      v17 = "[64]";
    }
    else
    {
      v15 = 4;
      v16 = 3;
      v17 = "[x]";
    }
    v18 = v73;
    if ( v75 < v15 )
    {
      v18 = (char *)sub_78018((int)&v73, v73, v15, 1u);
      v73 = v18;
    }
    v74 = v15;
    memcpy(v18, v17, v16);
    v73[v16] = 0;
    sub_7EBB4(v89, 4096, "/proc/%u/cmdline", v68);
    v19 = sub_75D50((int)v89, (unsigned __int8 *)"r");
    v20 = v19;
    if ( !v19 || (v63 = sub_77788(v19, v89, 4096)) == 0 )
    {
      v21 = v74;
      v22 = v74 - 1;
      v23 = v74 + 1;
      if ( !v74 )
      {
        v23 = 2;
        v21 = 1;
        v22 = 0;
      }
      v24 = v73;
      if ( v75 < v23 )
      {
        v24 = (char *)sub_78018((int)&v73, v73, v23, 1u);
        v73 = v24;
      }
      v74 = v23;
      v24[v21] = 0;
      v73[v22] = 32;
      if ( !v70 )
      {
        v79 = 0;
        v77 = nullptr;
        v78 = 0;
        v76 = v68;
        goto LABEL_40;
      }
      v25 = v70 - 1;
      if ( v70 == 1 )
      {
        v29 = 1;
      }
      else
      {
        v26 = v74;
        v27 = v70 - 1;
        if ( v74 )
        {
          v26 = v74 - 1;
          v27 = v25 + v74 - 1;
        }
        v28 = v73;
        if ( v27 + 1 > v75 )
        {
          v28 = (char *)sub_78018((int)&v73, v73, v27 + 1, 1u);
          v73 = v28;
        }
        v74 = v27 + 1;
        v28[v27] = 0;
        memcpy(&v73[v26], v69, v25);
        v29 = v70;
      }
LABEL_37:
      v77 = nullptr;
      v76 = v68;
      v78 = 0;
      v79 = 0;
      if ( v29 )
      {
        v77 = sub_77FEC(v29);
        v79 = v29;
        memcpy(v77, v69, v29);
        v78 = v29;
      }
LABEL_40:
      v30 = v74;
      v81 = nullptr;
      v82 = 0;
      v83 = 0;
      v80 = v72;
      if ( v74 )
      {
        v81 = sub_77FEC(v74);
        v83 = v30;
        memcpy(v81, v73, v30);
        v82 = v30;
      }
      v32 = (unsigned int)a2[2];
      v31 = a2[1];
      if ( (unsigned int)(v31 + 1) > v32 )
      {
        v40 = (char *)sub_78018((int)a2, nullptr, (unsigned int)(v31 + 1), 0x20u);
        v41 = *(_QWORD *)(a2 + 1);
        s = v40;
        a2[2] = (char *)v32;
        v42 = v41 - 1;
        v43 = *a2;
        if ( (int)v41 - 1 >= 0 )
        {
          v44 = v40;
          do
          {
            *(_DWORD *)v44 = *(_DWORD *)v43;
            *((_DWORD *)v44 + 1) = *((_DWORD *)v43 + 1);
            v45 = *((_DWORD *)v43 + 2);
            *((_DWORD *)v43 + 1) = 0;
            *((_DWORD *)v44 + 2) = v45;
            v46 = *((_DWORD *)v43 + 3);
            *((_DWORD *)v43 + 2) = 0;
            *((_DWORD *)v44 + 3) = v46;
            v47 = *((_DWORD *)v43 + 4);
            *((_DWORD *)v43 + 3) = 0;
            *((_DWORD *)v44 + 4) = v47;
            *((_DWORD *)v44 + 5) = *((_DWORD *)v43 + 5);
            v48 = *((_DWORD *)v43 + 6);
            *((_DWORD *)v43 + 5) = 0;
            *((_DWORD *)v44 + 6) = v48;
            v49 = *((_DWORD *)v43 + 7);
            *((_DWORD *)v43 + 6) = 0;
            *((_DWORD *)v44 + 7) = v49;
            v50 = *((void **)v43 + 5);
            *((_DWORD *)v43 + 7) = 0;
            if ( v50 )
            {
              *((_DWORD *)v43 + 6) = 0;
              sub_77F70(v50);
            }
            v51 = *((void **)v43 + 1);
            if ( v51 )
            {
              *((_DWORD *)v43 + 2) = 0;
              sub_77F70(v51);
            }
            --v42;
            v43 += 32;
            v44 += 32;
          }
          while ( v42 != -1 );
          v43 = *a2;
        }
        sub_77F70(v43);
        v31 = a2[1];
        *a2 = s;
        a2[2] = (char *)HIDWORD(v41);
      }
      else
      {
        s = *a2;
      }
      v33 = &s[32 * (_DWORD)v31];
      *(_DWORD *)v33 = v76;
      *((_DWORD *)v33 + 1) = v77;
      *((_DWORD *)v33 + 2) = v78;
      *((_DWORD *)v33 + 3) = v79;
      *((_DWORD *)v33 + 4) = v80;
      *((_DWORD *)v33 + 5) = v81;
      v34 = v73;
      *((_DWORD *)v33 + 6) = v82;
      *((_DWORD *)v33 + 7) = v83;
      ++a2[1];
      if ( v34 )
      {
        v74 = 0;
        sub_77F70(v34);
      }
      v35 = v69;
      if ( !v69 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v89[v63] = 0;
    sub_778BC(v20);
    if ( v63 <= 0 )
    {
LABEL_85:
      v29 = v70;
      goto LABEL_37;
    }
    while ( 1 )
    {
      v65 = nullptr;
      v66 = 0;
      v67 = 0;
      v56 = strlen(&v89[v10]);
      v65 = (char *)sub_78018((int)&v65, nullptr, v56 + 1, 1u);
      v66 = v56 + 1;
      memmove(v65, &v89[v10], v56);
      v65[v56] = 0;
      sub_6CE94((const char **)&v65);
      v57 = v74;
      if ( v74 )
      {
        v52 = v74 + 1;
        v61 = v74 - 1;
        v53 = v73;
        if ( v75 >= v74 + 1 )
          goto LABEL_72;
      }
      else
      {
        v52 = 2;
        v61 = 0;
        v57 = 1;
        v53 = v73;
        if ( v75 >= 2 )
          goto LABEL_72;
      }
      v53 = (char *)sub_78018((int)&v73, v53, v52, 1u);
      v73 = v53;
LABEL_72:
      v74 = v52;
      v53[v57] = 0;
      v73[v61] = 32;
      if ( v66 )
      {
        v54 = v66 - 1;
        if ( v66 != 1 )
        {
          if ( v74 )
          {
            v64 = v74 - 1;
            v62 = v74 - 1 + v54;
          }
          else
          {
            v64 = 0;
            v62 = v66 - 1;
          }
          v55 = v73;
          if ( v62 + 1 > v75 )
          {
            v55 = (char *)sub_78018((int)&v73, v73, v62 + 1, 1u);
            v73 = v55;
          }
          v74 = v62 + 1;
          v55[v62] = 0;
          memcpy(&v73[v64], v65, v54);
        }
      }
      v10 += 1 + strlen(&v89[v10]);
      if ( v65 )
      {
        v66 = 0;
        sub_77F70(v65);
      }
      if ( v63 <= v10 )
        goto LABEL_85;
    }
  }
LABEL_49:
  v36 = a2[1];
  sub_767CC((int)v84);
  return v36;
}
