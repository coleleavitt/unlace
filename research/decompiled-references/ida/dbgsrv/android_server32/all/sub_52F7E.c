/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52F7E
// Address: 0x00052F7E

//----- (00052F7E) --------------------------------------------------------
int __fastcall sub_52F7E(int a1)
{
  int v2; // r5
  int result; // r0
  int qerrno; // r0

  v2 = *(_DWORD *)(a1 + 444);
  result = sub_51A0C(a1, v2, 0, nullptr);
  if ( !result && *(_DWORD *)(a1 + 32) )
    result = sub_52528((char **)a1, v2);
  if ( result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
  }
  return result;
}
