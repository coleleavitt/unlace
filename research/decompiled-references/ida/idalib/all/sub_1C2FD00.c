bool __fastcall sub_1C2FD00(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int16 v5; // ax
  char v7; // al
  _WORD *v8; // rcx
  __int16 v9; // si
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  _WORD *v13; // rdx
  bool v14; // zf

  v4 = a1;
  v5 = *(_WORD *)a1 & 0x1FF;
  if ( v5 == 60 )
  {
    if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      return 0;
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_WORD *)v4 & 0x1FF;
  }
  if ( v5 == 4 )
  {
    v7 = *(_BYTE *)(v4 + 2) >> 3;
    if ( v7 != 1 )
    {
      if ( !v7 || v7 == 2 )
      {
        *a2 = 1;
        goto LABEL_11;
      }
      if ( v7 != 3 )
        return 0;
    }
    *a2 = 0;
LABEL_11:
    v8 = *(_WORD **)(v4 + 16);
    v9 = *v8 & 0x1FF;
    if ( v9 != 71 )
      v8 = nullptr;
    *a3 = v8;
    return v9 == 71;
  }
  if ( v5 != 91 )
    return 0;
  v10 = sub_BFBC70(*(_QWORD *)(v4 + 32));
  v11 = v10;
  if ( !v10 || (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 || !(unsigned int)sub_B77890(v10) )
    return 0;
  v12 = sub_B77890(v11);
  if ( v12 == 37 )
  {
    *a2 = 1;
  }
  else
  {
    if ( v12 != 38 )
      return 0;
    *a2 = 0;
  }
  v13 = *(_WORD **)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32);
  v14 = (*v13 & 0x1FF) == 71;
  if ( (*v13 & 0x1FF) != 0x47 )
    v13 = nullptr;
  *a3 = v13;
  return v14;
}
