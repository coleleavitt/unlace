__int64 __fastcall sub_A0D9D0(_QWORD *a1, unsigned int a2, __int64 a3, int a4, _DWORD **a5)
{
  __int64 v7; // rbp
  char v8; // al
  __int64 *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  _DWORD *v19; // r13
  _DWORD *v20; // r12
  bool v21; // r15
  __int64 v22; // rdx
  void *v23; // rbp
  void *v24; // rbx
  char v26; // al
  _QWORD *v27; // rax
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r13d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char **exception; // rbp
  char **v38; // rbp
  __int64 v39[4]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v40[16]; // [rsp+30h] [rbp-78h] BYREF
  char v41[16]; // [rsp+40h] [rbp-68h] BYREF
  char v42[16]; // [rsp+50h] [rbp-58h] BYREF
  char v43[72]; // [rsp+60h] [rbp-48h] BYREF

  sub_9ABF40((__int64)v40, (__int64)a1, a2, a3, a4);
  if ( *(_DWORD *)(a1[3] + 712LL) )
  {
    v7 = sub_186B270(0x78u);
    *(_QWORD *)v7 = &off_1C56158;
    *(_DWORD *)(v7 + 8) = a2;
    sub_91F480(v7 + 16, (__int64)v40);
    v8 = *(_BYTE *)(v7 + 80);
    *(_OWORD *)(v7 + 88) = 0;
    *(_OWORD *)(v7 + 104) = 0;
    v9 = (__int64 *)a1[132];
    *(_BYTE *)(v7 + 80) = a4 & 1 | v8 & 0xFC;
    *(_QWORD *)v7 = &off_1C56248;
    if ( v9 )
      goto LABEL_3;
LABEL_16:
    v27 = (_QWORD *)sub_186B270(0x18u);
    v9 = v27 + 1;
    *v27 = 2;
    v12 = 1;
    a1[132] = v9;
    v13 = v9;
    goto LABEL_5;
  }
  v7 = sub_186B270(0x68u);
  *(_QWORD *)v7 = &off_1C56158;
  *(_DWORD *)(v7 + 8) = a2;
  sub_91F480(v7 + 16, (__int64)v40);
  v26 = *(_BYTE *)(v7 + 80);
  *(_OWORD *)(v7 + 88) = 0;
  v9 = (__int64 *)a1[132];
  *(_BYTE *)(v7 + 80) = a4 & 1 | v26 & 0xFC;
  *(_QWORD *)v7 = &off_1C56200;
  if ( !v9 )
    goto LABEL_16;
LABEL_3:
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 == *((_DWORD *)v9 - 2) )
  {
    v28 = (3 * v10 + 1) >> 1;
    v29 = 8 * v28 + 8;
    if ( 8 * v10 + 8 >= (unsigned int)v29 || v10 >= v28 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_98B3B0(v39, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v39);
      sub_233E40((__int64)v39);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v30 = (unsigned int *)sub_186B300(v9 - 1, v29);
    v31 = v30[1];
    v9 = (__int64 *)(v30 + 2);
    *v30 = v28;
    a1[132] = v30 + 2;
    LODWORD(v30) = v31;
    v13 = &v9[v31];
    v12 = (_DWORD)v30 + 1;
  }
  else
  {
    v11 = v10;
    v12 = v10 + 1;
    v13 = &v9[v11];
  }
LABEL_5:
  *v13 = v7;
  *((_DWORD *)v9 - 1) = v12;
  v14 = (_QWORD *)a1[92];
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v32 = (3 * v15 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v33 || v15 >= v32 )
      {
        v38 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v39, "Overflow encountered when expanding vector");
        *v38 = (char *)off_1C63128;
        sub_2333C0(v38 + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(v38, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v14 - 1, v33);
      v35 = v34[1];
      v14 = v34 + 2;
      *v34 = v32;
      a1[92] = v34 + 2;
      LODWORD(v34) = v35;
      v18 = &v14[v35];
      v17 = (_DWORD)v34 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v14[v16];
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x18u);
    v14 = v36 + 1;
    *v36 = 2;
    v17 = 1;
    a1[92] = v14;
    v18 = v14;
  }
  *v18 = v7;
  *((_DWORD *)v14 - 1) = v17;
  sub_9E4980((__int64)(a1 + 26));
  sub_9E7500((__int64)(a1 + 29));
  v19 = *a5;
  if ( *a5 )
  {
    v20 = &v19[10 * *(v19 - 1)];
    if ( v20 != v19 )
    {
      v21 = a4 == 1;
      do
      {
        v22 = (unsigned int)v19[8];
        if ( (_DWORD)v22 != -1 )
          sub_A0D660(
            (__int64)a1,
            *(_QWORD *)(a1[((v21 ^ (*v19 <= 0)) & 1) + 85] + 8 * v22),
            v7,
            (__int64)v19,
            (__int64)(a1 + 26),
            (__int64)(a1 + 29));
        v19 += 10;
      }
      while ( v19 != v20 );
    }
  }
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v42);
  sub_182CBA0(v23, v43);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v40);
  return sub_182CBA0(v24, v41);
}

