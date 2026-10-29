/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55420
// Address: 0x00055420

//----- (00055420) --------------------------------------------------------
int __fastcall sub_55420(int a1, int a2, int a3)
{
  int v3; // r3
  unsigned __int8 *v4; // r0
  int v5; // r7
  int v6; // r4
  char v7; // r7
  char v8; // r5
  int v9; // r5
  int v10; // r4
  const char *v11; // r0
  char *v12; // r0
  char *v13; // r7
  int v14; // r5
  int v15; // r0
  int v16; // r4
  const char *v17; // r7
  int v18; // r6
  const char *v19; // r1
  char *v20; // r0
  FILE *v22; // r0
  int v23; // r6
  unsigned int v24; // r1
  unsigned int v25; // r2
  char *v26; // r0
  char *v27; // r1
  void **v28; // [sp+Ch] [bp-1050h]
  int v29; // [sp+10h] [bp-104Ch]
  char *v30; // [sp+14h] [bp-1048h]
  int v31; // [sp+18h] [bp-1044h]
  int v32; // [sp+18h] [bp-1044h]
  int v33; // [sp+20h] [bp-103Ch]
  int v34; // [sp+20h] [bp-103Ch]
  const char *v35; // [sp+20h] [bp-103Ch]
  FILE *v36; // [sp+20h] [bp-103Ch]
  unsigned int *v38; // [sp+30h] [bp-102Ch]
  const char *v39; // [sp+38h] [bp-1024h] BYREF
  int v40; // [sp+3Ch] [bp-1020h]
  int v41; // [sp+40h] [bp-101Ch]
  unsigned __int8 *v42; // [sp+44h] [bp-1018h] BYREF
  int v43; // [sp+48h] [bp-1014h]
  int v44; // [sp+4Ch] [bp-1010h]
  void *v45; // [sp+50h] [bp-100Ch] BYREF
  int v46; // [sp+54h] [bp-1008h]
  int v47; // [sp+58h] [bp-1004h]
  __int16 v48; // [sp+5Ch] [bp-1000h]
  int v49; // [sp+60h] [bp-FFCh]
  char v50; // [sp+64h] [bp-FF8h]
  int v51; // [sp+68h] [bp-FF4h]
  int v52; // [sp+6Ch] [bp-FF0h]
  int v53; // [sp+70h] [bp-FECh]
  int v54; // [sp+74h] [bp-FE8h]

  v3 = *(unsigned __int8 *)(a1 + 460);
  if ( (unsigned int)(v3 - 9) >= 5 && v3 != 32 )
  {
    v10 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v10 - 1;
    *(_BYTE *)(v10 - 1) = v3;
  }
  v43 = 0;
  v42 = nullptr;
  v44 = 0;
  v4 = *(unsigned __int8 **)(a1 + 4);
  v5 = *v4;
  if ( v5 != 34 && v5 != 60 )
  {
    v34 = a3;
    v32 = a2;
    do
    {
      v7 = 0;
      v50 = 0;
      v49 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v48 = 0;
      v46 = 0;
      v47 = 0;
      v45 = nullptr;
      v6 = sub_51A0C(a1, (int)&v45, 0, nullptr);
      if ( !v6 && *(_DWORD *)(a1 + 32) )
        v6 = sub_52528((char **)a1, (int)&v45);
      v8 = 5;
      if ( !v6 )
      {
        v8 = 5;
        if ( v48 != 1 )
        {
          if ( !sub_5572C((int)&v42, (int)&v45) )
            v7 = 6;
          v8 = v7;
        }
      }
      if ( v45 )
      {
        v46 = 0;
        qfree(v45);
        v47 = 0;
        v45 = nullptr;
      }
      v9 = v8 & 7;
    }
    while ( !v9 );
    if ( v9 != 5 )
    {
      v6 = 30;
      goto LABEL_45;
    }
    if ( v6 )
      goto LABEL_45;
    v4 = v42;
    *(_DWORD *)(a1 + 4) = v42;
    v6 = 30;
    if ( !v4 )
      return v6;
    v5 = *v4;
    a2 = v32;
    a3 = v34;
  }
  v6 = 30;
  if ( v5 == 34 )
  {
    v33 = a3;
    v31 = a2;
    goto LABEL_26;
  }
  if ( v5 == 60 )
  {
    v33 = a3;
    v31 = a2;
    v5 = 62;
LABEL_26:
    v11 = (const char *)(v4 + 1);
    *(_DWORD *)(a1 + 4) = v11;
    v12 = strchr(v11, v5);
    if ( v12 )
    {
      *v12 = 0;
      v38 = (unsigned int *)(a1 + 132);
      v6 = 31;
      if ( *(_DWORD *)(a1 + 132) <= 0x7Fu )
      {
        v28 = (void **)(a1 + 128);
        v13 = (char *)sub_515F4(a1, (unsigned __int8 *)&v45, 4096, *(unsigned __int8 **)(a1 + 4), v5, v33);
        sub_1B09C((int)&v39, v13);
        v14 = *(_DWORD *)(a1 + 116);
        v15 = *(_DWORD *)(a1 + 120);
        v16 = v14 + 12 * v15;
        if ( 12 * v15 )
        {
          v29 = v14 + 12 * v15;
          v30 = v13;
          v35 = v39;
          v17 = &byte_B3CBE;
          if ( v40 )
            v17 = v39;
          v18 = 12 * v15;
          while ( 1 )
          {
            v19 = &byte_B3CBE;
            if ( *(_DWORD *)(v14 + 4) )
              v19 = *(const char **)v14;
            if ( !strcmp(v17, v19) )
              break;
            v18 -= 12;
            v14 += 12;
            if ( !v18 )
            {
              v16 = v29;
              v14 = v29;
              v13 = v30;
              goto LABEL_40;
            }
          }
          v13 = v30;
          v16 = v29;
LABEL_40:
          v20 = (char *)v35;
        }
        else
        {
          v20 = (char *)v39;
        }
        if ( v20 )
        {
          v40 = 0;
          qfree(v20);
          v41 = 0;
          v39 = nullptr;
        }
        if ( v14 == v16 )
        {
          if ( v13 && (v22 = fopenRT(v13)) != nullptr )
          {
            v36 = v22;
            v23 = a1;
            v24 = *v38;
            v25 = *v38 + 1;
            if ( *(_DWORD *)(a1 + 136) >= v25 )
            {
              v26 = (char *)*v28;
            }
            else
            {
              v26 = (char *)qvector_reserve((int)v28, *v28, v25, 0x18u);
              *v28 = v26;
              v24 = *v38;
              v25 = *v38 + 1;
              v23 = a1;
            }
            *v38 = v25;
            v27 = &v26[24 * v24];
            *((_DWORD *)v27 + 1) = *(_DWORD *)(v23 + 140);
            *((_DWORD *)v27 + 4) = *(_DWORD *)(v23 + 148);
            *(_DWORD *)v27 = *(_DWORD *)(v23 + 144);
            v27[20] = *(_BYTE *)(v23 + 68);
            *((_DWORD *)v27 + 2) = *(_DWORD *)(v23 + 104);
            *((_DWORD *)v27 + 3) = *(_DWORD *)(v23 + 108);
            *(_DWORD *)(v23 + 140) = v36;
            *(_DWORD *)(v23 + 144) = qstrdup(v13);
            v6 = 0;
            *(_DWORD *)(v23 + 148) = 0;
            *(_DWORD *)(a1 + 104) = sub_4E3E0;
            *(_DWORD *)(a1 + 108) = a1;
            *(_BYTE *)(v23 + 68) = 0;
          }
          else if ( v31 )
          {
            v6 = 0;
            set_qerrno(0);
          }
          else
          {
            v6 = 32;
            set_error_string(0, *(const char **)(a1 + 4));
          }
        }
        else
        {
          set_qerrno(0);
          v6 = 0;
        }
      }
    }
  }
LABEL_45:
  if ( v42 )
  {
    v43 = 0;
    qfree(v42);
    v44 = 0;
    v42 = nullptr;
  }
  return v6;
}
// B3CBE: using guessed type char byte_B3CBE;
