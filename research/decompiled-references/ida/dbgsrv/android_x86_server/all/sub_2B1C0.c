/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B1C0
// Address: 0x0002B1C0

//----- (0002B1C0) --------------------------------------------------------
int __cdecl sub_2B1C0(_DWORD *a1, int a2, unsigned __int8 *a3, int a4)
{
  int result; // eax
  const char *v5; // edi
  void *v6; // eax
  size_t v7; // edx
  int v8; // esi
  unsigned int v9; // edi
  void *v10; // eax
  void **v11; // [esp+0h] [ebp-2Ch]
  size_t v12; // [esp+4h] [ebp-28h]
  size_t v13; // [esp+8h] [ebp-24h]
  const char *v14; // [esp+Ch] [ebp-20h]
  unsigned __int8 *v15[7]; // [esp+10h] [ebp-1Ch] BYREF

  v15[2] = (unsigned __int8 *)__readgsdword(0x14u);
  result = 0;
  if ( a2 == 1 )
  {
    v15[0] = a3;
    v15[1] = &a3[a4];
    v5 = unpack_ds(v15, (unsigned int)&a3[a4], 0);
    v6 = (void *)a1[151];
    if ( v6 )
    {
      a1[152] = 0;
      qfree(v6);
      a1[151] = 0;
      a1[153] = 0;
    }
    if ( v5 )
    {
      v11 = (void **)(a1 + 151);
      v14 = v5;
      v7 = strlen(v5);
      v8 = a1[152];
      if ( v8 )
        --v8;
      v13 = v8 + v7;
      v9 = v8 + v7 + 1;
      if ( a1[153] >= v9 )
      {
        v10 = *v11;
      }
      else
      {
        v12 = v7;
        v10 = qvector_reserve((int)v11, *v11, v8 + v7 + 1, 1u);
        v7 = v12;
        *v11 = v10;
      }
      a1[152] = v9;
      *((_BYTE *)v10 + v13) = 0;
      memmove((void *)(a1[151] + v8), v14, v7);
    }
    return 1;
  }
  return result;
}
