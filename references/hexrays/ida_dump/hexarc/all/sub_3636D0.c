__int64 __fastcall sub_3636D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  char tinfo_property; // r12
  char v7; // al
  int v8; // r12d
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 80 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( !(unsigned __int8)get_tinfo_property(*(_QWORD *)(v3 + 48), 2) )
  {
    if ( !under_debugger )
      sub_37B760(50214);
    BUG();
  }
  if ( (unsigned __int8)sub_295900((_QWORD *)(v3 + 48)) )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( (_BYTE)v5 )
    {
      if ( (v5 & 0xE) != 0 || (v5 & 0x30) == 0 )
      {
        v15[0] = get_tinfo_property(v5, 9);
        tinfo_property = get_tinfo_property(v15[0], 2);
        clear_tinfo_t(v15);
        if ( (tinfo_property & 0x3F) != 0x30 )
        {
          ++*(_DWORD *)(a1 + 88);
          return 0;
        }
      }
    }
  }
  if ( (unsigned __int8)sub_295D10(v3) )
    return 0;
  if ( *(_DWORD *)(v3 + 8) == 65 )
  {
    v7 = get_tinfo_property(*(_QWORD *)(v3 + 48), 2);
    if ( (v7 & 0x3E) != 0 && (v7 & 0xFu) <= 8 )
    {
      v8 = *(_DWORD *)(v3 + 32);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 432LL) + 104LL * v8 + 88) == *(_DWORD *)(a1 + 92) )
      {
        v9 = *(_DWORD **)(a1 + 64);
        v10 = *(_QWORD *)(a1 + 72);
        v11 = &v9[v10];
        if ( v9 == v11 )
          goto LABEL_22;
        v12 = *(_DWORD **)(a1 + 64);
        while ( v8 != *v12 )
        {
          if ( v11 == ++v12 )
            goto LABEL_22;
        }
        if ( v12 == v11 )
        {
LABEL_22:
          if ( *(_QWORD *)(a1 + 80) < (unsigned __int64)(v10 + 1) )
          {
            v13 = qvector_reserve(a1 + 64, v9, v10 + 1, 4);
            v14 = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 64) = v13;
            v11 = (_DWORD *)(v13 + 4 * v14);
          }
          *v11 = v8;
          ++*(_QWORD *)(a1 + 72);
        }
        return 0;
      }
    }
  }
  return 1;
}
