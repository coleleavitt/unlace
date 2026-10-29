unsigned int *__fastcall sub_6958C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(); // r12
  __int64 v5; // rbp
  bool v6; // al
  __int64 (__fastcall *v8)(); // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, __int64); // r12
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 (__fastcall *v14)(__int64); // r13
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int *v17; // [rsp+18h] [rbp-30h] BYREF

  if ( !a3 )
  {
    v8 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
    if ( v8 == sub_697010 )
    {
      v16 = a2;
      *(_BYTE *)(a1 + 4544) &= sub_68DE10(a1, a2);
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      return sub_68D130((unsigned int **)(a1 + 4408), &v16);
    }
    return (unsigned int *)((__int64 (__fastcall *)(__int64))v8)(a1);
  }
  ++*(_DWORD *)(a3 + 8);
  v16 = a3;
  sub_68D130((unsigned int **)(a1 + 4424), &v16);
  if ( !*(_BYTE *)(a1 + 4544) )
  {
LABEL_3:
    *(_BYTE *)(a1 + 4544) = 0;
    v4 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
    v5 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    if ( v4 == sub_697010 )
    {
      v6 = sub_68DE10(a1, v5);
      v16 = v5;
      *(_BYTE *)(a1 + 4544) &= v6;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      return sub_68D130((unsigned int **)(a1 + 4408), &v16);
    }
    v8 = v4;
    return (unsigned int *)((__int64 (__fastcall *)(__int64))v8)(a1);
  }
  if ( sub_68D010(a2) && sub_68D010(a3) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL);
    sub_15EC2C0(v13, a3);
    sub_15E1B70(v13);
    return (unsigned int *)v14(a1);
  }
  else
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_3;
    v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v9 || *v9 || v9[1] != 6 || !sub_68DE10(a1, a2) || !sub_68D010(a3) )
      goto LABEL_3;
    v16 = *(_QWORD *)(a1 + 8);
    v10 = sub_15EC2C0(v16, a3);
    v15 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v17 = nullptr;
    sub_68D130(&v17, &v15);
    sub_3A6490((__int64)&v16, *(_DWORD *)(a2 + 24), (__int64 *)(a2 + 32));
    v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 144LL);
    v12 = sub_15E1AF0(*(_QWORD *)(a1 + 8));
    v11(a1, v12);
    return (unsigned int *)sub_2334C0(&v16);
  }
}

