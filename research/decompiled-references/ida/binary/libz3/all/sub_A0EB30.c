__int64 __fastcall sub_A0EB30(_QWORD *a1, unsigned int a2, int *a3, int a4, _DWORD **a5)
{
  __int64 v8; // r13
  void *v9; // rdi
  char v10; // al
  __int64 *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  _DWORD *v21; // r15
  _DWORD *v22; // rbp
  bool v23; // r14
  __int64 v24; // rdx
  void *v25; // rbx
  void *v27; // rdi
  char v28; // al
  _QWORD *v29; // rax
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r12d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  char **exception; // rbp
  char **v40; // rbp
  int v41; // [rsp+20h] [rbp-78h] BYREF
  char v42; // [rsp+24h] [rbp-74h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  int v44; // [rsp+30h] [rbp-68h] BYREF
  char v45; // [rsp+34h] [rbp-64h]
  __int64 v46; // [rsp+38h] [rbp-60h]
  __int64 v47[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a1[74] + 4LL * a2 + 3) & 0x40) == 0 )
  {
    v42 &= 0xFCu;
    v45 &= 0xFCu;
    v41 = 0;
    v43 = 0;
    v44 = 1;
    v46 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v41, a3);
LABEL_4:
    if ( *(_DWORD *)(a1[3] + 712LL) )
      goto LABEL_5;
    goto LABEL_19;
  }
  if ( a4 )
  {
    sub_992C20((__int64)&v41, (__int64)a3);
    goto LABEL_4;
  }
  sub_992CA0((__int64)&v41, (__int64)a3);
  if ( *(_DWORD *)(a1[3] + 712LL) )
  {
LABEL_5:
    v8 = sub_186B270(0x58u);
    *(_QWORD *)v8 = &off_1C56290;
    *(_DWORD *)(v8 + 8) = a2;
    *(_QWORD *)(v8 + 16) = 0;
    v9 = qword_1C7F2C0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 1;
    *(_QWORD *)(v8 + 40) = 0;
    sub_27B950((__int64)v9, v8 + 16, &v41);
    v10 = *(_BYTE *)(v8 + 48);
    *(_OWORD *)(v8 + 56) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    v11 = (__int64 *)a1[120];
    *(_BYTE *)(v8 + 48) = a4 & 1 | v10 & 0xFC;
    *(_QWORD *)v8 = &off_1C56380;
    if ( v11 )
      goto LABEL_6;
LABEL_20:
    v29 = (_QWORD *)sub_186B270(0x18u);
    v11 = v29 + 1;
    *v29 = 2;
    v14 = 1;
    a1[120] = v11;
    v15 = v11;
    goto LABEL_8;
  }
LABEL_19:
  v8 = sub_186B270(0x48u);
  *(_QWORD *)v8 = &off_1C56290;
  *(_DWORD *)(v8 + 8) = a2;
  *(_QWORD *)(v8 + 16) = 0;
  v27 = qword_1C7F2C0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 1;
  *(_QWORD *)(v8 + 40) = 0;
  sub_27B950((__int64)v27, v8 + 16, &v41);
  v28 = *(_BYTE *)(v8 + 48);
  *(_OWORD *)(v8 + 56) = 0;
  v11 = (__int64 *)a1[120];
  *(_BYTE *)(v8 + 48) = a4 & 1 | v28 & 0xFC;
  *(_QWORD *)v8 = &off_1C56338;
  if ( !v11 )
    goto LABEL_20;
LABEL_6:
  v12 = *((_DWORD *)v11 - 1);
  if ( v12 == *((_DWORD *)v11 - 2) )
  {
    v30 = (3 * v12 + 1) >> 1;
    v31 = 8 * v30 + 8;
    if ( 8 * v12 + 8 >= (unsigned int)v31 || v12 >= v30 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_98B3B0(v47, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v47);
      sub_233E40((__int64)v47);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v32 = (unsigned int *)sub_186B300(v11 - 1, v31);
    v33 = v32[1];
    v11 = (__int64 *)(v32 + 2);
    *v32 = v30;
    a1[120] = v32 + 2;
    LODWORD(v32) = v33;
    v15 = &v11[v33];
    v14 = (_DWORD)v32 + 1;
  }
  else
  {
    v13 = v12;
    v14 = v12 + 1;
    v15 = &v11[v13];
  }
LABEL_8:
  *v15 = v8;
  *((_DWORD *)v11 - 1) = v14;
  v16 = (_QWORD *)a1[84];
  if ( v16 )
  {
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 == *((_DWORD *)v16 - 2) )
    {
      v34 = (3 * v17 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v35 || v17 >= v34 )
      {
        v40 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v47, "Overflow encountered when expanding vector");
        *v40 = (char *)off_1C63128;
        sub_2333C0(v40 + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(v40, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v16 - 1, v35);
      v37 = v36[1];
      v16 = v36 + 2;
      *v36 = v34;
      a1[84] = v36 + 2;
      LODWORD(v36) = v37;
      v20 = &v16[v37];
      v19 = (_DWORD)v36 + 1;
    }
    else
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = &v16[v18];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v16 = v38 + 1;
    *v38 = 2;
    v19 = 1;
    a1[84] = v16;
    v20 = v16;
  }
  *v20 = v8;
  *((_DWORD *)v16 - 1) = v19;
  sub_9E4980((__int64)(a1 + 18));
  sub_9E7500((__int64)(a1 + 21));
  v21 = *a5;
  if ( *a5 )
  {
    v22 = &v21[10 * *(v21 - 1)];
    if ( v22 != v21 )
    {
      v23 = a4 == 1;
      do
      {
        v24 = (unsigned int)v21[8];
        if ( (_DWORD)v24 != -1 )
          sub_A0E7C0(
            (__int64)a1,
            *(_QWORD *)(a1[((v23 ^ (*v21 <= 0)) & 1) + 77] + 8 * v24),
            v8,
            (__int64)v21,
            (__int64)(a1 + 18),
            (__int64)(a1 + 21));
        v21 += 10;
      }
      while ( v22 != v21 );
    }
  }
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v41);
  return sub_182CBA0(v25, &v44);
}

