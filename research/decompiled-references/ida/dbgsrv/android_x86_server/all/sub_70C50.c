/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70C50
// Address: 0x00070C50

//----- (00070C50) --------------------------------------------------------
int __cdecl sub_70C50(int a1)
{
  int v1; // edi
  int result; // eax
  int qerrno; // eax

  v1 = *(_DWORD *)(a1 + 228);
  result = sub_6EB10(a1, v1, 0, nullptr);
  if ( !result && *(_DWORD *)(a1 + 32) )
    result = sub_6FBF0(a1, v1);
  if ( result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
  }
  return result;
}
