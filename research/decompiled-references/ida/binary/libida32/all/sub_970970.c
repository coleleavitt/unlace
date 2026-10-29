__int64 __fastcall sub_970970(_BYTE *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v7; // r13
  bool v9; // al
  __int64 v10; // rsi
  void *v11; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-50h]
  char v13; // [rsp+1Ch] [rbp-4Ch]
  void *v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-40h]

  v7 = a2 + 24;
  sub_C19F20(&v14, a3[3], a4, 0);
  if ( *(_DWORD *)(a2 + 32) <= 0x40u )
    LOBYTE(v4) = *(_QWORD *)(a2 + 24) == (_QWORD)v14;
  else
    v4 = sub_21E2030(v7, &v14);
  if ( (_BYTE)v4 )
  {
    *a1 = 1;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 36) )
      v9 = (int)sub_21E2070(v7, &v14) > 0;
    else
      v9 = (int)sub_21E20E0(v7, &v14) > 0;
    if ( v9 && (*a3 & 0x200LL) != 0 )
    {
      v10 = a3[((*a3 & 0x200) != 0) + 3];
      if ( v10 )
      {
        sub_C19F20(&v11, v10, a4, 0);
        if ( v13 )
          v4 = (int)sub_21E2070(&v11, v7) >= 0;
        else
          v4 = (int)sub_21E20E0(&v11, v7) >= 0;
        if ( (_BYTE)v4 )
          *a1 = 1;
        if ( v12 > 0x40 && v11 )
          operator delete[](v11);
      }
    }
  }
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return v4;
}

