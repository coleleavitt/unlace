/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEFC0
// Address: 0x000CEFC0

//----- (000CEFC0) --------------------------------------------------------
int __cdecl sub_CEFC0(int a1, void **a2)
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
  char v29; // cl
  char *v30; // eax
  char *v31; // ecx
  char v32; // dh
  int v34; // eax
  size_t v35; // esi
  char *v36; // ecx
  unsigned int v37; // eax
  char *v38; // eax
  size_t v39; // eax
  int v41; // [esp+20h] [ebp-4Ch] BYREF
  int v42; // [esp+24h] [ebp-48h] BYREF
  void *v43; // [esp+2Ch] [ebp-40h]
  _OWORD s[3]; // [esp+30h] [ebp-3Ch] BYREF

  v2 = &_stack_chk_guard;
  v3 = *(char **)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + 1 - (_DWORD)v3) >= 0x11 )
  {
    v43 = &_stack_chk_guard;
    v4 = 0;
    if ( (unsigned int)(*v3 - 48) >= 0xA )
      v4 = 9;
    v5 = *v3 + v4;
    v6 = -48;
    if ( (unsigned int)(v3[1] - 48) >= 0xA )
      v6 = -87;
    LOBYTE(v41) = v3[1] + v6 + 16 * v5;
    v7 = 0;
    if ( (unsigned int)(v3[2] - 48) >= 0xA )
      v7 = 9;
    v8 = v3[2] + v7;
    v9 = -48;
    if ( (unsigned int)(v3[3] - 48) >= 0xA )
      v9 = -87;
    BYTE1(v41) = v3[3] + v9 + 16 * v8;
    v10 = 0;
    if ( (unsigned int)(v3[4] - 48) >= 0xA )
      v10 = 9;
    v11 = v3[4] + v10;
    v12 = -48;
    if ( (unsigned int)(v3[5] - 48) >= 0xA )
      v12 = -87;
    BYTE2(v41) = v3[5] + v12 + 16 * v11;
    v13 = 0;
    if ( (unsigned int)(v3[6] - 48) >= 0xA )
      v13 = 9;
    v14 = v3[6] + v13;
    v15 = -48;
    if ( (unsigned int)(v3[7] - 48) >= 0xA )
      v15 = -87;
    HIBYTE(v41) = v3[7] + v15 + 16 * v14;
    v16 = 0;
    if ( (unsigned int)(v3[8] - 48) >= 0xA )
      v16 = 9;
    v17 = v3[8] + v16;
    v18 = -48;
    if ( (unsigned int)(v3[9] - 48) >= 0xA )
      v18 = -87;
    LOBYTE(v42) = v3[9] + v18 + 16 * v17;
    v19 = 0;
    if ( (unsigned int)(v3[10] - 48) >= 0xA )
      v19 = 9;
    v20 = v3[10] + v19;
    v21 = -48;
    if ( (unsigned int)(v3[11] - 48) >= 0xA )
      v21 = -87;
    BYTE1(v42) = v3[11] + v21 + 16 * v20;
    v22 = 0;
    if ( (unsigned int)(v3[12] - 48) >= 0xA )
      v22 = 9;
    v23 = v3[12] + v22;
    v24 = -48;
    if ( (unsigned int)(v3[13] - 48) >= 0xA )
      v24 = -87;
    BYTE2(v42) = v3[13] + v24 + 16 * v23;
    v25 = 0;
    if ( (unsigned int)(v3[14] - 48) >= 0xA )
      v25 = 9;
    v26 = v3[14] + v25;
    v27 = -48;
    if ( (unsigned int)(v3[15] - 48) >= 0xA )
      v27 = -87;
    v28 = v3[15] + v27 + 16 * v26;
    v29 = v41;
    LOBYTE(v41) = v28;
    v30 = (char *)&v41 + 2;
    HIBYTE(v42) = v29;
    v31 = (char *)&v42 + 2;
    do
    {
      v32 = *(v30 - 1);
      *(v30 - 1) = *v31;
      *v31-- = v32;
    }
    while ( v30++ < v31 );
    memset(s, 0, 32);
    v34 = snprintf((char *)s, 0x20u, "%a", v41, v42);
    if ( v34 )
    {
      v35 = v34;
      v36 = (char *)a2[1];
      v37 = (unsigned int)a2[2];
      if ( (unsigned int)&v36[v35] >= v37 )
      {
        v39 = 2 * v37;
        if ( v39 < (unsigned int)&v36[v35] )
          v39 = (size_t)&v36[v35];
        a2[2] = (void *)v39;
        v38 = (char *)realloc(*a2, v39);
        *a2 = v38;
        v36 = (char *)a2[1];
      }
      else
      {
        v38 = (char *)*a2;
      }
      memmove(&v36[(_DWORD)v38], s, v35);
      a2[1] = (char *)a2[1] + v35;
    }
    v2 = v43;
  }
  return *(_DWORD *)v2;
}
