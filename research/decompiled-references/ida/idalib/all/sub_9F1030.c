__int64 __fastcall sub_9F1030(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v9; // [rsp+10h] [rbp-128h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  if ( (unsigned int)sub_9EF070(a3, v4) == 1 )
  {
    if ( !(unsigned int)sub_9EF070(a3, v5) )
    {
      *(_BYTE *)(a1 + 272) = 1;
      *(_QWORD *)a1 = a1 + 16;
      v8[0] = &v9;
      *(_QWORD *)(a1 + 8) = 0x400000000LL;
      v8[1] = 0x400000000LL;
      sub_9ED140((__int64)v8);
      return a1;
    }
  }
  else if ( !(unsigned int)sub_9EF070(a3, v4) && (unsigned int)sub_9EF070(a3, v5) == 3 )
  {
    v7 = sub_B8C330(v5);
    sub_9F0ED0(a1, v7, *(_QWORD *)(a2 + 24));
    return a1;
  }
  *(_BYTE *)(a1 + 272) = 0;
  return a1;
}
