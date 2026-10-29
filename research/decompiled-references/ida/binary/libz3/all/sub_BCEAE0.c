__int64 __fastcall sub_BCEAE0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r13
  _BYTE *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  _BYTE *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v25[104]; // [rsp+10h] [rbp-68h] BYREF

  v7 = *(_QWORD *)(a2 + 24);
  if ( !v7 || *(_DWORD *)(a1 + 56) != *(_DWORD *)v7 || *(_DWORD *)(v7 + 4) )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL) )
    {
      v22 = sub_163B390(a1 + 32, 97);
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      sub_BB0560(*a3, a3[1]);
      *a3 = v23;
      v14 = sub_163B390(a1 + 32, 98);
      if ( !v14 )
        goto LABEL_13;
      goto LABEL_12;
    }
    return 0;
  }
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v9 + 8) != 1 )
    sub_DBF6E(0);
  if ( *(_QWORD *)v9 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL) )
  {
    v15 = a1 + 64;
    sub_18007F0(ptr, "a");
    v16 = sub_1648610(a1 + 64, ptr);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    sub_BB0560(*a3, a3[1]);
    v18 = ptr[0];
    *a3 = v17;
    if ( v18 != v25 && v18 )
      sub_186B220(v18);
    sub_18007F0(ptr, "b");
    v19 = sub_1648610(v15, ptr);
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    sub_BB0560(*a4, a4[1]);
    v21 = ptr[0];
    *a4 = v20;
    if ( v21 && v21 != v25 )
      sub_186B220(v21);
    return 1;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 56LL))(
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)v9,
          a3) )
    return 0;
  v10 = *(_QWORD *)(a1 + 72);
  ptr[0] = (void *)*a3;
  v11 = sub_15E1AF0(v10);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  sub_BB0560(*a3, a3[1]);
  *a3 = v12;
  v13 = *(_QWORD *)(a1 + 72);
  ptr[0] = (void *)*a4;
  v14 = sub_15E1AF0(v13);
  if ( !v14 )
    goto LABEL_13;
LABEL_12:
  ++*(_DWORD *)(v14 + 8);
LABEL_13:
  sub_BB0560(*a4, a4[1]);
  *a4 = v14;
  return 1;
}

