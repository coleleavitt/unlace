/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433B00
// Address: 0x00433B00

//----- (00433B00) --------------------------------------------------------
int __userpurge sub_433B00@<eax>(int a1@<ecx>, void **a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int *v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  int v17; // eax
  void **v18; // esi
  void **v19; // esi
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // edi
  int v26; // [esp-8h] [ebp-C8h]
  __int128 v27; // [esp+Ch] [ebp-B4h]
  __int128 v28; // [esp+1Ch] [ebp-A4h]
  __int128 v29; // [esp+2Ch] [ebp-94h]
  __int128 v30; // [esp+3Ch] [ebp-84h]
  void *v31; // [esp+4Ch] [ebp-74h] BYREF
  int v32; // [esp+50h] [ebp-70h]
  int v33; // [esp+54h] [ebp-6Ch]
  __int16 v34; // [esp+58h] [ebp-68h]
  int v35; // [esp+5Ch] [ebp-64h]
  char v36; // [esp+60h] [ebp-60h]
  __int128 v37; // [esp+64h] [ebp-5Ch]
  void **v38; // [esp+74h] [ebp-4Ch]
  int v39; // [esp+78h] [ebp-48h]
  void *v40; // [esp+7Ch] [ebp-44h]
  int v41; // [esp+80h] [ebp-40h]
  int v42; // [esp+84h] [ebp-3Ch]
  int v43; // [esp+88h] [ebp-38h]
  int *v44; // [esp+8Ch] [ebp-34h]
  const CHAR *v45; // [esp+90h] [ebp-30h] BYREF
  void **v46; // [esp+94h] [ebp-2Ch]
  int v47; // [esp+98h] [ebp-28h]
  int v48; // [esp+9Ch] [ebp-24h]
  int v49; // [esp+A0h] [ebp-20h]
  int v50; // [esp+A4h] [ebp-1Ch]
  int v51; // [esp+A8h] [ebp-18h]
  int v52; // [esp+ACh] [ebp-14h]
  char v53; // [esp+B2h] [ebp-Eh]
  char v54; // [esp+B3h] [ebp-Dh]
  int v55; // [esp+BCh] [ebp-4h]
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  v44 = (int *)a1;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v55 = 0;
  v41 = *(_DWORD *)(a1 + 264);
  if ( v41 )
  {
    v27 = *(_OWORD *)(a1 + 200);
    v28 = *(_OWORD *)(a1 + 216);
    v29 = *(_OWORD *)(a1 + 232);
    v30 = *(_OWORD *)(a1 + 248);
  }
  *(_DWORD *)(a1 + 264) = &v31;
  v46 = *(void ***)(a1 + 28);
  v47 = *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v48 = v5;
  *(_DWORD *)(a1 + 36) = 0;
  v43 = *(_DWORD *)(a1 + 116);
  v42 = *(_DWORD *)(a1 + 120);
  v53 = *(_BYTE *)(a1 + 80);
  v54 = *(_BYTE *)(a1 + 44);
  v45 = pNodeName;
  *(_DWORD *)(a1 + 116) = sub_4355C0;
  *(_DWORD *)(a1 + 120) = &v45;
  v49 = *(_DWORD *)(a1 + 140);
  v50 = *(_DWORD *)(a1 + 144);
  v6 = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  LOBYTE(v55) = 2;
  v51 = v6;
  *(_DWORD *)(a1 + 148) = 0;
  sub_455100();
  v26 = v55;
  *(_BYTE *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 44) = 1;
  *(_BYTE *)(a1 + 268) = 0;
  v7 = sub_466550(
         (int)a2,
         (int)&savedregs,
         a3,
         a1,
         (_DWORD *)(a1 + 200),
         3,
         (struct _EXCEPTION_REGISTRATION_RECORD *)sub_4642E6,
         v26,
         &stru_4AF964);
  v8 = v44;
  v52 = v7;
  if ( v7 )
    sub_45CC20(v52);
  else
    sub_432F50(v44, a2, a4, 1);
  if ( !v52 && (v34 != 1 || *((_BYTE *)v8 + 268)) )
    v52 = sub_45CC20(47);
  v9 = v49;
  v10 = v50;
  v11 = v51;
  *((_BYTE *)v8 + 44) = v54;
  *((_BYTE *)v8 + 80) = v53;
  v8[29] = v43;
  v8[30] = v42;
  v40 = (void *)v8[35];
  v49 = (int)v40;
  v50 = v8[36];
  v12 = v8[37];
  v8[35] = v9;
  v8[36] = v10;
  v8[37] = v11;
  v13 = v8[8] == 0;
  v51 = v12;
  if ( !v13 )
  {
    do
    {
      v14 = v8[7] + 28 * v8[8];
      *v8 = *(_DWORD *)(v14 - 16);
      v8[1] = *(_DWORD *)(v14 - 12);
      v8[10] = *(_DWORD *)(v14 - 4);
      v15 = v8[8];
      if ( v15 )
      {
        v16 = v8[7];
        v17 = v15 - 1;
        v8[8] = v17;
        v18 = (void **)(28 * v17 + v16);
        v13 = *v18 == nullptr;
        LOBYTE(v55) = 3;
        if ( !v13 )
        {
          sub_415F90(v18, 0);
          sub_453A20(*v18);
          *v18 = nullptr;
          v18[2] = nullptr;
        }
      }
    }
    while ( v8[8] );
  }
  v19 = (void **)v8[7];
  v20 = v8[8];
  v21 = v8[9];
  v8[7] = (int)v46;
  v8[8] = v47;
  v8[9] = v48;
  v22 = v41;
  v38 = v19;
  v39 = v20;
  v46 = v19;
  v47 = v20;
  v48 = v21;
  if ( v41 )
  {
    *(__int128 *)(v8 + 50) = v27;
    *(__int128 *)(v8 + 54) = v28;
    *(__int128 *)(v8 + 58) = v29;
    *(__int128 *)(v8 + 62) = v30;
  }
  v8[66] = v22;
  v23 = v52;
  LOBYTE(v55) = 4;
  if ( v40 )
  {
    v50 = 0;
    sub_453A20(v40);
    v49 = 0;
    v51 = 0;
  }
  LOBYTE(v55) = 5;
  if ( v19 )
  {
    v24 = v39;
    if ( v39 )
    {
      do
      {
        v13 = *v19 == nullptr;
        LOBYTE(v55) = 6;
        if ( !v13 )
        {
          sub_415F90(v19, 0);
          sub_453A20(*v19);
          *v19 = nullptr;
          v19[2] = nullptr;
        }
        v19 += 7;
        LOBYTE(v55) = 5;
        --v24;
      }
      while ( v24 );
      v19 = v38;
    }
    v47 = 0;
    sub_453A20(v19);
    v23 = v52;
    v46 = nullptr;
    v48 = 0;
  }
  v55 = 7;
  if ( v31 )
  {
    v32 = 0;
    sub_453A20(v31);
  }
  return v23;
}
// 433DB3: variable 'v27' is possibly undefined
// 433DC1: variable 'v28' is possibly undefined
// 433DCF: variable 'v29' is possibly undefined
// 433DDD: variable 'v30' is possibly undefined
// 4AF964: using guessed type FuncInfo stru_4AF964;
