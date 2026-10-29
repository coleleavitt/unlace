__int64 __fastcall sub_15570(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int dword; // eax
  __int64 v7; // rdx
  bool v8; // cf
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned __int8 byte; // al

  v4 = a3 + 4;
  create_data(a3, 0x20000000, 4, -1);
  set_cmt(a3, "Annotation item size", 0);
  dword = get_dword(a3, "Annotation item size", v5);
  v7 = 4 * dword;
  v8 = __CFADD__(v4, v7);
  v9 = v4 + v7;
  if ( dword <= 0x3FFFFFFF && !v8 && a3 >= a1[21] && a1[22] >= v9 )
  {
    if ( !dword )
      return v4;
    v11 = v4 + 4LL * dword;
    while ( 1 )
    {
      create_data(v4, 0x20000000, 4, -1);
      set_cmt(v4, "Annotation item offset", 0);
      v13 = get_dword(v4, "Annotation item offset", v12);
      v14 = a1[19] + v13;
      if ( v14 < a1[21] || v14 >= a1[22] )
        break;
      create_data(a1[19] + v13, 0, 1, -1);
      byte = get_byte(v14);
      if ( byte > 3u )
        byte = 3;
      sub_13370(v14, (__int64)"visibility: %s", off_279E0[byte]);
      if ( sub_14760((__int64)a1, v14 + 1, 0) == -1 )
        break;
      v4 += 4LL;
      if ( v11 == v4 )
        return v4;
    }
  }
  return -1;
}

