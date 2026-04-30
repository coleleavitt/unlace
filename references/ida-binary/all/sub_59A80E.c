__int64 __fastcall sub_59A80E(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-1020h] BYREF
  _BYTE v11[4112]; // [rsp+30h] [rbp-1010h] BYREF

  if ( sub_599E91(a2) )
  {
    return 0;
  }
  else if ( !sub_59A7A4(a1, a2, (__int64)v11) )
  {
    return 0;
  }
  else
  {
    sub_5AE2B0(v10, v11, 0);
    if ( !sub_59BD66(v10) || (unsigned __int64)sub_59BD80(v10) <= 3 )
    {
      v4 = 0;
    }
    else
    {
      v6 = sub_59BD66(v10);
      v4 = sub_5AAE9A(v6, a3, a4);
    }
    sub_5AE2EA(v10);
  }
  return v4;
}
