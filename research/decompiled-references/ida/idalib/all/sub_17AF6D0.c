__int64 __fastcall sub_17AF6D0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // al
  __int64 result; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v23[168]; // [rsp+10h] [rbp-A8h] BYREF

  v5 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v22 = a3;
  if ( (*(_BYTE *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0
    || (v6 = sub_A71450(
               *(_QWORD *)(a1 + 248),
               v5 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v5 | (unsigned __int8)a3) & 7),
        v9 = v6 & 0xFFFFFFFFFFFFFFF0LL,
        v10 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL),
        v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL),
        (_BYTE)v11 == 7)
    || (v12 = v6 & 7, (v12 & 4) != 0)
    || (v14 = *(_QWORD *)(v9 + 8) & 4LL, (unsigned int)v14 | *(_QWORD *)(v9 + 8) & 2 | v12 & 2) )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a2, 0xD2Fu, 0);
    sub_1605D30((__int64)v23, &v22);
    sub_15F7200(v23);
    return 1;
  }
  else if ( (_BYTE)v11 == 48
         && (v15 = (char *)sub_F63240(v10, v11, v14, v9, v7, v8), v15[28] >= 0)
         && (v20 = sub_B7E900((__int64)v15, v11, v16, v17, v18, v19)) != 0 )
  {
LABEL_10:
    result = sub_17AF6D0(a1, a2, *(_QWORD *)(v20 + 48));
    if ( !(_BYTE)result )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v20 = v21;
        if ( !v21 )
          return 0;
        if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_10;
      }
    }
  }
  else
  {
    return 0;
  }
  return result;
}
