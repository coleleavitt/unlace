/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415768
// Address: 0x0000000000415768

//----- (0000000000415768) ----------------------------------------------------
__int64 __fastcall sub_415768(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x25
  __int64 v5; // x22
  __int64 v6; // x21
  void **v7; // x0
  void *v8; // x3
  void *v9; // x1
  void *v10; // x2
  unsigned __int64 v11; // x1
  __int64 v12; // x19
  size_t v13; // x23
  __int64 v14; // x1
  size_t v15; // x28
  __int64 v16; // x3
  char v17; // w19
  char *v18; // x0
  __int64 v19; // x5
  char *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x19
  __int64 (**v23)(); // x25
  __int64 v24; // x23
  void **v25; // x22
  void **v26; // x26
  char *v27; // x21
  unsigned __int64 v28; // x27
  const char **v29; // x22
  const char *v30; // x1
  _QWORD *v31; // x0
  _QWORD *v32; // x2
  const char *v33; // x28
  unsigned __int64 v34; // x0
  double v35; // d0
  const char *v36; // x4
  char *v37; // x0
  __int64 v38; // x22
  __int64 v39; // x21
  __int64 v40; // x20
  char *v41; // x19
  void *v42; // x0
  void *v43; // x0
  size_t v46; // x0
  size_t v47; // x28
  void *v48; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x21
  int *v52; // x19
  void *v53; // x0
  void *v54; // x0
  void *v55; // x0
  void *v56; // x0
  __int64 v57; // x3
  void *v58; // [xsp+60h] [xbp-100h]
  void *v59; // [xsp+68h] [xbp-F8h]
  __int64 v60; // [xsp+70h] [xbp-F0h]
  char v61; // [xsp+7Ch] [xbp-E4h]
  void *v62; // [xsp+88h] [xbp-D8h] BYREF
  __int64 v63; // [xsp+90h] [xbp-D0h]
  unsigned __int64 v64; // [xsp+98h] [xbp-C8h]
  __int64 (**v65)(); // [xsp+A0h] [xbp-C0h] BYREF
  int v66; // [xsp+A8h] [xbp-B8h]
  void **p_ptr; // [xsp+B0h] [xbp-B0h]
  void *ptr; // [xsp+B8h] [xbp-A8h] BYREF
  __int64 v69; // [xsp+C0h] [xbp-A0h]
  __int64 v70; // [xsp+C8h] [xbp-98h]
  __int64 v71; // [xsp+108h] [xbp-58h] BYREF
  __int64 v72; // [xsp+110h] [xbp-50h]
  char v73; // [xsp+118h] [xbp-48h]
  int v74; // [xsp+11Ch] [xbp-44h]
  void *dest; // [xsp+120h] [xbp-40h] BYREF
  unsigned __int64 v76; // [xsp+128h] [xbp-38h]
  unsigned __int64 v77; // [xsp+130h] [xbp-30h]
  __int64 v78; // [xsp+138h] [xbp-28h]
  __int64 v79; // [xsp+140h] [xbp-20h]
  __int64 v80; // [xsp+148h] [xbp-18h]
  int v81; // [xsp+150h] [xbp-10h] BYREF
  __int64 v82; // [xsp+158h] [xbp-8h]

  v4 = a2[1];
  v62 = nullptr;
  v63 = 0;
  v64 = 0;
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v12 = *a2 + v5;
        v13 = *(_QWORD *)(v12 + 24);
        if ( !v13 )
          break;
        v7 = (void **)sub_408388((__int64 *)&v62, *(char **)(v12 + 16));
        if ( !v7 )
        {
          v57 = *(_QWORD *)(v12 + 8);
          ptr = *(void **)v12;
          v69 = v57;
          v59 = sub_491248(v13);
          memcpy(v59, *(const void **)(v12 + 16), v13);
          goto LABEL_16;
        }
LABEL_4:
        v8 = *v7;
        v9 = *(void **)v12;
        if ( *(_QWORD *)v12 < (unsigned __int64)*v7 )
        {
          v8 = *(void **)v12;
          *v7 = v9;
        }
        v10 = v7[1];
        if ( v9 > v10 )
        {
          v10 = v9;
          v7[1] = v9;
        }
        v11 = *(_QWORD *)(v12 + 8);
        if ( v11 < (unsigned __int64)v8 )
          *v7 = (void *)v11;
        if ( v11 > (unsigned __int64)v10 )
          v7[1] = (void *)v11;
        ++v6;
        v5 += 80;
        if ( v6 == v4 )
          goto LABEL_21;
      }
      v7 = (void **)sub_408388((__int64 *)&v62, (char *)&qword_4B2D48);
      if ( v7 )
        goto LABEL_4;
      v14 = *(_QWORD *)(v12 + 8);
      v59 = nullptr;
      ptr = *(void **)v12;
      v69 = v14;
LABEL_16:
      v15 = *(_QWORD *)(v12 + 48);
      v58 = nullptr;
      if ( v15 )
      {
        v58 = sub_491248(v15);
        memcpy(v58, *(const void **)(v12 + 40), v15);
      }
      v16 = v63;
      v60 = *(_QWORD *)(v12 + 64);
      v61 = *(_BYTE *)(v12 + 72);
      v17 = *(_BYTE *)(v12 + 73);
      v18 = (char *)v62;
      if ( v63 + 1 > v64 )
      {
        v18 = (char *)sub_491288((__int64)&v62, v62, v63 + 1, 0x50u);
        v16 = v63;
        v62 = v18;
      }
      ++v6;
      v19 = v69;
      v20 = &v18[80 * v16];
      v5 += 80;
      *(_QWORD *)v20 = ptr;
      *((_QWORD *)v20 + 1) = v19;
      *((_QWORD *)v20 + 2) = v59;
      *((_QWORD *)v20 + 3) = v13;
      *((_QWORD *)v20 + 4) = v13;
      *((_QWORD *)v20 + 5) = v58;
      *((_QWORD *)v20 + 6) = v15;
      v21 = v63;
      *((_QWORD *)v20 + 7) = v15;
      *((_QWORD *)v20 + 8) = v60;
      v20[72] = v61;
      v20[73] = v17;
      v63 = v21 + 1;
    }
    while ( v6 != v4 );
  }
LABEL_21:
  v22 = *(_QWORD *)(a1 + 1888);
  v23 = (__int64 (**)())(a1 + 1872);
  v24 = (__int64)&qword_4B2D48;
  v25 = &v62;
  v26 = (void **)&v71;
  while ( (__int64 (**)())v22 != v23 )
  {
    while ( 1 )
    {
      v27 = (char *)&qword_4B2D48;
      if ( *(_QWORD *)(v22 + 64) )
        v27 = *(char **)(v22 + 56);
      if ( !sub_408388((__int64 *)&v62, v27) )
        break;
      v22 = sub_49F6E8(v22);
      if ( (__int64 (**)())v22 == v23 )
        goto LABEL_27;
    }
    if ( !(unsigned __int8)sub_40EEB8((_QWORD *)a1, 8, v27) )
    {
      dest = nullptr;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v71 = 0xFFFFFFFFLL;
      v72 = -1;
      v73 = 0;
      v74 = 0;
      sub_482FB0((__int64)&v71, 9u);
      v28 = v74 & 0xFFFFFFF;
      if ( (unsigned int)(v28 - 9) > 1 && (_DWORD)v28 != 3 )
      {
        if ( !under_debugger )
          sub_492270(3297);
        __break(0x3E8u);
        goto LABEL_93;
      }
      if ( v27 && (v46 = strlen(v27), (v47 = v46) != 0) )
      {
        v28 = v46 + 1;
        v48 = dest;
        if ( v28 > v77 )
        {
          v48 = sub_491288((__int64)&dest, dest, v28, 1u);
          dest = v48;
        }
        v76 = v28;
        memmove(v48, v27, v47);
        *((_BYTE *)dest + v47) = 0;
        LODWORD(v28) = v74 & 0xFFFFFFF;
      }
      else
      {
        v76 = 0;
      }
      LODWORD(v71) = *(_DWORD *)(a1 + 2044);
      HIDWORD(v71) = v71;
      v72 = -1;
      v73 = 1;
      if ( (_DWORD)v28 )
      {
        v49 = *(_QWORD *)(a1 + 136);
        if ( v49 == *(_QWORD *)(a1 + 144) )
        {
          sub_410CC8((_QWORD *)(a1 + 120), (__int64)&v71);
        }
        else
        {
          *(_QWORD *)(v49 - 72) = 0xFFFFFFFFLL;
          v50 = v49 - 72;
          *(_QWORD *)(v50 + 8) = -1;
          *(_BYTE *)(v50 + 16) = 0;
          *(_DWORD *)(v50 + 20) = 0;
          sub_483128(v50, (__int64)&v71);
          *(_QWORD *)(a1 + 136) -= 72LL;
        }
        *(_BYTE *)(a1 + 2116) = 0;
      }
      sub_482ED0((__int64)&v71);
    }
    v51 = sub_49F6E8(v22);
    v52 = sub_49FAC0((int *)v22, (_QWORD *)(a1 + 1872));
    v53 = *((void **)v52 + 22);
    if ( v53 )
    {
      *((_QWORD *)v52 + 23) = 0;
      j__free(v53);
    }
    v54 = *((void **)v52 + 19);
    if ( v54 )
    {
      *((_QWORD *)v52 + 20) = 0;
      j__free(v54);
    }
    sub_40D410((__int64)(v52 + 26), *((_QWORD **)v52 + 15));
    v55 = *((void **)v52 + 10);
    if ( v55 )
    {
      *((_QWORD *)v52 + 11) = 0;
      j__free(v55);
    }
    v56 = *((void **)v52 + 7);
    if ( v56 )
    {
      *((_QWORD *)v52 + 8) = 0;
      j__free(v56);
    }
    j__free_0(v52);
    v22 = v51;
    --*(_QWORD *)(a1 + 1904);
  }
LABEL_27:
  if ( (int)v63 > 0 )
  {
    v28 = (unsigned __int64)&v81;
    v26 = &v62;
    v23 = off_519B20;
    v27 = nullptr;
    v24 = 80 * ((unsigned int)(v63 - 1) + 1LL);
    do
    {
      v29 = (const char **)&v27[(_QWORD)v62];
      if ( *(_QWORD *)&v27[(_QWORD)v62 + 24] > 1u )
      {
        if ( *(_BYTE *)(a1 + 861)
          || (!*(_QWORD *)(a1 + 592) ? (v30 = (const char *)&qword_4B2D48) : (v30 = *(const char **)(a1 + 584)),
              strcmp(v29[2], v30)) )
        {
          v31 = *(_QWORD **)(a1 + 1880);
          v25 = (void **)*v29;
          if ( !v31 )
            goto LABEL_43;
          v32 = (_QWORD *)v22;
          do
          {
            while ( (unsigned __int64)v25 <= v31[4] )
            {
              v32 = v31;
              v31 = (_QWORD *)v31[2];
              if ( !v31 )
                goto LABEL_38;
            }
            v31 = (_QWORD *)v31[3];
          }
          while ( v31 );
LABEL_38:
          if ( (_QWORD *)v22 == v32 || (unsigned __int64)v25 < v32[4] )
          {
LABEL_43:
            if ( !*(_BYTE *)(a1 + 2053)
              && *(_DWORD *)(a1 + 2044) != -1
              && (unsigned int)sub_412600(a1, 0xFFFFFFFF, (__off64_t)v25, (void *)v28, 4, 0) == 4
              && v81 == 1179403647 )
            {
              ptr = nullptr;
              v69 = 0;
              v70 = 0;
              if ( *(_QWORD *)&v27[(_QWORD)v62 + 24] )
                v33 = *(const char **)&v27[(_QWORD)v62 + 16];
              else
LABEL_93:
                v33 = (const char *)&qword_4B2D48;
              v65 = v23;
              v66 = 4;
              p_ptr = &ptr;
              sub_42E470(v33, &v65, 0);
              v34 = sub_40C780(a1, v26, (unsigned __int64 *)&v27[(_QWORD)v62]);
              v36 = (const char *)ptr;
              if ( !v69 )
                v36 = (const char *)&qword_4B2D48;
              sub_414B68(a1, (const char *)v25, v34, v33, v36, v35);
              if ( ptr )
              {
                v69 = 0;
                j__free(ptr);
              }
            }
          }
        }
      }
      v27 += 80;
    }
    while ( (char *)v24 != v27 );
  }
  sub_412ED8(a1);
  v37 = (char *)v62;
  if ( v62 )
  {
    v38 = v63;
    if ( v63 )
    {
      v39 = 0;
      v40 = 0;
      do
      {
        v41 = &v37[v39];
        v42 = *(void **)&v37[v39 + 40];
        if ( v42 )
        {
          *((_QWORD *)v41 + 6) = 0;
          j__free(v42);
        }
        v43 = *((void **)v41 + 2);
        if ( v43 )
        {
          *((_QWORD *)v41 + 3) = 0;
          j__free(v43);
        }
        ++v40;
        v39 += 80;
        v37 = (char *)v62;
      }
      while ( v38 != v40 );
    }
    v63 = 0;
    j__free(v37);
  }
  return v82 ^ _stack_chk_guard;
}
// 415AC8: variable 'v35' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519B20: using guessed type __int64 (__fastcall *off_519B20[3])();
// 52451C: using guessed type char under_debugger;
