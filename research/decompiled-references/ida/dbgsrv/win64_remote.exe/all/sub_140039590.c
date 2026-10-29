/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039590
// Address: 0x0000000140039590

//----- (0000000140039590) ----------------------------------------------------
__int64 __fastcall sub_140039590(_JBTYPE *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  int v4; // eax

  v1 = a1[39].Part[0];
  result = sub_14003C3B0((__int64)a1, v1, 0, nullptr);
  if ( a1[4].Part[0] )
  {
    if ( (_DWORD)result )
      goto LABEL_5;
    result = sub_14003A960((__int64)a1, v1);
  }
  if ( (_DWORD)result )
  {
LABEL_5:
    v4 = sub_140063DE0();
    longjmp(a1 + 23, v4);
  }
  return result;
}
