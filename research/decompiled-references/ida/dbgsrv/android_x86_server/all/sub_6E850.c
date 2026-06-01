/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E850
// Address: 0x0006E850

//----- (0006E850) --------------------------------------------------------
char __cdecl sub_6E850(int a1, void **a2, unsigned __int8 a3, int a4)
{
  char result; // al
  int v5; // edx
  int v6; // ecx
  char *v7; // edi
  void **v8; // edx
  char *v9; // edi
  void *v10; // eax
  void *v11; // ecx
  int v12; // esi
  char v13; // [esp+Fh] [ebp-1Dh]

  result = a3;
  v5 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v5 + 28 * a4 + 4) > (unsigned int)a3 )
  {
    v6 = *(_DWORD *)(v5 + 28 * a4);
    v7 = *(_DWORD *)(v6 + 12 * a3 + 4) ? *(char **)(v6 + 12 * a3) : byte_EF875;
    result = *v7;
    if ( *v7 )
    {
      v8 = a2;
      v9 = v7 + 1;
      do
      {
        if ( result < -1 )
        {
          sub_6E850(a1, v8, result ^ 0x80, a4 - 1);
          v8 = a2;
        }
        else
        {
          v13 = result;
          v10 = *v8;
          v11 = v8[1];
          v12 = (int)v11 - 1;
          if ( !v11 )
            v12 = 0;
          if ( (unsigned int)v8[2] < v12 + 2 )
          {
            v10 = qvector_reserve((int)v8, v10, v12 + 2, 1u);
            v8 = a2;
            *a2 = v10;
          }
          v8[1] = (void *)(v12 + 2);
          *((_BYTE *)v10 + v12) = v13;
          *((_BYTE *)*v8 + v12 + 1) = 0;
        }
        result = *v9++;
      }
      while ( result );
    }
  }
  return result;
}
