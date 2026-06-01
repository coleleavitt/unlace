/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FD60
// Address: 0x0044FD60

//----- (0044FD60) --------------------------------------------------------
int __userpurge sub_44FD60@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int (__stdcall *v9)(int, int, int, int, int, int, int); // eax
  int v10; // esi

  v9 = (int (__stdcall *)(int, int, int, int, int, int, int))dword_4B70E4;
  if ( !dword_4B70E4 )
  {
    v9 = (int (__stdcall *)(int, int, int, int, int, int, int))sub_450400(a1, a2, 1u);
    dword_4B70E4 = (int)v9;
  }
  v10 = v9(a3, a4, a5, a6, a7, a8, a9);
  WSASetLastError(v10);
  return v10;
}
// 4B70E4: using guessed type int dword_4B70E4;
