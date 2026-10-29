__int64 __fastcall sub_10CD00(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v3 = *(_DWORD *)(a2 + 112);
  if ( (v3 & 0x80000) == 0 )
  {
    if ( under_debugger )
      BUG();
    interr();
LABEL_40:
    v11 = (unsigned int)v7 & 0xFFFE84D8;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a2 + 90) & 0x16) != 0 )
  {
    result = sub_174B80(a1 + 136);
    if ( (int)result <= 3 )
    {
      result = 2;
      if ( (*(_BYTE *)(a2 + 92) & 1) != 0 )
        return 3;
    }
    return result;
  }
  if ( (*(_BYTE *)(get_ph() + 9) & 2) != 0 || (get_merge_state() & 3) != 0 || (unsigned __int8)is_database_flag() )
  {
    result = 6;
    if ( (v3 & 0x20000) != 0 )
      return result;
  }
  if ( !unk_25426A )
    return 5;
  v6 = *(_QWORD *)(a2 + 88);
  if ( (v6 & 0x10) == 0 )
    goto LABEL_7;
  if ( !(unsigned __int8)netnode_inited() )
    return 5;
  v6 = *(_QWORD *)(a2 + 88);
LABEL_7:
  if ( (v6 & 0x300) != 0 && (*(_QWORD *)(a3 + 272) & v6 & 0x300) == 0
    || (v6 & 0x400) != 0 && (*(_BYTE *)(a3 + 273) & 4) == 0 )
  {
    return 5;
  }
  result = sub_174B80(a1 + 136);
  if ( (int)result > 3 )
    return result;
  v7 = *(_QWORD *)(a2 + 88);
  v8 = *(_QWORD *)(a3 + 272);
  if ( (v7 & 7) != 0 )
  {
    result = 7;
    if ( ((unsigned __int8)v7 & (unsigned __int8)v8 & 7) == 0 )
      return result;
  }
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 == 58 || v9 == 25 )
  {
    if ( (v7 & 0x17000) != 0 )
    {
      result = 7;
      if ( (*(_QWORD *)(a2 + 88) & 0x17000LL & v8) == 0 )
        return result;
    }
    v10 = *(_QWORD *)(a3 + 272) & 0xFFFE8CD8LL;
    v11 = *(_QWORD *)(a2 + 88) & 0xFFFE8CD8LL;
    goto LABEL_25;
  }
  if ( (v7 & 0x20) != 0 && v9 == 0x8000000 )
  {
    result = 7;
    if ( (v8 & 0x20) == 0 )
      return result;
    v10 = *(_QWORD *)(a3 + 272) & 0xFFFE8CD8LL;
    v11 = *(_QWORD *)(a2 + 88) & 0xFFFE84D8LL;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(a3 + 272) & 0xFFFE8CD8LL;
  if ( v9 != 62 )
    goto LABEL_40;
  v11 = *(_QWORD *)(a2 + 88) & 0xFFFE04D8LL;
LABEL_25:
  result = 7;
  if ( (v11 & ~v10) == 0 )
  {
    result = (v3 & 1u) + 2;
    if ( (v11 & 0xC0) != 0 )
      return 3;
  }
  return result;
}

