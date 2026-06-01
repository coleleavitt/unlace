/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82E40
// Address: 0x0000000000082E40

//----- (0000000000082E40) ----------------------------------------------------
__int64 __fastcall sub_82E40(__int64 a1)
{
  char **v1; // x20
  __int64 result; // x0
  int qerrno; // w1

  v1 = *(char ***)(a1 + 600);
  result = sub_810F0((__int64 *)a1, (__int64)v1, 0, nullptr);
  if ( !(_DWORD)result && *(_QWORD *)(a1 + 64) )
    result = sub_81F70((__int128 *)a1, v1);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
  }
  return result;
}
