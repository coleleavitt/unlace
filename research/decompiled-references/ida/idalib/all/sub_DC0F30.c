__int64 __fastcall sub_DC0F30(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD), __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  void *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  char v17; // bl
  __int64 v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+0h] [rbp-68h]
  void *v21; // [rsp+8h] [rbp-60h]
  void *v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-50h]
  void *v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 176);
  v6 = sub_E21760(v5, 16);
  v7 = *(void **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  sub_E21790(v5, 16);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = sub_E21760(v9, 16);
  v21 = *(void **)v10;
  v19 = *(_QWORD *)(v10 + 8);
  sub_E21790(v9, 16);
  v11 = v19;
  v12 = (unsigned int)v19 + 63LL;
  v20 = *(_QWORD *)(a1 + 176);
  v13 = v12 >> 6;
  if ( v13 == 1 )
  {
    v23 = v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      sub_2205470(&v22, v21, 1);
    }
    else
    {
      v22 = v21;
      sub_CF8100((unsigned __int64 *)&v22);
    }
  }
  else
  {
    sub_2205610(&v22, v11, v13, v21);
  }
  v14 = ((unsigned __int64)(unsigned int)v8 + 63) >> 6;
  if ( v14 == 1 )
  {
    v25 = v8;
    if ( (unsigned int)v8 > 0x40 )
    {
      sub_2205470(&v24, v7, 1);
    }
    else
    {
      v24 = v7;
      sub_CF8100((unsigned __int64 *)&v24);
    }
    v15 = sub_2205E20(&v22, &v24);
    if ( v15 >= 0 )
      goto LABEL_8;
LABEL_17:
    v16 = 2;
    goto LABEL_9;
  }
  sub_2205610(&v24, (unsigned int)v8, v14, v7);
  v15 = sub_2205E20(&v22, &v24);
  if ( v15 < 0 )
    goto LABEL_17;
LABEL_8:
  v16 = v15 != 0 ? 3 : 0;
LABEL_9:
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  v17 = a2(a3, v16);
  *(_BYTE *)sub_E216C0(v20, 8) = v17;
  return 1;
}
