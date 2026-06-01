/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A7F0
// Address: 0x0009A7F0

//----- (0009A7F0) --------------------------------------------------------
void __cdecl sub_9A7F0(int a1)
{
  int v1; // esi
  FILE *v2; // eax
  int v3; // eax

  if ( (unsigned int)dword_13C2C0 >= 2 )
  {
    v1 = dword_13C2BC;
    v2 = fopenA((char *)dword_13C2BC);
    *(_DWORD *)(a1 + 84) = v2;
    if ( v2 )
    {
      sub_98FF0((int)v2);
    }
    else
    {
      v3 = qerrstr(-1);
      sub_98F70("Cannot open log file \"%s\": %s\n", v1, v3);
    }
  }
}
// 13C2BC: using guessed type int dword_13C2BC;
// 13C2C0: using guessed type int dword_13C2C0;
