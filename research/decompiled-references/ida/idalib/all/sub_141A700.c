char __fastcall sub_141A700(__int64 a1, __int64 a2, char a3)
{
  unsigned int *v3; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned int *v7; // rcx
  unsigned int *v8; // rcx

  LOWORD(v3) = *(_WORD *)(a2 + 16);
  if ( (unsigned __int16)((_WORD)v3 - 7) <= 0xCu || (_WORD)v3 == 1 )
    BUG();
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(char *)(v5 + 4) < 0 )
    LOBYTE(v3) = sub_145FA90();
  if ( (*(_BYTE *)(v5 + 5) & 1) == 0 || (LOBYTE(v3) = sub_1021600(*(_QWORD *)(a1 + 88), *(_DWORD *)a2), (_BYTE)v3) )
  {
    if ( a3 )
      return (char)v3;
  }
  else
  {
    LOBYTE(v3) = sub_145FEC0(a1, a2);
    if ( a3 )
      return (char)v3;
  }
  v3 = *(unsigned int **)(v5 + 16);
  v6 = *v3;
  v7 = v3 + 4;
  if ( v6 == 8 )
  {
    if ( *((_QWORD *)v3 + 2) != 0x5954494E49464E49LL )
      return (char)v3;
    v3 = *(unsigned int **)(a1 + 56);
    if ( (*((_BYTE *)v3 + 46) & 1) == 0 )
      return (char)v3;
    LOBYTE(v3) = sub_145CEF0(a1, a2, 0, v7);
    v8 = *(unsigned int **)(v5 + 16);
    v6 = *v8;
    v7 = v8 + 4;
  }
  if ( v6 == 3 && *(_WORD *)v7 == 16718 && *((_BYTE *)v7 + 2) == 78 )
  {
    v3 = *(unsigned int **)(a1 + 56);
    if ( *((char *)v3 + 45) < 0 )
      LOBYTE(v3) = sub_145CEF0(a1, a2, 1, v7);
  }
  return (char)v3;
}
