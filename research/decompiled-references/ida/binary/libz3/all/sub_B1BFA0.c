bool __fastcall sub_B1BFA0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  bool result; // al
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // esi

  v4 = a3;
  result = a3 <= 9 && a2 <= 9;
  if ( result )
  {
    v6 = a2;
    v7 = sub_B1BE80(a1, a2, a3, a4);
    v8 = a2 + v4;
    v9 = *(_DWORD *)(a1 + 16);
    if ( v6 + v4 <= v6 )
      v6 = a2 + v4;
    if ( v8 <= v4 )
      v4 += a2;
    v10 = (v4 * v6) >> 1;
    if ( v9 != 1 )
    {
      v11 = v8 + v10;
      v10 += v8 + v10;
      if ( !v9 )
        v10 = v11;
    }
    return v10 + 5 * v8 < 5 * (int)v7 + HIDWORD(v7);
  }
  return result;
}

