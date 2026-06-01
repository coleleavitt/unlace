unsigned __int64 __fastcall sub_16C4660(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  bool v10; // bp
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  LODWORD(v6) = *(unsigned __int8 *)(a2 + 16);
  v7 = (unsigned int)(v6 - 57);
  if ( (unsigned int)v7 <= 1 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v6) = *(_BYTE *)(a2 + 16);
  }
  if ( (_BYTE)v6 == 14 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v6) = *(_BYTE *)(a2 + 16);
  }
  if ( (_BYTE)v6 == 7 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v6) = *(_BYTE *)(a2 + 16);
  }
  if ( (_BYTE)v6 == 47 )
  {
    v7 = sub_F60F10(a2, a2, v7, (__int64)a4, a5, a6)[16];
    v8 = 0;
    a4 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (v7 & 4) != 0 )
      {
        v11[0] = *a4;
        v8 = sub_6D5440(v11) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
    v6 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    a2 = *(_QWORD *)v6;
    LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)v6 + 16LL);
  }
  if ( (_BYTE)v6 == 10 )
    return ((unsigned __int64)(*(_BYTE *)(a2 + 32) & 1) << 32) | (*(_DWORD *)(a2 + 32) >> 1) & 0xFFFFFF;
  v10 = (((*(_WORD *)(a2 + 18) >> 3) + 76) & 0x1FFu) <= 0xB;
  return ((unsigned __int64)v10 << 32) | (unsigned int)sub_AAC1F0(a1, a2 & 0xFFFFFFFFFFFFFFF0LL, v7, (__int64)a4, a5);
}
