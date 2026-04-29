__int64 __fastcall sub_280BA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r12
  _QWORD *i; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 <= 0x17 )
  {
    if ( v2 <= 0x15 )
    {
      if ( v2 != 2 )
      {
        if ( v2 == 16 )
        {
          v3 = *(_QWORD *)(a2 + 32);
          if ( *(_DWORD *)(v3 + 8) == 61 && !sub_255DF0(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48)) )
          {
            v14 = *(_QWORD *)(a2 + 32);
            if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v14 + 24) + 13LL) )
            {
              copy_tinfo_t(v14 + 48, a2 + 48);
              *(_BYTE *)(a1 + 88) = 1;
            }
          }
          v4 = *(_QWORD *)(a2 + 40);
          if ( *(_DWORD *)(v4 + 8) == 61 && !sub_255DF0(*(__int64 **)(v4 + 24), (_QWORD *)(v4 + 48)) )
          {
            v13 = *(_QWORD *)(a2 + 40);
            if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v13 + 24) + 13LL) )
            {
              copy_tinfo_t(v13 + 48, a2 + 48);
              *(_BYTE *)(a1 + 88) = 1;
            }
          }
        }
        return 0;
      }
      v12 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v12 + 8) != 61 || sub_255DF0(*(__int64 **)(v12 + 24), (_QWORD *)(v12 + 48)) )
        return 0;
      v7 = *(_QWORD *)(a2 + 24);
      goto LABEL_26;
    }
    v6 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v6 + 8) == 61 )
    {
      v15 = sub_255DF0(*(__int64 **)(v6 + 24), (_QWORD *)(v6 + 48));
      v7 = *(_QWORD *)(a2 + 24);
      if ( !v15 )
      {
LABEL_26:
        v8 = *(_QWORD *)(a2 + 32);
LABEL_27:
        if ( (get_tinfo_property(*(_QWORD *)(v7 + 48), 2) & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v8 + 24) + 13LL) )
        {
          copy_tinfo_t(v8 + 48, v7 + 48);
          *(_BYTE *)(a1 + 88) = 1;
        }
        return 0;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 24);
    }
    if ( *(_DWORD *)(v7 + 8) != 61 || sub_255DF0(*(__int64 **)(v7 + 24), (_QWORD *)(v7 + 48)) )
      return 0;
    v7 = *(_QWORD *)(a2 + 32);
    v8 = *(_QWORD *)(a2 + 24);
    goto LABEL_27;
  }
  if ( v2 == 57 )
  {
    v9 = *(_QWORD **)(a2 + 32);
    v10 = *v9 + 72LL * v9[1];
    if ( v10 != *v9 )
    {
      for ( i = (_QWORD *)(*v9 + 64LL); ; i += 9 )
      {
        if ( *((_DWORD *)i - 14) == 61
          && !sub_255DF0((__int64 *)*(i - 5), i - 2)
          && (get_tinfo_property(*i, 2) & 0xF) == 0xA
          && !*(_BYTE *)(*(i - 5) + 13LL) )
        {
          copy_tinfo_t(i - 2, i);
          *(_BYTE *)(a1 + 88) = 1;
        }
        if ( (_QWORD *)v10 == i + 1 )
          break;
      }
    }
  }
  return 0;
}
