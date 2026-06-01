__int64 __fastcall sub_11E5EA0(_DWORD *a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  result = 1;
  if ( (unsigned int)(a1[983] - 1) <= 1 && !a1[984] )
  {
    v2[0] = 0x8000000000000006LL;
    v2[1] = 0x80000000LL;
    return (unsigned int)sub_A09E20(a1 + 985, (unsigned int *)v2) ^ 1;
  }
  return result;
}
