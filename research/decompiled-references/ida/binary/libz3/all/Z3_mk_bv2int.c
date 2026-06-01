__int64 __fastcall Z3_mk_bv2int(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char v5; // al
  void *v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r12
  void *v11; // rbx
  __int64 v13; // rdi
  unsigned int bv_sort_size; // [rsp+0h] [rbp-B0h]
  void *v15; // [rsp+0h] [rbp-B0h]
  __int64 v16; // [rsp+0h] [rbp-B0h]
  __int64 sort; // [rsp+18h] [rbp-98h]
  __int64 v18; // [rsp+18h] [rbp-98h]
  void *v19; // [rsp+20h] [rbp-90h]
  __int64 v20; // [rsp+20h] [rbp-90h]
  char v21; // [rsp+2Fh] [rbp-81h]
  int v22[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v23; // [rsp+48h] [rbp-68h]
  int v24; // [rsp+50h] [rbp-60h] BYREF
  char v25; // [rsp+54h] [rbp-5Ch]
  __int64 v26; // [rsp+58h] [rbp-58h]
  void *v27; // [rsp+60h] [rbp-50h] BYREF
  __int64 v28; // [rsp+68h] [rbp-48h]
  _QWORD v29[8]; // [rsp+70h] [rbp-40h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v21 = v5;
  if ( v5 )
    sub_296E00(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = (void *)Z3_mk_int_sort(a1);
  v19 = v6;
  if ( !a3 )
  {
    v27 = v6;
    *(_QWORD *)v22 = a2;
    v13 = *(_QWORD *)(a1 + 232);
    LOBYTE(v28) = 1;
    v10 = sub_15DCAD0(v13, (int)v22, 0);
    sub_251FD0(a1, v10);
    sub_24FE40(a1, v10);
    if ( !v21 )
    {
      sub_15D0DF0(&v27);
      return v10;
    }
    sub_2BB620(v10);
    sub_15D0DF0(&v27);
LABEL_13:
    byte_1C7EBA0 = 1;
    return v10;
  }
  v7 = Z3_mk_bv2int(a1, a2, 0);
  Z3_inc_ref(a1, v7);
  sort = Z3_get_sort(a1, a2);
  bv_sort_size = Z3_get_bv_sort_size(a1, sort);
  v27 = &dword_0 + 2;
  v28 = 0;
  v29[0] = 1;
  v29[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v29);
  BYTE4(v29[0]) &= ~1u;
  LOBYTE(v22[1]) &= 0xFCu;
  v25 &= 0xFCu;
  LODWORD(v29[0]) = 1;
  v22[0] = 0;
  v23 = 0;
  v24 = 1;
  v26 = 0;
  sub_184BE60(qword_1C7F2C0, &v27, bv_sort_size, v22);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v27);
  sub_182CBA0(v15, v29);
  sub_1850940(&v27, qword_1C7F2C0, v22);
  v8 = Z3_mk_numeral(a1, v27, v19);
  Z3_inc_ref(a1, v8);
  v20 = Z3_mk_int(a1, 0, sort);
  Z3_inc_ref(a1, v20);
  v9 = Z3_mk_bvslt(a1);
  Z3_inc_ref(a1, v9);
  v18 = Z3_mk_sub(a1);
  Z3_inc_ref(a1, v18);
  v16 = v9;
  v10 = Z3_mk_ite(a1);
  Z3_dec_ref(a1, v8);
  Z3_dec_ref(a1, v16);
  Z3_dec_ref(a1, v18);
  Z3_dec_ref(a1, v20);
  Z3_dec_ref(a1, v7);
  if ( v21 )
    sub_2BB620(v10);
  if ( v27 != v29 )
    operator delete(v27, v29[0] + 1LL);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v11, &v24);
  if ( v21 )
    goto LABEL_13;
  return v10;
}

