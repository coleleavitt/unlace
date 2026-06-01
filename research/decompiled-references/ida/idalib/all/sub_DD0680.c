__int64 __fastcall sub_DD0680(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  void *v8; // r13
  unsigned __int64 v9; // rdx
  void *v10; // rdi
  void *v11; // r13
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-50h]
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 176);
  v6 = sub_E21760(v5, 16);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(void **)v6;
  sub_E21790(v5, 16);
  v9 = ((unsigned __int64)(unsigned int)v7 + 63) >> 6;
  if ( v9 == 1 )
  {
    v14 = v7;
    if ( (unsigned int)v7 <= 0x40 )
    {
      v13 = v8;
      goto LABEL_4;
    }
    sub_2205470(&v13, v8, 0);
  }
  else
  {
    sub_2205610(&v13, v7, v9, v8);
  }
  if ( v14 > 0x40 )
  {
    sub_2206A40(&v15, &v13);
    v11 = v15;
    if ( v16 <= 0x40 )
      goto LABEL_7;
    v10 = v15;
    v11 = *(void **)v15;
    goto LABEL_6;
  }
LABEL_4:
  sub_2206CD0(&v15, &v13, 64);
  v10 = v15;
  v11 = v15;
  if ( v16 > 0x40 )
  {
    v11 = *(void **)v15;
    if ( v15 )
LABEL_6:
      operator delete[](v10);
  }
LABEL_7:
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return sub_DCCDD0(a1, a2, a3, v11, 1);
}
