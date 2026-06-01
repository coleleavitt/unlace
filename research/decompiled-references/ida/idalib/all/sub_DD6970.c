__int64 __fastcall sub_DD6970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  void *v6; // rbp
  __int64 v7; // rbx
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  void *v13; // rdi
  void *v14; // rbx
  __int64 v15; // rax
  void *v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-50h]
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_E21760(v4, 16);
  v6 = *(void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  sub_E21790(v4, 16);
  v19 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v8 = (unsigned __int8 **)sub_E33D20(a1, &v19, 2417, 0);
  if ( v8 )
  {
    v9 = v8;
    sub_AE9DF0(v8, 2, 2u);
    v10 = sub_E32240(a1);
    sub_AE9DF0(v9, (*(_BYTE *)(v10 + 1) & 8) != 0, 3u);
  }
  else
  {
    sub_E32240(a1);
  }
  v11 = *(_QWORD *)(a1 + 176);
  v12 = ((unsigned __int64)(unsigned int)v7 + 63) >> 6;
  if ( v12 == 1 )
  {
    v18 = v7;
    if ( (unsigned int)v7 <= 0x40 )
    {
      v17 = v6;
      goto LABEL_6;
    }
    sub_2205470(&v17, v6, 0);
  }
  else
  {
    sub_2205610(&v17, (unsigned int)v7, v12, v6);
  }
  if ( v18 > 0x40 )
  {
    sub_2206A40(&v19, &v17);
    v14 = v19;
    if ( v20 <= 0x40 )
      goto LABEL_9;
    v13 = v19;
    v14 = *(void **)v19;
    goto LABEL_8;
  }
LABEL_6:
  sub_2206CD0(&v19, &v17, 64);
  v13 = v19;
  v14 = v19;
  if ( v20 > 0x40 )
  {
    v14 = *(void **)v19;
    if ( v19 )
LABEL_8:
      operator delete[](v13);
  }
LABEL_9:
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  v15 = sub_E216C0(v11, 48);
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 24) = 1;
  *(_QWORD *)(v15 + 40) = v14;
  *(_QWORD *)(v15 + 32) = a3;
  return 1;
}
