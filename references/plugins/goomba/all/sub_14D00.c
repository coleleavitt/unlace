_QWORD *__fastcall sub_14D00(__int64 a1, _QWORD *a2, char *a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // r13
  char *v6; // rbx
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *, char *); // rax
  int v10; // eax
  __int64 v11; // rcx
  int (__fastcall *v12)(__int64, char *, _QWORD *); // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int8 v17; // al
  __int64 v18; // r14
  __int64 (__fastcall **v19)(); // r13
  __int64 v20; // rdi
  __int64 (__fastcall **v21)(); // rsi
  __int64 v22; // rdx
  void (__fastcall *v23)(__int64, __int64 *, char *); // rax
  __int64 v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 (__fastcall **v30)(); // rsi
  void (__fastcall *v31)(__int64, __int64 *); // rax
  __int64 v32; // rdi
  _QWORD *v33; // [rsp+8h] [rbp-F0h]
  _QWORD v34[4]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C0h]
  __int64 (__fastcall **v37)(); // [rsp+40h] [rbp-B8h]
  _UNKNOWN **v38; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A0h]
  __int64 (__fastcall **v40)(); // [rsp+60h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-88h] BYREF
  __int64 v42; // [rsp+78h] [rbp-80h]
  __int64 (__fastcall **v43)(); // [rsp+80h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-68h] BYREF
  __int64 v45; // [rsp+98h] [rbp-60h]
  __int64 (__fastcall **v46)(); // [rsp+A0h] [rbp-58h]
  __int64 v47; // [rsp+A8h] [rbp-50h]
  __int64 (__fastcall **v48)(); // [rsp+B0h] [rbp-48h]
  unsigned __int64 v49; // [rsp+B8h] [rbp-40h]

  v3 = a2;
  v4 = (_QWORD *)a1;
  v5 = (_QWORD *)a2[31];
  v49 = __readfsqword(0x28u);
  v6 = a3;
  if ( v5 )
  {
    v7 = a2 + 30;
    v8 = a2 + 30;
    do
    {
      while ( 1 )
      {
        hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *, char *))get_hexdsp(a1, a2, a3);
        a2 = v5 + 4;
        a1 = 296;
        v10 = hexdsp(296, v5 + 4, v6);
        a3 = (char *)v5[2];
        v11 = v5[3];
        if ( v10 < 0 )
          break;
        v8 = v5;
        v5 = (_QWORD *)v5[2];
        if ( !a3 )
          goto LABEL_6;
      }
      v5 = (_QWORD *)v5[3];
    }
    while ( v11 );
LABEL_6:
    if ( v7 != v8 )
    {
      v12 = (int (__fastcall *)(__int64, char *, _QWORD *))get_hexdsp(296, a2, a3);
      if ( v12(296, v6, v8 + 4) >= 0 )
      {
        v13 = v8[7];
        *v4 = &off_4D850;
        v4[1] = v13;
        v14 = v8[8];
        v15 = *(_QWORD *)(v13 + 8);
        v4[2] = v14;
        Z3_inc_ref(v15, v14);
        *v4 = &off_4D890;
        return v4;
      }
    }
  }
  v17 = *v6;
  v34[0] = &off_4D890;
  if ( v17 == 6 )
  {
    sub_145A0(&v38, (__int64)v3, *((_QWORD *)v6 + 1), *((_DWORD *)v6 + 1), v3 + 11);
    v18 = v39;
    v19 = v40;
    v20 = *(_QWORD *)(v39 + 8);
    v21 = v40;
    Z3_inc_ref(v20, v40);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v18 + 8);
      v21 = v19;
      Z3_dec_ref(v20);
    }
    goto LABEL_16;
  }
  if ( v17 > 6u )
  {
    if ( v17 == 9 )
    {
      sub_145A0(&v41, (__int64)v3, *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL), *((_DWORD *)v6 + 1), v3 + 17);
      v18 = v42;
      v19 = v43;
      v20 = *(_QWORD *)(v42 + 8);
      v21 = v43;
      Z3_inc_ref(v20, v43);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v18 + 8);
        v21 = v19;
        Z3_dec_ref(v20);
      }
      goto LABEL_16;
    }
    goto LABEL_27;
  }
  if ( v17 == 1 )
  {
    sub_145A0(&v44, (__int64)v3, *((int *)v6 + 2), *((_DWORD *)v6 + 1), v3 + 23);
    v18 = v45;
    v19 = v46;
    v20 = *(_QWORD *)(v45 + 8);
    v21 = v46;
    Z3_inc_ref(v20, v46);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v18 + 8);
      v21 = v19;
      Z3_dec_ref(v20);
    }
    goto LABEL_16;
  }
  if ( v17 != 5 )
  {
LABEL_27:
    if ( !under_debugger )
    {
      interr(30821);
      v38 = &off_4D890;
      sub_FED0(v33);
      v34[1] = v3 + 3;
      v34[2] = 0;
      sub_FED0(v34);
      _Unwind_Resume((struct _Unwind_Exception *)v6);
    }
    BUG();
  }
  sub_145A0(&v35, (__int64)v3, *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL), *((_DWORD *)v6 + 1), v3 + 5);
  v18 = v36;
  v19 = v37;
  v20 = *(_QWORD *)(v36 + 8);
  v21 = v37;
  Z3_inc_ref(v20, v37);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v18 + 8);
    v21 = v19;
    Z3_dec_ref(v20);
  }
LABEL_16:
  v23 = (void (__fastcall *)(__int64, __int64 *, char *))get_hexdsp(v20, v21, v22);
  v23(273, &v44, v6);
  v47 = v18;
  v24 = *(_QWORD *)(v18 + 8);
  v46 = &off_4D850;
  v48 = v19;
  Z3_inc_ref(v24, v19);
  v25 = v3 + 29;
  v46 = (__int64 (__fastcall **)())&off_4D890;
  sub_14B20((__int64)(v3 + 29), &v44, v26, v27, v28);
  v30 = v48;
  v46 = &off_4D850;
  if ( v48 )
  {
    v25 = *(_QWORD **)(v47 + 8);
    Z3_dec_ref(v25);
  }
  v31 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(v25, v30, v29);
  v31(276, &v44);
  v4[1] = v18;
  v32 = *(_QWORD *)(v18 + 8);
  *v4 = &off_4D850;
  v4[2] = v19;
  Z3_inc_ref(v32, v19);
  *v4 = &off_4D890;
  if ( v19 )
    Z3_dec_ref(*(_QWORD *)(v18 + 8));
  return v4;
}
