__int64 __fastcall sub_B96180(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  int v4; // r12d
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  unsigned int *v21; // rax
  void *v22; // r15
  void *v23; // rdi
  void *v24; // r15
  void *v25; // r14
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  unsigned int *v30; // rax
  void *v31; // r13
  __int64 v32; // r13
  __int64 v33; // r13
  void *v34; // r14
  unsigned int v36; // r12d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  void *v41; // [rsp+18h] [rbp-E8h]
  void *v42; // [rsp+18h] [rbp-E8h]
  __int64 v43; // [rsp+20h] [rbp-E0h]
  void *v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  char v47; // [rsp+54h] [rbp-ACh]
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  char v49; // [rsp+64h] [rbp-9Ch]
  int v50; // [rsp+70h] [rbp-90h] BYREF
  char v51; // [rsp+74h] [rbp-8Ch]
  __int64 v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+80h] [rbp-80h] BYREF
  char v54; // [rsp+84h] [rbp-7Ch]
  __int64 v55; // [rsp+88h] [rbp-78h]
  _QWORD v56[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 224);
  v4 = *(_DWORD *)(a1 + 296);
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 4);
  else
    v5 = 0;
  if ( v4 == v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_180C100(v6 + 8400, 24);
  v8 = *(_QWORD **)(v6 + 9456);
  v9 = v7;
  *(_QWORD *)v7 = &off_1C4C070;
  *(_QWORD *)(v7 + 8) = a1 + 296;
  *(_DWORD *)(v7 + 16) = v4;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v36 = (3 * v10 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v37 || v10 >= v36 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v58, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v58);
        sub_233E40((__int64)&v58);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v8 - 1, v37);
      v39 = v38[1];
      v8 = v38 + 2;
      *(_QWORD *)(v6 + 9456) = v38 + 2;
      *v38 = v36;
      LODWORD(v38) = v39;
      v13 = &v8[v39];
      v12 = (_DWORD)v38 + 1;
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
    v40 = (_QWORD *)sub_186B270(0x18u);
    v8 = v40 + 1;
    *v40 = 2;
    v12 = 1;
    *(_QWORD *)(v6 + 9456) = v8;
    v13 = v8;
  }
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  v14 = *(_QWORD *)(a1 + 224);
  if ( v14 )
  {
    v15 = *(unsigned int *)(a1 + 296);
    do
    {
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
        break;
      v16 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*(_QWORD *)(v14 + 8 * v15)) + 24) + 8LL);
      if ( *((_BYTE *)v16 + 8) )
        sub_DBF6E(0);
      sub_17F6290(&v46, *v16);
      v58 = 0;
      v43 = a1 + 280;
      v59 = 0;
      v60 = 1;
      v61 = 0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      v20 = *(_QWORD *)(a1 + 288);
      BYTE4(v60) &= ~1u;
      LODWORD(v60) = 1;
      if ( !v20 )
      {
        sub_16669E0(v43);
        v20 = *(_QWORD *)(a1 + 288);
      }
      sub_166A700(v20, (unsigned int)&v58, 1, v17, v18, v19);
      v44 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v44, &v60);
      v21 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 280));
      v45 = sub_966440(a1, v21);
      v56[0] = 1;
      v56[1] = 0;
      v57[0] = 1;
      v57[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v57);
      BYTE4(v57[0]) &= ~1u;
      LODWORD(v57[0]) = 1;
      v58 = 0;
      v22 = qword_1C7F2C0;
      v59 = 0;
      v60 = 1;
      v61 = 0;
      if ( (v47 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v58, &v46);
      else
        LODWORD(v58) = v46;
      if ( (v49 & 1) != 0 )
      {
        sub_182C690(v22, &v60, &v48);
      }
      else
      {
        BYTE4(v60) &= ~1u;
        LODWORD(v60) = v48;
      }
      if ( (v60 & 0x100000000LL) != 0 || (_DWORD)v60 != 1 || (v57[0] & 0x100000000LL) != 0 || LODWORD(v57[0]) != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v58, v56);
      }
      else
      {
        v42 = qword_1C7F2C0;
        sub_1832A70(qword_1C7F2C0, &v58, v56);
        sub_182CBA0(v42, &v60);
        BYTE4(v60) &= ~1u;
        LODWORD(v60) = 1;
      }
      v54 &= 0xFCu;
      v51 &= 0xFCu;
      v50 = 0;
      v23 = qword_1C7F2C0;
      v52 = 0;
      v53 = 1;
      v55 = 0;
      if ( (v58 & 0x100000000LL) != 0 )
      {
        v41 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v50, &v58);
        v23 = v41;
      }
      else
      {
        v50 = v58;
      }
      if ( (v60 & 0x100000000LL) != 0 )
      {
        sub_182C690(v23, &v53, &v60);
      }
      else
      {
        v54 &= ~1u;
        v53 = v60;
      }
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v24, &v60);
      v25 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v56);
      sub_182CBA0(v25, v57);
      v29 = *(_QWORD *)(a1 + 288);
      if ( !v29 )
      {
        sub_16669E0(v43);
        v29 = *(_QWORD *)(a1 + 288);
      }
      sub_166A700(v29, (unsigned int)&v50, 1, v26, v27, v28);
      v30 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 280));
      LODWORD(v58) = sub_966440(a1, v30);
      v31 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v50);
      sub_182CBA0(v31, &v53);
      v32 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v32 + 7488) + 48LL))(
        *(_QWORD *)(v32 + 7488),
        *(_QWORD *)(*(_QWORD *)(v32 + 8840) + 8LL * (v45 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 7488) + 64LL))(*(_QWORD *)(v32 + 7488));
      v33 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v33 + 7488) + 48LL))(
        *(_QWORD *)(v33 + 7488),
        *(_QWORD *)(*(_QWORD *)(v33 + 8840) + 8LL * ((unsigned int)v58 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 7488) + 64LL))(*(_QWORD *)(v33 + 7488));
      sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, &v45, 0, 0, 1u);
      sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int *)&v58, 0, 0, 1u);
      v34 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v46);
      sub_182CBA0(v34, &v48);
      v14 = *(_QWORD *)(a1 + 224);
      v15 = (unsigned int)(*(_DWORD *)(a1 + 296) + 1);
      *(_DWORD *)(a1 + 296) = v15;
    }
    while ( v14 );
  }
  return 1;
}

