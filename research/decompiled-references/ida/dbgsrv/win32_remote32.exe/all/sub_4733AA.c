/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4733AA
// Address: 0x004733AA

//----- (004733AA) --------------------------------------------------------
int __usercall sub_4733AA@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int a3)
{
  int v3; // esi
  int v5; // edi
  int v6; // eax
  char *v7; // eax

  if ( a3 < 0x2000 )
  {
    v3 = 0;
    sub_47A78B(7);
    v5 = 0;
    v6 = dword_4B7D38[0];
    while ( (int)a3 >= v6 )
    {
      if ( !*(&dword_4B7B38 + v5) )
      {
        v7 = sub_4732FA();
        *(&dword_4B7B38 + v5) = (LPCRITICAL_SECTION)v7;
        if ( !v7 )
        {
          v3 = 12;
          break;
        }
        v6 = dword_4B7D38[0] + 64;
        dword_4B7D38[0] += 64;
      }
      ++v5;
    }
    sub_47A7D3(7);
  }
  else
  {
    v3 = 9;
    *sub_46B984() = 9;
    sub_467EF4(a1, a2);
  }
  return v3;
}
// 4B7D38: using guessed type int dword_4B7D38[];
