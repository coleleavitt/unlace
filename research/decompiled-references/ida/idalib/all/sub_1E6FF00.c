unsigned __int64 __fastcall sub_1E6FF00(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  _BYTE v7[168]; // [rsp+0h] [rbp-A8h] BYREF

  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    sub_168B9F0((__int64)v7, a1 + 1, a3, 0x10DDu, 0);
    sub_15F7200(v7);
    return 0;
  }
  else
  {
    v5 = a2;
    if ( (unsigned __int8)sub_1E6FC20((__int64)a1, a2, a3, 0, a5) )
    {
      return 0;
    }
    else
    {
      if ( (*(_BYTE *)(a1[29] + 47) & 0x20) != 0 )
        v5 = sub_1E5D3C0((__int64)a1, a2);
      return sub_A74B00(a1[31], v5);
    }
  }
}
