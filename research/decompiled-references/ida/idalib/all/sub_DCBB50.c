__int64 __fastcall sub_DCBB50(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD *v14; // rdi
  __int64 (*v15)(void); // rdx
  _QWORD **v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 *v22; // rsi
  unsigned __int8 **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int8 **v27; // r12
  unsigned int v28; // eax
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v32; // [rsp+0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+Ch] [rbp-44h] BYREF
  char v34; // [rsp+14h] [rbp-3Ch]

  if ( a3 == a4 )
    return 1;
  v12 = *(_QWORD **)(a1 + 24);
  v13 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL);
  if ( v13 != sub_D8A670 )
    goto LABEL_11;
  v14 = (_QWORD *)v12[3];
  v15 = *(__int64 (**)(void))(*v14 + 104LL);
  if ( (char *)v15 != (char *)v13 )
  {
    v19 = v15();
    goto LABEL_6;
  }
  v16 = (_QWORD **)v14[3];
  v13 = (__int64 (__fastcall *)(__int64))(*v16)[13];
  if ( (char *)v13 == (char *)v15 )
    v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 104LL))(v16[3]);
  else
LABEL_11:
    v19 = ((__int64 (*)(void))v13)();
LABEL_6:
  v21 = sub_CEF7B0(a5, v19, v17, v18, v20);
  v22 = &v32;
  v32 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v23 = (unsigned __int8 **)sub_E33BA0(a1, &v32, 2446, 0);
  v27 = v23;
  if ( v23 )
  {
    sub_AE9DF0(v23, a4, 2u);
    sub_AE9DF0(v27, a3, 2u);
    v22 = (__int64 *)v21;
    sub_AE9DF0(v27, v21, 8u);
  }
  v28 = sub_C00A40(a6, (__int64)v22, v24, v25, v26);
  v29 = (__int64 *)sub_E33DB0(a1, v28, 2408);
  v30 = sub_EEC8C0(a6);
  if ( v29 )
  {
    v33 = v30;
    v34 = 1;
    sub_AEC610(v29, &v33);
  }
  return 0;
}
