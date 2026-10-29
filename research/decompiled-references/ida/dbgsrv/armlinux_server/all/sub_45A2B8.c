/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A2B8
// Address: 0x000000000045A2B8

//----- (000000000045A2B8) ----------------------------------------------------
__int64 __fastcall sub_45A2B8(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x5
  unsigned __int64 v5; // x1
  __int64 v6; // x0
  unsigned __int64 v7; // x1
  _QWORD **v8; // x21
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x25
  _QWORD *v11; // x1
  __int64 v12; // x22
  unsigned __int64 v13; // x23
  unsigned __int64 v14; // x0
  unsigned __int8 *v15; // x22
  unsigned __int8 *v16; // x24
  int v17; // w26
  int v18; // w28
  __int64 v19; // x27
  int v20; // w3
  int v21; // w19
  int v22; // w1
  _QWORD **v23; // x1
  __int64 v24; // x19
  __int64 v25; // x4
  int *v26; // x3
  unsigned __int64 v27; // x2
  int *v28; // x26
  const void *v29; // x23
  size_t v30; // x2
  char **v31; // x24
  size_t v32; // x22
  int v33; // w25
  char *v34; // x4
  __int64 v35; // x28
  char *v36; // x19
  _QWORD *v37; // x0
  _BYTE *v38; // x0
  char *v39; // x28
  char *v40; // x1
  unsigned __int64 v41; // x27
  void *v43; // x0
  __int64 v44; // x19
  unsigned __int64 v45; // x0
  unsigned __int64 v46; // x0
  unsigned __int64 v47; // x23
  _QWORD *v48; // x1
  unsigned __int64 v49; // x0
  unsigned __int64 v50; // x27
  unsigned __int64 v51; // x0
  unsigned __int64 v52; // x25
  __int64 v53; // x24
  int v54; // w19
  __int64 v55; // x28
  unsigned __int64 v56; // x20
  int v57; // w27
  int v58; // w22
  __int64 v59; // x26
  int v60; // w19
  int v61; // w21
  __int64 v62; // x22
  _QWORD *v63; // x0
  int v64; // w19
  int v65; // [xsp+68h] [xbp-98h]
  int *v66; // [xsp+68h] [xbp-98h]
  int v67; // [xsp+70h] [xbp-90h]
  unsigned __int64 v68; // [xsp+70h] [xbp-90h]
  __int64 v69; // [xsp+78h] [xbp-88h]
  unsigned __int64 v70; // [xsp+80h] [xbp-80h]
  unsigned __int64 v71; // [xsp+88h] [xbp-78h]
  __int64 v72; // [xsp+88h] [xbp-78h]
  unsigned __int64 v73; // [xsp+90h] [xbp-70h]
  unsigned __int64 v74; // [xsp+90h] [xbp-70h]
  __int64 v75; // [xsp+98h] [xbp-68h]
  _QWORD *v76; // [xsp+A0h] [xbp-60h]
  int *v77; // [xsp+A0h] [xbp-60h]
  _QWORD **v78; // [xsp+A8h] [xbp-58h]
  __int64 v79; // [xsp+A8h] [xbp-58h]
  _QWORD **v80; // [xsp+B0h] [xbp-50h]
  __int64 v81; // [xsp+B0h] [xbp-50h]
  _QWORD **v82; // [xsp+B8h] [xbp-48h]
  __int64 v84; // [xsp+D8h] [xbp-28h]
  _QWORD v85[2]; // [xsp+E0h] [xbp-20h] BYREF
  __int64 v86; // [xsp+F0h] [xbp-10h]

  v3 = a1;
  v4 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  v70 = a3 - v4;
  v5 = v4;
  *(_QWORD *)(a1 + 4144) = v4;
LABEL_2:
  v84 = 1000;
LABEL_3:
  if ( v5 + 4096 <= a2 )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(v3 + 32) & 2) == 0 )
  {
    v86 = 0;
    v85[0] = off_51AB20;
    v85[1] = 0;
    v44 = callui(86, (int)v85, nullptr);
    v85[0] = &off_51DC80;
    sub_493E90(v86);
    if ( v44 )
      return 4294967289LL;
  }
  v69 = v3 + 48;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 16) + 288LL))(*(_QWORD *)(v3 + 16));
  v7 = *(_QWORD *)(v3 + 4144);
  if ( v6 == 4096 )
  {
    v80 = (_QWORD **)(v3 + 4152);
    v8 = *(_QWORD ***)(v3 + 4152);
    if ( v7 >= a2 )
      v9 = 0;
    else
      v9 = a2 - v7;
    *(_QWORD *)(v3 + 4240) = v9;
    v71 = v9;
    if ( v8 != v80 )
    {
      while ( 1 )
      {
        v10 = 0;
        v76 = v8[4];
        v78 = v8 + 2;
        v11 = (_QWORD *)(**(_QWORD **)(v3 + 24) + 80LL * (_QWORD)v8[3]);
        v12 = v11[1];
        v73 = v12 - (_QWORD)v76;
        if ( v12 - (__int64)v76 > 4096 - v71 )
          v13 = 4096 - v71;
        else
          v13 = v12 - (_QWORD)v76;
        v14 = v12 - (_QWORD)v76 - v13;
        v15 = (unsigned __int8 *)(v69 + 4096 - v13);
        if ( v11[4] )
          v10 = v11[3] + v14;
        if ( v13 )
          break;
LABEL_25:
        if ( v73 <= 4096 - v71 )
        {
          **(_QWORD **)(v3 + 8) = v8[2];
          return 1;
        }
        v23 = (_QWORD **)*v8;
        if ( v71 )
          goto LABEL_41;
        v8 = (_QWORD **)*v8;
        v78[2] = v76 + 512;
LABEL_28:
        v71 = *(_QWORD *)(v3 + 4240);
        if ( v8 == v80 )
          goto LABEL_29;
      }
      v16 = (unsigned __int8 *)(*v11 + v14);
      v17 = 1 - (*(_DWORD *)v11 + v14);
      v18 = *(_DWORD *)(v3 + 32) & 1;
      v19 = 0;
      v67 = *(_DWORD *)(v3 + 32) & 0x20;
      while ( 1 )
      {
        v20 = *v15;
        v21 = *v16;
        if ( !v18 )
        {
          v65 = (unsigned __int8)toupper(*v15);
          v21 = (unsigned __int8)toupper(v21);
          v20 = v65;
        }
        if ( !v10 )
          break;
        if ( v67 )
        {
          if ( ((v20 ^ v21) & *(unsigned __int8 *)(v10 + v19)) != 0 )
          {
LABEL_40:
            v23 = (_QWORD **)*v8;
LABEL_41:
            v43 = v8;
            *v8[1] = v23;
            (*v8)[1] = v8[1];
            v8 = v23;
            j__free(v43);
            --*(_QWORD *)(v3 + 4168);
            goto LABEL_28;
          }
        }
        else if ( v10 == 255 )
        {
          if ( v21 != 255 )
            break;
        }
        else if ( *(_BYTE *)(v10 + v19) )
        {
          break;
        }
LABEL_24:
        v22 = v17 + (_DWORD)v16;
        ++v15;
        ++v16;
        v19 = v22;
        if ( v13 <= v22 )
          goto LABEL_25;
      }
      if ( v20 != v21 )
        goto LABEL_40;
      goto LABEL_24;
    }
LABEL_29:
    v24 = *(_QWORD *)(v3 + 4144);
    v25 = *(_QWORD *)(v3 + 4192);
    v26 = *(int **)(v3 + 4184);
    v27 = v71;
    v28 = v26;
    v81 = v24;
    v29 = (const void *)(v69 + v71);
    if ( 4 * v25 )
    {
      while ( 1 )
      {
        v30 = v70 - v27;
        v31 = (char **)(**(_QWORD **)(v3 + 24) + 80LL * *v28);
        v32 = (size_t)v31[1];
        v33 = (unsigned __int8)(*v31)[v32 - 1];
        if ( v30 )
        {
          do
          {
            v38 = memrchr(v29, v33, v30);
            if ( !v38 )
              break;
            v39 = v38 + 1;
            v40 = *v31;
            v41 = v38 + 1 - (_BYTE *)v29;
            if ( v32 > v41 )
            {
              if ( !memcmp(v29, &v40[v32 - v41], v38 + 1 - (_BYTE *)v29) )
              {
                v34 = &v39[-v69];
                v35 = *v28;
                v36 = &v34[v24 - v32];
                v37 = sub_491248(40);
                *v37 = v8;
                v37[2] = v36;
                v37[3] = v35;
                v37[4] = v41;
                v37[1] = v8[1];
                *v8[1] = v37;
                v8[1] = v37;
                v24 = *(_QWORD *)(v3 + 4144);
                ++*(_QWORD *)(v3 + 4168);
              }
            }
            else if ( !memcmp(&v38[1 - v32], v40, v32) )
            {
              **(_QWORD **)(v3 + 8) = &v39[v24 - v32 - v69];
              return 1;
            }
            v30 = v41 - 1;
          }
          while ( v41 != 1 );
          v26 = *(int **)(v3 + 4184);
          v25 = *(_QWORD *)(v3 + 4192);
        }
        if ( ++v28 == &v26[v25] )
          break;
        v27 = *(_QWORD *)(v3 + 4240);
      }
      v81 = v24;
    }
    v75 = *(_QWORD *)(v3 + 4216);
    if ( !v75 )
      goto LABEL_52;
    v46 = *(_QWORD *)(v3 + 4240);
    if ( v70 <= v46 )
      goto LABEL_52;
    v77 = *(int **)(v3 + 4208);
    v82 = v8;
LABEL_58:
    v74 = v70 - v46;
    v66 = v77;
    if ( !(4 * v75) )
      goto LABEL_79;
LABEL_59:
    v47 = 0;
    v79 = *v66;
    v48 = (_QWORD *)(**(_QWORD **)(v3 + 24) + 80 * v79);
    v49 = v48[1];
    v68 = v49;
    if ( v74 > v49 )
      v50 = v48[1];
    else
      v50 = v74;
    v51 = v49 - v50;
    v52 = *v48 + v51;
    v53 = v69 + v70 - v50;
    if ( v48[4] )
      v47 = v48[3] + v51;
    if ( v50 )
    {
      v54 = *(_DWORD *)(v3 + 32);
      v55 = 0;
      v72 = v3;
      v56 = v50;
      v57 = v54 & 1;
      v58 = v54 & 0x20;
      v59 = 0;
      while ( 1 )
      {
        v60 = *(unsigned __int8 *)(v53 + v55);
        v61 = *(unsigned __int8 *)(v52 + v55);
        if ( !v57 )
        {
          v60 = (unsigned __int8)toupper(v60);
          v61 = (unsigned __int8)toupper(v61);
        }
        if ( !v47 )
          goto LABEL_72;
        if ( !v58 )
          break;
        if ( ((v60 ^ v61) & *(unsigned __int8 *)(v47 + v59)) != 0 )
        {
LABEL_82:
          v3 = v72;
LABEL_77:
          if ( ++v66 == &v77[v75] )
          {
            v46 = *(_QWORD *)(v3 + 4240);
LABEL_79:
            if ( v46 >= --v70 )
            {
LABEL_52:
              v5 = v81 - 4096;
              v70 = 4096;
              *(_QWORD *)(v3 + 4144) = v81 - 4096;
              if ( --v84 )
                goto LABEL_3;
              v45 = (unsigned __int64)sub_4926B8() >> 32;
              if ( (unsigned int)(v45 - *(_DWORD *)(v3 + 4232)) > 4 )
              {
                v64 = v45;
                sub_40AAF0(*(_QWORD *)(v3 + 16), (__int64)&byte_4B31F0);
                *(_DWORD *)(v3 + 4232) = v64;
              }
              v5 = *(_QWORD *)(v3 + 4144);
              goto LABEL_2;
            }
            goto LABEL_58;
          }
          goto LABEL_59;
        }
LABEL_73:
        v59 = (int)++v55;
        if ( v56 <= (int)v55 )
        {
          v50 = v56;
          v3 = v72;
          goto LABEL_75;
        }
      }
      if ( v47 == 255 )
      {
        if ( v61 == 255 )
          goto LABEL_73;
      }
      else if ( !*(_BYTE *)(v47 + v59) )
      {
        goto LABEL_73;
      }
LABEL_72:
      if ( v60 != v61 )
        goto LABEL_82;
      goto LABEL_73;
    }
LABEL_75:
    v62 = v70 + v81;
    if ( v74 < v68 )
    {
      v63 = sub_491248(40);
      v63[4] = v50;
      *v63 = v82;
      v63[2] = v62 - v68;
      v63[3] = v79;
      v63[1] = v82[1];
      *v82[1] = v63;
      v82[1] = v63;
      v81 = *(_QWORD *)(v3 + 4144);
      v77 = *(int **)(v3 + 4208);
      v75 = *(_QWORD *)(v3 + 4216);
      ++*(_QWORD *)(v3 + 4168);
      goto LABEL_77;
    }
    **(_QWORD **)(v3 + 8) = v62 - v50;
    return 1;
  }
  else
  {
    *(_QWORD *)(v3 + 4176) = v7;
    return 4294967289LL;
  }
}
// 4B31F0: using guessed type char byte_4B31F0;
// 51AB20: using guessed type __int64 (__fastcall *off_51AB20[3])();
// 51DC80: using guessed type void (__fastcall __noreturn *off_51DC80)();
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
