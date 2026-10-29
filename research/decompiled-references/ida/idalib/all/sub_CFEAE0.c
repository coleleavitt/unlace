__int64 __fastcall sub_CFEAE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  void *v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  void *v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-30h]

  v4 = sub_21F8CF0(*(unsigned int *)(a2 + 8));
  v5 = sub_21F9120(v4);
  v6 = sub_21F8CF0(*(unsigned int *)(a2 + 8));
  v7 = (unsigned int)sub_21F9120(v6);
  v9 = sub_21F90D0(v6, a2, v8);
  if ( (unsigned __int64)(v7 + 63) >> 6 == 1 )
  {
    v10 = *(void **)a2;
    v16 = v5;
    if ( v5 > 0x40 )
      sub_2205470(&v15, v10, 0);
    else
      v15 = v10;
  }
  else
  {
    v13 = sub_21F8CF0(*(unsigned int *)(a2 + 8));
    v14 = sub_21F9120(v13);
    sub_2205610(&v15, v5, ((unsigned __int64)v14 + 63) >> 6, *(_QWORD *)a2);
  }
  v11 = sub_21F8CF0(*(unsigned int *)(a2 + 8));
  if ( v9 == v11 )
    sub_21FFDA0(a1, v9, &v15);
  else
    sub_21FF7D0(a1, v11, &v15);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  return a1;
}
