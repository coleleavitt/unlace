__int64 __fastcall sub_78FEB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rax
  char v12; // bp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _QWORD v15[21]; // [rsp+0h] [rbp-A8h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 7) != 0 )
    return 0;
  if ( (v3 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v6 = sub_C86810();
  v4 = v6;
  if ( !v6 )
    return 0;
  if ( v6 > 2 )
    return v4;
  if ( (*(_BYTE *)(a1 + 28) & 0x7B) == 0x29 )
    return 0;
  v8 = ((*(_BYTE *)(a1 + 28) & 0x7F) + 63) & 0x7F;
  if ( (unsigned __int8)v8 <= 1u )
    return 0;
  v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v9 = (_QWORD *)*v9;
  if ( (*(_BYTE *)(sub_79C2A0(v9, a2, v8, v7) + 8) & 0x7F) != 0 )
  {
    v10 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (unsigned int)(v10 - 38) <= 6 )
    {
      v11 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v11 = *(_QWORD *)v11;
      if ( ((*(_BYTE *)(v11 + 8) + 72) & 0x7Fu) <= 3 )
        return 0;
      memset(v15, 0, 0x88u);
      LOBYTE(v15[0]) = 1;
      v15[1] = -1;
      v15[3] = -1;
      v15[5] = -1;
      v15[7] = -1;
      v15[9] = -1;
      v15[11] = -1;
      v15[13] = -1;
      v15[15] = -1;
      v12 = sub_78C840((__int64)v15, a1, 7u) & 7;
      if ( (v15[0] & 1) == 0 )
        operator delete();
      if ( v12 == 3 || v12 == 6 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 8) == 0 )
          return 2;
        v13 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v13 = *(_QWORD *)v13;
        if ( ((*(_BYTE *)(v13 + 8) + 72) & 0x7Fu) > 3 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 4) != 0 )
            v14 = *(_QWORD *)(v14 + 8);
          if ( (unsigned __int8)sub_79BBC0(v14) )
            return 2;
        }
      }
      v10 = *(_BYTE *)(a1 + 28) & 0x7F;
    }
    if ( (unsigned int)(v10 - 32) <= 5 )
      return 2 * (unsigned int)(unsigned __int8)sub_78F820(a1);
    return 0;
  }
  return v4;
}

