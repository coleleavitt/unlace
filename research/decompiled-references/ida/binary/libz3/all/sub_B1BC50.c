__int64 __fastcall sub_B1BC50(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  char v8; // dl
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ebp
  int v12; // r14d
  __int64 v13; // r15
  __int64 v14; // rax

  v3 = a2;
  v4 = a3;
  if ( a2 == 1 && a3 == 1 )
  {
    v5 = 3;
    if ( *(_DWORD *)(a1 + 16) == 2 )
      v5 = 6;
    v6 = 2;
  }
  else if ( a2 && a3 )
  {
    v6 = a2 + a3;
    v8 = sub_B1BFA0(a1, a2, a3, a2 + a3);
    v9 = *(_DWORD *)(a1 + 16);
    if ( v8 )
    {
      if ( v4 > v6 )
        v4 = v6;
      if ( a2 > v6 )
        v3 = v6;
      v5 = (v3 * v4) >> 1;
      if ( v9 != 1 )
      {
        v10 = v6 + v5;
        v5 = v6 + (unsigned int)v5 + (unsigned int)v5;
        if ( !v9 )
          v5 = v10;
      }
    }
    else
    {
      v11 = (a2 >> 1) + (a2 & 1) + (v4 >> 1) + (v4 & 1) - 1;
      if ( v11 > (a2 >> 1) + (v4 >> 1) )
        v11 = (a2 >> 1) + (v4 >> 1);
      v12 = v11 * (3 * (v9 == 2) + 3);
      v13 = sub_B1BC50(a1);
      v14 = sub_B1BC50(a1);
      v6 = v14 + v13 + 2 * v11;
      v5 = (unsigned int)(v12 + HIDWORD(v14) + HIDWORD(v13) - 2);
    }
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  return (v5 << 32) | v6;
}

