__int64 __fastcall sub_10309C0(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( sub_990D60(a2, "ilp32e") )
  {
    if ( !sub_990D60(a2, "ilp32") || !sub_990D60(a2, "ilp32f") || (v2 = sub_990D60(a2, "ilp32d"), result = 0, !v2) )
    {
      sub_9CAB60((__int64)(a1 + 64), a2);
      return 1;
    }
  }
  else
  {
    sub_9CAB60((__int64)(a1 + 64), a2);
    sub_1009A40(a1, "e-m:e-p:32:32-i64:64-n32-S32", 28, (__int64)&byte_22CD811);
    return 1;
  }
  return result;
}

