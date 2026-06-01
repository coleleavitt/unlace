void __fastcall sub_DFA8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v7; // rdx
  _BYTE v8[64]; // [rsp+0h] [rbp-B8h] BYREF
  int v9[14]; // [rsp+40h] [rbp-78h] BYREF
  char v10; // [rsp+78h] [rbp-40h]

  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 42) <= 2u )
  {
    sub_E01600(v9, a2, a3);
    sub_A2FDA0(v9, (char *)a1, a3, a4, a5);
    if ( v9[0] > 1u )
      sub_A2BBA0(v9);
  }
  else
  {
    sub_CC17E0((__int64)v8, a3);
    sub_E04EA0(v9, a2, v8, a4);
    sub_CC3EA0((__int64)v8);
    if ( v10 )
    {
      sub_A2FDA0(v9, (char *)a1, a3, a4, a5);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v7) > 2 )
      {
        *(_BYTE *)(v7 + 2) = 46;
        *(_WORD *)v7 = 11822;
        *(_QWORD *)(a1 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(a1, "...", 3);
      }
    }
    if ( v10 )
    {
      if ( v9[0] > 1u )
        sub_A2BBA0(v9);
    }
  }
}

