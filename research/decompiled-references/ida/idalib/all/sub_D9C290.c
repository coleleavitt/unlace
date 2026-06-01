__int64 __fastcall sub_D9C290(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  unsigned __int8 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD **v11; // rdi
  char v12; // al
  __int64 v13; // r12
  _QWORD *v14; // r13
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 *v20; // rsi
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned int v24; // r13d
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // esi
  int v34; // r8d
  __int64 v35; // r9
  unsigned __int64 v36; // [rsp+8h] [rbp-A0h]
  unsigned __int8 **v37; // [rsp+8h] [rbp-A0h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  unsigned __int8 v39; // [rsp+1Fh] [rbp-89h]
  void *v40[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v41; // [rsp+30h] [rbp-78h] BYREF
  __m128 v42; // [rsp+40h] [rbp-68h] BYREF
  int v43; // [rsp+58h] [rbp-50h]
  _QWORD *v44; // [rsp+60h] [rbp-48h]
  __int64 v45; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 24);
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
  if ( v7 != sub_CF0250 )
    goto LABEL_24;
  v8 = (_QWORD *)v6[3];
  v9 = *(unsigned __int8 (**)(void))(*v8 + 24LL);
  if ( (char *)v9 != (char *)v7 )
    goto LABEL_22;
  v10 = (_QWORD *)v8[3];
  v7 = *(__int64 (__fastcall **)(__int64))(*v10 + 24LL);
  if ( (char *)v7 != (char *)v9 )
  {
LABEL_24:
    v12 = ((__int64 (*)(void))v7)();
LABEL_6:
    if ( !v12 )
      goto LABEL_7;
LABEL_23:
    v26 = *(_QWORD *)(a1 + 176);
    v24 = 0;
    v27 = sub_E21760(v26, 48);
    sub_E232A0(v27);
    sub_E21790(v26, 48);
    return v24;
  }
  v11 = (_QWORD **)v10[3];
  v9 = (unsigned __int8 (*)(void))(*v11)[3];
  if ( (char *)v9 == (char *)v7 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 24LL))(v11[3]);
    goto LABEL_6;
  }
LABEL_22:
  if ( v9() )
    goto LABEL_23;
LABEL_7:
  if ( !sub_E21DE0(a1, "deallocate", 10) )
  {
    sub_E33C10(a1, a3, 108, 0);
    v31 = *(_QWORD *)(a1 + 176);
    v24 = 1;
    v32 = sub_E21760(v31, 48);
    sub_E232A0(v32);
    sub_E21790(v31, 48);
    return v24;
  }
  v13 = *(_QWORD *)(a1 + 176);
  sub_E21760(v13, 48);
  sub_E23260(&v42);
  sub_E21790(v13, 48);
  switch ( v43 )
  {
    case 0:
      v14 = v44;
      if ( v44 )
      {
LABEL_10:
        v15 = (_QWORD *)v14[4];
        goto LABEL_11;
      }
LABEL_31:
      sub_E33C90(a1, a3, 2398, 0);
      v24 = 1;
      sub_E232A0(&v42);
      return v24;
    case 2:
      if ( !v44 )
        goto LABEL_31;
LABEL_45:
      BUG();
    case 3:
      goto LABEL_45;
  }
  if ( !(v42.m128_u64[0] | v45) )
    goto LABEL_31;
  v14 = v44;
  v15 = v44;
  if ( v43 != 1 )
    goto LABEL_10;
LABEL_11:
  v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*v15 & 2) == 0 )
    v16 = 0;
  if ( !*((_BYTE *)v14 + 28) )
  {
    v37 = (unsigned __int8 **)sub_E33C10(a1, a3, 2400, 0);
    v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E29020(v40, &v42, v28);
    if ( v37 )
      sub_AEC220(v37, (_BYTE *)v40[0], (signed __int64)v40[1]);
    if ( v40[0] != &v41 )
      operator delete(v40[0]);
    v29 = *(_QWORD *)sub_CFDF60((__int64)&v42);
    if ( (v29 & 2) == 0 )
    {
      v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v30 )
        sub_E33DB0(a1, *(unsigned int *)(v30 + 24), 103);
    }
  }
  sub_E232A0(&v42);
  v17 = *(_QWORD *)(a1 + 48);
  v38 = v14[4];
  v18 = *(unsigned int *)(a1 + 64);
  if ( !(_DWORD)v18 )
    goto LABEL_44;
  v19 = (v18 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
  v20 = (__int64 *)(v17 + 80LL * v19);
  v21 = *v20;
  if ( v16 != *v20 )
  {
    v33 = 1;
    if ( v21 != -4096 )
    {
      do
      {
        v34 = v33 + 1;
        v19 = (v18 - 1) & (v33 + v19);
        v20 = (__int64 *)(v17 + 80LL * v19);
        v35 = *v20;
        if ( v16 == *v20 )
          goto LABEL_16;
        v33 = v34;
      }
      while ( v35 != -4096 );
    }
LABEL_44:
    sub_D9C220(&v42, (_QWORD *)(v17 + 80 * v18), (_QWORD *)(v17 + 80 * v18), a1 + 48, 1);
    v22 = v42.m128_u64[0];
    goto LABEL_17;
  }
LABEL_16:
  sub_D9C220(&v42, v20, (_QWORD *)(v17 + 80 * v18), a1 + 48, 1);
  v22 = v42.m128_u64[0];
LABEL_17:
  v36 = v22;
  v23 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL * *(unsigned int *)(a1 + 64));
  sub_D9C220(&v42, v23, v23, a1 + 48, 1);
  if ( v42.m128_u64[0] != v36 )
    v39 = *(_BYTE *)(v36 + 72);
  v24 = sub_DAEE00(a1 + 48, v16, v14, a1);
  if ( (_BYTE)v24 )
  {
    return (unsigned int)sub_DCBB50(a1, a2, v39, 2, v38, v16);
  }
  else
  {
    v42.m128_u64[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    sub_E33BA0(a1, &v42, 2405, 0);
  }
  return v24;
}
