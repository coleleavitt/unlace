void __fastcall sub_22023D0(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v3; // rax
  char v4; // dl
  void *v5; // r14
  void *v7; // rax
  char v8; // dl
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // r12
  _QWORD v13[4]; // [rsp+0h] [rbp-98h] BYREF
  void *v14; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  int v16; // [rsp+30h] [rbp-68h]
  char v17; // [rsp+34h] [rbp-64h]
  __int64 v18[2]; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+50h] [rbp-48h]
  char v20; // [rsp+54h] [rbp-44h]

  if ( a3 == &unk_26F7B20 )
  {
    v5 = (void *)*a2;
    v14 = &unk_26F7B40;
    sub_21F9170(&v14);
    v7 = (void *)*a2;
    v8 = *((_BYTE *)a2 + 20);
    *a2 = (__int64)&unk_26F7B40;
    v18[0] = (__int64)&unk_26F7B40;
    v14 = v7;
    v15 = a2[1];
    v16 = *((_DWORD *)a2 + 4);
    v17 = v8 & 0xF | v17 & 0xF0;
    sub_21F9170(v18);
    v9 = (__int64)v14;
    v14 = &unk_26F7B40;
    v18[0] = v9;
    v18[1] = v15;
    v19 = v16;
    v20 = v17 & 0xF | v20 & 0xF0;
    sub_22023D0(v13, v18, v5);
    sub_21F9170(v18);
    sub_21F9140(v18, (__int64)dword_26F7D20);
    sub_21FB9A0(v18, 0);
    *(_QWORD *)a1 = a3;
    v10 = (_QWORD *)operator new[](0x38u);
    *v10 = 2;
    v11 = v10 + 1;
    v12 = v10;
    sub_C16C20((__int64)(v10 + 1), v13);
    sub_C16C20((__int64)(v12 + 4), v18);
    *(_QWORD *)(a1 + 8) = v11;
    sub_9955A0(v18);
    sub_9955A0(v13);
    sub_21F9170(&v14);
  }
  else
  {
    *(_QWORD *)a1 = &unk_26F7B40;
    sub_21F9170((_QWORD *)a1);
    v3 = *a2;
    v4 = *((_BYTE *)a2 + 20);
    *a2 = (__int64)&unk_26F7B40;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = a2[1];
    *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
    *(_BYTE *)(a1 + 20) = v4 & 0xF | *(_BYTE *)(a1 + 20) & 0xF0;
  }
}
