void __fastcall sub_E1E610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
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
    sub_E25340(v9, a2, a3);
    sub_A53AE0(v9, (char *)a1, a3, a4, a5);
    if ( v9[0] > 1u )
      sub_A4F8E0(v9);
  }
  else
  {
    sub_CE5520((__int64)v8, a3);
    sub_E28BE0(v9, a2, v8, a4);
    sub_CE7BE0((__int64)v8);
    if ( v10 )
    {
      sub_A53AE0(v9, (char *)a1, a3, a4, a5);
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
        sub_227BF10(a1, "...", 3);
      }
    }
    if ( v10 )
    {
      if ( v9[0] > 1u )
        sub_A4F8E0(v9);
    }
  }
}
