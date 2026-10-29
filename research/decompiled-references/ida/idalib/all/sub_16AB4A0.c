void __fastcall sub_16AB4A0(__int64 a1, _QWORD *a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  char v8; // cl
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23[2]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v27[168]; // [rsp+30h] [rbp-A8h] BYREF

  v23[0] = a3;
  v4 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v24 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = v24 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL];
  v7 = v4 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v4 | (unsigned __int8)a3) & 7;
  v8 = v6 | v24;
  v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v9 | v8 & 7;
  if ( v10 != v7 )
  {
    v12 = *(_QWORD *)v5;
    if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) == 42
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
      && (v22 = sub_F63050(v12, a2, v7, v10)) != 0
      && ((v12 = v22, *(_BYTE *)(v22 + 16) == 42)
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
       && (v12 = sub_F63050(v22, a2, v7, v10)) != 0) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1EB )
      {
        v25 = v23[0];
        v14 = *(_QWORD *)(v23[0] & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v14 + 16) == 42 )
          v25 = sub_F68450(v14, (__int64)a2, v7, v10, v9);
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_6D5440(&v25) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v15 + 16) != 13 || ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          v19 = sub_C00A40(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)a2, v16, v17, v18);
          sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), v19, 0x1A04u, 0);
          v20 = sub_1605D30((__int64)v27, &v24);
          v21 = sub_1605D30(v20, v23);
          v26 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)v23, a4);
          sub_1587DB0(v21, &v26);
          sub_15F7200(v27);
        }
      }
    }
  }
}
