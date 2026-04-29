__int64 __fastcall sub_12A80(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  char v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  __int16 v12; // ax
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 864);
  v13[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(v1 + 1);
  if ( !v2 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v4 != sub_110E0 )
  {
    v5 = v4(a1, a1 + 56, v1);
LABEL_11:
    if ( !v5 )
      return 0;
    goto LABEL_12;
  }
  if ( v2 != *(_BYTE *)(a1 + 57) )
    return 0;
  if ( v2 != 99 )
  {
    if ( v2 == 100 )
    {
      v5 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v1 + 8);
    }
    else
    {
      if ( v2 != 1 )
        return 0;
      v5 = *(_WORD *)(a1 + 62) == *(_WORD *)(v1 + 6);
    }
    goto LABEL_11;
  }
LABEL_12:
  v6 = *(_BYTE *)(v1 + 5);
  v7 = *(_BYTE *)(a1 + 61);
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_21;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || *(_BYTE *)(a1 + 8) && v7 == 2 )
  {
    goto LABEL_21;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v9 == sub_11140 )
    return 0;
  v10 = v9(a1, a1 + 56);
  v11 = v8 || v10 < v6;
  if ( v10 <= 0xF9u )
    v11 = v8 && v10 < v6;
  if ( v11 )
    return 0;
LABEL_21:
  v12 = *(_WORD *)(a1 + 40);
  if ( v12 == 304 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_QWORD *)(a1 + 104) + 1;
  }
  else
  {
    if ( v12 != 295 && v12 != 402
      || !(unsigned __int8)sub_12700(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(a1 + 102), 0, v13, 0, 1) )
    {
      return 0;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = LOWORD(v13[0]) + 1;
  }
  return 1;
}
