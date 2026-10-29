__int64 __fastcall sub_9B1FA0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // r15
  int *v5; // rax
  _QWORD *v6; // r14
  _BOOL4 v7; // r13d
  _QWORD *v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  unsigned int v13; // r13d
  int v14; // [rsp+8h] [rbp-E8h]
  unsigned int v15; // [rsp+14h] [rbp-DCh]
  void *v16; // [rsp+18h] [rbp-D8h]
  int *v17; // [rsp+20h] [rbp-D0h]
  _BOOL4 v18; // [rsp+20h] [rbp-D0h]
  int *v19; // [rsp+30h] [rbp-C0h]
  int v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21; // [rsp+44h] [rbp-ACh]
  __int64 v22; // [rsp+48h] [rbp-A8h]
  int v23; // [rsp+50h] [rbp-A0h]
  char v24; // [rsp+54h] [rbp-9Ch]
  __int64 v25; // [rsp+58h] [rbp-98h]
  int v26; // [rsp+60h] [rbp-90h] BYREF
  char v27; // [rsp+64h] [rbp-8Ch]
  __int64 v28; // [rsp+68h] [rbp-88h]
  int v29; // [rsp+70h] [rbp-80h]
  char v30; // [rsp+74h] [rbp-7Ch]
  __int64 v31; // [rsp+78h] [rbp-78h]
  int v32; // [rsp+80h] [rbp-70h] BYREF
  char v33; // [rsp+84h] [rbp-6Ch]
  __int64 v34; // [rsp+88h] [rbp-68h]
  int v35; // [rsp+90h] [rbp-60h]
  char v36; // [rsp+94h] [rbp-5Ch]
  __int64 v37; // [rsp+98h] [rbp-58h]
  unsigned int v38; // [rsp+A0h] [rbp-50h] BYREF
  char v39; // [rsp+A4h] [rbp-4Ch]
  __int64 v40; // [rsp+A8h] [rbp-48h]
  int v41; // [rsp+B0h] [rbp-40h]
  char v42; // [rsp+B4h] [rbp-3Ch]
  __int64 v43; // [rsp+B8h] [rbp-38h]

  v4 = *(_QWORD *)(a2[77] + 8LL * a3);
  v5 = *(int **)(a2[78] + 8LL * a3);
  v19 = v5;
  if ( !v4 )
  {
    if ( !v5 )
    {
      sub_B28750(a1);
      return a1;
    }
    v12 = (_QWORD *)sub_180C100(a2[96], 16);
    v12[1] = v19;
    *v12 = 0x80000000LL;
    v39 &= 0xFCu;
    v42 &= 0xFCu;
    v38 = 0;
    v40 = 0;
    v41 = 1;
    v43 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v38, &qword_1C7F2A0);
    v32 = 0;
    v33 &= 0xFCu;
    v36 &= 0xFCu;
    v13 = v38 >> 31;
    v34 = 0;
    v35 = 1;
    v37 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v32, v19 + 4);
    sub_B28C00(a1, a2 + 89, &v32, v13, 0, v12);
    goto LABEL_4;
  }
  if ( !v5 )
  {
    v6 = (_QWORD *)sub_180C100(a2[96], 16);
    *v6 = 0x80000000LL;
    v6[1] = v4;
    v39 &= 0xFCu;
    v42 &= 0xFCu;
    v38 = 0;
    v40 = 0;
    v41 = 1;
    v43 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v38, &qword_1C7F2A0);
    v32 = 0;
    v34 = 0;
    v7 = (int)v38 > 0;
    v35 = 1;
    v33 &= 0xFCu;
    v36 &= 0xFCu;
    v37 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v32, (int *)(v4 + 16));
    sub_B28C00(a1, a2 + 89, &v32, v7, 1, v6);
LABEL_4:
    sub_25A130((char *)&v32);
    sub_25A130((char *)&v38);
    return a1;
  }
  v17 = v5 + 4;
  if ( sub_3ED680((__int64)qword_1C7F2C0, v4 + 16, (__int64)(v5 + 4)) )
  {
    v38 = 0;
    v39 &= 0xFCu;
    v42 &= 0xFCu;
    v40 = 0;
    v41 = 1;
    v43 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v38, &qword_1C7F2A0);
    if ( v38 )
    {
      sub_25A130((char *)&v38);
      sub_B28750(a1);
      return a1;
    }
    sub_25A130((char *)&v38);
  }
  v9 = (_QWORD *)sub_180C100(a2[96], 16);
  *v9 = 0x80000000LL;
  v10 = qword_1C7F2C0;
  v9[1] = v19;
  v16 = v9;
  v39 &= 0xFCu;
  v42 &= 0xFCu;
  v38 = 0;
  v40 = 0;
  v41 = 1;
  v43 = 0;
  sub_27B950((__int64)v10, (__int64)&v38, &qword_1C7F2A0);
  v33 &= 0xFCu;
  v36 &= 0xFCu;
  v15 = v38 >> 31;
  v32 = 0;
  v34 = 0;
  v35 = 1;
  v37 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v32, v17);
  v11 = (_QWORD *)sub_180C100(a2[96], 16);
  v11[1] = v4;
  *v11 = 0x80000000LL;
  v27 &= 0xFCu;
  v30 &= 0xFCu;
  v14 = (int)v11;
  v26 = 0;
  v28 = 0;
  v29 = 1;
  v31 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v26, &qword_1C7F2A0);
  v20 = 0;
  v22 = 0;
  v23 = 1;
  v18 = v26 > 0;
  v21 &= 0xFCu;
  v24 &= 0xFCu;
  v25 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v20, (int *)(v4 + 16));
  sub_B287C0(a1, (_DWORD)a2 + 712, (int)&v20, v18, v14, (int)&v32, (void *)v15, (__int64)v16);
  sub_25A130((char *)&v20);
  sub_25A130((char *)&v26);
  sub_25A130((char *)&v32);
  sub_25A130((char *)&v38);
  return a1;
}

