__int64 __fastcall sub_C1B0(__int64 a1)
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
  __int64 v12; // rcx
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 1 || *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 96,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v3 = *(_BYTE *)(v2 + 5);
  v4 = *(_BYTE *)(a1 + 101);
  v5 = v3 <= 0xF9u;
  if ( v4 <= 0xF9u )
  {
    if ( v3 > 0xF9u || v4 >= v3 || *(_BYTE *)(a1 + 8) && v4 == 2 )
      goto LABEL_14;
  }
  else if ( v3 > 0xF9u && v4 >= v3 )
  {
    goto LABEL_14;
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v6 == sub_8490 )
    return 0;
  v7 = v6(a1, a1 + 96);
  v8 = v5 || v7 < v3;
  v9 = v7 <= 0xF9u;
  v10 = v5 && v7 < v3;
  if ( !v9 )
    v10 = v8;
  if ( v10 )
    return 0;
LABEL_14:
  result = sub_C080(
             *(_QWORD *)(a1 + 888),
             (char *)v13,
             (__int64 *)(a1 + 904),
             (const void *)(a1 + 16),
             *(unsigned __int16 *)(a1 + 62));
  if ( !(_BYTE)result )
    return 0;
  v11 = *(_QWORD *)(a1 + 376);
  v12 = v13[0];
  *(_DWORD *)v11 |= 0x200u;
  *(_QWORD *)(v11 + 56) = v12;
  return result;
}
