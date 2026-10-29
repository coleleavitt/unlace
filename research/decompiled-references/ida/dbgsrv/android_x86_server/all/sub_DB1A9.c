/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB1A9
// Address: 0x000DB1A9

//----- (000DB1A9) --------------------------------------------------------
int __cdecl sub_DB1A9(char **a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ecx
  char *v4; // edx
  char *v5; // edi
  int v6; // edx
  int v7; // edx
  unsigned int *v8; // ecx
  unsigned int *v9; // edi
  char *v10; // esi
  unsigned int v11; // eax
  int v12; // esi
  int v13; // edi
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // ecx
  char *v17; // eax
  bool v18; // cf
  char *v19; // ecx
  int v20; // eax
  char *v21; // eax
  int v23; // eax
  char **v24; // eax
  char *v25; // esi
  char *i; // edi
  char v27; // di
  _BYTE *v28; // eax
  _BYTE *v29; // ecx
  char v30; // al
  char v31; // di
  _BYTE *v32; // eax
  _BYTE *v33; // eax
  unsigned int v34; // edx
  _DWORD *v35; // edi
  int v36; // eax
  char *v37; // esi
  unsigned int v38; // eax
  int v39; // eax
  char v40; // si
  _BYTE *v41; // eax
  int v42; // [esp-16h] [ebp-78h]
  int v43; // [esp+2h] [ebp-60h]
  char *v44; // [esp+6h] [ebp-5Ch]
  char *v45; // [esp+Ah] [ebp-58h]
  char *v46; // [esp+Eh] [ebp-54h]
  int v47; // [esp+12h] [ebp-50h]
  int v48; // [esp+1Ah] [ebp-48h]
  unsigned int v49; // [esp+1Ah] [ebp-48h]
  char *v50; // [esp+1Eh] [ebp-44h]
  unsigned int v51; // [esp+1Eh] [ebp-44h]
  char *v52; // [esp+22h] [ebp-40h]
  unsigned int v53; // [esp+22h] [ebp-40h]
  char v54; // [esp+22h] [ebp-40h]
  char *v55; // [esp+26h] [ebp-3Ch]
  _BYTE *v56; // [esp+26h] [ebp-3Ch]
  unsigned int v57; // [esp+26h] [ebp-3Ch]
  int v58; // [esp+26h] [ebp-3Ch]
  int v59; // [esp+2Ah] [ebp-38h] BYREF
  unsigned int v60; // [esp+2Eh] [ebp-34h] BYREF
  _DWORD v61[12]; // [esp+32h] [ebp-30h] BYREF

  v55 = a1[2];
  v52 = *a1;
  if ( !*a1 )
  {
    v3 = 0;
    v4 = a1[2];
    while ( v3 < *((unsigned __int16 *)a1 + 6) )
    {
      v5 = v4;
      v4 += 32;
      if ( *((_DWORD *)v4 - 8) == 6 )
      {
        v52 = &v55[-*((_DWORD *)v5 + 2)];
        break;
      }
      ++v3;
    }
  }
  if ( a2 > 0x1F && a3[5] )
  {
    v6 = (int)a1[5];
    if ( v6 == dword_13BC84
      && a1[4] == (char *)dword_13BC80
      && a1[7] == (char *)dword_13E614
      && a1[6] == (char *)dword_13E610 )
    {
      v7 = 0;
      v48 = dword_13E618;
      v8 = (unsigned int *)dword_13E618;
      v9 = nullptr;
      while ( v8 )
      {
        if ( *a3 >= *v8 && *a3 < v8[1] )
        {
          v10 = (char *)v8[3];
          v52 = (char *)v8[2];
          v50 = (char *)v8[4];
          if ( v8 != (unsigned int *)dword_13E618 )
          {
            v11 = v8[5];
            dword_13E618 = (int)v8;
            v9[5] = v11;
            v8[5] = v48;
          }
          goto LABEL_52;
        }
        if ( !*(_QWORD *)v8 )
        {
          v7 = (int)v8;
          break;
        }
        v7 = (int)v8;
        if ( v8[5] )
          v9 = v8;
        v8 = (unsigned int *)v8[5];
      }
LABEL_30:
      v10 = nullptr;
      v45 = nullptr;
      v46 = nullptr;
      v47 = 0;
      v50 = nullptr;
      v43 = *((unsigned __int16 *)a1 + 6);
      while ( --v43 != -1 )
      {
        v15 = *(_DWORD *)v55;
        if ( *(_DWORD *)v55 == 1 )
        {
          v44 = &v52[*((_DWORD *)v55 + 2)];
          v49 = *a3;
          if ( *a3 >= (unsigned int)v44 )
          {
            v16 = (unsigned int)&v44[*((_DWORD *)v55 + 5)];
            v17 = v45;
            v18 = v49 < v16;
            if ( v49 < v16 )
              v17 = &v44[*((_DWORD *)v55 + 5)];
            v19 = &v52[*((_DWORD *)v55 + 2)];
            v45 = v17;
            v20 = 1;
            if ( !v18 )
            {
              v20 = v47;
              v19 = v46;
            }
            v47 = v20;
            v46 = v19;
          }
        }
        else if ( v15 == 1685382480 )
        {
          v10 = v55;
        }
        else
        {
          v14 = v15 == 2;
          v21 = v50;
          if ( v14 )
            v21 = v55;
          v50 = v21;
        }
        v55 += 32;
      }
      if ( !v47 )
        return 0;
      if ( a2 > 0x1F )
      {
        if ( v9 && v7 )
        {
          v9[5] = *(_DWORD *)(v7 + 20);
          v23 = dword_13E618;
          dword_13E618 = v7;
          *(_DWORD *)(v7 + 20) = v23;
        }
        v24 = (char **)dword_13E618;
        *(_DWORD *)(dword_13E618 + 12) = v10;
        v24[2] = v52;
        v24[4] = v50;
        *v24 = v46;
        v24[1] = v45;
      }
LABEL_52:
      if ( !v10 )
        return 0;
      v25 = &v52[*((_DWORD *)v10 + 2)];
      if ( *v25 != 1 )
        return 1;
      a3[2] = 0;
      if ( v50 )
      {
        for ( i = &v52[*((_DWORD *)v50 + 2)]; *(_DWORD *)i; i += 8 )
        {
          if ( *(_DWORD *)i == 3 )
          {
            a3[2] = *((_DWORD *)i + 1);
            break;
          }
        }
      }
      v27 = v25[1];
      v28 = (_BYTE *)sub_DAE89(v27, (int)a3);
      v29 = sub_DAECB(v27, v28, v25 + 4, &v59);
      v30 = v25[2];
      if ( v30 != -1 && v25[3] == 59 )
      {
        v31 = v25[2];
        v56 = v29;
        v32 = (_BYTE *)sub_DAE89(v30, (int)a3);
        v33 = sub_DAECB(v31, v32, v56, &v60);
        if ( !v60 )
          return 1;
        if ( ((unsigned __int8)v33 & 3) == 0 )
        {
          v57 = *a3;
          if ( *a3 >= (unsigned int)&v25[*(_DWORD *)v33] )
          {
            v34 = v60 - 1;
            if ( *a3 < (unsigned int)&v25[*(_DWORD *)&v33[8 * v60 - 8]] )
            {
              v51 = v60 - 1;
              v53 = 0;
              do
              {
                while ( 1 )
                {
                  if ( v53 >= v51 )
                    abort();
                  v34 = (v53 + v51) >> 1;
                  if ( v57 >= (unsigned int)&v25[*(_DWORD *)&v33[8 * v34]] )
                    break;
                  v51 = (v53 + v51) >> 1;
                }
                v53 = v34 + 1;
              }
              while ( v57 >= (unsigned int)&v25[*(_DWORD *)&v33[8 * v34 + 8]] );
            }
            v35 = &v33[8 * v34];
            v58 = (int)&v25[v35[1]];
            v54 = sub_DB198(v58);
            v36 = sub_DADF7(v54);
            sub_DAECB(v54 & 0xF, nullptr, (_BYTE *)(v58 + v36 + 8), v61);
            v37 = &v25[*v35];
            if ( *a3 < (unsigned int)&v37[v61[0]] )
              a3[4] = v58;
            a3[3] = (unsigned int)v37;
          }
          return 1;
        }
      }
      v38 = a3[1];
      v61[4] = 4;
      v61[0] = 0;
      v61[1] = v38;
      v61[3] = v59;
      v42 = *a3;
      v61[2] = a3[2];
      v39 = sub_DB098((int)v61, v59, v42);
      a3[4] = v39;
      if ( v39 )
      {
        v40 = sub_DB198(v39);
        v41 = (_BYTE *)sub_DAE89(v40, (int)a3);
        sub_DAECB(v40, v41, (_BYTE *)(a3[4] + 8), &v60);
        a3[3] = v60;
      }
      return 1;
    }
    v12 = (int)a1[6];
    v13 = (int)a1[7];
    dword_13BC80 = (int)a1[4];
    dword_13BC84 = v6;
    v7 = 0;
    dword_13E610 = v12;
    dword_13E614 = v13;
    do
    {
      *(int *)((char *)&dword_13E640 + v7) = 0;
      v14 = v7 == 168;
      *(int *)((char *)&dword_13E644 + v7) = 0;
      *(int *)((char *)&dword_13E654 + v7) = (int)&dword_13E640 + v7 + 24;
      v7 += 24;
    }
    while ( !v14 );
    LOBYTE(v7) = 0;
    dword_13E6FC = 0;
    dword_13E618 = (int)&dword_13E640;
    a3[5] = 0;
LABEL_28:
    v9 = nullptr;
    goto LABEL_30;
  }
  if ( a2 > 0xD )
  {
    v7 = 0;
    goto LABEL_28;
  }
  return -1;
}
// 13BC80: using guessed type int dword_13BC80;
// 13BC84: using guessed type int dword_13BC84;
// 13E610: using guessed type int dword_13E610;
// 13E614: using guessed type int dword_13E614;
// 13E618: using guessed type int dword_13E618;
// 13E640: using guessed type int dword_13E640;
// 13E644: using guessed type int dword_13E644;
// 13E654: using guessed type int dword_13E654;
// 13E6FC: using guessed type int dword_13E6FC;
