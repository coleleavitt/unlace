__int64 __fastcall sub_3DEA0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // r12d
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v3 )
    return 0;
  v4 = *(_BYTE *)(v1 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_10;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_10;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_313C0 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  if ( v8 <= 0xF9u )
    v9 = v8 < v4 && v6;
  if ( v9 )
    return 0;
LABEL_10:
  if ( *(_WORD *)(a1 + 40) != 118 )
    return 0;
  sub_3DDF0(a1, a1 + 96);
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  return v3;
}
