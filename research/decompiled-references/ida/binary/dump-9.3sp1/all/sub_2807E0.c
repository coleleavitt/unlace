__int64 __fastcall sub_2807E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r12
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 0x17 )
  {
    if ( v2 == 57 )
    {
      v9 = *(_QWORD **)(a2 + 32);
      v10 = *v9 + 72LL * v9[1];
      if ( v10 != *v9 )
      {
        for ( i = *v9 + 64LL; ; i += 72 )
        {
          if ( *(_DWORD *)(i - 56) == 61
            && !sub_255A30(*(__int64 **)(i - 40))
            && (get_tinfo_property() & 0xF) == 0xA
            && !*(_BYTE *)(*(_QWORD *)(i - 40) + 13LL) )
          {
            copy_tinfo_t();
            *(_BYTE *)(a1 + 88) = 1;
          }
          if ( v10 == i + 8 )
            break;
        }
      }
    }
    return 0;
  }
  if ( v2 <= 0x15 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 16 )
      {
        v3 = *(_QWORD *)(a2 + 32);
        if ( *(_DWORD *)(v3 + 8) == 61 && !sub_255A30(*(__int64 **)(v3 + 24)) )
        {
          v14 = *(_QWORD *)(a2 + 32);
          if ( (get_tinfo_property() & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v14 + 24) + 13LL) )
          {
            copy_tinfo_t();
            *(_BYTE *)(a1 + 88) = 1;
          }
        }
        v4 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v4 + 8) == 61 && !sub_255A30(*(__int64 **)(v4 + 24)) )
        {
          v13 = *(_QWORD *)(a2 + 40);
          if ( (get_tinfo_property() & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v13 + 24) + 13LL) )
            goto LABEL_28;
        }
      }
      return 0;
    }
    v12 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v12 + 8) != 61 || sub_255A30(*(__int64 **)(v12 + 24)) )
      return 0;
    goto LABEL_25;
  }
  v6 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v6 + 8) != 61 )
  {
    v7 = *(_QWORD *)(a2 + 24);
    goto LABEL_10;
  }
  v15 = sub_255A30(*(__int64 **)(v6 + 24));
  v7 = *(_QWORD *)(a2 + 24);
  if ( v15 )
  {
LABEL_10:
    if ( *(_DWORD *)(v7 + 8) != 61 || sub_255A30(*(__int64 **)(v7 + 24)) )
      return 0;
    v8 = *(_QWORD *)(a2 + 24);
    goto LABEL_26;
  }
LABEL_25:
  v8 = *(_QWORD *)(a2 + 32);
LABEL_26:
  if ( (get_tinfo_property() & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v8 + 24) + 13LL) )
  {
LABEL_28:
    copy_tinfo_t();
    *(_BYTE *)(a1 + 88) = 1;
  }
  return 0;
}
