std::_V2 *__fastcall sub_FD9890(std::_V2 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  std::_V2 *v10; // rdi
  char *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _QWORD v17[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !a4 )
  {
    v6 = std::_V2::generic_category(a1);
    v7 = 2;
LABEL_3:
    sub_2220500(v17, v7, v6);
    v8 = v17[0];
    *((_BYTE *)a1 + 8) |= 1u;
    *(_QWORD *)a1 = v8;
    return a1;
  }
  v10 = (std::_V2 *)(unsigned int)*(char *)(a3 + a4 - 1);
  if ( (unsigned __int8)sub_228ACA0(v10, 0) )
  {
    v6 = std::_V2::generic_category(v10);
    v7 = 21;
    goto LABEL_3;
  }
  v14 = (char *)sub_228A4B0(a3, a4, 0);
  v16 = v15;
  if ( !v15 )
  {
    v14 = ".";
    v16 = 1;
  }
  sub_FD9440((__int64)a1, a2, v14, v16, a5);
  return a1;
}
