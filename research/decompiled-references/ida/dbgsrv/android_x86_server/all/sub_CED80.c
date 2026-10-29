/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CED80
// Address: 0x000CED80

//----- (000CED80) --------------------------------------------------------
int __cdecl sub_CED80(int a1, void **a2)
{
  void *v2; // edx
  char *v3; // ecx
  int v4; // edx
  char v5; // bl
  int v6; // eax
  char v7; // al
  char v8; // al
  char v9; // dl
  char v10; // al
  char v11; // al
  char v12; // dl
  char v13; // dl
  char *v14; // esi
  char v15; // dl
  char v16; // al
  char v17; // cl
  char *v18; // eax
  char v19; // cl
  int v21; // eax
  size_t v22; // esi
  char *v23; // ecx
  unsigned int v24; // eax
  char *v25; // eax
  size_t v26; // eax
  float v28[2]; // [esp+20h] [ebp-3Ch] BYREF
  int v29; // [esp+28h] [ebp-34h]
  void *v30; // [esp+2Ch] [ebp-30h]
  __int128 s; // [esp+30h] [ebp-2Ch] BYREF
  int v32; // [esp+40h] [ebp-1Ch]
  int v33; // [esp+44h] [ebp-18h]

  v2 = &_stack_chk_guard;
  v3 = *(char **)(a1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + 1 - (_DWORD)v3) >= 9 )
  {
    v30 = &_stack_chk_guard;
    v4 = 0;
    if ( (unsigned int)(*v3 - 48) >= 0xA )
      LOBYTE(v4) = 9;
    LOBYTE(v4) = *v3 + v4;
    v5 = -48;
    if ( (unsigned int)(v3[1] - 48) >= 0xA )
      v5 = -87;
    v6 = v4;
    LOBYTE(v6) = v3[1] + v5 + 16 * v4;
    v29 = v6;
    v7 = 0;
    if ( (unsigned int)(v3[2] - 48) >= 0xA )
      v7 = 9;
    v8 = v3[2] + v7;
    v9 = -48;
    if ( (unsigned int)(v3[3] - 48) >= 0xA )
      v9 = -87;
    BYTE1(v28[0]) = v3[3] + v9 + 16 * v8;
    v10 = 0;
    if ( (unsigned int)(v3[4] - 48) >= 0xA )
      v10 = 9;
    v11 = v3[4] + v10;
    v12 = -48;
    if ( (unsigned int)(v3[5] - 48) >= 0xA )
      v12 = -87;
    BYTE2(v28[0]) = v3[5] + v12 + 16 * v11;
    v13 = 0;
    if ( (unsigned int)(v3[6] - 48) >= 0xA )
      v13 = 9;
    v14 = (char *)v28 + 2;
    v15 = v3[6] + v13;
    v16 = v3[7];
    v17 = -48;
    if ( (unsigned int)(v16 - 48) >= 0xA )
      v17 = -87;
    LOBYTE(v28[0]) = v16 + v17 + 16 * v15;
    HIBYTE(v28[0]) = v29;
    v18 = (char *)v28 + 2;
    do
    {
      v19 = *(v18 - 1);
      *(v18 - 1) = *v14;
      *v14-- = v19;
    }
    while ( v18++ < v14 );
    s = 0;
    v33 = 0;
    v32 = 0;
    v21 = snprintf((char *)&s, 0x18u, "%af", v28[0]);
    if ( v21 )
    {
      v22 = v21;
      v23 = (char *)a2[1];
      v24 = (unsigned int)a2[2];
      if ( (unsigned int)&v23[v22] >= v24 )
      {
        v26 = 2 * v24;
        if ( v26 < (unsigned int)&v23[v22] )
          v26 = (size_t)&v23[v22];
        a2[2] = (void *)v26;
        v25 = (char *)realloc(*a2, v26);
        *a2 = v25;
        v23 = (char *)a2[1];
      }
      else
      {
        v25 = (char *)*a2;
      }
      memmove(&v23[(_DWORD)v25], &s, v22);
      a2[1] = (char *)a2[1] + v22;
    }
    v2 = v30;
  }
  return *(_DWORD *)v2;
}
