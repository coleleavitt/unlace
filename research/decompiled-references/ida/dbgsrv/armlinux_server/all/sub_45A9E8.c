/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A9E8
// Address: 0x000000000045A9E8

//----- (000000000045A9E8) ----------------------------------------------------
__int64 __fastcall sub_45A9E8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  _QWORD **v8; // x20
  unsigned __int64 v9; // x1
  __int64 v10; // x26
  _QWORD *v11; // x1
  unsigned __int8 *v12; // x23
  unsigned __int64 v13; // x22
  __int64 v14; // x28
  unsigned __int8 *v15; // x27
  int v16; // w24
  int v17; // w21
  int v18; // w25
  int v19; // w1
  _QWORD **v20; // x1
  __int64 v21; // x4
  int *v22; // x2
  int *v23; // x26
  __int64 v24; // x3
  size_t v25; // x24
  const void **v26; // x22
  size_t v27; // x21
  int v28; // w25
  const void *v29; // x23
  __int64 v30; // x28
  _QWORD *v31; // x0
  _BYTE *v32; // x0
  _BYTE *v33; // x27
  const void *v34; // x1
  size_t v35; // x24
  void *v37; // x0
  __int64 v38; // x20
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x20
  unsigned __int64 v41; // x0
  __int64 v42; // x22
  __int64 v43; // x25
  __int64 *v44; // x1
  __int64 v45; // x24
  unsigned __int64 v46; // x28
  __int64 v47; // x26
  __int64 v48; // x23
  int v49; // w27
  int v50; // w3
  int v51; // w21
  _BOOL4 v52; // w0
  __int64 v53; // x23
  _QWORD *v54; // x0
  int s; // [xsp+60h] [xbp-90h]
  int sa; // [xsp+60h] [xbp-90h]
  unsigned __int64 v57; // [xsp+68h] [xbp-88h]
  int v58; // [xsp+68h] [xbp-88h]
  unsigned __int64 v59; // [xsp+78h] [xbp-78h]
  __int64 v60; // [xsp+78h] [xbp-78h]
  _QWORD *v61; // [xsp+80h] [xbp-70h]
  int *v62; // [xsp+80h] [xbp-70h]
  __int64 v63; // [xsp+88h] [xbp-68h]
  _QWORD **v64; // [xsp+90h] [xbp-60h]
  unsigned __int64 v65; // [xsp+90h] [xbp-60h]
  _QWORD **v66; // [xsp+98h] [xbp-58h]
  __int64 v67; // [xsp+98h] [xbp-58h]
  int *v68; // [xsp+A0h] [xbp-50h]
  unsigned __int64 v69; // [xsp+A8h] [xbp-48h]
  unsigned __int64 v70; // [xsp+B0h] [xbp-40h]
  __int64 v71; // [xsp+B8h] [xbp-38h]
  __int64 v73; // [xsp+C8h] [xbp-28h]
  _QWORD v74[2]; // [xsp+D0h] [xbp-20h] BYREF
  __int64 v75; // [xsp+E0h] [xbp-10h]

  v5 = a2 & 0xFFFFFFFFFFFFF000LL;
  v63 = a1 + 48;
  v69 = a2 - v5;
  *(_QWORD *)(a1 + 4144) = v5;
LABEL_2:
  v73 = 1000;
  while ( 1 )
  {
    if ( a3 <= v5 )
      return 0xFFFFFFFFLL;
    if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
      goto LABEL_5;
    v75 = 0;
    v74[0] = off_51AB20;
    v74[1] = 0;
    v38 = callui(86, (int)v74, nullptr);
    v74[0] = &off_51DC80;
    sub_493E90(v75);
    if ( v38 )
      return 4294967289LL;
    v5 = *(_QWORD *)(a1 + 4144);
LABEL_5:
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 288LL))(
           *(_QWORD *)(a1 + 16),
           v5,
           v63,
           4096,
           *(_QWORD *)(a1 + 40));
    v7 = *(_QWORD *)(a1 + 4144);
    if ( v6 != 4096 )
    {
      *(_QWORD *)(a1 + 4176) = v7;
      return 4294967289LL;
    }
    v66 = (_QWORD **)(a1 + 4152);
    v8 = *(_QWORD ***)(a1 + 4152);
    v9 = a3 - v7;
    if ( v9 <= 0x1000 )
      v6 = v9;
    *(_QWORD *)(a1 + 4240) = v6;
    while ( v8 != v66 )
    {
      while ( 1 )
      {
        v10 = 0;
        v64 = v8 + 2;
        v57 = *(_QWORD *)(a1 + 4240);
        v11 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * (_QWORD)v8[3]);
        v61 = v8[4];
        v12 = (unsigned __int8 *)v61 + *v11;
        v59 = v11[1] - (_QWORD)v61;
        if ( v59 > v57 )
          v13 = *(_QWORD *)(a1 + 4240);
        else
          v13 = v11[1] - (_QWORD)v61;
        if ( v11[4] )
          v10 = (__int64)v61 + v11[3];
        if ( v13 )
          break;
LABEL_25:
        if ( v59 <= v57 )
        {
          **(_QWORD **)(a1 + 8) = v8[2];
          return 1;
        }
        v20 = (_QWORD **)*v8;
        if ( v57 != 4096 )
          goto LABEL_40;
        v8 = (_QWORD **)*v8;
        v64[2] = v61 + 512;
        if ( v20 == v66 )
          goto LABEL_28;
      }
      v14 = 0;
      v15 = (unsigned __int8 *)(a1 + 48);
      v16 = *(_DWORD *)(a1 + 32) & 1;
      s = *(_DWORD *)(a1 + 32) & 0x20;
      while ( 1 )
      {
        v17 = *v15;
        v18 = *v12;
        if ( !v16 )
        {
          v17 = (unsigned __int8)toupper(v17);
          v18 = (unsigned __int8)toupper(v18);
        }
        if ( !v10 )
        {
LABEL_23:
          if ( v17 != v18 )
            goto LABEL_39;
          goto LABEL_24;
        }
        if ( s )
          break;
        if ( v10 == 255 )
        {
          if ( v18 != 255 )
            goto LABEL_23;
        }
        else if ( *(_BYTE *)(v10 + v14) )
        {
          goto LABEL_23;
        }
LABEL_24:
        ++v12;
        v19 = -47 - a1 + (_DWORD)v15++;
        v14 = v19;
        if ( v13 <= v19 )
          goto LABEL_25;
      }
      if ( ((v17 ^ v18) & *(unsigned __int8 *)(v10 + v14)) == 0 )
        goto LABEL_24;
LABEL_39:
      v20 = (_QWORD **)*v8;
LABEL_40:
      v37 = v8;
      *v8[1] = v20;
      (*v8)[1] = v8[1];
      v8 = v20;
      j__free(v37);
      --*(_QWORD *)(a1 + 4168);
    }
LABEL_28:
    v21 = *(_QWORD *)(a1 + 4192);
    v22 = *(int **)(a1 + 4184);
    v60 = *(_QWORD *)(a1 + 4144);
    v23 = v22;
    if ( 4 * v21 )
    {
      do
      {
        v24 = *(_QWORD *)(a1 + 4240);
        v25 = v24 - v69;
        v26 = (const void **)(**(_QWORD **)(a1 + 24) + 80LL * *v23);
        v27 = (size_t)v26[1];
        v28 = *(unsigned __int8 *)*v26;
        if ( v24 != v69 )
        {
          v29 = (const void *)(v63 + v69);
          do
          {
            v32 = memchr(v29, v28, v25);
            v33 = v32;
            if ( !v32 )
              break;
            v34 = *v26;
            v35 = v25 - (v32 - (_BYTE *)v29);
            if ( v27 > v35 )
            {
              if ( !memcmp(v32, v34, v35) )
              {
                v30 = *v23;
                v31 = sub_491248(40);
                *v31 = v8;
                v31[2] = &v33[v60 - v63];
                v31[3] = v30;
                v31[4] = v35;
                v31[1] = v8[1];
                *v8[1] = v31;
                v8[1] = v31;
                v60 = *(_QWORD *)(a1 + 4144);
                ++*(_QWORD *)(a1 + 4168);
              }
            }
            else if ( !memcmp(v32, v34, v27) )
            {
              **(_QWORD **)(a1 + 8) = &v33[v60 - v63];
              return 1;
            }
            v29 = v33 + 1;
            v25 = v35 - 1;
          }
          while ( v25 );
          v22 = *(int **)(a1 + 4184);
          v21 = *(_QWORD *)(a1 + 4192);
        }
        ++v23;
      }
      while ( v23 != &v22[v21] );
    }
    v67 = *(_QWORD *)(a1 + 4216);
    if ( !v67 )
      goto LABEL_49;
    v41 = *(_QWORD *)(a1 + 4240);
    if ( v69 >= v41 )
      goto LABEL_49;
    v68 = *(int **)(a1 + 4208);
    while ( 2 )
    {
      v42 = v63 + v69;
      v65 = v41 - v69;
      v62 = v68;
      if ( !(4 * v67) )
        goto LABEL_76;
      while ( 2 )
      {
        v43 = 0;
        v71 = *v62;
        v44 = (__int64 *)(**(_QWORD **)(a1 + 24) + 80 * v71);
        v45 = *v44;
        v70 = v44[1];
        if ( v65 > v70 )
          v46 = v44[1];
        else
          v46 = v65;
        if ( v44[4] )
          v43 = v44[3];
        if ( v46 )
        {
          v47 = 0;
          v48 = 0;
          v49 = *(_DWORD *)(a1 + 32) & 1;
          v58 = *(_DWORD *)(a1 + 32) & 0x20;
          while ( 1 )
          {
            v50 = *(unsigned __int8 *)(v42 + v47);
            v51 = *(unsigned __int8 *)(v45 + v47);
            if ( !v49 )
            {
              sa = (unsigned __int8)toupper(*(unsigned __int8 *)(v42 + v47));
              v51 = (unsigned __int8)toupper(v51);
              v50 = sa;
            }
            if ( !v43 )
              break;
            if ( v58 )
            {
              v52 = ((v50 ^ v51) & *(unsigned __int8 *)(v43 + v48)) == 0;
LABEL_70:
              if ( !v52 )
                goto LABEL_74;
              goto LABEL_71;
            }
            if ( v43 == 255 )
            {
              if ( v51 != 255 )
                break;
            }
            else if ( *(_BYTE *)(v43 + v48) )
            {
              break;
            }
LABEL_71:
            v48 = (int)++v47;
            if ( v46 <= (int)v47 )
              goto LABEL_72;
          }
          v52 = v50 == v51;
          goto LABEL_70;
        }
LABEL_72:
        v53 = v69 + v60;
        if ( v65 >= v70 )
        {
          **(_QWORD **)(a1 + 8) = v53;
          return 1;
        }
        v54 = sub_491248(40);
        *v54 = v8;
        v54[2] = v53;
        v54[3] = v71;
        v54[4] = v46;
        v54[1] = v8[1];
        *v8[1] = v54;
        v8[1] = v54;
        v60 = *(_QWORD *)(a1 + 4144);
        v68 = *(int **)(a1 + 4208);
        v67 = *(_QWORD *)(a1 + 4216);
        ++*(_QWORD *)(a1 + 4168);
LABEL_74:
        if ( ++v62 != &v68[v67] )
          continue;
        break;
      }
      v41 = *(_QWORD *)(a1 + 4240);
LABEL_76:
      if ( v41 > ++v69 )
        continue;
      break;
    }
LABEL_49:
    v69 = 0;
    v5 = v60 + 4096;
    *(_QWORD *)(a1 + 4144) = v60 + 4096;
    if ( !--v73 )
    {
      v39 = sub_4926B8();
      v40 = HIDWORD(v39);
      if ( (unsigned int)(HIDWORD(v39) - *(_DWORD *)(a1 + 4232)) > 4 )
      {
        sub_40AAF0(*(_QWORD *)(a1 + 16), (__int64)&byte_4B31F0);
        *(_DWORD *)(a1 + 4232) = v40;
      }
      v5 = *(_QWORD *)(a1 + 4144);
      goto LABEL_2;
    }
  }
}
// 4B31F0: using guessed type char byte_4B31F0;
// 51AB20: using guessed type __int64 (__fastcall *off_51AB20[3])();
// 51DC80: using guessed type void (__fastcall __noreturn *off_51DC80)();
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
