char *__fastcall sub_BEE2C0(__int64 a1, __int64 a2, char a3)
{
  __int64 *v4; // r12
  __int64 v5; // rbx
  char *v6; // rbp
  __int64 v7; // rax
  char *v8; // rbx
  char *result; // rax
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]

  v4 = (__int64 *)sub_A2D340(a1);
  v5 = *v4;
  if ( *(_BYTE *)(a2 + 12) )
    sub_21E3050(&v10, a2, 64);
  else
    sub_21E30A0(&v10, a2, 64);
  v6 = (char *)v10;
  if ( v11 > 0x40 )
  {
    v6 = *(char **)v10;
    operator delete[](v10);
  }
  v7 = v5;
  v8 = &v6[v5];
  result = (char *)(v7 - (_QWORD)v6);
  if ( a3 )
    v8 = result;
  *v4 = (__int64)v8;
  return result;
}

