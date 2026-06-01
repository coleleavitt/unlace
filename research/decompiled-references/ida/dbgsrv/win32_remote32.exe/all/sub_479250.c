/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479250
// Address: 0x00479250

//----- (00479250) --------------------------------------------------------
int __usercall sub_479250@<eax>(int a1@<ebx>, int a2@<edi>)
{
  int i; // esi
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  sub_47A78B(8);
  for ( i = 3; i != dword_4B78C8; ++i )
  {
    v3 = *((_DWORD *)lpMem + i);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 12) & 0x2000) != 0 && sub_47523B(a1, a2, *((_DWORD *)lpMem + i)) != -1 )
        ++v5;
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)lpMem + i) + 32));
      sub_479216(*((LPVOID *)lpMem + i));
      *((_DWORD *)lpMem + i) = 0;
    }
  }
  sub_47A7D3(8);
  return v5;
}
// 4B78C8: using guessed type int dword_4B78C8;
