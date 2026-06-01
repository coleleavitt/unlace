__int64 __fastcall sub_192A0(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rax

  if ( (get_byte(a2 - 1) & 0xC7) == 5 )
    return 0;
  put_byte(a2 - 2, 141);
  v6 = sub_4A750(a4 + 16, *(_QWORD *)(a4 + 8), 1);
  if ( !v6 )
    return 0;
  sub_424F0(a1, a2, a3, 0, 4, 0, v6, 0);
  return 1;
}

