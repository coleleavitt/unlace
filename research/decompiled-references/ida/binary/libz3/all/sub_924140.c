_QWORD *__fastcall sub_924140(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rax
  int *v9; // r15
  int v10; // eax
  char v11[32]; // [rsp+0h] [rbp-B8h] BYREF
  int v12; // [rsp+20h] [rbp-98h] BYREF
  char v13; // [rsp+24h] [rbp-94h]
  __int64 v14; // [rsp+28h] [rbp-90h]
  int v15; // [rsp+30h] [rbp-88h] BYREF
  char v16; // [rsp+34h] [rbp-84h]
  __int64 v17; // [rsp+38h] [rbp-80h]
  int v18; // [rsp+40h] [rbp-78h] BYREF
  char v19; // [rsp+44h] [rbp-74h]
  __int64 v20; // [rsp+48h] [rbp-70h]
  int v21; // [rsp+50h] [rbp-68h] BYREF
  char v22; // [rsp+54h] [rbp-64h]
  __int64 v23; // [rsp+58h] [rbp-60h]
  int v24[22]; // [rsp+60h] [rbp-58h] BYREF

  v2 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 280);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v2;
  if ( (int)v2 < v4 )
  {
    v9 = (int *)(v3 + 4LL * v2);
    v19 &= 0xFCu;
    v20 = 0;
    v22 &= 0xFCu;
    v21 = 1;
    v23 = 0;
    v18 = dword_1C7F370;
    sub_182CBA0(qword_1C7F2C0, &v21);
    v22 &= ~1u;
    v21 = 1;
    sub_3EBE30((__int64)v24, a1 + 336, (__int64)&v18);
    v10 = *v9;
    v14 = 0;
    v13 &= 0xFCu;
    v16 &= 0xFCu;
    v15 = 1;
    v17 = 0;
    v12 = v10;
    sub_182CBA0(qword_1C7F2C0, &v15);
    v16 &= ~1u;
    v15 = 1;
    sub_27B340((__int64)v11, (__int64)&v12, v24);
    sub_25A130((char *)&v12);
    sub_25A130((char *)v24);
    sub_25A130((char *)&v18);
    v6 = (_QWORD *)sub_186B270(0x10u);
    v6[1] = sub_1343270(*(_QWORD *)(a1 + 328), v11, *(unsigned __int8 *)(*(_QWORD *)(a1 + 200) + v5));
    *v6 = off_1C559A8;
    sub_25A130(v11);
  }
  else
  {
    v6 = (_QWORD *)sub_186B270(0x10u);
    v7 = sub_1343270(*(_QWORD *)(a1 + 328), &qword_1C7F2A0, *(unsigned __int8 *)(*(_QWORD *)(a1 + 200) + v5));
    *v6 = off_1C559A8;
    v6[1] = v7;
  }
  return v6;
}

