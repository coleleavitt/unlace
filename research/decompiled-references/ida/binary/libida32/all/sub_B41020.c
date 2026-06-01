__int64 __fastcall sub_B41020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  char v8; // dl
  char v9; // al
  _QWORD *v10; // rax
  char v11; // dl
  char v12; // al
  __int64 v13; // rdi
  char v14; // al
  char v15; // dl
  int v17; // eax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1F;
  if ( v5 )
  {
    if ( (v5 & 4) == 0 )
    {
      v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v7 )
      {
        v8 = *(_BYTE *)(*(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
        v9 = (2 * ((v8 & 2) != 0))
           | ((v8 & 4) != 0 ? 0xC : 0)
           | (16 * ((v8 & 0x10) != 0))
           | (32 * ((v8 & 8) != 0))
           | v8 & 1;
        a5 = (2 * ((v8 & 2) != 0)) & 0x10 | (16 * ((v8 & 0x10) != 0)) & 0x10u;
        if ( (2 * ((v8 & 2) != 0)) & 0x10 | (16 * ((v8 & 0x10) != 0)) & 0x10 )
          a5 = 16;
        a2 = (unsigned __int8)(2 * ((v8 & 2) != 0)) & 8u | ((v8 & 4) != 0 ? 8 : 0);
        if ( (2 * ((v8 & 2) != 0)) & 8 | ((v8 & 4) != 0 ? 8 : 0) )
          a2 = 8;
        a4 = (unsigned __int8)(2 * ((v8 & 2) != 0)) & 4u | ((v8 & 4) != 0 ? 4 : 0);
        if ( (2 * ((v8 & 2) != 0)) & 4 | ((v8 & 4) != 0 ? 4 : 0) )
          a4 = 4;
        a3 = (2 * ((v8 & 2) != 0)) & 2;
        if ( (v9 & 2) != 0 )
          a3 = 2;
        v6 |= a3 | a4 | a2 | a5 | v9 & 1;
      }
    }
  }
  v10 = *(_QWORD **)(a1 + 48);
  if ( v10 )
  {
    v11 = *(_BYTE *)(*(_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    a5 = 2;
    v12 = (2 * ((v11 & 2) != 0))
        | ((v11 & 4) != 0 ? 0xC : 0)
        | (16 * ((v11 & 0x10) != 0))
        | (32 * ((v11 & 8) != 0))
        | v11 & 1;
    a2 = (2 * ((v11 & 2) != 0)) & 0x10 | (16 * ((v11 & 0x10) != 0)) & 0x10u;
    if ( (2 * ((v11 & 2) != 0)) & 0x10 | (16 * ((v11 & 0x10) != 0)) & 0x10 )
      a2 = 16;
    a4 = (unsigned __int8)(2 * ((v11 & 2) != 0)) & 8u | ((v11 & 4) != 0 ? 8 : 0);
    if ( (2 * ((v11 & 2) != 0)) & 8 | ((v11 & 4) != 0 ? 8 : 0) )
      a4 = 8;
    a3 = (2 * ((v11 & 2) != 0)) & 2;
    if ( (v12 & 2) != 0 )
      a3 = 2;
    v6 |= a3 | a4 | a2 | v12 & 1;
  }
  v13 = *(_QWORD *)(a1 + 32);
  if ( !v13 )
    return v6;
  v14 = sub_E6D500(v13, a2, a3, a4, a5);
  v15 = v14 & 1;
  if ( (v14 & 8) != 0 )
  {
    if ( (v14 & 2) != 0 )
    {
      v6 |= v14 & 1 | 0x10 | 2;
      return v6;
    }
    v15 |= 0x10u;
    v6 |= 0x10u;
  }
  else if ( (v14 & 2) != 0 )
  {
    v15 |= 2u;
    v17 = 2;
    return v17 | v15 & 1 | v6;
  }
  v17 = 0;
  return v17 | v15 & 1 | v6;
}

