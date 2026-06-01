__int64 __fastcall sub_4DE3F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi

  *a1 = &off_1C4F770;
  v2 = a1[12];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[10];
  if ( !v3 )
    return sub_4DA630((__int64)a1);
  v4 = a1[11];
  if ( (*(_DWORD *)(v3 + 8))-- != 1 )
    return sub_4DA630((__int64)a1);
  sub_15D7BC0(v4, v3);
  return sub_4DA630((__int64)a1);
}

