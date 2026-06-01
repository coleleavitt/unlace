__int64 __fastcall sub_6585E0(__int64 *a1, unsigned int a2, __int16 a3, _DWORD *a4, __int64 a5, int a6)
{
  char v7; // r12
  unsigned __int64 v9; // r15
  int v11; // [rsp+10h] [rbp-48h] BYREF
  int v12; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v11, (int)&v12, (int)&callui, a6);
  v7 = a3 & 1;
  do
  {
    if ( v7 )
    {
      a2 = sub_3BD3E0((__int64)a1, a2);
      if ( a2 == -1 )
        return 0xFFFFFFFFLL;
    }
    else
    {
      a2 = sub_3BD5D0((__int64)a1, a2);
      if ( a2 == -1 )
        return 0xFFFFFFFFLL;
    }
    v9 = sub_3B9AA0((__int64)a1, a2, 0);
  }
  while ( !sub_3C4740(a1, a2, v9, -1, nullptr) );
  if ( a4 )
    *a4 = !sub_3C4740(a1, a2, v9, 0, nullptr);
  return a2;
}

