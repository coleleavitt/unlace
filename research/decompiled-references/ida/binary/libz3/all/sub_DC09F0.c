__int64 __fastcall sub_DC09F0(__int64 a1)
{
  void *v1; // r13
  int v2; // eax
  _QWORD *exception; // rbp
  unsigned int v4; // eax
  void *v5; // rbp
  unsigned int v6; // ebx
  int v8; // [rsp+0h] [rbp-48h] BYREF
  char v9; // [rsp+4h] [rbp-44h]
  __int64 v10; // [rsp+8h] [rbp-40h]
  int v11; // [rsp+10h] [rbp-38h] BYREF
  char v12; // [rsp+14h] [rbp-34h]
  __int64 v13; // [rsp+18h] [rbp-30h]

  v9 &= 0xFCu;
  v12 &= 0xFCu;
  v1 = qword_1C7F2C0;
  v8 = 0;
  v10 = 0;
  v11 = 1;
  v13 = 0;
  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v8, a1 + 56);
  else
    v8 = *(_DWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
  {
    sub_182C690(v1, &v11, a1 + 72);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 72);
    v12 &= ~1u;
    v11 = v2;
  }
  if ( (v12 & 1) != 0
    || v11 != 1
    || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, &v8)
    || (unsigned __int64)sub_182D020(qword_1C7F2C0, &v8) >> 32 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid indexed identifier, index is too big to fit in an unsigned machine integer");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v4 = sub_182D020(qword_1C7F2C0, &v8);
  v5 = qword_1C7F2C0;
  v6 = v4;
  sub_182CBA0(qword_1C7F2C0, &v8);
  sub_182CBA0(v5, &v11);
  return v6;
}

