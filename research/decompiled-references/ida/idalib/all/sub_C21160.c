__int64 __fastcall sub_C21160(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int16 v6; // dx
  unsigned __int64 v7; // rsi

  v4 = sub_BFB9F0(a2);
  v6 = *(_WORD *)v4 & 0x1FF;
  if ( v6 == 71 )
  {
    v7 = *(_QWORD *)(v4 + 16);
    return sub_AB0BF0(a1, v7, 1);
  }
  if ( v6 == 46 )
  {
    v7 = *(_QWORD *)(v4 + 24);
    return sub_AB0BF0(a1, v7, 1);
  }
  return sub_C12530(a1, *(_QWORD *)(v4 + 8), a3, v5);
}
