__int64 __fastcall sub_75BE70(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  unsigned int v6; // edx
  char v7; // al

  v5 = sub_75B1C0(nullptr, 0, 1, a4, a5);
  v6 = 1;
  *a1 = v5;
  v7 = *qword_2CD44C0;
  if ( *qword_2CD44C0 == 95 )
    return v6;
  if ( v7 == 81 )
  {
    LOBYTE(v6) = (unsigned int)sub_75A2F0(0, nullptr) != 0;
    return v6;
  }
  LOBYTE(v6) = (unsigned __int8)(v7 - 48) <= 9u;
  return v6;
}
