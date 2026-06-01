__int64 __fastcall sub_21F9220(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edx
  _QWORD *v6; // rdi

  v4 = a2 + 8;
  v5 = (unsigned int)(*(_DWORD *)(*a1 + 8LL) + 64) >> 6;
  if ( (unsigned int)(*(_DWORD *)(*a1 + 8LL) + 64) <= 0x7F )
    v5 = 1;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 - 8) + 8LL) + 64) > 0x7F )
    v4 = *(_QWORD *)(a2 + 8);
  v6 = a1 + 1;
  if ( v5 != 1 )
    v6 = (_QWORD *)a1[1];
  return sub_2209710(v6, v4);
}
