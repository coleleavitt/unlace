__int64 __fastcall sub_7DFE0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  char *v7; // r13
  __int64 func; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rax

  v2 = a2 & 0x600;
  if ( v2 != 1536 )
  {
    result = -1;
    if ( v2 != 1024 )
      return result;
    v4 = a2 & 0xF0000000;
    if ( v4 == 1879048192 )
    {
      v5 = 8;
      v6 = 7;
      v7 = "xmmword";
      goto LABEL_13;
    }
    if ( v4 <= 0x70000000 )
    {
      if ( v4 == 805306368 )
      {
        v5 = 6;
        v6 = 5;
        v7 = "qword";
        goto LABEL_13;
      }
      if ( v4 <= 0x30000000 )
      {
        if ( v4 == 0x10000000 )
        {
          v5 = 5;
          v6 = 4;
          v7 = "word";
          goto LABEL_13;
        }
        v5 = 6;
        v6 = 5;
        v7 = "dword";
        if ( v4 == 0x20000000 )
          goto LABEL_13;
      }
      else
      {
        if ( v4 == 0x40000000 )
        {
          v5 = 6;
          v6 = 5;
          v7 = "tbyte";
          goto LABEL_13;
        }
        if ( v4 == 1610612736 )
        {
          get_strid();
          get_type_by_tid();
          clear_tinfo_t();
        }
      }
      goto LABEL_24;
    }
    if ( v4 != 2952790016 )
    {
      if ( v4 <= 0xB0000000 )
      {
        v5 = 6;
        v6 = 5;
        v7 = "dword";
        if ( v4 == 0x80000000 )
          goto LABEL_13;
        v7 = "qword";
        if ( v4 == 2415919104 )
          goto LABEL_13;
      }
      else
      {
        v5 = 8;
        v6 = 7;
        v7 = "ymmword";
        if ( v4 == 3758096384 )
          goto LABEL_13;
        v7 = "zmmword";
        if ( v4 == 4026531840 )
          goto LABEL_13;
      }
LABEL_24:
      v5 = 5;
      v6 = 4;
      v7 = "byte";
      goto LABEL_13;
    }
LABEL_25:
    v5 = 5;
    v6 = 4;
    v7 = "near";
    goto LABEL_13;
  }
  func = get_func();
  if ( !func || (*(_BYTE *)(func + 16) & 2) == 0 )
    goto LABEL_25;
  v5 = 4;
  v6 = 3;
  v7 = "far";
LABEL_13:
  v9 = *(_DWORD **)a1;
  if ( *(_QWORD *)(a1 + 16) < v5 )
  {
    v10 = qvector_reserve();
    *(_QWORD *)a1 = v10;
    v9 = (_DWORD *)v10;
  }
  *(_QWORD *)(a1 + 8) = v5;
  if ( (v6 & 4) != 0 )
  {
    *v9 = *(_DWORD *)v7;
    *(_DWORD *)((char *)v9 + (unsigned int)v6 - 4) = *(_DWORD *)&v7[(unsigned int)v6 - 4];
  }
  else
  {
    *(_BYTE *)v9 = *v7;
    if ( (v6 & 2) != 0 )
      *(_WORD *)((char *)v9 + v6 - 2) = *(_WORD *)&v7[v6 - 2];
  }
  *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  return (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
}
