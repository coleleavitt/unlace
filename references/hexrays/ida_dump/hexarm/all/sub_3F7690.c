__int64 __fastcall sub_3F7690(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        int a6,
        double a7,
        char a8)
{
  __int64 v8; // r14
  __int64 result; // rax

  v8 = a4;
  if ( a2 == 3 )
  {
    result = sub_3F56D0(a1, 3u, a3, a6, 0x3BEA45E214ADDC55LL, a4, 0);
  }
  else if ( a2 == 12 )
  {
    sub_3F56D0(a1, 3u, a3, a6, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 628LL), 0);
    result = sub_3F6E70(a1, 0xCu, a3, a5, *(int *)(*(_QWORD *)(a1 + 832) + 628LL), v8, a7, 0, 1);
  }
  else
  {
    result = sub_3F6E70(a1, a2, a3, a5, 0x3BEA45E214ADDC55LL, a4, a7, 0, 1);
  }
  if ( result )
  {
    if ( a8 )
      *(_DWORD *)(result + 4) |= 0x10u;
  }
  return result;
}
