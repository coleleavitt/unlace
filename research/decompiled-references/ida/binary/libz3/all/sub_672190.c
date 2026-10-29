_QWORD *__fastcall sub_672190(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx

  v4 = (_QWORD *)sub_186B270(0x90u);
  sub_E1F060(v4, a1);
  v4[15] = a1;
  *v4 = &off_1C68EE0;
  v4[9] = off_1C69090;
  v4[16] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 48);
  sub_14CDB80(v4 + 17, a1, a2);
  sub_E5E9C0(v4, a2);
  return v4;
}

