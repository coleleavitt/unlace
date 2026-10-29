/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79700
// Address: 0x00079700

//----- (00079700) --------------------------------------------------------
unsigned int __cdecl sub_79700(int a1, _QWORD *a2, _DWORD *a3)
{
  char *v3; // ecx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  const char *v7; // esi
  size_t v8; // eax
  size_t v9; // edx
  unsigned int v10; // edi
  void *v11; // eax
  size_t v12; // esi
  void *v13; // eax
  int v14; // edx
  unsigned int v15; // esi
  const char *v17; // [esp+4h] [ebp-38h]
  int v18; // [esp+14h] [ebp-28h]
  size_t v19; // [esp+14h] [ebp-28h]
  int v20; // [esp+18h] [ebp-24h] BYREF
  int v21; // [esp+1Ch] [ebp-20h]
  unsigned int v22; // [esp+20h] [ebp-1Ch]
  unsigned int v23; // [esp+28h] [ebp-14h]

  v23 = __readgsdword(0x14u);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v20 = (int)qvector_reserve((int)&v20, nullptr, 9u, 1u);
  v21 = 9;
  *(_QWORD *)v20 = *a2;
  *(_BYTE *)(v20 + 8) = 0;
  v18 = v21;
  v3 = byte_13BD21;
  if ( v21 )
    v3 = (char *)v20;
  if ( *v3 == 47 )
  {
    v4 = atoi((const char *)(v20 + 1));
    if ( v4 > 0 )
    {
      v5 = a3[1];
      v6 = v5 - 1;
      if ( !v5 )
        v6 = 0;
      if ( v4 < v6 )
      {
        v7 = (const char *)(*a3 + v4);
        if ( v7 && (v8 = strlen(v7)) != 0 )
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = (void *)v20;
          if ( v22 < v10 )
          {
            v19 = v9;
            v11 = qvector_reserve((int)&v20, (void *)v20, v10, 1u);
            v20 = (int)v11;
            v9 = v19;
          }
          v21 = v10;
          v17 = v7;
          v12 = v9;
          memmove(v11, v17, v9);
          *(_BYTE *)(v20 + v12) = 0;
          v18 = v21;
        }
        else
        {
          v21 = 0;
          v18 = 0;
        }
      }
    }
  }
  v13 = *(void **)a1;
  v14 = *(_DWORD *)(a1 + 4);
  v15 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v20;
  *(_DWORD *)(a1 + 4) = v18;
  *(_DWORD *)(a1 + 8) = v22;
  v20 = (int)v13;
  v21 = v14;
  v22 = v15;
  if ( v13 )
  {
    v21 = 0;
    qfree(v13);
    v20 = 0;
    v22 = 0;
  }
  return __readgsdword(0x14u);
}
