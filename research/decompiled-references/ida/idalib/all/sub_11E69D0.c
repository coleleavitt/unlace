__int64 __fastcall sub_11E69D0(_DWORD *a1)
{
  int v1; // edx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = a1[983];
  result = 1;
  if ( (unsigned int)(v1 - 3) > 2 )
  {
    if ( (unsigned int)(v1 - 1) > 1 || a1[984] > 1u )
    {
      return (unsigned int)sub_11E6860((__int64)a1, 10, 6, 0) ^ 1;
    }
    else
    {
      v3[0] = 0x8000000200000003LL;
      v3[1] = 0x80000000LL;
      return (unsigned int)sub_A09E20(a1 + 985, (unsigned int *)v3) ^ 1;
    }
  }
  return result;
}
