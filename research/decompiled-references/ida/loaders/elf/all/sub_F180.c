__int64 __fastcall sub_F180(int a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  int v6; // r14d
  unsigned __int64 v7; // rbp
  int v8; // r13d
  int dword; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  int v15; // edx
  unsigned int v16; // edx

  v5 = *(_QWORD *)(a2 + 1);
  v6 = *a2;
  v7 = *(_QWORD *)(a2 + 5);
  v8 = a2[7];
  dword = get_dword(v5, a2, a3, a4, a5);
  if ( (unsigned __int8)v6 <= 6u )
  {
    v10 = 1LL << v6;
    if ( ((1LL << v6) & 0x48) != 0 )
    {
      v15 = v7;
      if ( v8 != 1 )
      {
        v16 = (dword >> 7) | 0xFFF00000;
        if ( ((dword >> 7) & 0x80000) == 0 )
          v16 = (dword >> 7) & 0xFFFFF;
        v15 = v7 + 4 * v16 + 4;
      }
      LODWORD(v12) = dword & 0xF800007F | (32 * (v15 - v5 - 4)) & 0x7FFFF80;
    }
    else if ( (v10 & 0x24) != 0 )
    {
      v14 = v7;
      if ( v8 != 1 )
        v14 = v7 + ((4 * dword) & 0x3FFFFFC);
      v12 = dword & 0xFF000000 | (v14 >> 2) & 0xFFFFFF;
    }
    else
    {
      v11 = 2;
      if ( (v10 & 0x12) == 0 )
        return v11;
      LODWORD(v12) = v7 + dword;
      if ( v8 == 1 )
        LODWORD(v12) = v7;
    }
    sub_42050(a1, v5, v7, v12, 0, 4, 0, 0, 0);
    return 0;
  }
  return 2;
}

