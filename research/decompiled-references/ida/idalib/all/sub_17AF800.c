__int64 __fastcall sub_17AF800(__int64 a1, __int64 *a2, __m128 a3)
{
  unsigned int v3; // r12d
  char v4; // dl
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebp
  bool v14; // [rsp+Fh] [rbp-C9h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v17[23]; // [rsp+20h] [rbp-B8h] BYREF

  v17[0] = *a2;
  v17[1] = (__int64)(a2 + 1);
  v3 = sub_F6CCB0(v17, a3);
  v15 = *a2;
  v4 = v15;
  v5 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v6 + 17) & 4) != 0 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7 )
  {
    sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), v3, 0x1987u, 0);
    sub_15F7200(v17);
    v4 = v15;
    v5 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v7 = *(_QWORD *)(v5 + 8);
  LOBYTE(v8) = 0;
  if ( (v7 & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  v16 = 0;
  v9 = v8 | (v4 | v7) & 7;
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 4) == 0 )
      LODWORD(v16) = 1;
    BYTE4(v16) = 1;
  }
  else
  {
    if ( (v9 & 4) == 0 )
      goto LABEL_11;
    LODWORD(v16) = 2;
    BYTE4(v16) = 1;
  }
  sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), v3, 0x1A43u, 0);
  sub_1588370((__int64)v17, (unsigned int *)&v16);
  sub_15F7200(v17);
LABEL_11:
  v15 = sub_F64D20((__int64 *)&v15);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 13 || (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
  {
    sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), v3, 0xE8Fu, 0);
    v11 = sub_1605D30((__int64)v17, (__int64 *)&v15);
    v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL) == 10;
    v12 = *(unsigned __int8 *)(sub_1588420(v11, (unsigned __int8 *)&v14) + 120);
    sub_15F7200(v17);
    return v12;
  }
  return 0;
}
