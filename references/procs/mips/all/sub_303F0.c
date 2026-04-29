__int64 __fastcall sub_303F0(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebp
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  char v7; // al
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  char v15; // cl

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v4 = *(_BYTE *)(v1 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_11;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_11;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_288C0 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v6 || v10 < v4;
  if ( v10 <= 0xF9u )
    v11 = v6 && v10 < v4;
  if ( v11 )
    return 0;
LABEL_11:
  if ( *(_WORD *)(a1 + 40) != 31 )
    return 0;
  v7 = *(_BYTE *)(a1 + 97);
  if ( v7 == 1 )
  {
    if ( *(_BYTE *)(a1 + 137) != 5 )
      return 0;
    v12 = *(_QWORD *)(a1 + 144);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 24LL) != 8 )
      v12 = (int)v12;
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -v12;
    v13 = *(unsigned __int16 *)(a1 + 102);
    if ( (_WORD)v13 != *(_WORD *)(a1 + 62) )
    {
      v14 = *(_QWORD *)(a1 + 376);
      v15 = *(_BYTE *)(a1 + 101);
      *(_DWORD *)(v14 + 64) = v13;
      *(_BYTE *)(v14 + 68) = v15;
    }
  }
  else
  {
    if ( v7 != 5 || *(_BYTE *)(a1 + 137) )
      return 0;
    v8 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 24LL) != 8 )
      v8 = (int)v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = -v8;
  }
  return v2;
}
