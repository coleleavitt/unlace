void __fastcall sub_1E6CFE0(__int64 *a1, __int64 a2, __int64 *a3, double a4)
{
  __int64 v6; // rdi
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbp
  unsigned int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  bool v25; // cc
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned int v29; // [rsp+8h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+Ch] [rbp-CCh] BYREF
  void *v31; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+18h] [rbp-C0h]
  char v33; // [rsp+1Ch] [rbp-BCh]
  _BYTE v34[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)(a3[31] + 17448);
  v7 = *(__int64 (**)())(*(_QWORD *)v6 + 584LL);
  if ( v7 == sub_A55EE0 || !((unsigned __int8 (__fastcall *)(__int64, char *, __int64))v7)(v6, "sve", 3) )
  {
    sub_168B9F0((__int64)v34, a3 + 1, *(_DWORD *)(a2 + 24), 0xC9Eu, 0);
    v8 = sub_15DD120((__int64)v34, a2);
    if ( *(_BYTE *)(v8 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v8 + 32), (__int64)"'sve'", 1u);
    }
    else if ( *(_BYTE *)(v8 + 132) )
    {
      sub_1E63E10(v8, (__int64)"'sve'");
    }
    goto LABEL_20;
  }
  v12 = a3[29];
  v13 = *(_DWORD *)(v12 + 176);
  if ( !v13 || v13 != *(_DWORD *)(v12 + 180) )
  {
    sub_168B9F0((__int64)v34, a3 + 1, *(_DWORD *)(a2 + 24), 0xC59u, 0);
    sub_15DD120((__int64)v34, a2);
    sub_15F7200(v34);
    *(_BYTE *)(a2 + 58) |= 1u;
    return;
  }
  if ( *(_WORD *)(a2 + 56) != 1 )
  {
    sub_168B9F0((__int64)v34, a3 + 1, *(_DWORD *)(a2 + 24), 0xCAAu, 0);
    v17 = sub_15DD120((__int64)v34, a2);
    LODWORD(v31) = 1;
    sub_1587D10(v17, (int *)&v31);
LABEL_20:
    sub_15F7200(v34);
    *(_BYTE *)(a2 + 58) |= 1u;
    return;
  }
  v33 = 1;
  v32 = 32;
  v31 = nullptr;
  if ( !(unsigned __int8)sub_1E6CDD0((__int64)a3, a2, (__int64)&v31, a4, v9, v10, v11) )
    goto LABEL_14;
  LODWORD(v14) = (_DWORD)v31;
  if ( v32 > 0x40 )
    v14 = *(_QWORD *)v31;
  v15 = a3[29];
  v29 = v14;
  if ( (_DWORD)v14 != *(_DWORD *)(v15 + 176) << 7 )
  {
    sub_168B9F0((__int64)v34, a3 + 1, *(_DWORD *)(a2 + 24), 0xC5Eu, 0);
    v16 = sub_1588370((__int64)v34, &v29);
    v30 = *(_DWORD *)(a3[29] + 176) << 7;
    sub_16CF160(v16, &v30);
    sub_15F7200(v34);
    *(_BYTE *)(a2 + 58) |= 1u;
    goto LABEL_14;
  }
  if ( !sub_F58380(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_168B9F0((__int64)v34, a3 + 1, *(_DWORD *)(a2 + 24), 0xC78u, 0);
    v26 = sub_15DD120((__int64)v34, a2);
    sub_1605D30(v26, a1);
    sub_15F7200(v34);
    *(_BYTE *)(a2 + 58) |= 1u;
LABEL_14:
    if ( v32 <= 0x40 )
      return;
    goto LABEL_15;
  }
  v18 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = sub_F583D0(v18, (_QWORD *)a3[31]);
  v21 = sub_A97D20(a3[31], *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
  if ( ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x64 )
  {
    v27 = sub_A97D20(a3[31], *(_QWORD *)(*(_QWORD *)(a3[31] + 18648) & 0xFFFFFFFFFFFFFFF0LL));
    v28 = sub_A97D20(a3[31], *(_QWORD *)(*(_QWORD *)(a3[31] + 18648) & 0xFFFFFFFFFFFFFFF0LL));
    v23 = 7;
    v22 = v29 / (unsigned __int64)(v28 * v27);
  }
  else
  {
    LODWORD(v22) = v29 / v21;
    v23 = 6;
  }
  v29 = v22;
  v24 = sub_A70300(a3[31], v20, v22, v23);
  v25 = v32 <= 0x40;
  *a1 = v24;
  if ( !v25 )
  {
LABEL_15:
    if ( v31 )
      operator delete[](v31);
  }
}
