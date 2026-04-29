__int64 __fastcall sub_3E8D0(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // r12
  unsigned int v3; // ebp
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  __int16 v11; // ax
  __int64 v12; // rdx
  _BOOL4 v13; // ecx
  bool v14; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 40);
  v15 = __readfsqword(0x28u);
  if ( (v1 & 0xFFF7) != 0x71 && (v1 & 0xFFFD) != 0x74 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v3 )
    return 0;
  v5 = *(_BYTE *)(v2 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_17;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_17;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_313C0 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  if ( v9 <= 0xF9u )
    v10 = v7 && v9 < v5;
  if ( v10 )
    return 0;
LABEL_17:
  v11 = *(_WORD *)(a1 + 40);
  if ( v11 == 121 || v11 == 116 )
  {
    if ( !(unsigned __int8)sub_3DFA0(a1, (_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL), a1 + 96, &v14) )
      return 0;
    v12 = *(_QWORD *)(a1 + 376);
    v13 = v14;
    *(_QWORD *)(a1 + 944) = -1;
    *(_DWORD *)(a1 + 952) = -1;
    *(_QWORD *)(a1 + 912) = -1;
    *(_DWORD *)(a1 + 920) = -1;
    *(_QWORD *)(a1 + 928) = *(_QWORD *)(v12 + 8);
    *(_DWORD *)(a1 + 936) = 3 - v13;
    *(_DWORD *)v12 = *(_DWORD *)v12 & 0xFFFFFBFB | 4;
    if ( *(_WORD *)(a1 + 40) == 116 )
      **(_DWORD **)(a1 + 376) |= 0x2000u;
    *(_BYTE *)(a1 + 516) = 1;
    *(_BYTE *)(a1 + 904) = 1;
  }
  else
  {
    if ( v11 != 118 && v11 != 113 )
      return 0;
    sub_3DDF0(a1, a1 + 96);
    **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
    if ( *(_WORD *)(a1 + 40) == 113 )
      **(_DWORD **)(a1 + 376) |= 0x2000u;
  }
  return v3;
}
