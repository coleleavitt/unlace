/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_539F0
// Address: 0x000539F0

//----- (000539F0) --------------------------------------------------------
int __fastcall sub_539F0(_DWORD *a1, int a2)
{
  int *v2; // r3
  int *v3; // r6
  int v4; // r2
  int v5; // r4
  int v6; // r12
  _DWORD *v7; // r5
  int (*v8)(void); // r3
  int v9; // r4
  int v10; // r10
  int v11; // r8
  int v12; // r3
  int (*v13)(); // r11
  __int64 v15; // r2
  int *v16; // r10
  int v17; // r9
  int *v18; // r0
  _DWORD *v19; // r3
  int *v20; // r6
  int v21; // r8
  int i; // r10
  char *v23; // r0
  char *v24; // r9
  int v25; // r11
  int j; // r4
  int *v27; // r3
  void *v28; // r0
  char *v29; // r0
  char **v30; // r8
  char *v31; // r10
  char *k; // r7
  int *v33; // r3
  void *v34; // r0
  int *v35; // r4
  int *v36; // r9
  void *v37; // r0
  int v38; // r7
  _DWORD *v39; // r0
  int v40; // r3
  _DWORD *v41; // r4
  int v42; // r1
  int v43; // r11
  size_t v44; // r5
  void *v45; // r0
  int *v46; // [sp+Ch] [bp-18h]
  char *ptra; // [sp+10h] [bp-14h]
  int v49; // [sp+14h] [bp-10h]
  _DWORD *v50; // [sp+18h] [bp-Ch]
  int v51; // [sp+1Ch] [bp-8h]

  v2 = (int *)a1[46];
  v46 = a1 + 45;
  v3 = a1 + 45;
  if ( !v2 )
    return -1;
  do
  {
    v4 = v2[4];
    if ( v4 < a2 )
      v2 = (int *)v2[3];
    else
      v3 = v2;
    if ( v4 >= a2 )
      v2 = (int *)v2[2];
  }
  while ( v2 );
  if ( v46 == v3 )
    return -1;
  if ( v3[4] > a2 )
    return -1;
  v5 = v3[6];
  if ( !v5 )
    return -1;
  v6 = *a1;
  v7 = a1;
  v8 = *(int (**)(void))(*a1 + 240);
  v9 = 24 * v5 - 24;
  v10 = v3[5];
  v11 = v10 + v9;
  if ( v8 != sub_14EF8 )
  {
    if ( !v8() )
      return -1;
    v6 = *v7;
  }
  (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(v6 + 160))(
    v7,
    4,
    *(_DWORD *)(v11 + 16),
    v7[63],
    v7[64]);
  if ( *(_BYTE *)(v11 + 20) )
  {
    v12 = *(_DWORD *)(v11 + 4);
    v13 = *(int (**)())(*v7 + 220);
    if ( v13 == sub_14EF4 )
    {
LABEL_14:
      sub_172DC((int)v7, "Failed to restore %zu registers!\n", v12);
      return -1;
    }
    if ( !((int (__fastcall *)(_DWORD *, int, _DWORD, int, _DWORD))v13)(v7, a2, 0, v12, *(_DWORD *)(v10 + v9)) )
    {
      v12 = *(_DWORD *)(v11 + 4);
      goto LABEL_14;
    }
  }
  v15 = *(_QWORD *)(v3 + 5);
  v16 = (int *)(v15 + 24 * HIDWORD(v15) - 24);
  v17 = *(_DWORD *)(v15 + 24 * HIDWORD(v15) - 20);
  if ( !v17 )
  {
    if ( !HIDWORD(v15) )
    {
LABEL_19:
      v18 = sub_81494(v3, v46);
      v19 = (_DWORD *)v18[5];
      v20 = v18;
      if ( v19 )
      {
        v21 = v18[6];
        if ( v21 )
        {
          for ( i = 0; i != v21; ++i )
          {
            v23 = (char *)v19[6 * i];
            v24 = (char *)&v19[6 * i];
            if ( v23 )
            {
              v25 = *((_DWORD *)v24 + 1);
              if ( v25 )
              {
                for ( j = 0; j != v25; ++j )
                {
                  v27 = (int *)&v23[24 * j];
                  if ( *v27 >= -1 )
                  {
                    v28 = (void *)v27[2];
                    if ( v28 )
                    {
                      v27[3] = 0;
                      sub_77E08(v28);
                    }
                  }
                  v23 = *(char **)v24;
                }
              }
              *((_DWORD *)v24 + 1) = 0;
              sub_77E08(v23);
            }
            v19 = (_DWORD *)v20[5];
          }
        }
        v20[6] = 0;
        sub_77E08(v19);
      }
      sub_80648(v20);
      --v7[49];
      goto LABEL_53;
    }
    ptra = *(char **)(v15 + 24 * HIDWORD(v15) - 20);
    goto LABEL_34;
  }
  v38 = 0;
  v49 = 2 * v17;
  v39 = sub_77E84(24 * v17);
  v40 = 24 * v17;
  v41 = v39 + 2;
  ptra = (char *)v39;
  v50 = v7;
  do
  {
    v42 = *v16;
    *v41 = 0;
    *(v41 - 2) = -2;
    v43 = v42 + v38;
    v41[1] = 0;
    v41[2] = 0;
    v41[3] = 0;
    if ( (_DWORD *)(v42 + v38) != v41 - 2 )
    {
      if ( *(int *)(v42 + v38) < -1 )
      {
        *(_QWORD *)v41 = *(_QWORD *)(v43 + 8);
      }
      else
      {
        *v41 = 0;
        v41[1] = 0;
        v41[2] = 0;
        v44 = *(_DWORD *)(v43 + 12);
        if ( v44 )
        {
          v51 = v40;
          v45 = sub_77E84(*(_DWORD *)(v43 + 12));
          v41[2] = v44;
          *v41 = v45;
          memcpy(v45, *(const void **)(v43 + 8), v44);
          v40 = v51;
          v41[1] = v44;
        }
      }
      *(v41 - 2) = *(_DWORD *)v43;
    }
    v38 += 24;
    v41 += 6;
  }
  while ( v40 != v38 );
  HIDWORD(v15) = v3[6];
  v7 = v50;
  LODWORD(v15) = HIDWORD(v15);
  if ( HIDWORD(v15) )
  {
    LODWORD(v15) = v3[5];
LABEL_34:
    v3[6] = --HIDWORD(v15);
    v29 = *(char **)(v15 + 24 * HIDWORD(v15));
    v30 = (char **)(24 * HIDWORD(v15) + v15);
    if ( v29 )
    {
      v31 = v30[1];
      if ( v31 )
      {
        for ( k = nullptr; k != v31; ++k )
        {
          v33 = (int *)&v29[24 * (_DWORD)k];
          if ( *v33 >= -1 )
          {
            v34 = (void *)v33[2];
            if ( v34 )
            {
              v33[3] = 0;
              sub_77E08(v34);
            }
          }
          v29 = *v30;
        }
      }
      v30[1] = nullptr;
      sub_77E08(v29);
    }
    if ( !ptra )
      goto LABEL_51;
    if ( !v17 )
    {
LABEL_50:
      sub_77E08(ptra);
LABEL_51:
      LODWORD(v15) = v3[6];
      goto LABEL_52;
    }
    v49 = 2 * v17;
LABEL_45:
    v35 = (int *)ptra;
    v36 = (int *)&ptra[8 * v49 + 8 * v17];
    do
    {
      if ( *v35 >= -1 )
      {
        v37 = (void *)v35[2];
        if ( v37 )
        {
          v35[3] = 0;
          sub_77E08(v37);
        }
      }
      v35 += 6;
    }
    while ( v36 != v35 );
    goto LABEL_50;
  }
  if ( ptra )
    goto LABEL_45;
LABEL_52:
  if ( !(_DWORD)v15 )
    goto LABEL_19;
LABEL_53:
  if ( v7[20] == v7[16] )
    return 1;
  else
    return 3;
}
