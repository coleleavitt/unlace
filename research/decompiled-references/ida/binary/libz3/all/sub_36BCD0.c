void __fastcall sub_36BCD0(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rsi
  _QWORD v3[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(_BYTE *)(a1 + 16) == 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3[0] = 0;
  if ( v1 )
    sub_1862300(v3, v2, *(unsigned __int8 *)(a1 + 24));
  else
    sub_1862370(v3, v2, *(unsigned int *)(a1 + 20));
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(*(_QWORD *)a1 + 8LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 8LL),
    v3);
  sub_18572D0(v3);
}

