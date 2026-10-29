_QWORD *__fastcall sub_89C970(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r14
  int v6; // eax
  int v7; // edx
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  _DWORD *v11; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // rbp
  char **exception; // rbp
  __int64 v16; // rdx
  int v17; // [rsp+Ch] [rbp-DCh]
  __int64 v18; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+20h] [rbp-C8h]
  __int64 v21; // [rsp+28h] [rbp-C0h]
  int v22; // [rsp+30h] [rbp-B8h] BYREF
  char v23; // [rsp+34h] [rbp-B4h]
  __int64 v24; // [rsp+38h] [rbp-B0h]
  int v25; // [rsp+40h] [rbp-A8h] BYREF
  char v26; // [rsp+44h] [rbp-A4h]
  __int64 v27; // [rsp+48h] [rbp-A0h]
  int v28; // [rsp+50h] [rbp-98h] BYREF
  char v29; // [rsp+54h] [rbp-94h]
  __int64 v30; // [rsp+58h] [rbp-90h]
  int v31; // [rsp+60h] [rbp-88h] BYREF
  char v32; // [rsp+64h] [rbp-84h]
  __int64 v33; // [rsp+68h] [rbp-80h]
  int v34[8]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-58h] BYREF
  __int64 v36; // [rsp+98h] [rbp-50h]
  int v37; // [rsp+A0h] [rbp-48h]
  char v38; // [rsp+A4h] [rbp-44h]
  __int64 v39; // [rsp+A8h] [rbp-40h]

  v3 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v4 = *a2;
  v18 = 0;
  v5 = v3;
  v19 = 0;
  v20 = 1;
  v21 = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 80, v4, &v18, &v35) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4 * v5);
    v30 = 0;
    v29 &= 0xFCu;
    v17 = v6;
    v32 &= 0xFCu;
    v31 = 1;
    v33 = 0;
    v28 = dword_1C7F370;
    sub_182CBA0(qword_1C7F2C0, &v31);
    v32 &= ~1u;
    v31 = 1;
    sub_3EBE30((__int64)v34, a1 + 720, (__int64)&v28);
    v24 = 0;
    v23 &= 0xFCu;
    v26 &= 0xFCu;
    v25 = 1;
    v27 = 0;
    v22 = v17;
    sub_182CBA0(qword_1C7F2C0, &v25);
    v26 &= ~1u;
    v25 = 1;
    sub_27B340((__int64)&v35, (__int64)&v22, v34);
    v7 = v35;
    LODWORD(v35) = v18;
    LODWORD(v18) = v7;
    v8 = v36;
    v36 = v19;
    v19 = v8;
    v9 = BYTE4(v35) & 1;
    LOBYTE(v8) = BYTE4(v18) & 0xFC | BYTE4(v35) & 2;
    BYTE4(v35) = BYTE4(v18) & 1 | BYTE4(v35) & 0xFC | BYTE4(v18) & 2;
    BYTE4(v18) = v9 | v8;
    LODWORD(v8) = v37;
    v37 = v20;
    LODWORD(v20) = v8;
    v10 = v39;
    v39 = v21;
    v21 = v10;
    LOBYTE(v10) = v38 & 1 | BYTE4(v20) & 0xFC | v38 & 2;
    v38 = BYTE4(v20) & 1 | v38 & 0xFC | BYTE4(v20) & 2;
    BYTE4(v20) = v10;
    sub_25A130((char *)&v35);
    sub_25A130((char *)&v22);
    sub_25A130((char *)v34);
    sub_25A130((char *)&v28);
  }
  v11 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  v12 = 0;
  if ( v11 )
  {
    if ( *v11 == 5 && v11[1] == 1 )
    {
      if ( (v20 & 0x100000000LL) != 0 || (v12 = v20, (_DWORD)v20 != 1) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(&v35, "difference logic solver was used on mixed int/real problem", v16);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v35);
        sub_233E40((__int64)&v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
  }
  v13 = (_QWORD *)sub_186B270(0x10u);
  v13[1] = sub_1343270(*(_QWORD *)(a1 + 712), &v18, v12);
  *v13 = off_1C559A8;
  sub_25A130((char *)&v18);
  return v13;
}

