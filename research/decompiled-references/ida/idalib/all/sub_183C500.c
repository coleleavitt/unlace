__int64 __fastcall sub_183C500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r12
  unsigned __int8 v13; // al
  bool v15; // al
  unsigned __int8 v16; // al
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r12

  v6 = sub_B94670(a2 + 64, a3, a3, a4, a5, a6);
  if ( !v6 )
    return 0;
  v7 = v6;
  v8 = 0;
  while ( 1 )
  {
    v9 = v7;
    v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    LODWORD(v9) = (v9 >> 2) & 1;
    v11 = (unsigned int)v9;
    if ( (_DWORD)v9 )
    {
      if ( !v10 )
        return v8;
      v12 = *(_QWORD *)v10;
      v13 = *(_BYTE *)(*(_QWORD *)v10 + 28LL) & 0x7F;
      if ( (unsigned int)v13 - 49 > 2 && v13 != 32 )
        goto LABEL_7;
    }
    else
    {
      v16 = *(_BYTE *)(v10 + 28) & 0x7F;
      if ( (unsigned int)v16 - 49 > 2 && v16 != 32 )
        return v8;
      v12 = v10;
    }
    v15 = sub_B72A20(v12, *(_QWORD *)(a1 + 232));
    if ( v8 )
      break;
    if ( !v15 || !v11 )
      return v12;
    v8 = v12;
    if ( !v10 )
      return v8;
LABEL_7:
    v7 = *(_QWORD *)(v10 + 8);
    if ( !v7 )
      return v8;
  }
  if ( !v15 )
    return v8;
  v17 = (_QWORD *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
    v17 = (_QWORD *)*v17;
  v18 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v18 = (_QWORD *)*v18;
  v19 = 0;
  if ( v18 != v17 )
    return v8;
  return v19;
}
