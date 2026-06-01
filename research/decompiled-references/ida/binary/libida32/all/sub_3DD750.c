__int64 __fastcall sub_3DD750(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  unsigned int v6; // r13d

  v4 = sub_3B9AA0((__int64)a1, a3, 4);
  if ( (v4 & 0x1000) != 0 )
  {
    if ( (v4 & 0x10000) != 0
      && *(_BYTE *)(a2 + 4) == 21
      && (v6 = *(_DWORD *)a2, v6 == (unsigned int)sub_3BD5D0((__int64)a1, a3)) )
    {
      return sub_3DC4D0(a1, a2, a3);
    }
    else
    {
      return sub_3DD2D0(a1, (unsigned int *)a2, a3);
    }
  }
  else
  {
    *(_DWORD *)a2 = -1;
    return 0;
  }
}

