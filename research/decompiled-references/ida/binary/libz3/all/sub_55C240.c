__int64 __fastcall sub_55C240(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // rax
  void *v30; // rdi
  __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 40);
  v4 = *(_QWORD **)(v3 + 40);
  if ( !v4 )
  {
    v16 = (**(__int64 (__fastcall ***)(_QWORD))v3)(*(_QWORD *)(a2 + 40));
    v17 = *(void **)(v3 + 40);
    v4 = (_QWORD *)v16;
    if ( v17 && (void *)v16 != v17 )
      sub_4D63E0(v17);
    *(_QWORD *)(v3 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v6 = v4[5];
  v4 = *(_QWORD **)(v6 + 40);
  if ( !v4 )
  {
    v18 = (**(__int64 (__fastcall ***)(__int64))v6)(v6);
    v19 = *(void **)(v6 + 40);
    v4 = (_QWORD *)v18;
    if ( v19 && (void *)v18 != v19 )
      sub_4D63E0(v19);
    *(_QWORD *)(v6 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v7 = v4[5];
  v4 = *(_QWORD **)(v7 + 40);
  if ( !v4 )
  {
    v20 = (**(__int64 (__fastcall ***)(__int64))v7)(v7);
    v21 = *(void **)(v7 + 40);
    v4 = (_QWORD *)v20;
    if ( (void *)v20 != v21 && v21 )
      sub_4D63E0(v21);
    *(_QWORD *)(v7 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v8 = v4[5];
  v4 = *(_QWORD **)(v8 + 40);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
    if ( v5 != sub_55C240 )
    {
LABEL_19:
      ((void (__fastcall *)(__int64, _QWORD *))v5)(a1, v4);
      return a1;
    }
  }
  else
  {
    v22 = (**(__int64 (__fastcall ***)(__int64))v8)(v8);
    v23 = *(void **)(v8 + 40);
    v4 = (_QWORD *)v22;
    if ( v23 && (void *)v22 != v23 )
      sub_4D63E0(v23);
    v24 = *v4;
    *(_QWORD *)(v8 + 40) = v4;
    v5 = *(__int64 (__fastcall **)())(v24 + 200);
    if ( v5 != sub_55C240 )
      goto LABEL_19;
  }
  v9 = v4[5];
  v4 = *(_QWORD **)(v9 + 40);
  if ( !v4 )
  {
    v29 = (**(__int64 (__fastcall ***)(__int64))v9)(v9);
    v30 = *(void **)(v9 + 40);
    v4 = (_QWORD *)v29;
    if ( v30 && (void *)v29 != v30 )
      sub_4D63E0(v30);
    *(_QWORD *)(v9 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v10 = v4[5];
  v4 = *(_QWORD **)(v10 + 40);
  if ( !v4 )
  {
    v31 = (**(__int64 (__fastcall ***)(__int64))v10)(v10);
    v32 = *(void **)(v10 + 40);
    v4 = (_QWORD *)v31;
    if ( v32 && (void *)v31 != v32 )
      sub_4D63E0(v32);
    *(_QWORD *)(v10 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v11 = v4[5];
  v4 = *(_QWORD **)(v11 + 40);
  if ( !v4 )
  {
    v25 = (**(__int64 (__fastcall ***)(__int64))v11)(v11);
    v26 = *(void **)(v11 + 40);
    v4 = (_QWORD *)v25;
    if ( (void *)v25 != v26 && v26 )
      sub_4D63E0(v26);
    *(_QWORD *)(v11 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v12 = v4[5];
  v4 = *(_QWORD **)(v12 + 40);
  if ( !v4 )
  {
    v27 = (**(__int64 (__fastcall ***)(__int64))v12)(v12);
    v28 = *(void **)(v12 + 40);
    v4 = (_QWORD *)v27;
    if ( (void *)v27 != v28 && v28 )
      sub_4D63E0(v28);
    *(_QWORD *)(v12 + 40) = v4;
  }
  v5 = *(__int64 (__fastcall **)())(*v4 + 200LL);
  if ( v5 != sub_55C240 )
    goto LABEL_19;
  v13 = v4[5];
  v14 = *(_QWORD *)(v13 + 40);
  if ( !v14 )
  {
    v33 = (**(__int64 (__fastcall ***)(__int64))v13)(v13);
    v34 = *(void **)(v13 + 40);
    v14 = v33;
    if ( v34 )
    {
      if ( (void *)v33 != v34 )
      {
        v35 = v33;
        sub_4D63E0(v34);
        v14 = v35;
      }
    }
    *(_QWORD *)(v13 + 40) = v14;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 200LL))(a1);
  return a1;
}

