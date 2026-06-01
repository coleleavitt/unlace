_QWORD *__fastcall Z3_optimize_get_lower_as_vector(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // r15
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rbp
  void *v8; // rbp
  void *v9; // rbp
  void *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rdi
  __int64 *v17; // r12
  __int64 *v18; // r14
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rsi
  unsigned int v22; // eax
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 v25; // rsi
  unsigned int v28; // r9d
  size_t v29; // rsi
  unsigned int v30; // ebp
  unsigned int *v31; // rax
  __int64 v32; // rsi
  char v33; // [rsp+Fh] [rbp-C9h]
  __int64 v34; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v35; // [rsp+38h] [rbp-A0h]
  __int64 v36[2]; // [rsp+40h] [rbp-98h] BYREF
  char v37[16]; // [rsp+50h] [rbp-88h] BYREF
  char v38[16]; // [rsp+60h] [rbp-78h] BYREF
  char v39[16]; // [rsp+70h] [rbp-68h] BYREF
  char v40[16]; // [rsp+80h] [rbp-58h] BYREF
  char v41[72]; // [rsp+90h] [rbp-48h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v33 = v5;
  if ( v5 )
    sub_2A08D0(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  v34 = v6;
  v35 = nullptr;
  sub_2EEB30(v36, v7, a3);
  sub_2F37A0(v7, v36, &v34);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v40);
  sub_182CBA0(v8, v41);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v38);
  sub_182CBA0(v9, v39);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v36);
  sub_182CBA0(v10, v37);
  v11 = sub_186B270(0x28u);
  v12 = *(_QWORD *)(a1 + 232);
  v13 = (_QWORD *)v11;
  sub_2518F0(v11, a1);
  v13[3] = v12;
  *v13 = &off_1C4CA20;
  v13[4] = 0;
  sub_24FBE0(a1, (__int64)v13);
  if ( v35 )
  {
    v14 = *((unsigned int *)v35 - 1);
    if ( (_DWORD)v14 )
    {
      v15 = *v35;
      v16 = (_QWORD *)v13[4];
      v17 = v35;
      v18 = &v35[v14];
      if ( *v35 )
        ++*(_DWORD *)(v15 + 8);
      if ( v16 )
        goto LABEL_12;
      v19 = (_QWORD *)sub_186B270(0x18u);
      v16 = v19 + 1;
      *v19 = 2;
      v20 = 1;
      v13[4] = v16;
      v21 = v16;
      while ( 1 )
      {
        ++v17;
        *v21 = v15;
        *((_DWORD *)v16 - 1) = v20;
        if ( v17 == v18 )
          break;
        while ( 1 )
        {
          v15 = *v17;
          if ( *v17 )
            ++*(_DWORD *)(v15 + 8);
LABEL_12:
          v22 = *((_DWORD *)v16 - 1);
          if ( v22 == *((_DWORD *)v16 - 2) )
            break;
          ++v17;
          v16[v22] = v15;
          *((_DWORD *)v16 - 1) = v22 + 1;
          if ( v17 == v18 )
            goto LABEL_14;
        }
        v28 = (3 * v22 + 1) >> 1;
        v29 = 8 * v28 + 8;
        v30 = v28;
        if ( 8 * v22 + 8 >= (unsigned int)v29 || v22 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v16 - 1, v29);
        v32 = v31[1];
        v16 = v31 + 2;
        *v31 = v30;
        v13[4] = v31 + 2;
        LODWORD(v31) = v32;
        v21 = &v16[v32];
        v20 = (_DWORD)v31 + 1;
      }
LABEL_14:
      if ( !v33 )
      {
        v23 = v35;
        if ( !v35 )
          return v13;
        goto LABEL_16;
      }
    }
    else if ( !v33 )
    {
      sub_186B220(v35 - 1);
      return v13;
    }
  }
  else if ( !v33 )
  {
    return v13;
  }
  sub_2BB620(v13);
  v23 = v35;
  if ( !v35 )
  {
LABEL_31:
    byte_1C7EBA0 = 1;
    return v13;
  }
LABEL_16:
  v24 = &v23[*((unsigned int *)v23 - 1)];
  if ( v23 >= v24 )
    goto LABEL_23;
  do
  {
    while ( 1 )
    {
      v25 = *v23;
      if ( *v23 )
      {
        if ( (*(_DWORD *)(v25 + 8))-- == 1 )
          break;
      }
      if ( ++v23 >= v24 )
        goto LABEL_22;
    }
    sub_15D7BC0(v34, v25);
    ++v23;
  }
  while ( v23 < v24 );
LABEL_22:
  v23 = v35;
  if ( v35 )
LABEL_23:
    sub_186B220(v23 - 1);
  if ( v33 )
    goto LABEL_31;
  return v13;
}

