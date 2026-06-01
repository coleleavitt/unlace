_QWORD *__fastcall sub_89DD60(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  int *v7; // r15
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  char v11; // dl
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int8 v14; // bp
  _QWORD *v15; // r13
  char **exception; // rbp
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-128h] BYREF
  __int64 v20; // [rsp+28h] [rbp-120h]
  __int64 v21; // [rsp+30h] [rbp-118h]
  __int64 v22; // [rsp+38h] [rbp-110h]
  int v23; // [rsp+40h] [rbp-108h] BYREF
  char v24; // [rsp+44h] [rbp-104h]
  __int64 v25; // [rsp+48h] [rbp-100h]
  int v26; // [rsp+50h] [rbp-F8h]
  char v27; // [rsp+54h] [rbp-F4h]
  __int64 v28; // [rsp+58h] [rbp-F0h]
  int v29; // [rsp+60h] [rbp-E8h] BYREF
  char v30; // [rsp+64h] [rbp-E4h]
  __int64 v31; // [rsp+68h] [rbp-E0h]
  int v32; // [rsp+70h] [rbp-D8h] BYREF
  char v33; // [rsp+74h] [rbp-D4h]
  __int64 v34; // [rsp+78h] [rbp-D0h]
  int v35; // [rsp+80h] [rbp-C8h] BYREF
  char v36; // [rsp+84h] [rbp-C4h]
  __int64 v37; // [rsp+88h] [rbp-C0h]
  int v38; // [rsp+90h] [rbp-B8h]
  char v39; // [rsp+94h] [rbp-B4h]
  __int64 v40; // [rsp+98h] [rbp-B0h]
  int v41[8]; // [rsp+A0h] [rbp-A8h] BYREF
  int v42; // [rsp+C0h] [rbp-88h] BYREF
  char v43; // [rsp+C4h] [rbp-84h]
  __int64 v44; // [rsp+C8h] [rbp-80h]
  int v45; // [rsp+D0h] [rbp-78h]
  char v46; // [rsp+D4h] [rbp-74h]
  __int64 v47; // [rsp+D8h] [rbp-70h]
  __int64 v48[2]; // [rsp+E0h] [rbp-68h] BYREF
  int v49; // [rsp+F0h] [rbp-58h]
  char v50; // [rsp+F4h] [rbp-54h]
  __int64 v51; // [rsp+F8h] [rbp-50h]
  int v52; // [rsp+100h] [rbp-48h]

  v3 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v4 = *a2;
  v19 = 0;
  v5 = v3;
  v20 = 0;
  v21 = 1;
  v22 = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 112, v4, &v19, v48) )
  {
    v6 = *(_QWORD *)(a1 + 240);
    BYTE4(v48[0]) &= 0xFCu;
    v7 = (int *)(v6 + 40 * v5);
    v50 &= 0xFCu;
    LODWORD(v48[0]) = 0;
    v48[1] = 0;
    v49 = 1;
    v51 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v48, v7);
    v8 = v7[8];
    v31 = 0;
    v30 &= 0xFCu;
    v33 &= 0xFCu;
    v52 = v8;
    v32 = 1;
    v34 = 0;
    v29 = v8;
    sub_182CBA0(qword_1C7F2C0, &v32);
    v33 &= ~1u;
    v36 &= 0xFCu;
    v39 &= 0xFCu;
    v32 = 1;
    v35 = 0;
    v37 = 0;
    v38 = 1;
    v40 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v35, &v29);
    sub_3EBE30((__int64)v41, a1 + 752, (__int64)&v35);
    v24 &= 0xFCu;
    v27 &= 0xFCu;
    v23 = 0;
    v25 = 0;
    v26 = 1;
    v28 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v23, (int *)v48);
    sub_27B340((__int64)&v42, (__int64)&v23, v41);
    v9 = v19;
    LODWORD(v19) = v42;
    v42 = v9;
    v10 = v20;
    v20 = v44;
    v44 = v10;
    v11 = BYTE4(v19) & 0xFC | v43 & 2 | v43 & 1;
    v43 = BYTE4(v19) & 1 | v43 & 0xFC | BYTE4(v19) & 2;
    BYTE4(v19) = v11;
    v12 = v45;
    v45 = v21;
    LODWORD(v21) = v12;
    v13 = v47;
    v47 = v22;
    v22 = v13;
    LOBYTE(v13) = BYTE4(v21) & 0xFC | v46 & 2 | v46 & 1;
    v46 = BYTE4(v21) & 1 | v46 & 0xFC | BYTE4(v21) & 2;
    BYTE4(v21) = v13;
    sub_25A130((char *)&v42);
    sub_25A130((char *)&v23);
    sub_25A130((char *)v41);
    sub_25A130((char *)&v35);
    sub_25A130((char *)&v29);
    sub_25A130((char *)v48);
  }
  v14 = sub_892DC0(*a2);
  if ( v14 && ((v21 & 0x100000000LL) != 0 || (_DWORD)v21 != 1) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_12D192(v48, "difference logic solver was used on mixed int/real problem", v18);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v48);
    sub_233E40((__int64)v48);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v15 = (_QWORD *)sub_186B270(0x10u);
  v15[1] = sub_1343270(*(_QWORD *)(a1 + 744), &v19, v14);
  *v15 = off_1C559A8;
  sub_25A130((char *)&v19);
  return v15;
}

