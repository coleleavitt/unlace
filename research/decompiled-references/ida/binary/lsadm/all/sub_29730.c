__int64 __fastcall sub_29730(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // eax
  unsigned int v7; // ebx

  v3 = (unsigned int)(a3 + 1);
  v4 = a2 & 0xFFFFFDBF;
  if ( (unsigned int)v3 > 3 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(707, v4);
    BUG();
  }
  v5 = *((_DWORD *)qword_4F010 + v3);
  v6 = __open64_2();
  v7 = v6;
  if ( v6 == -1 )
  {
    sub_26E40(1u);
  }
  else
  {
    if ( !(unsigned int)sub_29530(v6, v4, v5) )
      return v7;
    sub_29700(v7);
  }
  return 0xFFFFFFFFLL;
}

