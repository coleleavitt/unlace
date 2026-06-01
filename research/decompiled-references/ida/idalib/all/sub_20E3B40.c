__int64 __fastcall sub_20E3B40(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v14; // eax
  int v15; // eax

  if ( a1 == 1 )
  {
    LOBYTE(v6) = (_DWORD)a3 == 3;
    if ( (_DWORD)a2 == 3 )
      LOBYTE(v6) = (_DWORD)a3 == 1;
    return v6;
  }
  v7 = a3;
  v6 = 0;
  if ( (int)__popcountdi2(a3 & 0xE, a2, a3, a4, a5, a6) > 1
    || (int)__popcountdi2(v7 & 0x10001, a2, v8, v9, v10, v11) > 1 )
  {
    return v6;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10000) != 0 )
    {
      v12 = 0xFFFF;
      if ( (_DWORD)a2 != 3 )
        v12 = 65521;
      LOBYTE(v6) = (v12 & v7) == 0;
    }
    else
    {
      v15 = 0x1FFFF;
      if ( (_DWORD)a2 != 3 )
        v15 = 131057;
      LOBYTE(v6) = (v15 & v7) == 0;
    }
    return v6;
  }
  v14 = 131070;
  if ( (_DWORD)a2 != 3 )
    v14 = 131064;
  LOBYTE(v6) = (v14 & v7) == 0;
  return v6;
}
