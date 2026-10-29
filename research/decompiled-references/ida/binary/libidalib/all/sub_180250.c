__int64 __fastcall sub_180250(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r11

  v2 = sub_1801B0(a1, a2);
  if ( v2 == -1 )
    return 0;
  else
    return *(_QWORD *)(v3 + 24) + (v2 << 7);
}

