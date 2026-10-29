/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46954A
// Address: 0x0046954A

//----- (0046954A) --------------------------------------------------------
void __usercall sub_46954A(int a1@<ebx>, int a2@<edi>)
{
  int i; // esi

  sub_46C18E();
  sub_479250(a1, a2);
  for ( i = 0; i != 12; i += 4 )
  {
    sub_4792FB(*(_DWORD *)((char *)lpMem + i));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)lpMem + i) + 32));
  }
  sub_479216(lpMem);
  lpMem = nullptr;
}
