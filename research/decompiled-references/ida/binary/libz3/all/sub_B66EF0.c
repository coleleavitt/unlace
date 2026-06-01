void __fastcall sub_B66EF0(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  int v9; // r12d
  int v10; // eax
  int v11; // r15d
  __int64 v12; // r14
  __int64 *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // ebx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  __int64 *v31; // rsi
  unsigned int v32; // r8d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // [rsp+10h] [rbp-68h]
  __int64 v39; // [rsp+10h] [rbp-68h]
  int v40; // [rsp+18h] [rbp-60h]
  unsigned int v41; // [rsp+1Ch] [rbp-5Ch]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = a3[2];
  v10 = sub_B39350(a2, v9);
  if ( v10 != -1 )
  {
    v11 = v10;
    sub_B39420(a2, a4, v9);
    v12 = sub_180C100(a1 + 1050, 24);
    *(_QWORD *)v12 = off_1C575F8;
    *(_QWORD *)(v12 + 8) = a2;
    *(_DWORD *)(v12 + 16) = (v11 << 8) | (unsigned __int8)v9;
    v13 = (__int64 *)a1[1182];
    if ( !v13 )
    {
      v36 = (_QWORD *)sub_186B270(0x18u);
      v13 = v36 + 1;
      *v36 = 2;
      v16 = 1;
      a1[1182] = v13;
      v17 = v13;
      goto LABEL_5;
    }
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 != *((_DWORD *)v13 - 2) )
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
LABEL_5:
      *v17 = v12;
      v18 = v11;
      *((_DWORD *)v13 - 1) = v16;
      v19 = a4;
LABEL_6:
      sub_8EBCF0((__int64)a1, v9, v19, v18);
      return;
    }
    v20 = (3 * v14 + 1) >> 1;
    v21 = 8 * v20 + 8;
    if ( 8 * v14 + 8 < (unsigned int)v21 && v14 < v20 )
    {
      v22 = (unsigned int *)sub_186B300(v13 - 1, v21);
      v23 = v22[1];
      v13 = (__int64 *)(v22 + 2);
      *v22 = v20;
      a1[1182] = v22 + 2;
      LODWORD(v22) = v23;
      v17 = &v13[v23];
      v16 = (_DWORD)v22 + 1;
      goto LABEL_5;
    }
LABEL_25:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_14E142(v42, "Overflow encountered when expanding vector", v5);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v42);
    sub_233E40((__int64)v42);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v24 = *(_QWORD *)(a2 + 8);
  v40 = sub_B39350(v24, v9);
  sub_B393A0(a2, a4, v9, (__int64)(a1 + 1050));
  v25 = sub_180C100(a1 + 1050, 24);
  v26 = (_QWORD *)a1[1182];
  v27 = v25;
  *(_QWORD *)v25 = off_1C575D0;
  *(_QWORD *)(v25 + 8) = a2;
  *(_DWORD *)(v25 + 16) = v9;
  if ( v26 )
  {
    v28 = *((_DWORD *)v26 - 1);
    if ( v28 == *((_DWORD *)v26 - 2) )
    {
      v32 = (3 * v28 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v33 || v28 >= v32 )
        goto LABEL_25;
      v41 = (3 * v28 + 1) >> 1;
      v38 = v27;
      v34 = (unsigned int *)sub_186B300(v26 - 1, v33);
      v35 = v34[1];
      *v34 = v41;
      a1[1182] = v34 + 2;
      *(_QWORD *)&v34[2 * v35 + 2] = v38;
      v34[1] = v35 + 1;
      if ( v40 != -1 )
        goto LABEL_14;
LABEL_19:
      if ( v24 != a2 )
        sub_B393A0(v24, a4, v9, (__int64)(a1 + 1050));
      sub_8EE150(a1, v24, a4, a3);
      return;
    }
    v29 = v28;
    v30 = v28 + 1;
    v31 = &v26[v29];
  }
  else
  {
    v39 = v25;
    v37 = (_QWORD *)sub_186B270(0x18u);
    v27 = v39;
    v26 = v37 + 1;
    *v37 = 2;
    v30 = 1;
    a1[1182] = v26;
    v31 = v26;
  }
  *v31 = v27;
  *((_DWORD *)v26 - 1) = v30;
  if ( v40 == -1 )
    goto LABEL_19;
LABEL_14:
  if ( v24 != a2 )
  {
    v19 = v40;
    v18 = a4;
    goto LABEL_6;
  }
}

