unsigned __int64 __fastcall sub_183C660(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9

  result = sub_B8E970(a2 + 64);
  if ( result )
  {
    v5 = result;
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 35 > 3 )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v5 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v6 = sub_B7D580(v5, 1, v3, v4);
      if ( !v6 )
        v6 = v5;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 32LL))(v6) + 82) & 0x40) != 0
        || (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 32LL))(v6) + 83) & 2) != 0 )
      {
        v9 = sub_17A47F0(a1, v5, 1u, v4, v7, v8);
        if ( v9 )
          sub_B8CC60(v5, (__int64)v9, v3, v4, v10, v11);
      }
      while ( 1 )
      {
        result = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v5 = result;
        if ( !result )
          break;
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
