char __fastcall sub_F3D400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (_BYTE)v7 == 13 )
  {
    LOBYTE(v6) = (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) <= 0x34;
  }
  else if ( (_BYTE)v7 == 47 )
  {
    v8 = sub_F3D150(*(_QWORD **)(v6 + 24), a2, a3, v7, a5, a6);
    LOBYTE(v6) = 1;
    if ( (*((_BYTE *)v8 + 74) & 1) == 0 )
      LOBYTE(v6) = (v8[16] & 0xFFFFFFFFFFFFFFF8LL) != 0;
  }
  else
  {
    LOBYTE(v6) = 0;
    if ( (unsigned __int8)v7 <= 0x2Au )
      return (0x40600004C00uLL >> v7) & 1;
  }
  return v6;
}

