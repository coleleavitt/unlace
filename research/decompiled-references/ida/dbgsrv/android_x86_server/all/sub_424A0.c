/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424A0
// Address: 0x000424A0

//----- (000424A0) --------------------------------------------------------
void __cdecl sub_424A0(char **a1)
{
  _DWORD *v1; // ecx
  char *v2; // edx
  unsigned int v3; // edi
  int i; // esi
  void *v5; // eax
  char *v6; // edi
  _DWORD *v7; // esi
  unsigned int v8; // [esp+4h] [ebp-18h]
  unsigned int v9; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = *a1;
  if ( *a1 )
  {
    v8 = (unsigned int)a1[1];
    if ( v8 )
    {
      v3 = 1;
      for ( i = 0; ; i += 28 )
      {
        v5 = *(void **)&v2[i];
        if ( v5 )
        {
          v9 = v3;
          *(_DWORD *)&v2[i + 4] = 0;
          v6 = v2;
          qfree(v5);
          *(_DWORD *)&v6[i] = 0;
          *(_DWORD *)&v6[i + 8] = 0;
          v1 = a1;
          v3 = v9;
        }
        if ( v3 >= v8 )
          break;
        v2 = (char *)*v1;
        ++v3;
      }
      v2 = (char *)*v1;
    }
    v1[1] = 0;
    v7 = v1;
    qfree(v2);
    *v7 = 0;
    v7[2] = 0;
  }
}
