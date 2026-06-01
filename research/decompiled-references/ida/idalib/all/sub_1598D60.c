__int64 __fastcall sub_1598D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rdx
  _WORD *v11; // rcx
  _WORD *v12; // rax
  _WORD **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  char v18; // dl

  if ( !a1 || (*(_BYTE *)(a1 + 28) & 0x7Fu) - 60 > 1 || (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v10 = (_WORD *)*v7;
  v11 = (_WORD *)(*v7 + 8LL * *((unsigned int *)v7 + 2));
  if ( *v7 < (unsigned __int64)v11 )
  {
    v12 = (_WORD *)*v7;
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 323 )
    {
      v12 += 4;
      if ( v11 == v12 )
        return 0;
    }
    if ( v11 == v12 )
      return 0;
    goto LABEL_18;
  }
  if ( v10 == v11 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 323 )
  {
LABEL_18:
    v14 = *(_QWORD *)(a1 + 168);
    if ( *(_DWORD *)v14 )
    {
      v15 = *(_DWORD *)(v14 + 8) & 0x7FFFFFFF;
      if ( (_DWORD)v15 == 1 )
      {
        v16 = *(_QWORD *)(v14 + 16);
        result = sub_1598920(v16, a2, v15, (__int64)v11, v8, v9);
        if ( (_BYTE)result )
          return 1;
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v18 = *(_BYTE *)(v17 + 16);
        if ( v18 == 42 || v18 == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1E8 )
          return 1;
        return result;
      }
    }
    return 0;
  }
  v13 = (_WORD **)(v11 + 4);
  while ( v10 != (_WORD *)v13 )
  {
    v11 = *v13++;
    if ( v11[18] == 323 )
      goto LABEL_18;
  }
  return 0;
}
