__int64 __fastcall sub_1FC84A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  _BOOL8 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rsi

  sub_1FC2690(a1, a2);
  if ( *(char *)(a2 + 2) >= 0 )
  {
    v4 = 0;
    v3 = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = v3 != 0;
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 24) & 1LL);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  if ( v3 )
  {
    v6 = 0;
    if ( *(char *)(a2 + 2) < 0 )
      v6 = *(_QWORD *)(a2 + 16);
    result = sub_183F100(a1 + 32, v6);
  }
  *(_DWORD *)(a1 + 224) = 172;
  return result;
}
