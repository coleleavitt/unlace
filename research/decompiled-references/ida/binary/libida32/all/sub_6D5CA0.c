unsigned __int64 __fastcall sub_6D5CA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // al
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 v5; // rbp
  bool v6; // cc
  char v7; // al
  unsigned __int8 v8; // al
  int v9; // ecx
  __int64 (*v10)(); // rdx
  unsigned __int8 v11; // al
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int128 v18; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 48);
  v18 = 0;
  v2 = *(_QWORD *)(v1 + 17448);
  v3 = 1;
  if ( *(_DWORD *)(v2 + 260) != 15 )
    v3 = 6;
  LOBYTE(v18) = v3;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL);
  if ( v4 == sub_6CE2F0 )
  {
    v5 = *(unsigned __int8 *)(v2 + 8);
    v6 = v5 <= 0x20;
    if ( v5 != 32 )
      goto LABEL_5;
LABEL_18:
    v7 = BYTE1(v18) | 3;
    goto LABEL_11;
  }
  v5 = v4(v2);
  v6 = v5 <= 0x20;
  if ( v5 == 32 )
    goto LABEL_18;
LABEL_5:
  if ( !v6 )
  {
    if ( v5 != 64 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  if ( v5 == 8 )
  {
LABEL_10:
    v7 = BYTE1(v18) | 1;
    goto LABEL_11;
  }
  if ( v5 != 16 )
    return v19 - __readfsqword(0x28u);
  v7 = BYTE1(v18) | 2;
LABEL_11:
  BYTE1(v18) = v7;
  v8 = v7 & 0xF;
  LOBYTE(v9) = 48;
  v10 = *(__int64 (**)())(*(_QWORD *)v2 + 752LL);
  if ( v10 == sub_6CE300
    || (v16 = ((__int64 (__fastcall *)(__int64, __int64 (*)(), __int64 (*)(), __int64))v10)(v2, sub_6CE300, v10, 48),
        LOBYTE(v9) = 16,
        v17 = v16,
        v8 = BYTE1(v18) & 0xF,
        (unsigned int)v17 > 0xE)
    || (v9 = dword_238F4C0[v17], (v9 & 0xFFFFFF0F) == 0) )
  {
    v11 = v9 | v8;
    v9 = 0;
    v12 = v11;
  }
  else
  {
    v12 = v8 | 0xC0;
  }
  HIDWORD(v18) = v9;
  v13 = *(unsigned __int8 *)(v2 + 14);
  v14 = *(unsigned __int8 *)(v2 + 10);
  BYTE5(v18) = 0;
  *(_DWORD *)((char *)&v18 + 1) = v12 | (((v13 >> 3) | (((v14 >> 3) | (v13 >> 3 << 8)) << 8)) << 8);
  BYTE6(v18) = *(_BYTE *)(v2 + 12) >> 3;
  BYTE7(v18) = *(_BYTE *)(v2 + 30) >> 3;
  BYTE8(v18) = *(_BYTE *)(v2 + 32) >> 3;
  BYTE9(v18) = *(_BYTE *)(v2 + 24) >> 3;
  setinf_buf(98, &v18, 16);
  if ( v5 > 0x1F )
  {
    setinf_flag(3, 2, 1);
    if ( v5 == 64 )
      setinf_flag(3, 4, 1);
  }
  return v19 - __readfsqword(0x28u);
}

