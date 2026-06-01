void __fastcall sub_E15120(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *exception; // rbx
  unsigned int v5; // eax
  void *v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1[26];
  if ( a1[17] == v3 )
  {
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0
      && *(_DWORD *)(a3 + 16) == 1
      && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, a3)
      && !((unsigned __int64)sub_182D020(qword_1C7F2C0, a3) >> 32) )
    {
      *(_DWORD *)(a2 + 260) = sub_182D020(qword_1C7F2C0, a3);
      return;
    }
LABEL_22:
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "option value is too big to fit in a machine integer.");
    goto LABEL_23;
  }
  if ( a1[24] == v3 )
  {
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0
      && *(_DWORD *)(a3 + 16) == 1
      && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, a3)
      && !((unsigned __int64)sub_182D020(qword_1C7F2C0, a3) >> 32) )
    {
      *(_DWORD *)(a2 + 112) = sub_182D020(qword_1C7F2C0, a3);
      return;
    }
    goto LABEL_22;
  }
  if ( v3 == a1[18] )
  {
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0
      && *(_DWORD *)(a3 + 16) == 1
      && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, a3)
      && !((unsigned __int64)sub_182D020(qword_1C7F2C0, a3) >> 32) )
    {
      v5 = sub_182D020(qword_1C7F2C0, a3);
      sub_180B120(v5);
      return;
    }
    goto LABEL_22;
  }
  if ( v3 == a1[5]
    || v3 == a1[6]
    || v3 == a1[7]
    || v3 == a1[8]
    || v3 == a1[9]
    || v3 == a1[10]
    || v3 == a1[11]
    || v3 == a1[12]
    || v3 == a1[13]
    || v3 == a1[15]
    || v3 == a1[16]
    || v3 == a1[19]
    || v3 == a1[20]
    || v3 == a1[14] )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "option value is not a numeral");
LABEL_23:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_1850940(&v9, qword_1C7F2C0, a3);
  sub_17FBCF0(a1 + 26, v9);
  sub_1808490();
  sub_DF7AE0(a2);
  if ( v9 != &v10 )
    operator delete(v9, v10 + 1);
}

