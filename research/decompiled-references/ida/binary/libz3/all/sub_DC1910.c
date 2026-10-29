__int64 __fastcall sub_DC1910(__int64 a1, unsigned int a2)
{
  int v2; // eax
  void *v4; // rbp
  int v5; // eax
  _QWORD *v6; // rbp
  unsigned int v7; // ebp
  void *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *exception; // rbx
  int v11; // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+4h] [rbp-44h]
  __int64 v13; // [rsp+8h] [rbp-40h]
  int v14; // [rsp+10h] [rbp-38h] BYREF
  char v15; // [rsp+14h] [rbp-34h]
  __int64 v16; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 1424);
  if ( v2 == 2 )
    return a2;
  if ( v2 != 6 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid push command, integer expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v12 &= 0xFCu;
  v15 &= 0xFCu;
  v11 = 0;
  v4 = qword_1C7F2C0;
  v13 = 0;
  v14 = 1;
  v16 = 0;
  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v11, a1 + 56);
  else
    v11 = *(_DWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
  {
    sub_182C690(v4, &v14, a1 + 72);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 72);
    v15 &= ~1u;
    v14 = v5;
  }
  if ( v11 < 0 )
  {
    v9 = __cxa_allocate_exception(0x30u);
    sub_305660(v9, "invalid push command, value is negative.");
    __cxa_throw(v9, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( (v15 & 1) != 0
    || v14 != 1
    || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, &v11)
    || (unsigned __int64)sub_182D020(qword_1C7F2C0, &v11) >> 32 )
  {
    v6 = __cxa_allocate_exception(0x30u);
    sub_305660(v6, "invalid push command, value is too big to fit in an unsigned machine integer");
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v7 = sub_182D020(qword_1C7F2C0, &v11);
  if ( *(_DWORD *)(a1 + 1424) != 9 )
    sub_DC0980(a1);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v11);
  sub_182CBA0(v8, &v14);
  return v7;
}

