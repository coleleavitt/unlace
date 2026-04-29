__int64 __fastcall sub_3E4B0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // al
  bool v5; // r13
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  unsigned __int8 v7; // al
  bool v8; // dl
  bool v9; // cc
  bool v10; // al
  __int64 v11; // rdx
  _BOOL4 v12; // esi
  bool v13; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 92 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v3 = *(_BYTE *)(v2 + 5);
  v4 = *(_BYTE *)(a1 + 61);
  v5 = v3 <= 0xF9u;
  if ( v4 > 0xF9u )
  {
    if ( v4 >= v3 && v3 > 0xF9u )
      goto LABEL_15;
  }
  else if ( v4 >= v3 || v3 > 0xF9u || *(_BYTE *)(a1 + 8) && v4 == 2 )
  {
    goto LABEL_15;
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v6 == sub_313C0 )
    return 0;
  v7 = v6(a1, a1 + 56);
  v8 = v5 || v7 < v3;
  v9 = v7 <= 0xF9u;
  v10 = v7 < v3 && v5;
  if ( !v9 )
    v10 = v8;
  if ( v10 )
    return 0;
LABEL_15:
  result = sub_3DFA0(a1, (_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL), a1 + 96, &v13);
  if ( !(_BYTE)result )
    return 0;
  v11 = *(_QWORD *)(a1 + 376);
  v12 = v13;
  *(_QWORD *)(a1 + 944) = -1;
  *(_DWORD *)(a1 + 952) = -1;
  *(_QWORD *)(a1 + 912) = -1;
  *(_DWORD *)(a1 + 920) = -1;
  *(_QWORD *)(a1 + 928) = *(_QWORD *)(v11 + 8);
  *(_DWORD *)(a1 + 936) = 3 - v12;
  *(_DWORD *)v11 |= 0x404u;
  return result;
}
