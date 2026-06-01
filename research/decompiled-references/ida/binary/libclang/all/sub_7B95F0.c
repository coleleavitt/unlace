__int64 __fastcall sub_7B95F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v2 = (_QWORD *)*v2;
  return sub_B12F10(a1 + 56, a2, v2, 3);
}

