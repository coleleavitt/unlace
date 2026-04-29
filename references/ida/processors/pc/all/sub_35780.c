__int64 __fastcall sub_35780(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  int v5; // eax
  __int64 v6; // rbp
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // esi
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx

  if ( (unsigned int)getinf() == 7 || (unsigned int)getinf() == 8 || (unsigned int)getinf() == 18 )
  {
    v5 = a3[1];
    goto LABEL_3;
  }
  v8 = getinf();
  v5 = a3[1];
  if ( v8 == 25 || *(_BYTE *)(a2 + 32) != 33 )
  {
LABEL_3:
    if ( (_BYTE)v5 == 7 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v16 = *((_QWORD *)a3 + 2) + 16LL * *(_QWORD *)a2;
      if ( v16 != v6 )
      {
        v6 &= v16;
        if ( v16 == -1 )
          goto LABEL_9;
      }
    }
    else
    {
      if ( (unsigned __int8)v5 > 7u )
        goto LABEL_18;
      if ( (_BYTE)v5 == 1 )
        goto LABEL_31;
      if ( (_BYTE)v5 != 6 )
        return 1;
      v6 = sub_7F350(a1, a2, a3);
    }
    if ( !v6 && get_first_dref_to() != -1 )
      return 1;
LABEL_9:
    if ( !(unsigned __int8)is_loaded() )
      return 0;
    if ( (((get_flags_ex() & 0x600) - 512) & 0xFFFFFFFFFFFFFC00LL) == 0 )
    {
      if ( (get_flags_ex() & 0x600) == 0x200 )
        prev_not_tail();
      if ( !(unsigned __int8)is_problem_present() || (get_flags_ex() & 0x600) != 0x400 )
        return 0;
      netnode_check();
      ea2node();
      if ( !netnode_altval() )
      {
        netnode_supset();
        get_item_end();
        del_items();
        auto_mark_range();
      }
    }
    return 1;
  }
  if ( (_BYTE)v5 == 4 || (unsigned __int8)(v5 - 6) <= 1u )
    return 0;
  if ( (unsigned __int8)v5 > 7u )
  {
LABEL_18:
    if ( (_BYTE)v5 == 9 )
    {
      v9 = *((unsigned __int16 *)a3 + 3);
      if ( (_WORD)v9 != 4 )
      {
        LOBYTE(v5) = (*(_DWORD *)(a1 + 4436) & 0x7D783) == 0;
        LOBYTE(v9) = (_WORD)v9 == 5;
        return v9 & v5 ^ 1u;
      }
      return 0;
    }
    return 1;
  }
  if ( (_BYTE)v5 != 1 )
    return 1;
LABEL_31:
  if ( *((_WORD *)a3 + 3) != 4 )
    return 1;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(unsigned __int16 *)(a2 + 24);
  v12 = *(_DWORD *)(v10 + 104);
  v13 = *(unsigned __int16 *)(a2 + 24);
  if ( (int)v11 < v12 )
    return 1;
  if ( (int)v11 >= *(_DWORD *)(v10 + 108) )
    return 1;
  v14 = *a3;
  if ( (unsigned int)v14 > 7
    || (dword_95840[v14] & *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * ((int)v11 - v12) + 8)) == 0 )
  {
    return 1;
  }
  if ( (unsigned __int16)v11 > 0x86u )
  {
    LOWORD(v13) = v13 - 209;
    if ( (unsigned __int16)v13 > 0xAu )
      return 0;
    v17 = 1443;
    return _bittest64(&v17, v13) != 0;
  }
  else
  {
    if ( (unsigned __int16)v11 <= 0x5Bu )
    {
      if ( (unsigned __int16)(v13 - 6) > 0x26u )
        return 0;
      v15 = 0x1004080000C0LL;
      return _bittest64(&v15, v11) != 0;
    }
    v18 = 0x48640000FE1LL;
    return _bittest64(&v18, (unsigned int)(v13 - 92)) != 0;
  }
}
