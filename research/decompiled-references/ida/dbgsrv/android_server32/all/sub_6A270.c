/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A270
// Address: 0x0006A270

//----- (0006A270) --------------------------------------------------------
int __fastcall sub_6A270(char *a1, int a2, int a3, _DWORD *a4, int a5, int (__fastcall ***a6)(_DWORD, char *, int))
{
  int v8; // r4
  char *v9; // r7
  int v10; // r3
  int v11; // r6
  int v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r4
  unsigned int v15; // r0
  unsigned int v16; // r6
  const char *v17; // r1
  unsigned int v18; // r1
  int v19; // r0
  const char *v20; // r1
  unsigned int v21; // r4
  int v22; // r0
  const char *v23; // r1
  unsigned int v24; // r6
  unsigned int v25; // r1
  const char *v26; // r1
  int v27; // r7
  const char *v28; // r1
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r0
  unsigned int v33; // r0
  int v34; // r1
  int v35; // r0
  unsigned int v36; // r0
  int v37; // r1
  unsigned int v38; // r6
  unsigned int v39; // r1
  const char *v40; // r1
  unsigned int v41; // r0
  int v42; // r1
  int v43; // r6
  unsigned int v44; // r0
  unsigned __int8 *v45; // r7
  int v46; // r0
  int v47; // r0
  int v49; // [sp+10h] [bp-18h]
  unsigned int v50; // [sp+14h] [bp-14h]
  int v51; // [sp+14h] [bp-14h]
  int v52; // [sp+14h] [bp-14h]
  int v53; // [sp+18h] [bp-10h]
  int *v55; // [sp+1Ch] [bp-Ch]
  int v56; // [sp+20h] [bp-8h]

  *(_BYTE *)a4 = (*a6)[5](a6, a1, a2);
  v8 = 24 * a2;
  v56 = (int)a1;
  v9 = &a1[24 * a2];
  v10 = (int)(v9 + 24);
  v11 = 0;
  v12 = a5;
  switch ( v9[25] )
  {
    case 1:
      v15 = *((unsigned __int16 *)v9 + 15) - 61;
      v50 = *((unsigned __int16 *)v9 + 15);
      if ( (unsigned __int16)(*((_WORD *)v9 + 15) - 61) >= 0x20u && (unsigned __int16)(v50 - 163) > 0x1Fu )
      {
        v16 = 0;
        v14 = a4;
        if ( v50 == 160 )
          goto LABEL_81;
        if ( v50 < 0x10 || v15 < 0x20 )
        {
          v17 = off_DA3A0[v50];
        }
        else
        {
          if ( (v50 | 2) != 0x12 )
          {
            sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
            goto LABEL_80;
          }
          v17 = "PSR";
        }
        v36 = *(_DWORD *)((**a6)(a6, (char *)v17, a5) + 8);
        v37 = 4;
        if ( !a3 )
          v37 = 8;
        v16 = v36 + v37;
        if ( v50 != 15 )
          v16 = v36;
        goto LABEL_81;
      }
      if ( v50 < 0x10 || v15 < 0x20 )
      {
        v55 = a4 + 2;
        v28 = off_DA3A0[v50];
        v27 = a5;
      }
      else
      {
        v27 = a5;
        if ( (v50 | 2) != 0x12 )
        {
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          return 0;
        }
        v55 = a4 + 2;
        v28 = "PSR";
      }
      v35 = (**a6)(a6, (char *)v28, v27);
      a4[8] = -1431655765 * ((v35 - v27) >> 3);
      sub_63C28(v55, v35);
      if ( (int)a4[2] >= 0 )
      {
        a4[9] = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), _DWORD))(*a6)[4])(
                  a6,
                  *(unsigned __int8 *)(v56 + v8 + 29));
        return 1;
      }
      return v11;
    case 2:
    case 7:
      v13 = *((_DWORD *)v9 + 9);
      v14 = a4;
      goto LABEL_79;
    case 3:
      v18 = *((unsigned __int16 *)v9 + 15);
      v16 = 0;
      v19 = 0;
      v14 = a4;
      if ( v18 == 160 )
        goto LABEL_60;
      if ( v18 < 0x10 || v18 - 61 < 0x20 )
      {
        v49 = *((unsigned __int16 *)v9 + 15);
        v20 = off_DA3A0[v18];
      }
      else
      {
        if ( (v18 | 2) != 0x12 )
        {
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          v10 = (int)(v9 + 24);
          v12 = a5;
          v19 = 0;
          goto LABEL_60;
        }
        v49 = *((unsigned __int16 *)v9 + 15);
        v20 = "PSR";
      }
      v29 = *(_DWORD *)((**a6)(a6, (char *)v20, a5) + 8);
      v30 = 4;
      if ( !a3 )
        v30 = 8;
      v19 = v29 + v30;
      v10 = (int)(v9 + 24);
      if ( v49 != 15 )
        v19 = v29;
      v12 = a5;
LABEL_60:
      a4[1] = v19;
      if ( (*(_BYTE *)(v56 + 16) & 0x80) != 0 )
        goto LABEL_81;
      v38 = (unsigned __int8)v9[44];
      v39 = 0;
      if ( v38 == 160 )
        goto LABEL_76;
      v53 = v12;
      if ( v38 < 0x10 || v38 - 61 < 0x20 )
      {
        v52 = v10;
        v40 = off_DA3A0[v38];
      }
      else
      {
        if ( (v38 | 2) != 0x12 )
        {
          v43 = v10;
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          v10 = v43;
          v12 = v53;
          v39 = 0;
          goto LABEL_76;
        }
        v52 = v10;
        v40 = "PSR";
      }
      v41 = *(_DWORD *)(((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), const char *))**a6)(a6, v40) + 8);
      v42 = 4;
      if ( !a3 )
        v42 = 8;
      v39 = v41 + v42;
      v10 = v52;
      if ( v38 != 15 )
        v39 = v41;
      v12 = v53;
LABEL_76:
      v44 = sub_6B3D4(v56, v39, a3, v10, v12, a6);
      if ( (*(_DWORD *)(v56 + 16) & 0x10) != 0 )
        v44 = -v44;
      v13 = v44 + a4[1];
      goto LABEL_79;
    case 4:
      v21 = *((unsigned __int16 *)v9 + 15);
      v16 = 0;
      v22 = 0;
      if ( v21 == 160 )
        goto LABEL_73;
      if ( v21 < 0x10 || v21 - 61 < 0x20 )
      {
        v23 = off_DA3A0[v21];
      }
      else
      {
        if ( (v21 | 2) != 0x12 )
        {
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          v22 = 0;
          goto LABEL_73;
        }
        v23 = "PSR";
      }
      v31 = *(_DWORD *)((**a6)(a6, (char *)v23, a5) + 8);
      v32 = 4;
      if ( !a3 )
        v32 = 8;
      v22 = v31 + v32;
      if ( v21 != 15 )
        v22 = v31;
LABEL_73:
      v14 = a4;
      a4[1] = v22;
      if ( (*(_BYTE *)(v56 + 16) & 0x80) == 0 )
      {
        v13 = *((_DWORD *)v9 + 9) + v22;
LABEL_79:
        v14[1] = v13;
LABEL_80:
        v16 = 0;
      }
      goto LABEL_81;
    case 5:
      v16 = *(_DWORD *)(v56 + v8 + 32);
      v14 = a4;
      goto LABEL_81;
    case 8:
      v24 = *((unsigned __int16 *)v9 + 15);
      v25 = 0;
      v14 = a4;
      if ( v24 == 160 )
        goto LABEL_66;
      if ( v24 < 0x10 || v24 - 61 < 0x20 )
      {
        v51 = (int)(v9 + 24);
        v26 = off_DA3A0[v24];
      }
      else
      {
        if ( (v24 | 2) != 0x12 )
        {
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          v10 = (int)(v9 + 24);
          v12 = a5;
          v25 = 0;
          goto LABEL_66;
        }
        v51 = (int)(v9 + 24);
        v26 = "PSR";
      }
      v33 = *(_DWORD *)((**a6)(a6, (char *)v26, a5) + 8);
      v34 = 4;
      if ( !a3 )
        v34 = 8;
      v25 = v33 + v34;
      v10 = v51;
      if ( v24 != 15 )
        v25 = v33;
      v12 = a5;
LABEL_66:
      v16 = sub_6B3D4(v56, v25, a3, v10, v12, a6);
LABEL_81:
      v45 = (unsigned __int8 *)(v9 + 29);
      if ( v14[1] != -1 )
      {
        v46 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), _DWORD))(*a6)[4])(a6, *v45);
        if ( v46 == 2 )
        {
          v47 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), _DWORD))(*a6)[2])(a6, v14[1]);
        }
        else if ( v46 == 1 )
        {
          v47 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), _DWORD))(*a6)[1])(a6, v14[1]);
        }
        else
        {
          v47 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), _DWORD))(*a6)[3])(a6, v14[1]);
        }
        v16 = v47;
      }
      v14[4] = v16;
      v14[5] = 0;
      v14[9] = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), _DWORD))(*a6)[4])(a6, *v45);
      return 1;
    default:
      return v11;
  }
}
// DA3A0: using guessed type char *off_DA3A0[195];
