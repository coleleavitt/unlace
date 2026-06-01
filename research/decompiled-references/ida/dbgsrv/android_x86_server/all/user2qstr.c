/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2qstr
// Address: 0x0009CA50

//----- (0009CA50) --------------------------------------------------------
unsigned int __cdecl user2qstr(int a1, int a2)
{
  void **v2; // edx
  unsigned int v3; // ecx
  void *v4; // eax
  unsigned int v5; // esi
  char *v6; // eax
  char v7; // al
  void *v8; // eax
  void *v9; // ecx
  int v10; // edi
  char v12; // [esp+Fh] [ebp-1Dh]
  char *v13; // [esp+10h] [ebp-1Ch]
  char *v14[6]; // [esp+14h] [ebp-18h] BYREF

  v2 = (void **)a1;
  v14[1] = (char *)__readgsdword(0x14u);
  *(_DWORD *)(a1 + 4) = 0;
  v3 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 8) < v3 )
  {
    v4 = qvector_reserve(a1, *(void **)a1, v3, 1u);
    v2 = (void **)a1;
    *(_DWORD *)a1 = v4;
    v3 = *(_DWORD *)(a2 + 4);
  }
  v5 = v3 - 1;
  v6 = byte_EF875;
  if ( v3 )
    v6 = *(char **)a2;
  v14[0] = v6;
  if ( !v3 )
    v5 = 0;
  if ( v5 )
  {
    v13 = &v6[v5];
    do
    {
      v14[0] = v6 + 1;
      v7 = *v6;
      if ( v7 == 92 )
      {
        v7 = back_char(v14);
        v2 = (void **)a1;
      }
      v12 = v7;
      v8 = *v2;
      v9 = v2[1];
      v10 = (int)v9 - 1;
      if ( !v9 )
        v10 = 0;
      if ( (unsigned int)v2[2] < v10 + 2 )
      {
        v8 = qvector_reserve((int)v2, v8, v10 + 2, 1u);
        v2 = (void **)a1;
        *(_DWORD *)a1 = v8;
      }
      v2[1] = (void *)(v10 + 2);
      *((_BYTE *)v8 + v10) = v12;
      *((_BYTE *)*v2 + v10 + 1) = 0;
      v6 = v14[0];
    }
    while ( v14[0] != v13 );
  }
  return __readgsdword(0x14u);
}
