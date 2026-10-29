char __fastcall sub_6939A0(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  char v4; // r13
  char result; // al
  int v8; // eax

  v4 = a4;
  result = sub_3B8910(*a1, a3);
  if ( !result )
  {
    v8 = sub_41A0E0((__int64 *)*a1, a3);
    if ( v8 != 7 )
      v4 = a4 & (v8 == 0);
    if ( v4 )
      sub_3573A0((char **)a2);
    return *(_QWORD *)(a2 + 8) <= 1u;
  }
  return result;
}

