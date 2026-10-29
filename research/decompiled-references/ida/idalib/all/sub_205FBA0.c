__int64 __fastcall sub_205FBA0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 8LL) > 3u )
  {
    v5 = sub_2051F10(a1, a2);
    return sub_205FB40(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), v5, 0);
  }
  else
  {
    sub_2051F80((__int64)v6, a1, a2);
    v2 = (_QWORD *)sub_20CB0D0(a1);
    v3 = sub_2055C80(v2, v6);
    sub_9955A0(v6);
    return v3;
  }
}
