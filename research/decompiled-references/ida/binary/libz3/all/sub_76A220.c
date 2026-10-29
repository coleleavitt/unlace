__int64 __fastcall sub_76A220(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rsi
  _BYTE *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx

  v2 = *(_QWORD *)(sub_15D1F10(a2) + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v3 )
      {
        if ( v4 >= *(_DWORD *)(v3 - 4) - 1 )
          return sub_1674700(a1 + 40, v5);
      }
      else if ( v4 == -1 )
      {
        return sub_1674700(a1 + 40, v5);
      }
      v6 = (_BYTE *)(v3 + 16LL * v4);
      if ( v6[8] != 1 )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 24LL) + 8LL);
      if ( *(_BYTE *)(v7 + 8) )
        break;
      v5 = (unsigned int)(*(_DWORD *)v7 + v5);
      ++v4;
    }
LABEL_15:
    sub_DBF6E(0);
  }
  LODWORD(v5) = 0;
  v8 = 0;
  do
  {
    v9 = v8;
    if ( *(_BYTE *)(v8 + 8) != 1 )
      goto LABEL_15;
    v8 += 16;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 8LL);
    if ( *(_BYTE *)(v10 + 8) )
      goto LABEL_15;
    v5 = (unsigned int)(*(_DWORD *)v10 + v5);
  }
  while ( v8 != 0xFFFFFFFF0LL );
  return sub_1674700(a1 + 40, v5);
}

