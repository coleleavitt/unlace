__int64 __fastcall sub_4DE360(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi

  v1 = a1[10];
  *a1 = &off_1C4F728;
  if ( !v1 )
    return sub_4DA630((__int64)a1);
  v3 = a1[11];
  if ( (*(_DWORD *)(v1 + 8))-- != 1 )
    return sub_4DA630((__int64)a1);
  sub_15D7BC0(v3, v1);
  return sub_4DA630((__int64)a1);
}

