void __fastcall sub_11BFAE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  _BYTE *v11; // rax
  signed __int64 v12; // rdx
  char *v13; // rax
  signed __int64 v14; // rdx
  __int64 (*v15)(); // rax
  unsigned __int8 *v16[17]; // [rsp+0h] [rbp-88h] BYREF

  v8 = sub_10DE660(a3, 0xAE7u, 0xA6Bu);
  if ( v8 )
  {
    v9 = v8;
    if ( (unsigned int)(*(_DWORD *)(a5 + 32) - 3) > 2 )
    {
      sub_FC70B0((__int64)v16, *a1, 0, 570);
      v11 = (_BYTE *)sub_22B7480(a5);
      sub_AEC220(v16, v11, v12);
      v13 = (char *)sub_11BA9E0(*(_QWORD *)v9, *(_QWORD **)(v9 + 8));
      sub_AEC220(v16, v13, v14);
      sub_AEA040((__int64)v16);
      return;
    }
    v10 = a4;
    if ( !(unsigned __int8)sub_21B9810(v8, 2791) )
    {
      sub_10DC5D0(a4, (__int64)"-target-feature");
      sub_10DC5D0(a4, (__int64)"-outline-atomics");
      return;
    }
LABEL_11:
    sub_10DC5D0(v10, (__int64)"-target-feature");
    sub_10DC5D0(a4, (__int64)"+outline-atomics");
    return;
  }
  if ( (unsigned int)(*(_DWORD *)(a5 + 32) - 3) <= 2 )
  {
    v15 = *(__int64 (**)())(*(_QWORD *)a2 + 352LL);
    if ( v15 != sub_10D81F0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v15)(a2, a3) )
      {
        v10 = a4;
        goto LABEL_11;
      }
    }
  }
}
