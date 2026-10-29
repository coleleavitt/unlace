bool __fastcall sub_18C2AE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // rax
  char v6; // cl
  int v7; // ecx
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rax

  v3 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v4 = 0;
  v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) == 26 )
  {
    v6 = *(_BYTE *)(v5 + 19);
    if ( (v6 & 0x40) != 0 )
    {
      v12 = (v5 + ((v6 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v5 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v12 + 1) & 4) != 0 )
        v4 = *(_WORD *)(v12 + 8) & 0x1FF;
    }
  }
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 26 )
  {
    v9 = *(_BYTE *)(v8 + 19);
    if ( (v9 & 0x40) != 0 )
    {
      v10 = (v8 + ((v9 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v8 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v10 + 1) & 4) != 0 )
        v7 = *(_WORD *)(v10 + 8) & 0x1FF;
    }
  }
  return v4 != v7;
}
