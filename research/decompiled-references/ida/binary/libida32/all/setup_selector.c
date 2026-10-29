__int64 __fastcall setup_selector(unsigned int a1)
{
  __int64 v1; // rbp
  unsigned int v3; // r12d

  if ( a1 <= 0xFFFF )
    return a1;
  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4LL) )
    return a1;
  v3 = sub_4F8420(*(_QWORD *)(qword_2CA1698 + 1480));
  sub_4F8530(v1, v3, a1);
  return v3;
}

