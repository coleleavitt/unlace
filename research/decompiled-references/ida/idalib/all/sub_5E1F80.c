bool __fastcall sub_5E1F80(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  char *v7; // rax
  char *v8; // rdx
  unsigned __int64 v9; // rax

  v2 = (_BYTE *)skip_spaces(a1);
  if ( *v2 != 40 )
    return 0;
  v4 = skip_spaces(v2 + 1);
  v5 = v4;
  if ( *(_BYTE *)v4 != 34 )
    return 0;
  v6 = v4 + 1;
  v7 = strchr((const char *)(v4 + 1), 34);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = (unsigned __int64)&v7[-v6];
  if ( v9 > 0x3FF )
    v9 = 1023;
  if ( (unsigned int)v9 >= 8 )
  {
    *a2 = *(_QWORD *)(v5 + 1);
    *(_QWORD *)((char *)a2 + (unsigned int)v9 - 8) = *(_QWORD *)(v6 + (unsigned int)v9 - 8);
    qmemcpy(
      (void *)((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(v6 - ((_QWORD)a2 - ((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v9 + (_DWORD)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8)) >> 3));
  }
  else if ( (v9 & 4) != 0 )
  {
    *(_DWORD *)a2 = *(_DWORD *)(v5 + 1);
    *(_DWORD *)((char *)a2 + (unsigned int)v9 - 4) = *(_DWORD *)(v6 + (unsigned int)v9 - 4);
  }
  else if ( (_DWORD)v9 )
  {
    *(_BYTE *)a2 = *(_BYTE *)(v5 + 1);
    if ( (v9 & 2) != 0 )
      *(_WORD *)((char *)a2 + (unsigned int)v9 - 2) = *(_WORD *)(v6 + (unsigned int)v9 - 2);
  }
  *((_BYTE *)a2 + v9) = 0;
  return *(_BYTE *)skip_spaces(v8 + 1) == 41;
}
