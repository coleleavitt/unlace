__int64 __fastcall sub_5AF8B0(_QWORD *a1, __int64 *a2, __int64 *a3, __m128i a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  void *v10; // r13
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 *v14; // rax
  void (***v15)(void); // rdi
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rax
  void (***v19)(void); // r15
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 (__fastcall *v22)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 *v27; // [rsp+8h] [rbp-38h]

  v5 = (__int64)a2;
  v6 = a2[1];
  v7 = a1[4];
  v27 = a3;
  if ( v7 == v6 )
  {
    v13 = a3[1];
    if ( v7 == v13 )
    {
      v10 = nullptr;
      v12 = nullptr;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(v7 + 40) != v13 )
    {
      v12 = (__int64 *)sub_5A6170(v7, (__int64)a3, a4);
      v10 = nullptr;
      goto LABEL_11;
    }
    v27 = (__int64 *)sub_5A64A0(v7, a3, a4);
    v12 = v27;
    goto LABEL_31;
  }
  if ( v6 == *(_QWORD *)(v7 + 40) )
  {
    v24 = sub_5A64A0(v7, a2, a4);
    v25 = a1[4];
    v5 = v24;
    v26 = v27[1];
    if ( v26 == v25 )
    {
      v10 = (void *)v5;
      v12 = nullptr;
    }
    else
    {
      if ( v26 != *(_QWORD *)(v25 + 40) )
      {
        v12 = (__int64 *)sub_5A6170(v25, (__int64)v27, a4);
        v10 = (void *)v5;
        goto LABEL_11;
      }
      v27 = (__int64 *)sub_5A64A0(v25, v27, a4);
      v10 = (void *)v5;
      v12 = v27;
    }
LABEL_19:
    v15 = (void (***)(void))a1[5];
    if ( v15 )
      goto LABEL_20;
    goto LABEL_14;
  }
  v8 = sub_5A6170(v7, (__int64)a2, a4);
  v9 = a1[4];
  v10 = (void *)v8;
  v11 = v27[1];
  if ( v9 == v11 )
  {
    if ( v10 )
      v5 = (__int64)v10;
    v12 = nullptr;
    goto LABEL_19;
  }
  if ( v11 == *(_QWORD *)(v9 + 40) )
  {
    v27 = (__int64 *)sub_5A64A0(v9, v27, a4);
    v12 = v27;
    if ( v10 )
    {
      v5 = (__int64)v10;
      goto LABEL_19;
    }
LABEL_31:
    v10 = nullptr;
    goto LABEL_19;
  }
  v12 = (__int64 *)sub_5A6170(v9, (__int64)v27, a4);
  if ( v10 )
    v5 = (__int64)v10;
LABEL_11:
  v14 = v27;
  v15 = (void (***)(void))a1[5];
  if ( v12 )
    v14 = v12;
  v27 = v14;
  if ( !v15 )
  {
LABEL_14:
    v16 = a1[2];
    if ( v16 )
      v17 = *(_DWORD *)(v16 - 4);
    else
      v17 = 0;
    v18 = sub_4C4750(*(_QWORD *)(a1[4] + 24LL), v5, (__int64)v27, v17, v16, a1[3], 0);
    v15 = (void (***)(void))a1[5];
    v19 = (void (***)(void))v18;
    if ( (void (***)(void))v18 != v15 )
    {
      sub_4CFDD0(v15);
      a1[5] = v19;
      v15 = v19;
    }
  }
LABEL_20:
  v20 = ((__int64 (__fastcall *)(void (***)(void), __int64, __int64 *))(*v15)[2])(v15, v5, v27);
  if ( v12 )
  {
    v21 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*v12 + 16);
    if ( v21 == sub_4C9C10 )
    {
      (*(void (__fastcall **)(__int64 *))*v12)(v12);
      sub_186B220(v12);
    }
    else
    {
      v21((void (__fastcall ***)(_QWORD))v12);
    }
  }
  if ( v10 )
  {
    v22 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v10 + 16LL);
    if ( v22 == sub_4C9C10 )
    {
      (**(void (__fastcall ***)(void *))v10)(v10);
      sub_186B220(v10);
    }
    else
    {
      v22((void (__fastcall ***)(_QWORD))v10);
    }
  }
  return v20;
}

