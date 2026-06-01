__int64 __fastcall sub_834370(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  int *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rbx
  int *v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  void *v12; // rbx
  void *v13; // rbx
  void *v14; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  void *v22; // [rsp+8h] [rbp-C0h]
  _QWORD v23[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v30[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a1 + 472) && *(_BYTE *)(a1 + 480) && (unsigned __int8)sub_1021D60() )
  {
    v16 = sub_1021D80(*(_QWORD *)(a1 + 472));
    v17 = sub_1021DB0(*(_QWORD *)(a1 + 472));
    v18 = sub_8333F0((_QWORD *)a1, a3, v17);
    v19 = sub_1021DA0(*(_QWORD *)(a1 + 472));
    v20 = sub_8333F0((_QWORD *)a1, a2, v19);
    return sub_17B44D0(v16, v20, v18);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 496);
    v5 = (unsigned int)sub_FF9FB0(v4, a3);
    v27[0] = 0;
    v6 = (int *)(*(_QWORD *)(sub_FF9B20(v4) + 48) + (v5 << 6));
    v27[1] = 0;
    v28[0] = 1;
    v28[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v27, v6);
    v29[0] = 0;
    v29[1] = 0;
    v30[0] = 1;
    v30[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v29, v6 + 8);
    v7 = *(_QWORD *)(a1 + 496);
    v8 = (unsigned int)sub_FF9FB0(v7, a2);
    v9 = (int *)(*(_QWORD *)(sub_FF9B20(v7) + 48) + (v8 << 6));
    v23[0] = 0;
    v23[1] = 0;
    v24[0] = 1;
    v24[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v23, v9);
    v25[0] = 0;
    v25[1] = 0;
    v26[0] = 1;
    v26[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v25, v9 + 8);
    LOBYTE(v10) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v27, (__int64)v23);
    v11 = v10;
    if ( (_BYTE)v10 )
    {
      LOBYTE(v21) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v29, (__int64)v25);
      v11 = v21;
    }
    v22 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v25);
    sub_182CBA0(v22, v26);
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v23);
    sub_182CBA0(v12, v24);
    v13 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v29);
    sub_182CBA0(v13, v30);
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v27);
    sub_182CBA0(v14, v28);
    return v11;
  }
}

