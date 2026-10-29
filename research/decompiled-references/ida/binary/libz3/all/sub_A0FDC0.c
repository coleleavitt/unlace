__int64 __fastcall sub_A0FDC0(_QWORD *a1, unsigned int a2, __int64 a3, int a4, _DWORD **a5)
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
  char v24; // al
  _QWORD *v25; // rax
  unsigned int v26; // r13d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r13d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char **exception; // rbp
  char **v36; // rbp
  __int64 v37[4]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v38[152]; // [rsp+30h] [rbp-98h] BYREF

  sub_9D5820((__int64)v38, (__int64)a1, a2, a3, a4);
  if ( *(_DWORD *)(a1[3] + 712LL) )
  {
    v7 = sub_186B270(0x98u);
    *(_QWORD *)v7 = &off_1C563C8;
    *(_DWORD *)(v7 + 8) = a2;
    sub_8A6550(v7 + 16, (__int64)v38);
    v8 = *(_BYTE *)(v7 + 112);
    *(_OWORD *)(v7 + 120) = 0;
    *(_OWORD *)(v7 + 136) = 0;
    v9 = (__int64 *)a1[144];
    *(_BYTE *)(v7 + 112) = a4 & 1 | v8 & 0xFC;
    *(_QWORD *)v7 = &off_1C564B8;
    if ( v9 )
      goto LABEL_3;
LABEL_16:
    v25 = (_QWORD *)sub_186B270(0x18u);
    v9 = v25 + 1;
    *v25 = 2;
    v12 = 1;
    a1[144] = v9;
    v13 = v9;
    goto LABEL_5;
  }
  v7 = sub_186B270(0x88u);
  *(_QWORD *)v7 = &off_1C563C8;
  *(_DWORD *)(v7 + 8) = a2;
  sub_8A6550(v7 + 16, (__int64)v38);
  v24 = *(_BYTE *)(v7 + 112);
  *(_OWORD *)(v7 + 120) = 0;
  v9 = (__int64 *)a1[144];
  *(_BYTE *)(v7 + 112) = a4 & 1 | v24 & 0xFC;
  *(_QWORD *)v7 = &off_1C56470;
  if ( !v9 )
    goto LABEL_16;
LABEL_3:
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 == *((_DWORD *)v9 - 2) )
  {
    v26 = (3 * v10 + 1) >> 1;
    v27 = 8 * v26 + 8;
    if ( 8 * v10 + 8 >= (unsigned int)v27 || v10 >= v26 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_98B3B0(v37, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v37);
      sub_233E40((__int64)v37);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v28 = (unsigned int *)sub_186B300(v9 - 1, v27);
    v29 = v28[1];
    v9 = (__int64 *)(v28 + 2);
    *v28 = v26;
    a1[144] = v28 + 2;
    LODWORD(v28) = v29;
    v13 = &v9[v29];
    v12 = (_DWORD)v28 + 1;
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
  v14 = (_QWORD *)a1[100];
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v30 = (3 * v15 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v31 || v15 >= v30 )
      {
        v36 = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v37, "Overflow encountered when expanding vector");
        *v36 = (char *)off_1C63128;
        sub_2333C0(v36 + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(v36, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v14 - 1, v31);
      v33 = v32[1];
      v14 = v32 + 2;
      *v32 = v30;
      a1[100] = v32 + 2;
      LODWORD(v32) = v33;
      v18 = &v14[v33];
      v17 = (_DWORD)v32 + 1;
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
    v34 = (_QWORD *)sub_186B270(0x18u);
    v14 = v34 + 1;
    *v34 = 2;
    v17 = 1;
    a1[100] = v14;
    v18 = v14;
  }
  *v18 = v7;
  *((_DWORD *)v14 - 1) = v17;
  sub_9E4980((__int64)(a1 + 34));
  sub_9E7500((__int64)(a1 + 37));
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
          sub_A0FA50(
            (__int64)a1,
            *(_QWORD *)(a1[((v21 ^ (*v19 <= 0)) & 1) + 93] + 8 * v22),
            v7,
            (__int64)v19,
            (__int64)(a1 + 34),
            (__int64)(a1 + 37));
        v19 += 10;
      }
      while ( v19 != v20 );
    }
  }
  return sub_2A6060((__int64)v38);
}

