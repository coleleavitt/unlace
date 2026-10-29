/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D550
// Address: 0x000000000040D550

//----- (000000000040D550) ----------------------------------------------------
bool __fastcall sub_40D550(unsigned int a1)
{
  bool result; // al
  _QWORD v2[2]; // [rsp+0h] [rbp-268h] BYREF
  char v3; // [rsp+10h] [rbp-258h] BYREF
  unsigned __int64 v4; // [rsp+258h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( dword_4C56CC >= 0 )
    return dword_4C56CC != 0;
  v2[0] = &v3;
  v2[1] = 576;
  result = ptrace(PTRACE_GETREGSET, a1, 514, v2) == 0;
  dword_4C56CC = result;
  return result;
}
// 4C56CC: using guessed type int dword_4C56CC;
