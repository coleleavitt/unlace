/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4461F8
// Address: 0x00000000004461F8

//----- (00000000004461F8) ----------------------------------------------------
__int64 __fastcall sub_4461F8(__int64 a1, __int64 *a2, char *a3, int a4)
{
  __int64 v6; // x22
  pthread_mutex_t *v8; // x23
  int v9; // w26
  int v10; // w23
  _QWORD *v11; // x0
  __int64 v12; // x26
  __int64 v13; // x0
  int v14; // w27
  signed int v15; // w2
  signed int v16; // w0
  __int64 v17; // x4
  char *v18; // x1
  char *v19; // x4
  __int64 v20; // x0
  __int64 *v21; // x0
  _QWORD *v22; // x0
  unsigned int v23; // w28
  unsigned int v24; // w0
  _UNKNOWN **v25; // x28
  __int64 v26; // x0
  int v27; // w27
  int v28; // w0
  unsigned int v29; // w0
  __int64 *v30; // x26
  int v31; // w1
  __int64 v32; // x0
  pthread_mutex_t *v34; // x28
  int v35; // w0
  __int64 v36; // x1
  unsigned __int64 v37; // x2
  char *v38; // x0
  char *v39; // x2
  __int64 v40; // x0
  int v41; // w26
  __int64 v42; // x2
  char *v43; // x0
  char *v45; // x1
  __int64 *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x0
  char *v54; // x4
  __int64 v55; // x0
  __int64 *v56; // x0
  char *v57; // x0
  signed int v58; // [xsp+60h] [xbp-A0h]
  unsigned __int8 *v59; // [xsp+60h] [xbp-A0h]
  int v60; // [xsp+68h] [xbp-98h]
  __int64 *v61; // [xsp+68h] [xbp-98h]
  __int64 v62; // [xsp+70h] [xbp-90h]
  _UNKNOWN **v63; // [xsp+78h] [xbp-88h]
  char v64; // [xsp+87h] [xbp-79h] BYREF
  __int64 *v65; // [xsp+88h] [xbp-78h]
  unsigned int v66[3]; // [xsp+90h] [xbp-70h] BYREF
  int v67; // [xsp+9Ch] [xbp-64h]
  __int64 v68; // [xsp+A0h] [xbp-60h] BYREF
  __int64 v69; // [xsp+A8h] [xbp-58h]
  __int64 v70; // [xsp+B0h] [xbp-50h]
  __int64 v71; // [xsp+B8h] [xbp-48h]
  __int64 v72[4]; // [xsp+C0h] [xbp-40h] BYREF
  char v73[24]; // [xsp+E0h] [xbp-20h] BYREF

  LOBYTE(v68) = 2;
  v69 = 0;
  v70 = 0;
  v6 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 128) = 0;
  v71 = 0;
  if ( !a3 )
    goto LABEL_32;
  v8 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v9 = sub_43E818(*(__int64 **)(a1 + 8), a3);
  sub_494760(v8);
  if ( v9 == 0x7FFFFFFF )
  {
    v10 = 0;
    sub_4869C8(88);
    v18 = a3;
    goto LABEL_16;
  }
  v10 = 0;
  *(_DWORD *)(a1 + 120) = v9;
LABEL_4:
  if ( (v9 & 0x80000000) == 0 )
  {
    v11 = *(_QWORD **)(a1 + 8);
    if ( (unsigned __int64)v9 < v11[1] && (v12 = *(_QWORD *)(*v11 + 8LL * v9)) != 0 )
    {
      if ( *(_QWORD *)(v12 + 40) )
      {
        v13 = *(_QWORD *)(a1 + 80);
        v14 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v13 - 4);
        if ( v13 )
          *(_QWORD *)(a1 + 80) = v13 - 1;
        v15 = *(_DWORD *)(v12 + 24);
        v16 = *(_QWORD *)(a1 + 32) - v14;
        if ( v15 > v16 )
        {
          v17 = *(_QWORD *)(v12 + 72);
          if ( !v17 )
            goto LABEL_12;
          v16 = sub_44A8B0(a1, v16, v15, *(_QWORD *)(v12 + 64), v17);
          v15 = *(_DWORD *)(v12 + 24);
        }
        if ( v16 == v15 )
        {
          v34 = (pthread_mutex_t *)qword_522288;
          sub_494720((pthread_mutex_t *)qword_522288);
          v35 = *(_DWORD *)(v12 + 136);
          if ( v35 != -1 )
          {
            *(_DWORD *)(v12 + 136) = v35 + 1;
            sub_494760(v34);
            v36 = *(_QWORD *)(a1 + 56);
            v37 = v36 + 1;
            if ( (unsigned __int64)(v36 + 1) > *(_QWORD *)(a1 + 64) )
            {
              v38 = (char *)sub_491288(a1 + 48, *(void **)(a1 + 48), v37, 0x18u);
              *(_QWORD *)(a1 + 48) = v38;
              v36 = *(_QWORD *)(a1 + 56);
              v37 = v36 + 1;
            }
            else
            {
              v38 = *(char **)(a1 + 48);
            }
            *(_QWORD *)(a1 + 56) = v37;
            v39 = &v38[24 * v36];
            *((_DWORD *)v39 + 2) = *(_QWORD *)(a1 + 112);
            *(_QWORD *)v39 = *(_QWORD *)(a1 + 104);
            *((_DWORD *)v39 + 3) = *(_DWORD *)(a1 + 96);
            *((_DWORD *)v39 + 4) = *(_DWORD *)(a1 + 100);
            *(_QWORD *)(a1 + 104) = v12;
            *(_QWORD *)(a1 + 112) = 0;
            v40 = *(_QWORD *)(a1 + 32);
            *(_DWORD *)(a1 + 96) = v14;
            *(_DWORD *)(a1 + 100) = v40;
            *(_QWORD *)(a1 + 128) = v12 + 32;
            goto LABEL_84;
          }
          if ( *(_QWORD *)(v12 + 8) )
            v45 = *(char **)v12;
          else
            v45 = (char *)&qword_4B2D48;
          sub_486A58(0, v45);
          sub_4869C8(40);
          sub_494760(v34);
          while ( 1 )
          {
LABEL_17:
            if ( (unsigned int)sub_4869A0() != 90 )
              sub_44D538(&v68);
            v19 = *(char **)(a1 + 24);
            v20 = *(_QWORD *)(a1 + 32);
            if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(a1 + 40) )
            {
              v43 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v20 + 1, 0x20u);
              *(_QWORD *)(a1 + 24) = v43;
              v19 = v43;
              v20 = *(_QWORD *)(a1 + 32);
            }
            v21 = (__int64 *)&v19[32 * v20];
            *(_BYTE *)v21 = 2;
            v21[1] = 0;
            v21[2] = 0;
            v21[3] = 0;
            ++*(_QWORD *)(a1 + 32);
            sub_449520(v21, &v68);
            v65 = (__int64 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
            sub_44D258(a1, (__int64)v65);
            v22 = *(_QWORD **)(a1 + 128);
            if ( !v22 )
              break;
            while ( 1 )
            {
              v23 = (unsigned __int8)sub_43D648(v22, *(_QWORD *)(a1 + 112) - 1LL, v66);
              if ( v23 )
                break;
              if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(a1 + 56) )
                goto LABEL_77;
              if ( !(unsigned __int8)sub_44B018(a1) )
              {
                if ( !under_debugger )
                  sub_492270(301);
                goto LABEL_31;
              }
              v22 = *(_QWORD **)(a1 + 128);
              if ( !v22 )
                goto LABEL_101;
            }
            v24 = v66[2];
            *(_QWORD *)(a1 + 112) = v66[1];
            switch ( v24 )
            {
              case 2u:
                v46 = (__int64 *)sub_444648(a1, v67);
                break;
              case 3u:
                v46 = (__int64 *)sub_444690(*(_QWORD *)(a1 + 8), v67);
                break;
              case 1u:
                v46 = (__int64 *)sub_444600(a1, v67);
                break;
              default:
                if ( !under_debugger )
                  sub_492270(300);
                goto LABEL_31;
            }
            v48 = *(_QWORD *)(a1 + 24);
            v47 = *(_QWORD *)(a1 + 32);
            v65 = v46;
            if ( !(unsigned int)sub_449520(v46, (__int64 *)(v48 + 32 * v47 - 32)) )
            {
              v50 = *(_QWORD *)(a1 + 24);
              v49 = *(_QWORD *)(a1 + 32);
              LOBYTE(v72[0]) = 2;
              memset(&v72[1], 0, 24);
              sub_4488B8(v72, (__int64 *)(v50 + 32 * v49 - 32));
              v51 = *(_QWORD *)(a1 + 32);
              if ( v51 )
              {
                v52 = v51 - 1;
                v53 = *(_QWORD *)(a1 + 24);
                *(_QWORD *)(a1 + 32) = v52;
                sub_448310((__int64 *)(v53 + 32 * v52));
              }
              sub_448310(v72);
            }
LABEL_84:
            if ( *(_BYTE *)(a1 + 144) || !(unsigned __int8)callui(27, (int)callui, v39) )
            {
              v41 = (unsigned __int8)sub_43D298(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
              v42 = *(_QWORD *)(a1 + 8);
              ++*(_QWORD *)(a1 + 112);
              if ( !*(_BYTE *)(v42 + 124)
                && v10 + 1 > 100
                && *(_QWORD *)(v42 + 112) != -1
                && sub_494500()
                && time(nullptr) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) > 2 )
              {
                sub_443FB8("Running IDC script");
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
              }
              goto LABEL_90;
            }
            sub_4869C8(1487);
          }
LABEL_101:
          v23 = 0;
          goto LABEL_77;
        }
LABEL_12:
        sub_4869C8(56);
        if ( !*(_QWORD *)(v12 + 8) )
        {
          v18 = (char *)&qword_4B2D48;
LABEL_16:
          sub_486A58(0, v18);
          goto LABEL_17;
        }
LABEL_62:
        v18 = *(char **)v12;
        goto LABEL_16;
      }
      sub_4869C8(88);
      if ( *(_QWORD *)(v12 + 8) > 1u )
        goto LABEL_62;
    }
    else
    {
      sub_4869C8(88);
    }
    sub_49B748(v73, 0x14u, "#%d", *(_DWORD *)(a1 + 120));
    v18 = v73;
    goto LABEL_16;
  }
  *(_DWORD *)(a1 + 120) = -v9;
  v10 = 200;
  if ( qword_520148 <= (unsigned __int64)-v9
    || (LOBYTE(v68) = 2, v69 = 0, v63 = off_520150, (v25 = &off_520150[-5 * v9]) == nullptr) )
  {
    sub_4869C8(87);
    goto LABEL_17;
  }
  v58 = sub_43E9E0((const char *)v25[2], &v64);
  v26 = *(_QWORD *)(a1 + 80);
  v60 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v26 - 4);
  if ( v26 )
    *(_QWORD *)(a1 + 80) = v26 - 1;
  v27 = *(_QWORD *)(a1 + 32) - v60;
  if ( v58 > v27 )
    v27 = sub_44A8B0(a1, v27, v58, (__int64)v25[3], *((_DWORD *)v25 + 8));
  if ( v64 )
  {
    v69 = v27;
  }
  else if ( v27 != v58 )
  {
    sub_486A58(0, (char *)v63[-5 * v9]);
    v32 = 56;
    goto LABEL_93;
  }
  v28 = *((_DWORD *)v25 + 9);
  if ( (v28 & 1) != 0 && off_520178 )
  {
    if ( !(unsigned __int8)((__int64 (*)(void))off_520178)() )
    {
      sub_4869C8(1489);
      goto LABEL_17;
    }
    v28 = *((_DWORD *)v25 + 9);
  }
  if ( (v28 & 4) == 0 && !sub_494500() )
  {
    sub_486A58(0, (char *)v63[-5 * v9]);
    sub_4869C8(143);
    goto LABEL_17;
  }
  v59 = (unsigned __int8 *)v25[2];
  v62 = *(_QWORD *)(a1 + 24) + 32LL * v60;
  v29 = *v59;
  if ( v27 > 0 )
  {
    v30 = (__int64 *)(*(_QWORD *)(a1 + 24) + 32LL * v60);
    v61 = (__int64 *)(v62 + 32 * ((unsigned int)(v27 - 1) + 1LL));
    while ( 1 )
    {
      v31 = *(unsigned __int8 *)v30;
      if ( v31 == v29 )
        goto LABEL_68;
      if ( v29 == 6 )
      {
        if ( (unsigned int)sub_4869C8(1554) )
          goto LABEL_17;
        goto LABEL_71;
      }
      if ( v29 > 6 )
        break;
      if ( v29 == 3 )
      {
        if ( (unsigned int)sub_449AF8(v30) )
          goto LABEL_17;
LABEL_68:
        v29 = v59[1];
        goto LABEL_69;
      }
      if ( v29 <= 3 )
      {
        if ( v29 != 2 )
        {
LABEL_109:
          if ( !under_debugger )
            sub_492270(289);
LABEL_31:
          __break(0x3E8u);
LABEL_32:
          v9 = a4;
          v10 = 0;
          *(_DWORD *)(a1 + 120) = a4;
          goto LABEL_4;
        }
        if ( (unsigned int)sub_4497A0(v30) )
          goto LABEL_17;
        goto LABEL_68;
      }
      if ( v29 != 4 )
      {
LABEL_105:
        if ( (unsigned int)sub_4869C8(1532) )
          goto LABEL_17;
        goto LABEL_71;
      }
      while ( 1 )
      {
        v29 = v59[1];
        if ( v59[1] )
          break;
        v30 += 4;
        if ( v61 == v30 )
          goto LABEL_71;
        if ( *(_BYTE *)v30 == 4 )
          goto LABEL_68;
      }
LABEL_69:
      v30 += 4;
      ++v59;
      if ( v61 == v30 )
        goto LABEL_70;
    }
    if ( v29 == 8 )
      goto LABEL_105;
    if ( v29 >= 8 )
    {
      if ( v29 == 9 )
      {
        if ( (unsigned int)sub_4498D8(v30) )
          goto LABEL_17;
      }
      else
      {
        if ( v29 != 10 )
          goto LABEL_109;
        if ( v31 != 2 || v30[1] )
        {
          if ( (unsigned int)sub_4869C8(1566) )
            goto LABEL_17;
          goto LABEL_71;
        }
      }
    }
    else if ( (unsigned int)sub_448E00(v30) )
    {
      goto LABEL_17;
    }
    goto LABEL_68;
  }
LABEL_70:
  if ( (v29 & 0xFFFFFFFB) != 0 && (unsigned int)sub_4869C8(56) )
    goto LABEL_17;
LABEL_71:
  if ( (*((_DWORD *)v25 + 9) & 2) != 0 )
    sub_44AC10(a1, (__int64)v25, v62, v27);
  v32 = ((__int64 (__fastcall *)(__int64, __int64 *))v25[1])(v62, &v68);
  if ( (_DWORD)v32 )
  {
LABEL_93:
    sub_4869C8(v32);
    goto LABEL_17;
  }
  sub_44ADB8((_QWORD *)a1, v27);
  if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)(int)v6 )
  {
    sub_4869C8(0);
    v41 = (unsigned __int8)sub_43D298(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
    ++*(_QWORD *)(a1 + 112);
    if ( v41 == 169 )
    {
      sub_448310(&v68);
      goto LABEL_84;
    }
    v54 = *(char **)(a1 + 24);
    v55 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v55 + 1) > *(_QWORD *)(a1 + 40) )
    {
      v57 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v55 + 1, 0x20u);
      *(_QWORD *)(a1 + 24) = v57;
      v54 = v57;
      v55 = *(_QWORD *)(a1 + 32);
    }
    v56 = (__int64 *)&v54[32 * v55];
    *(_BYTE *)v56 = 2;
    v56[1] = 0;
    v56[2] = 0;
    v56[3] = 0;
    ++*(_QWORD *)(a1 + 32);
    sub_449520(v56, &v68);
LABEL_90:
    __asm { BR              X1 }
  }
  if ( a2 && (unsigned int)sub_449520(a2, &v68) )
    goto LABEL_17;
  v23 = 1;
LABEL_77:
  sub_448310(&v68);
  return v23;
}
// 447794: conditional instruction was optimized away because w0.4==5
// 44643C: variable 'a4' is possibly undefined
// 446780: variable 'v39' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 520148: using guessed type __int64 qword_520148;
// 520150: using guessed type _UNKNOWN **off_520150;
// 520178: using guessed type _UNKNOWN *off_520178;
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
