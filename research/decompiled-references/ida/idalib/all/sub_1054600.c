__int64 __fastcall sub_1054600(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( sub_9B4AA0(a2, "lp64e") )
  {
    if ( !sub_9B4AA0(a2, "lp64") || !sub_9B4AA0(a2, "lp64f") || (v2 = sub_9B4AA0(a2, "lp64d"), result = 0, !v2) )
    {
      sub_9EE8A0((__int64)(a1 + 64), a2);
      return 1;
    }
  }
  else
  {
    sub_9EE8A0((__int64)(a1 + 64), a2);
    sub_102D780(a1, "e-m:e-p:64:64-i64:64-i128:128-n32:64-S64", 40, (__int64)&byte_22F0C30);
    return 1;
  }
  return result;
}
