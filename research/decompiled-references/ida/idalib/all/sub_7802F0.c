__int64 __fastcall sub_7802F0(__int64 *a1)
{
  __int64 v1; // rdi
  char v2; // dl
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *a1;
  v4[1] = __readfsqword(0x28u);
  v2 = sub_77F5C0(v1, 1, v4);
  result = v4[0];
  if ( !v2 )
    return -1;
  return result;
}
