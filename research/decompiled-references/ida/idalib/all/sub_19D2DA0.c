__int64 __fastcall sub_19D2DA0(__int64 *a1, __int64 a2, unsigned __int64 *a3, int a4)
{
  _QWORD *v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  __int16 v10; // ax
  unsigned __int8 v11; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v19; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-F0h] BYREF
  void *v21; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 *v22; // [rsp+28h] [rbp-E0h]
  _BYTE v23[16]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+48h] [rbp-C0h]
  void **v26; // [rsp+50h] [rbp-B8h]

  v6 = (_QWORD *)sub_168B6C0((__int64)a1);
  v19 = *a3;
  v7 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v7 + 17) & 4) == 0 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v7 + 16) - 2) <= 4u )
    {
LABEL_7:
      v23[0] = 0;
      v21 = v23;
      v22 = nullptr;
      v20 = 0;
      sub_AADCB0(v6, v19, &v21, 0, (unsigned __int64 *)&v20);
      if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_168B9F0((__int64)&v24, a1, a2, 0x1B7Bu, 0);
        v13 = sub_1605D30((__int64)&v24, (__int64 *)&v19);
        sub_1605D30(v13, &v20);
        sub_15F7200(&v24);
      }
      v8 = sub_A71230((__int64)v6, v6[2331], (int)v22);
      if ( v21 != v23 )
        operator delete(v21);
      goto LABEL_3;
    }
    v14 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(unsigned __int8 *)(v14 + 16);
    if ( (unsigned __int8)(v15 - 2) <= 4u )
    {
      if ( sub_F63050(v7, a2, v15, (unsigned int)(v15 - 2)) )
        goto LABEL_7;
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v15) = *(_BYTE *)(v14 + 16);
    }
    if ( (_BYTE)v15 != 13 || ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      v16 = (void *)*a3;
      v17 = *a1;
      v25 = 3969;
      v21 = v16;
      v22 = a3 + 1;
      v26 = &v21;
      v24 = off_2BC6FE0;
      if ( (unsigned __int8)sub_1E63C20(v17, (unsigned int)a2, v19, 1, &v24) )
        return 1;
    }
    goto LABEL_7;
  }
  v8 = v6[2384];
LABEL_3:
  v9 = sub_EEE9A0(32, v6, 8u);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x25;
  if ( unk_2CD7484 )
    sub_EE9B50(37);
  v10 = *(_WORD *)(v9 + 1);
  *(_QWORD *)(v9 + 8) = v8;
  *(_QWORD *)(v9 + 16) = a3;
  *(_DWORD *)(v9 + 24) = a2;
  *(_WORD *)(v9 + 1) = v10 & 0xF801 | 2;
  *(_DWORD *)(v9 + 28) = a4;
  v11 = sub_B639A0(v9);
  *(_BYTE *)(v9 + 1) = (v11 << 6) | *(_BYTE *)(v9 + 1) & 0x3F;
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 + 2) & 0xF8 | (v11 >> 2) & 7;
  return v9;
}
