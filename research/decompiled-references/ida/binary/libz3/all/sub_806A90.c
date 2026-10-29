__int64 __fastcall sub_806A90(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  int v4; // r12d
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // r15
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  void *v24; // r15
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // r15
  void *v28; // r12
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // eax
  void *v35; // r13
  unsigned int v36; // r12d
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  void *v43; // rbp
  unsigned int v45; // r12d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  void *v50; // [rsp+10h] [rbp-E8h]
  __int64 v51; // [rsp+18h] [rbp-E0h]
  unsigned int v52; // [rsp+24h] [rbp-D4h]
  __int64 v53; // [rsp+30h] [rbp-C8h]
  int v54; // [rsp+40h] [rbp-B8h] BYREF
  char v55; // [rsp+44h] [rbp-B4h]
  int v56; // [rsp+50h] [rbp-A8h] BYREF
  char v57; // [rsp+54h] [rbp-A4h]
  int v58; // [rsp+60h] [rbp-98h] BYREF
  char v59; // [rsp+64h] [rbp-94h]
  __int64 v60; // [rsp+68h] [rbp-90h]
  int v61; // [rsp+70h] [rbp-88h] BYREF
  char v62; // [rsp+74h] [rbp-84h]
  __int64 v63; // [rsp+78h] [rbp-80h]
  _QWORD v64[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v65[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-50h]
  __int64 v68; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 344);
  v4 = *(_DWORD *)(a1 + 412);
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 4);
  else
    v5 = 0;
  if ( v4 == v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 112);
  v7 = sub_180C100(v6 + 2144, 24);
  v8 = *(_QWORD **)(v6 + 2128);
  v9 = v7;
  *(_QWORD *)v7 = &off_1C4C070;
  *(_QWORD *)(v7 + 8) = a1 + 412;
  *(_DWORD *)(v7 + 16) = v4;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v45 = (3 * v10 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v46 || v10 >= v45 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v66, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v66);
        sub_233E40((__int64)&v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v8 - 1, v46);
      v48 = v47[1];
      v8 = v47 + 2;
      *(_QWORD *)(v6 + 2128) = v47 + 2;
      *v47 = v45;
      LODWORD(v47) = v48;
      v13 = &v8[v48];
      v12 = (_DWORD)v47 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v49 = (_QWORD *)sub_186B270(0x18u);
    v8 = v49 + 1;
    *v49 = 2;
    v12 = 1;
    *(_QWORD *)(v6 + 2128) = v8;
    v13 = v8;
  }
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  v14 = *(_QWORD *)(a1 + 344);
  if ( v14 )
  {
    v15 = *(unsigned int *)(a1 + 412);
    do
    {
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
        break;
      v16 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*(_QWORD *)(v14 + 8 * v15)) + 24) + 8LL);
      if ( *((_BYTE *)v16 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      sub_17F6290(&v54, *v16);
      v17 = *(_QWORD *)(a1 + 112);
      v66 = 0;
      v53 = a1 + 160;
      v67 = 0;
      v68 = 1;
      v69 = 0;
      sub_182CBA0(qword_1C7F2C0, &v68);
      v21 = *(_QWORD *)(a1 + 168);
      BYTE4(v68) &= ~1u;
      LODWORD(v68) = 1;
      if ( !v21 )
      {
        sub_16669E0(v53);
        v21 = *(_QWORD *)(a1 + 168);
      }
      sub_166A700(v21, (unsigned int)&v66, 1, v18, v19, v20);
      v50 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v66);
      sub_182CBA0(v50, &v68);
      v22 = sub_15E1B70(*(_QWORD *)(a1 + 160));
      v52 = sub_79C480(v17, v22);
      v23 = *(_QWORD *)(a1 + 112);
      v64[0] = 1;
      v51 = v23;
      v64[1] = 0;
      v65[0] = 1;
      v65[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v65);
      BYTE4(v65[0]) &= ~1u;
      v24 = qword_1C7F2C0;
      LODWORD(v65[0]) = 1;
      v66 = 0;
      v67 = 0;
      v68 = 1;
      v69 = 0;
      if ( (v55 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v66, &v54);
      else
        LODWORD(v66) = v54;
      if ( (v57 & 1) != 0 )
      {
        sub_182C690(v24, &v68, &v56);
      }
      else
      {
        BYTE4(v68) &= ~1u;
        LODWORD(v68) = v56;
      }
      v25 = qword_1C7F2C0;
      if ( (v68 & 0x100000000LL) != 0 || (_DWORD)v68 != 1 || (v65[0] & 0x100000000LL) != 0 || LODWORD(v65[0]) != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v66, v64);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, &v66, v64);
        sub_182CBA0(v25, &v68);
        BYTE4(v68) &= ~1u;
        LODWORD(v68) = 1;
      }
      v59 &= 0xFCu;
      v26 = qword_1C7F2C0;
      v62 &= 0xFCu;
      v58 = 0;
      v60 = 0;
      v61 = 1;
      v63 = 0;
      if ( (v66 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v58, &v66);
      else
        v58 = v66;
      if ( (v68 & 0x100000000LL) != 0 )
      {
        sub_182C690(v26, &v61, &v68);
      }
      else
      {
        v62 &= ~1u;
        v61 = v68;
      }
      v27 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v66);
      sub_182CBA0(v27, &v68);
      v28 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v64);
      sub_182CBA0(v28, v65);
      v32 = *(_QWORD *)(a1 + 168);
      if ( !v32 )
      {
        sub_16669E0(v53);
        v32 = *(_QWORD *)(a1 + 168);
      }
      sub_166A700(v32, (unsigned int)&v58, 1, v29, v30, v31);
      v33 = sub_15E1B70(*(_QWORD *)(a1 + 160));
      v34 = sub_79C480(v51, v33);
      v35 = qword_1C7F2C0;
      v36 = v34;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v35, &v61);
      sub_7F15F0(*(_QWORD *)(a1 + 112) + 160LL, v52);
      sub_7F15F0(*(_QWORD *)(a1 + 112) + 160LL, v36);
      sub_7E5160(a1, v52, nullptr, v37, v38, v39);
      sub_7E5160(a1, v36, nullptr, v40, v41, v42);
      v43 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v54);
      sub_182CBA0(v43, &v56);
      v14 = *(_QWORD *)(a1 + 344);
      v15 = (unsigned int)(*(_DWORD *)(a1 + 412) + 1);
      *(_DWORD *)(a1 + 412) = v15;
    }
    while ( v14 );
  }
  return 1;
}

