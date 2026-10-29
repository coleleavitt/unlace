_QWORD *__fastcall sub_89BF30(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  unsigned int v5; // r14d
  int *v6; // rdx
  void *v7; // r15
  int v8; // edx
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  _DWORD *v12; // rax
  unsigned int v13; // r14d
  _QWORD *v14; // rbp
  char **exception; // rbp
  __int64 v17; // rdx
  __int64 v18; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-F0h]
  __int64 v20; // [rsp+20h] [rbp-E8h]
  __int64 v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D8h] BYREF
  char v23; // [rsp+34h] [rbp-D4h]
  __int64 v24; // [rsp+38h] [rbp-D0h]
  int v25; // [rsp+40h] [rbp-C8h]
  char v26; // [rsp+44h] [rbp-C4h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  char v29; // [rsp+54h] [rbp-B4h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  int v31; // [rsp+60h] [rbp-A8h]
  char v32; // [rsp+64h] [rbp-A4h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  int v34; // [rsp+70h] [rbp-98h] BYREF
  char v35; // [rsp+74h] [rbp-94h]
  __int64 v36; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-88h] BYREF
  char v38; // [rsp+84h] [rbp-84h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  int v40[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+C0h] [rbp-48h]
  char v44; // [rsp+C4h] [rbp-44h]
  __int64 v45; // [rsp+C8h] [rbp-40h]

  v3 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v4 = *a2;
  v18 = 0;
  v5 = v3;
  v19 = 0;
  v20 = 1;
  v21 = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 104, v4, &v18, &v41) )
  {
    v23 &= 0xFCu;
    v6 = (int *)(*(_QWORD *)(a1 + 232) + 32LL * v5);
    v26 &= 0xFCu;
    v22 = 0;
    v24 = 0;
    v25 = 1;
    v27 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v22, v6);
    v34 = 0;
    v35 &= 0xFCu;
    v38 &= 0xFCu;
    v7 = qword_1C7F2C0;
    v36 = 0;
    v37 = 1;
    v39 = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v34, &qword_1C7F2A0);
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
        goto LABEL_4;
    }
    else
    {
      v34 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
      {
LABEL_4:
        v38 &= ~1u;
        v37 = qword_1C7F2B0;
LABEL_5:
        sub_3EBE30((__int64)v40, a1 + 744, (__int64)&v34);
        v29 &= 0xFCu;
        v32 &= 0xFCu;
        v28 = 0;
        v30 = 0;
        v31 = 1;
        v33 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v28, &v22);
        sub_27B340((__int64)&v41, (__int64)&v28, v40);
        v8 = v41;
        LODWORD(v41) = v18;
        LODWORD(v18) = v8;
        v9 = v42;
        v42 = v19;
        v19 = v9;
        v10 = BYTE4(v41) & 1;
        LOBYTE(v9) = BYTE4(v18) & 0xFC | BYTE4(v41) & 2;
        BYTE4(v41) = BYTE4(v18) & 1 | BYTE4(v41) & 0xFC | BYTE4(v18) & 2;
        BYTE4(v18) = v10 | v9;
        LODWORD(v9) = v43;
        v43 = v20;
        LODWORD(v20) = v9;
        v11 = v45;
        v45 = v21;
        v21 = v11;
        LOBYTE(v11) = v44 & 1 | BYTE4(v20) & 0xFC | v44 & 2;
        v44 = BYTE4(v20) & 1 | v44 & 0xFC | BYTE4(v20) & 2;
        BYTE4(v20) = v11;
        sub_25A130((char *)&v41);
        sub_25A130((char *)&v28);
        sub_25A130((char *)v40);
        sub_25A130((char *)&v34);
        sub_25A130((char *)&v22);
        goto LABEL_6;
      }
    }
    sub_182C690(v7, &v37, &qword_1C7F2B0);
    goto LABEL_5;
  }
LABEL_6:
  v12 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  v13 = 0;
  if ( v12 )
  {
    if ( *v12 == 5 && v12[1] == 1 )
    {
      if ( (v20 & 0x100000000LL) != 0 || (v13 = v20, (_DWORD)v20 != 1) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(&v41, "difference logic solver was used on mixed int/real problem", v17);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v41);
        sub_233E40((__int64)&v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
  }
  v14 = (_QWORD *)sub_186B270(0x10u);
  v14[1] = sub_1343270(*(_QWORD *)(a1 + 736), &v18, v13);
  *v14 = off_1C559A8;
  sub_25A130((char *)&v18);
  return v14;
}

