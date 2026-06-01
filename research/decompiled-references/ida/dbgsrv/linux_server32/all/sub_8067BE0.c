/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8067BE0
// Address: 0x08067BE0

//----- (08067BE0) --------------------------------------------------------
_BOOL4 __cdecl sub_8067BE0(_DWORD *a1)
{
  int v1; // ebx
  char *v2; // edx
  int v3; // edi
  char *v4; // edx
  void *v5; // ecx
  void *v6; // ecx
  bool v8; // [esp+1h] [ebp-31h]
  char *v9; // [esp+2h] [ebp-30h]
  int v10; // [esp+6h] [ebp-2Ch]
  void *ptr; // [esp+Ah] [ebp-28h] BYREF
  int v12; // [esp+Eh] [ebp-24h]
  int v13; // [esp+12h] [ebp-20h]
  unsigned int v14; // [esp+16h] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  v1 = 11 * ((a1[23] == 0) + ((a1[23] - a1[19]) >> 2) - 1)
     - 1171354717 * (((a1[18] - a1[16]) >> 2) + ((a1[20] - a1[21]) >> 2));
  if ( sub_80667A0((int)a1, (int *)&ptr, 0) == 1 )
    sub_8065D60((int)a1, &ptr);
  v2 = (char *)ptr;
  v8 = 11 * ((a1[23] == 0) + ((a1[23] - a1[19]) >> 2) - 1)
     - 1171354717 * (((a1[20] - a1[21]) >> 2) + ((a1[18] - a1[16]) >> 2)) != v1;
  if ( ptr )
  {
    v3 = v12;
    if ( v12 )
    {
      v10 = 0;
      do
      {
        v4 = &v2[40 * v10];
        v5 = *((void **)v4 + 5);
        if ( v5 )
        {
          *((_DWORD *)v4 + 6) = 0;
          v9 = v4;
          sub_80CF780(v5);
          v4 = v9;
        }
        v6 = *((void **)v4 + 2);
        if ( v6 )
        {
          *((_DWORD *)v4 + 3) = 0;
          sub_80CF780(v6);
        }
        ++v10;
        v2 = (char *)ptr;
      }
      while ( v3 != v10 );
    }
    v12 = 0;
    sub_80CF780(v2);
  }
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
