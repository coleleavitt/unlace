__int64 __fastcall sub_A88370(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  void *v15; // r15
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rbp
  int *v19; // rbp
  unsigned int v20; // eax
  unsigned int v21; // r15d
  void *v22; // rbp
  void *v23; // rbp
  void *v24; // rbx
  unsigned int v25; // eax
  void *v26; // [rsp+8h] [rbp-C0h]
  _QWORD v27[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v28[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v34[9]; // [rsp+80h] [rbp-48h] BYREF

  v5 = a1[41];
  if ( v5 && (unsigned __int8)sub_1021D60(v5, a2) )
  {
    v6 = sub_1021D80(a1[41]);
    v7 = sub_1021DB0(a1[41]);
    v8 = sub_A87B40(a1, a3, v7);
    v9 = sub_1021DA0(a1[41]);
    v10 = sub_A87B40(a1, (unsigned int)a2, v9);
    return sub_17B44D0(v6, v10, v8);
  }
  v12 = a1[63];
  v13 = 0x3FFFFFFFC0LL;
  if ( a3 != -1 )
    v13 = (unsigned __int64)(unsigned int)sub_FF9FB0(a1[63], a3) << 6;
  v31[0] = 0;
  v31[1] = 0;
  v14 = *(_QWORD *)(sub_FF9B20(v12) + 48) + v13;
  v32[0] = 1;
  v15 = qword_1C7F2C0;
  v32[1] = 0;
  if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v31, v14);
    if ( (*(_BYTE *)(v14 + 20) & 1) == 0 )
      goto LABEL_8;
LABEL_15:
    sub_182C690(v15, v32, v14 + 16);
    goto LABEL_9;
  }
  LODWORD(v31[0]) = *(_DWORD *)v14;
  if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
    goto LABEL_15;
LABEL_8:
  v16 = *(_DWORD *)(v14 + 16);
  BYTE4(v32[0]) &= ~1u;
  LODWORD(v32[0]) = v16;
LABEL_9:
  v33[0] = 0;
  v33[1] = 0;
  v34[0] = 1;
  v34[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, (int *)(v14 + 32));
  v17 = a1[63];
  if ( (_DWORD)a2 == -1 )
    v18 = 0xFFFFFFFFLL;
  else
    v18 = (unsigned int)sub_FF9FB0(a1[63], (unsigned int)a2);
  v19 = (int *)(*(_QWORD *)(sub_FF9B20(v17) + 48) + (v18 << 6));
  v27[0] = 0;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v27, v19);
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v29, v19 + 8);
  LOBYTE(v20) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v31, (__int64)v27);
  v21 = v20;
  if ( (_BYTE)v20 )
  {
    LOBYTE(v25) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v33, (__int64)v29);
    v21 = v25;
  }
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v26, v30);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v22, v28);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v33);
  sub_182CBA0(v23, v34);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  sub_182CBA0(v24, v32);
  return v21;
}

