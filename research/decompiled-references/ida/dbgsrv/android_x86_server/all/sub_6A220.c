/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A220
// Address: 0x0006A220

//----- (0006A220) --------------------------------------------------------
void __cdecl sub_6A220(char ***a1)
{
  char ***v1; // esi
  char **v2; // eax
  char **v3; // edi
  char ***v4; // ecx
  int v5; // edi
  int v6; // esi

  v1 = a1;
  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      sub_1BC40(*a1);
      v4 = a1;
      if ( v3 != (char **)((char *)&dword_0 + 1) )
      {
        v5 = (int)v3 - 1;
        v6 = 7;
        do
        {
          sub_1BC40(&(*v4)[v6]);
          v4 = a1;
          v6 += 7;
          --v5;
        }
        while ( v5 );
      }
      v2 = *v4;
      v1 = v4;
    }
    v1[1] = nullptr;
    qfree(v2);
    *v1 = nullptr;
    v1[2] = nullptr;
  }
}
// 0: using guessed type int dword_0;
