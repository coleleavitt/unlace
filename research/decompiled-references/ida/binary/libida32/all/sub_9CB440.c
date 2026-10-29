__int64 __fastcall sub_9CB440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _QWORD v6[2]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v7; // [rsp+10h] [rbp-118h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  if ( (unsigned int)sub_9CB330(a3, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL)) == 1
    && (unsigned int)sub_9CB330(a3, v4) == 1 )
  {
    *(_BYTE *)(a1 + 272) = 1;
    *(_QWORD *)a1 = a1 + 16;
    v6[0] = &v7;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    v6[1] = 0x400000000LL;
    sub_9C9400((__int64)v6);
  }
  else
  {
    *(_BYTE *)(a1 + 272) = 0;
  }
  return a1;
}

