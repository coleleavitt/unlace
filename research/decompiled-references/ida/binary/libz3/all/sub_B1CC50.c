unsigned __int64 __fastcall sub_B1CC50(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // r12d
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // rax
  bool v10; // dl
  int v11; // eax
  unsigned int v12; // r14d
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // ebx
  _BOOL4 v18; // r15d
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // r15d

  v2 = a2 >> 1;
  v3 = a2 - (a2 >> 1);
  v5 = a2;
  if ( a2 >> 1 == 1 && v3 == 1 )
  {
    v6 = 3;
    if ( *(_DWORD *)(a1 + 16) == 2 )
      v6 = 6;
    v5 = 2;
  }
  else if ( v2 && v3 )
  {
    v10 = sub_B1BFA0(a1, v2, v3, a2);
    v11 = *(_DWORD *)(a1 + 16);
    if ( v10 )
    {
      v12 = a2;
      v13 = a2 >> 1;
      if ( v3 <= a2 )
        v12 = a2 - (a2 >> 1);
      if ( a2 <= v2 )
        v13 = a2;
      v6 = (v13 * v12) >> 1;
      if ( v11 != 1 )
      {
        v14 = a2 + v6;
        v6 += a2 + v6;
        if ( !v11 )
          v6 = v14;
      }
    }
    else
    {
      v15 = a2 >> 2;
      v16 = (v5 >> 2) + (v3 >> 1);
      v17 = (v5 >> 2) + (v2 & 1) + (v3 >> 1) + (v3 & 1) - 1;
      if ( v17 > v16 )
        v17 = v16;
      v18 = v11 == 2;
      v19 = sub_B1BC50(a1, v15, v3 >> 1);
      v20 = sub_B1BC50(a1, v15 + (v2 & 1), (v3 >> 1) + (v3 & 1));
      v21 = v17 * (3 * v18 + 3);
      v5 = v20 + v19 + 2 * v17;
      v6 = v21 + HIDWORD(v20) + HIDWORD(v19) - 2;
    }
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  v7 = sub_B1CDD0(a1, v3);
  v8 = sub_B1CDD0(a1, v2);
  return ((unsigned __int64)(v6 + HIDWORD(v7) + HIDWORD(v8)) << 32) | (v5 + (_DWORD)v7 + (_DWORD)v8);
}

