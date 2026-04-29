bool __fastcall sub_DD40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 flags; // rbp
  __int64 v6; // rax
  int v7; // eax
  _QWORD *func; // rax
  _QWORD *v9; // rax
  __int64 head; // rax

  if ( a3 > 0x20 )
  {
    flags = get_flags_ex(a3 & 0xFFFFFFFFFFFFFFFELL, 4);
    v6 = flags & 0x600;
    if ( v6 == 1536 )
    {
      v7 = *(_DWORD *)(a1 + 5272);
      if ( v7 == 1 )
      {
        if ( (a3 & 1) == 0 )
        {
          LOBYTE(v3) = 0;
          return v3;
        }
      }
      else if ( !v7 && (a3 & 3) != 0 )
      {
        goto LABEL_7;
      }
      func = (_QWORD *)get_func(a3);
      if ( !func )
        return (flags & 0x10000) == 0;
      if ( *func != a3 )
      {
        LOBYTE(v3) = (int)get_func_chunknum(func, *(_QWORD *)(a2 + 16)) >= 0;
        return v3;
      }
    }
    else if ( v6 != 1024 && (unsigned __int8)segtype(a3) != 3 )
    {
      if ( (a3 & 3) != 0 )
        goto LABEL_7;
      v9 = (_QWORD *)getseg(a3);
      if ( !v9 )
        goto LABEL_7;
      if ( a3 != *v9 )
      {
        head = prev_head(a3);
        if ( head != -1 )
        {
          LOBYTE(v3) = (get_flags_ex(head, 4) & 0x600) == 1024;
          return v3;
        }
LABEL_7:
        LOBYTE(v3) = 0;
        return v3;
      }
    }
    LOBYTE(v3) = 1;
    return v3;
  }
  LOBYTE(v3) = 0;
  return v3;
}
