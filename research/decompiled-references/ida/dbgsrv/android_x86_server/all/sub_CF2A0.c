/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF2A0
// Address: 0x000CF2A0

//----- (000CF2A0) --------------------------------------------------------
int __cdecl sub_CF2A0(int a1, void **a2)
{
  void *v2; // edx
  char *v3; // edi
  char v4; // dl
  char v5; // dl
  char v6; // cl
  char v7; // dl
  char v8; // dl
  char v9; // cl
  char v10; // dl
  char v11; // dl
  char v12; // cl
  char v13; // dl
  char v14; // dl
  char v15; // cl
  char v16; // dl
  char v17; // dl
  char v18; // cl
  char v19; // dl
  char v20; // dl
  char v21; // cl
  char v22; // dl
  char v23; // dl
  char v24; // cl
  char v25; // dl
  char v26; // dl
  char v27; // cl
  char v28; // dl
  char v29; // dl
  char v30; // cl
  char v31; // cl
  char v32; // cl
  char v33; // al
  char v34; // dl
  char *v35; // ecx
  char v36; // al
  char *v37; // eax
  char v38; // dh
  int v40; // eax
  size_t v41; // esi
  char *v42; // ecx
  unsigned int v43; // eax
  char *v44; // eax
  size_t v45; // eax
  char v47; // [esp+1Fh] [ebp-4Dh]
  int v48; // [esp+20h] [ebp-4Ch] BYREF
  int v49; // [esp+24h] [ebp-48h]
  char v50; // [esp+28h] [ebp-44h] BYREF
  char v51; // [esp+29h] [ebp-43h] BYREF
  void *v52; // [esp+2Ch] [ebp-40h]
  _OWORD s[2]; // [esp+30h] [ebp-3Ch] BYREF
  int v54; // [esp+50h] [ebp-1Ch]
  int v55; // [esp+54h] [ebp-18h]

  v2 = &_stack_chk_guard;
  v3 = *(char **)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + 1 - (_DWORD)v3) >= 0x15 )
  {
    v52 = &_stack_chk_guard;
    v4 = 0;
    if ( (unsigned int)(*v3 - 48) >= 0xA )
      v4 = 9;
    v5 = *v3 + v4;
    v47 = -48;
    v6 = -48;
    if ( (unsigned int)(v3[1] - 48) >= 0xA )
      v6 = -87;
    LOBYTE(v48) = v3[1] + v6 + 16 * v5;
    v7 = 0;
    if ( (unsigned int)(v3[2] - 48) >= 0xA )
      v7 = 9;
    v8 = v3[2] + v7;
    v9 = -48;
    if ( (unsigned int)(v3[3] - 48) >= 0xA )
      v9 = -87;
    BYTE1(v48) = v3[3] + v9 + 16 * v8;
    v10 = 0;
    if ( (unsigned int)(v3[4] - 48) >= 0xA )
      v10 = 9;
    v11 = v3[4] + v10;
    v12 = -48;
    if ( (unsigned int)(v3[5] - 48) >= 0xA )
      v12 = -87;
    BYTE2(v48) = v3[5] + v12 + 16 * v11;
    v13 = 0;
    if ( (unsigned int)(v3[6] - 48) >= 0xA )
      v13 = 9;
    v14 = v3[6] + v13;
    v15 = -48;
    if ( (unsigned int)(v3[7] - 48) >= 0xA )
      v15 = -87;
    HIBYTE(v48) = v3[7] + v15 + 16 * v14;
    v16 = 0;
    if ( (unsigned int)(v3[8] - 48) >= 0xA )
      v16 = 9;
    v17 = v3[8] + v16;
    v18 = -48;
    if ( (unsigned int)(v3[9] - 48) >= 0xA )
      v18 = -87;
    LOBYTE(v49) = v3[9] + v18 + 16 * v17;
    v19 = 0;
    if ( (unsigned int)(v3[10] - 48) >= 0xA )
      v19 = 9;
    v20 = v3[10] + v19;
    v21 = -48;
    if ( (unsigned int)(v3[11] - 48) >= 0xA )
      v21 = -87;
    BYTE1(v49) = v3[11] + v21 + 16 * v20;
    v22 = 0;
    if ( (unsigned int)(v3[12] - 48) >= 0xA )
      v22 = 9;
    v23 = v3[12] + v22;
    v24 = -48;
    if ( (unsigned int)(v3[13] - 48) >= 0xA )
      v24 = -87;
    BYTE2(v49) = v3[13] + v24 + 16 * v23;
    v25 = 0;
    if ( (unsigned int)(v3[14] - 48) >= 0xA )
      v25 = 9;
    v26 = v3[14] + v25;
    v27 = -48;
    if ( (unsigned int)(v3[15] - 48) >= 0xA )
      v27 = -87;
    HIBYTE(v49) = v3[15] + v27 + 16 * v26;
    v28 = 0;
    if ( (unsigned int)(v3[16] - 48) >= 0xA )
      v28 = 9;
    v29 = v3[16] + v28;
    v30 = -48;
    if ( (unsigned int)(v3[17] - 48) >= 0xA )
      v30 = -87;
    v50 = v3[17] + v30 + 16 * v29;
    v31 = 0;
    if ( (unsigned int)(v3[18] - 48) >= 0xA )
      v31 = 9;
    v32 = v3[18] + v31;
    v33 = v3[19];
    if ( (unsigned int)(v33 - 48) >= 0xA )
      v47 = -87;
    v51 = v33 + v47 + 16 * v32;
    if ( &v51 > (char *)&v48 )
    {
      v34 = v33 + v47 + 16 * v32;
      v35 = &v50;
      v36 = v48;
      LOBYTE(v48) = v34;
      v51 = v36;
      v37 = (char *)&v48 + 2;
      do
      {
        v38 = *(v37 - 1);
        *(v37 - 1) = *v35;
        *v35-- = v38;
      }
      while ( v37++ < v35 );
    }
    memset(s, 0, sizeof(s));
    v55 = 0;
    v54 = 0;
    v40 = snprintf((char *)s, 0x28u, "%LaL", v48, v49);
    if ( v40 )
    {
      v41 = v40;
      v42 = (char *)a2[1];
      v43 = (unsigned int)a2[2];
      if ( (unsigned int)&v42[v41] >= v43 )
      {
        v45 = 2 * v43;
        if ( v45 < (unsigned int)&v42[v41] )
          v45 = (size_t)&v42[v41];
        a2[2] = (void *)v45;
        v44 = (char *)realloc(*a2, v45);
        *a2 = v44;
        v42 = (char *)a2[1];
      }
      else
      {
        v44 = (char *)*a2;
      }
      memmove(&v42[(_DWORD)v44], s, v41);
      a2[1] = (char *)a2[1] + v41;
    }
    v2 = v52;
  }
  return *(_DWORD *)v2;
}
