__int64 sub_339FF0()
{
  __int64 result; // rax
  __int64 (__fastcall **v1[3])(_QWORD); // [rsp+0h] [rbp-18h] BYREF

  v1[1] = (__int64 (__fastcall **)(_QWORD))__readfsqword(0x28u);
  v1[0] = (__int64 (__fastcall **)(_QWORD))off_4D0D18;
  result = sub_339FA0(v1);
  if ( result == -1 )
    return 0;
  return result;
}
