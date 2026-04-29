__int64 __fastcall sub_324A0(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebp
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 81) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v1 + 80);
  if ( !(_BYTE)v2 )
    return 0;
  v4 = *(_BYTE *)(v1 + 85);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 <= 0xF9u )
  {
    if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
      goto LABEL_11;
LABEL_18:
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v7 == sub_313C0 )
      return 0;
    v8 = v7(a1, a1 + 56);
    v9 = v6 || v8 < v4;
    if ( v8 <= 0xF9u )
      v9 = v6 && v8 < v4;
    if ( v9 )
      return 0;
    goto LABEL_11;
  }
  if ( v4 <= 0xF9u || v5 < v4 )
    goto LABEL_18;
LABEL_11:
  if ( *(_WORD *)(a1 + 40) == 106
    && *(_BYTE *)(a1 + 97) == 4
    && !*(_QWORD *)(a1 + 112)
    && *(_WORD *)(a1 + 102) == *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) )
  {
    **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
    return v2;
  }
  return 0;
}
