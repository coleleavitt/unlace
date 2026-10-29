__int64 __fastcall sub_19ABE20(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+14h] [rbp-C4h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+20h] [rbp-B8h] BYREF
  int v26; // [rsp+28h] [rbp-B0h]
  __int64 *v27; // [rsp+30h] [rbp-A8h]

  v22 = a2;
  v21 = a4;
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v6 - 25) <= 1 )
  {
    sub_168B9F0((__int64)&v25, a1 + 1, a3, 0xCE4u, 0);
    v7 = sub_1605D30((__int64)&v25, &v22);
    LODWORD(v24) = 0;
LABEL_3:
    v8 = sub_1587D10(v7, (int *)&v24);
    v9 = *(unsigned __int8 *)(sub_15884C0(v8, &v21) + 120);
    sub_15F7200(&v25);
    return v9;
  }
  if ( (unsigned int)(v6 - 43) <= 1 )
  {
    sub_168B9F0((__int64)&v25, a1 + 1, a3, 0xCE4u, 0);
    v7 = sub_1605D30((__int64)&v25, &v22);
    LODWORD(v24) = 1;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(v5 + 17) & 4) == 0 )
  {
    v27 = &v21;
    v26 = 4266;
    v25 = off_2BC6FB8;
    if ( (unsigned __int8)sub_1E63C20(a1, a3, a2, 0, &v25) )
      return 1;
  }
  v26 = 2984;
  v25 = off_2BC6500;
  v9 = sub_1866EA0(a1, a3, v22, (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v25);
  if ( (_BYTE)v9 )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    sub_168B9F0((__int64)&v25, a1 + 1, a3, 0x1539u, 0);
    v18 = &v22;
    goto LABEL_16;
  }
  v11 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
  v12 = a1[29];
  if ( (v11 & 8) == 0
    || !((*(_DWORD *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v11 & 7)) >> 9)
    || (*(_BYTE *)(v12 + 52) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v12 + 107) & 4) == 0 )
      return v9;
    v13 = sub_A72040((_QWORD *)a1[31], v22);
    if ( !v13 )
      return v9;
    v14 = v13;
    v24 = sub_A71600(a1[31], v13);
    v17 = *(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v17 & 8) != 0 )
    {
      v17 &= 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_WORD *)(v17 + 24) & 0x1C0) != 0 )
        return v9;
    }
    if ( !sub_F6ACC0(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), v14, v17, v15, v16) )
      return v9;
    sub_168B9F0((__int64)&v25, a1 + 1, a3, 0xBDAu, 0);
    v18 = (__int64 *)&v24;
LABEL_16:
    v9 = *(unsigned __int8 *)(sub_1605D30((__int64)&v25, v18) + 120);
    sub_15F7200(&v25);
    return v9;
  }
  sub_168B9F0((__int64)&v25, a1 + 1, a3, 0xB93u, 0);
  v24 = sub_6D5440(&v22);
  v19 = sub_162B6D0((__int64)&v25, (__int64 *)&v24);
  v20 = 0;
  if ( (*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v20 = (*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
         | *(_DWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 7u) >> 9;
    if ( v20 )
      v20 -= 25;
  }
  v23 = v20;
  v9 = *(unsigned __int8 *)(sub_16CF160(v19, &v23) + 120);
  sub_15F7200(&v25);
  return v9;
}
