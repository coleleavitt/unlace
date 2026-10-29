__int64 __fastcall sub_C71B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  bool v10; // zf
  __int64 v11; // rdi

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 && (unsigned int)sub_E6C2C0(v5) != 5 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = 0;
    if ( ((*(__int64 *)(v6 + 8) >> 1) & 3) == 2 )
      v7 = *(_QWORD *)(v6 + 16);
    return sub_F3F530(v7);
  }
  v9 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v9;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43 <= 1 )
    goto LABEL_20;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    goto LABEL_14;
  v7 = sub_F3F310(v7, a2, a3, a4);
  if ( v7 )
  {
LABEL_20:
    while ( 1 )
    {
      v10 = (*(_BYTE *)(v7 + 18) & 0x10) == 0;
      v7 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v10 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 > 1 )
        v7 = sub_F3F310(v7, a2, a3, a4);
    }
  }
  else
  {
    v7 = *(_QWORD *)v9;
  }
LABEL_14:
  if ( (*(_DWORD *)a1 & 0x100000) == 0 )
    return sub_F3F530(v7);
  if ( *(_BYTE *)(v7 + 16) == 42 )
    return sub_F3F530(*(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL));
  v11 = *(_QWORD *)(*(_QWORD *)(sub_F3F310(v7, a2, a3, a4) + 32) & 0xFFFFFFFFFFFFFFF0LL);
  return sub_F3F530(v11);
}

