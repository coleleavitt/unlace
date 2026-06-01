void __fastcall sub_97EBE0(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  void *v18; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-70h]
  void *v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-60h]
  void *v22; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+38h] [rbp-50h]
  char v24; // [rsp+3Ch] [rbp-4Ch]
  void *v25; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-40h]

  v6 = sub_8CA760(
         *(__int64 **)(a1 + 192),
         *(_QWORD *)(*(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8) + 8LL));
  v7 = *(unsigned __int8 *)(a2 + 3);
  v8 = *(__int64 **)(a1 + 192);
  v9 = v6;
  v25 = (void *)v6;
  v10 = sub_8CA760(v8, *(_QWORD *)(*(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + v7) + 8LL));
  v11 = *(_QWORD *)(a1 + 184);
  v12 = v10;
  v25 = (void *)v10;
  sub_97E960((__int64)&v18, v11, v9, 0);
  v13 = sub_A24BE0(v9);
  v14 = sub_A24BE0(v12);
  sub_97E960(
    (__int64)&v20,
    *(_QWORD *)(a1 + 184),
    v12,
    ((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v24 = 0;
  v23 = 1;
  v22 = nullptr;
  v15 = sub_2589AE0(&v18, v21);
  if ( a3 )
    sub_258FD20(&v25, &v20, v15);
  else
    sub_258F900(&v25, &v20, v15);
  v16 = v26;
  v17 = *(_QWORD *)(a2 + 8);
  v24 = 1;
  v23 = v26;
  v22 = v25;
  sub_97E3E0(a1, (__int64)&v22, v17);
  if ( v16 > 0x40 && v22 )
    operator delete[](v22);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v19 > 0x40 )
  {
    if ( v18 )
      operator delete[](v18);
  }
}

