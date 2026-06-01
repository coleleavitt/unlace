/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463E12
// Address: 0x00463E12

//----- (00463E12) --------------------------------------------------------
int __usercall sub_463E12@<eax>(int a1@<ebx>, int *a2, char a3)
{
  int v3; // esi
  int v5; // esi

  if ( a3 )
  {
    v3 = *a2;
    if ( *(_DWORD *)*a2 == -529697949
      && *(_DWORD *)(v3 + 16) == 3
      && (*(_DWORD *)(v3 + 20) == 429065504 || *(_DWORD *)(v3 + 20) == 429065505 || *(_DWORD *)(v3 + 20) == 429065506) )
    {
      *((_DWORD *)sub_4667C5(a1, a2, v3) + 4) = v3;
      v5 = a2[1];
      *((_DWORD *)sub_4667C5(a1, a2, v5) + 5) = v5;
      sub_477B21(a1, a2);
    }
  }
  return 0;
}
