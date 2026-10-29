__int16 __fastcall sub_104F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  sub_199910();
  *(_DWORD *)(a2 + 628) = 1;
  if ( (unsigned __int8)netnode_inited() )
    *(_QWORD *)(a2 + 272) |= 0x10uLL;
  if ( (get_merge_state() & 3) != 0 )
  {
    v11 = -(__int64)((unsigned __int8)is_diff_merge_mode() == 0);
    LOBYTE(v11) = 0;
    v2 = *(_QWORD *)(a2 + 272) | (v11 + 512);
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 272);
    BYTE1(v2) |= 4u;
  }
  v3 = *(_QWORD *)(a2 + 120) == 0;
  v4 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 272) = v2;
  v5 = *(_QWORD *)(a2 + 104);
  if ( !v3 )
  {
    if ( v4 != 27 )
    {
      if ( v5 )
      {
        v2 |= 0x40uLL;
        *(_QWORD *)(a2 + 272) = v2;
      }
      goto LABEL_9;
    }
    if ( !v5 )
    {
      v2 |= 0x20uLL;
      goto LABEL_17;
    }
    *(_QWORD *)(a2 + 272) = v2 | 0x60;
LABEL_16:
    v2 = *(_QWORD *)(a2 + 272);
LABEL_17:
    BYTE1(v2) |= 0x80u;
    *(_QWORD *)(a2 + 272) = v2;
    goto LABEL_9;
  }
  if ( v5 )
  {
    v2 |= 0x40uLL;
    *(_QWORD *)(a2 + 272) = v2;
  }
  if ( v4 == 27 )
    goto LABEL_16;
LABEL_9:
  v6 = *(_QWORD *)(a2 + 232);
  if ( v6 )
  {
    v2 = *(_QWORD *)(a2 + 168);
    if ( v6 == v2 || !v2 )
    {
      *(_QWORD *)(a2 + 272) |= 0x400000000uLL;
      if ( v6 != *(_QWORD *)a2 )
        return v2;
    }
    else if ( v6 != *(_QWORD *)a2 )
    {
      return v2;
    }
    *(_QWORD *)(a2 + 264) |= 1uLL;
    *(_QWORD *)(a2 + 272) &= 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned int)sub_15E9C0(v6) == 2 && *(_QWORD *)(v6 + 864) )
    {
      v10 = *(_QWORD *)(a2 + 272) | 2LL;
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 232);
      v8 = sub_15E9C0(v7);
      v9 = *(_QWORD *)(a2 + 272);
      if ( v8 != 3 || (v10 = v9 | 4, !*(_QWORD *)(v7 + 872)) )
        v10 = v9 | 1;
    }
    *(_QWORD *)(a2 + 272) = v10;
    v2 = sub_F6B10(*(_QWORD *)(a2 + 232));
    if ( v2 )
    {
      *(_QWORD *)(a2 + 264) |= 2uLL;
      v2 = sub_165570(*(_QWORD *)(a2 + 232));
      if ( v2 )
        *(_QWORD *)(a2 + 272) |= 0x80uLL;
    }
  }
  return v2;
}

