char __fastcall sub_9C8B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  char v6; // al
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)(v5 + 16);
  if ( v6 == 13 )
  {
    LOBYTE(v7) = (((*(_WORD *)(v5 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  }
  else if ( v6 == 47 )
  {
    v8 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
    if ( (*(_BYTE *)(v8 + 74) & 1) != 0 )
      return (unsigned int)~*(_DWORD *)(sub_F3D1D0(v5, a2, v8, v9, v10) + 76) >> 7;
    LOBYTE(v7) = 0;
    if ( (*(_QWORD *)(v8 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      return (unsigned int)~*(_DWORD *)(sub_F3D1D0(v5, a2, v8, v9, v10) + 76) >> 7;
  }
  else
  {
    LOBYTE(v7) = v6 == 10;
  }
  return v7;
}

