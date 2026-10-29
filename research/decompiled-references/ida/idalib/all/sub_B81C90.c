__int64 __fastcall sub_B81C90(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  _DWORD *v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 7) != 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
  {
    return 0;
  }
  else
  {
    v3 = *(_DWORD **)(v2 + 16);
    v4 = 0;
    if ( *v3 == 4 && v3[4] == 1852399981 )
    {
      v6 = sub_B8C5D0(a1);
      if ( *(char *)(v6 + 14) >= 0 && (*(_BYTE *)(v6 + 89) & 1) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 16);
        v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v7 & 4) != 0 )
          v8 = (_QWORD *)*v8;
        v4 = 1;
        if ( (*(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F) != 0 )
          return sub_B81BF0(a1);
      }
    }
  }
  return v4;
}
