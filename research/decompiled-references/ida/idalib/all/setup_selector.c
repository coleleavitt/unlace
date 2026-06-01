unsigned __int64 __fastcall setup_selector(unsigned __int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // r12

  if ( a1 <= 0xFFFF )
    return a1;
  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4LL) )
    return a1;
  v3 = sub_50FCE0(*(_QWORD *)(qword_2CCB598 + 1672));
  sub_50FE00(v1, v3, a1);
  return v3;
}
