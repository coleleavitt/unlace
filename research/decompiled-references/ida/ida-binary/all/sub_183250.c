__int64 __fastcall sub_183250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // ebp
  __int64 v6; // rax
  __int64 license_manager; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  time_t v13; // rax
  time_t v14; // rdx
  __int64 v15; // rdx
  time_t v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 (*v20)(); // rax
  QT::QAction *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rax

  v5 = *(_DWORD *)(a2 + 112);
  if ( (v5 & 0x80000) == 0 )
  {
    if ( under_debugger )
      BUG();
    LODWORD(v23) = interr(40725, a2, a3, a4, a5);
    goto LABEL_71;
  }
  v6 = *(_QWORD *)(a2 + 88);
  if ( (v6 & 0x160000) == 0 )
  {
    if ( (*(_BYTE *)(get_ph() + 9) & 2) == 0 && (get_merge_state() & 3) == 0 && !(unsigned __int8)is_database_flag(1)
      || (v5 & 0x20000) == 0 )
    {
      v21 = *(QT::QAction **)(a2 + 192);
      if ( v21 )
      {
        if ( (QT::QAction *)qword_8C9930 == v21 )
        {
          if ( (unsigned __int8)QT::QAction::isEnabled(v21) )
            return 3;
          return 7;
        }
        v22 = *(_QWORD *)(a2 + 88);
        if ( (v22 & 0x10) != 0 )
        {
          if ( !(unsigned __int8)netnode_inited() )
            return 5;
          v22 = *(_QWORD *)(a2 + 88);
        }
        if ( (v22 & 0x300) != 0 && (*(_QWORD *)(a3 + 352) & v22 & 0x300) == 0
          || (v22 & 0x400) != 0 && (*(_BYTE *)(a3 + 353) & 4) == 0 )
        {
          return 5;
        }
        result = sub_478380(a1 + 16, a2, a3);
        if ( (int)result > 3 )
          return result;
        v23 = *(_QWORD *)(a2 + 88);
        v24 = *(_QWORD *)(a3 + 352);
        if ( (v23 & 7) != 0 && ((unsigned __int8)v23 & (unsigned __int8)v24 & 7) == 0 )
          return 7;
        v25 = *(_DWORD *)(a3 + 8);
        if ( v25 == 58 || v25 == 25 )
        {
          if ( (v23 & 0x17000) != 0 && (*(_QWORD *)(a2 + 88) & 0x17000LL & v24) == 0 )
            return 7;
          v26 = *(_QWORD *)(a3 + 352) & 0xFFFE8CD8LL;
          v27 = *(_QWORD *)(a2 + 88) & 0xFFFE8CD8LL;
          goto LABEL_47;
        }
        if ( (v23 & 0x20) != 0 && v25 == 0x8000000 )
        {
          if ( (v24 & 0x20) == 0 )
            return 7;
          v26 = *(_QWORD *)(a3 + 352) & 0xFFFE8CD8LL;
          v27 = *(_QWORD *)(a2 + 88) & 0xFFFE84D8LL;
          goto LABEL_47;
        }
        v26 = *(_QWORD *)(a3 + 352) & 0xFFFE8CD8LL;
        if ( v25 == 62 )
        {
          v27 = *(_QWORD *)(a2 + 88) & 0xFFFE04D8LL;
          goto LABEL_47;
        }
LABEL_71:
        v27 = (unsigned int)v23 & 0xFFFE84D8;
LABEL_47:
        if ( (v27 & ~v26) == 0 )
        {
          if ( (v27 & 0xC0) == 0 )
            return (v5 & 1u) + 2;
          return 3;
        }
        return 7;
      }
      if ( (unsigned __int8)netnode_inited() )
        return 2;
    }
    return 6;
  }
  if ( (v6 & 0x40000) == 0 )
  {
    v18 = sub_426230(a1, a2);
    v19 = *(_QWORD *)(sub_417080(v18) + 8);
    if ( v19 )
    {
      v20 = *(__int64 (**)())(*(_QWORD *)v19 + 480LL);
      if ( v20 == sub_178B60 || !(unsigned __int8)v20() )
      {
        if ( (*(_QWORD *)(a2 + 88) & 0x100000) == 0 )
          goto LABEL_23;
        goto LABEL_5;
      }
    }
    return 5;
  }
  if ( (v6 & 0x100000) == 0 )
    goto LABEL_23;
LABEL_5:
  license_manager = get_license_manager();
  if ( !license_manager )
    return 7;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  if ( !v10 )
    return 7;
  v11 = *(_QWORD *)(v10 + 56);
  v12 = v11 + 40LL * *(_QWORD *)(v10 + 64);
  if ( v11 == v12 )
    return 7;
  while ( *(_DWORD *)(v11 + 8) != 26 )
  {
    v11 += 40;
    if ( v12 == v11 )
      return 7;
  }
  if ( !v11 )
    return 7;
  v13 = time(nullptr);
  v14 = *(_QWORD *)(v11 + 24);
  if ( v14 != -1 && v13 < v14 )
    return 7;
  v15 = *(_QWORD *)(v11 + 32);
  if ( v15 && v13 >= v15 - 2592000 )
  {
    v16 = v15 - 1296000;
    if ( v15 - 1296000 < v15 )
      v16 = *(_QWORD *)(v11 + 32);
    if ( v16 <= v13 && v13 >= v15 + 1296000 && v13 >= v15 + 2592000 )
      return 7;
  }
LABEL_23:
  result = sub_478380(a1 + 16, a2, a3);
  if ( (int)result <= 3 )
  {
    if ( (*(_BYTE *)(a2 + 92) & 1) != 0 )
      return 3;
    return 2;
  }
  return result;
}
