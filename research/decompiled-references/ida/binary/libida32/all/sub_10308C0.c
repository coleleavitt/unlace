__int64 __fastcall sub_10308C0(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( sub_990D60(a2, "lp64e") )
  {
    if ( !sub_990D60(a2, "lp64") || !sub_990D60(a2, "lp64f") || (v2 = sub_990D60(a2, "lp64d"), result = 0, !v2) )
    {
      sub_9CAB60((__int64)(a1 + 64), a2);
      return 1;
    }
  }
  else
  {
    sub_9CAB60((__int64)(a1 + 64), a2);
    sub_1009A40(a1, "e-m:e-p:64:64-i64:64-i128:128-n32:64-S64", 40, (__int64)&byte_22CD811);
    return 1;
  }
  return result;
}

