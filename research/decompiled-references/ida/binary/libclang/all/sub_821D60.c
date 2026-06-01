char *__fastcall sub_821D60(__int64 a1, __int64 a2, char a3)
{
  char **v4; // rax
  char *v5; // rbx
  char **v6; // rbp
  char *v7; // rdi
  char *v8; // r12
  char *v9; // rax
  char *v10; // rbx
  char *result; // rax
  void *v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-30h]

  v4 = (char **)sub_6A34F0(a1);
  v5 = *v4;
  v6 = v4;
  if ( *(_BYTE *)(a2 + 12) )
    sub_2587E20(&v12, a2, 64);
  else
    sub_2587E80(&v12, a2, 64);
  v7 = (char *)v12;
  if ( v13 > 0x40 )
  {
    v8 = *(char **)v12;
    if ( v12 )
      operator delete[](v12);
    v7 = v8;
  }
  v9 = v5;
  v10 = &v5[(_QWORD)v7];
  result = (char *)(v9 - v7);
  if ( a3 )
    v10 = result;
  *v6 = v10;
  return result;
}

