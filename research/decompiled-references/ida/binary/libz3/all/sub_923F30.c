_QWORD *__fastcall sub_923F30(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rax
  int *v9; // r15
  int v10; // eax
  int v11; // eax
  char v12[32]; // [rsp+0h] [rbp-B8h] BYREF
  int v13; // [rsp+20h] [rbp-98h] BYREF
  char v14; // [rsp+24h] [rbp-94h]
  __int64 v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+30h] [rbp-88h] BYREF
  char v17; // [rsp+34h] [rbp-84h]
  __int64 v18; // [rsp+38h] [rbp-80h]
  int v19; // [rsp+40h] [rbp-78h] BYREF
  char v20; // [rsp+44h] [rbp-74h]
  __int64 v21; // [rsp+48h] [rbp-70h]
  int v22; // [rsp+50h] [rbp-68h] BYREF
  char v23; // [rsp+54h] [rbp-64h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  int v25[22]; // [rsp+60h] [rbp-58h] BYREF

  v2 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 288);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v2;
  if ( (int)v2 < v4 )
  {
    v9 = (int *)(v3 + 8LL * v2);
    v10 = v9[1];
    v20 &= 0xFCu;
    v23 &= 0xFCu;
    v21 = 0;
    v22 = 1;
    v24 = 0;
    v19 = v10;
    sub_182CBA0(qword_1C7F2C0, &v22);
    v23 &= ~1u;
    v22 = 1;
    sub_3EBE30((__int64)v25, a1 + 344, (__int64)&v19);
    v11 = *v9;
    v15 = 0;
    v14 &= 0xFCu;
    v17 &= 0xFCu;
    v16 = 1;
    v18 = 0;
    v13 = v11;
    sub_182CBA0(qword_1C7F2C0, &v16);
    v17 &= ~1u;
    v16 = 1;
    sub_27B340((__int64)v12, (__int64)&v13, v25);
    sub_25A130((char *)&v13);
    sub_25A130((char *)v25);
    sub_25A130((char *)&v19);
    v6 = (_QWORD *)sub_186B270(0x10u);
    v6[1] = sub_1343270(*(_QWORD *)(a1 + 336), v12, *(unsigned __int8 *)(*(_QWORD *)(a1 + 208) + v5));
    *v6 = off_1C559A8;
    sub_25A130(v12);
  }
  else
  {
    v6 = (_QWORD *)sub_186B270(0x10u);
    v7 = sub_1343270(*(_QWORD *)(a1 + 336), &qword_1C7F2A0, *(unsigned __int8 *)(*(_QWORD *)(a1 + 208) + v5));
    *v6 = off_1C559A8;
    v6[1] = v7;
  }
  return v6;
}

