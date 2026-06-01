__int64 __fastcall sub_10C70(__int64 a1, char a2, int a3)
{
  __int64 v3; // rdx
  char v4; // si
  int v5; // r12d
  int v6; // eax
  unsigned int v7; // ebx

  v3 = (unsigned int)(a3 + 1);
  v4 = a2 & 0xBF;
  if ( (unsigned int)v3 > 3 )
  {
    if ( !byte_1D3C0 )
      sub_11780(707);
    BUG();
  }
  v5 = *((_DWORD *)qword_14FB0 + v3);
  v6 = __open64_2();
  v7 = v6;
  if ( v6 == -1 )
  {
    sub_F2F0(1u);
  }
  else
  {
    if ( !(unsigned int)sub_10A70(v6, v4, v5) )
      return v7;
    sub_10C40(v7);
  }
  return 0xFFFFFFFFLL;
}

