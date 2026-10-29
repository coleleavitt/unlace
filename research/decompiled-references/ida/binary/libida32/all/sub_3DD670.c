char __fastcall sub_3DD670(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  int v6; // eax

  v4 = sub_3B9AA0((__int64)a1, a3, 4);
  if ( (v4 & 0x10000) != 0 )
  {
    *(_BYTE *)(a2 + 4) = 21;
    v6 = sub_3BD5D0((__int64)a1, a3);
    *(_DWORD *)a2 = v6;
    return v6 != -1;
  }
  else if ( (v4 & 0x1000) != 0 )
  {
    return sub_3DC4D0(a1, a2, a3);
  }
  else
  {
    *(_DWORD *)a2 = -1;
    return 0;
  }
}

