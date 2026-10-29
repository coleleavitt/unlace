__int64 __fastcall sub_1054700(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( sub_9B4AA0(a2, "ilp32e") )
  {
    if ( !sub_9B4AA0(a2, "ilp32") || !sub_9B4AA0(a2, "ilp32f") || (v2 = sub_9B4AA0(a2, "ilp32d"), result = 0, !v2) )
    {
      sub_9EE8A0((__int64)(a1 + 64), a2);
      return 1;
    }
  }
  else
  {
    sub_9EE8A0((__int64)(a1 + 64), a2);
    sub_102D780(a1, "e-m:e-p:32:32-i64:64-n32-S32", 28, (__int64)&byte_22F0C30);
    return 1;
  }
  return result;
}
