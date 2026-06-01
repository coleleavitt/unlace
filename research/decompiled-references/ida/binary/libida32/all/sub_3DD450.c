__int64 __fastcall sub_3DD450(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d

  if ( (sub_3B9AA0((__int64)a1, a3, 4) & 0x600) == 0x200 )
    return sub_3DC190(a1, a2, a3);
  v4 = sub_3BCF60((__int64)a1, a3);
  v5 = v4;
  if ( v4 == -1 || (sub_3B9AA0((__int64)a1, v4, 4) & 0x10000) == 0 )
    return sub_3DC190(a1, a2, a3);
  *(_DWORD *)a2 = v5;
  *(_BYTE *)(a2 + 4) = 21;
  return 1;
}

