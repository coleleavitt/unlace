__int64 __fastcall sub_54A2B0(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  char *v7; // r15
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12[2]; // [rsp+8h] [rbp-40h]

  v3 = (__int64)&a2[a3 - a1];
  v4 = (__int64)&a2[-a1] >> 7;
  *(_QWORD *)v12 = &a2[-a1];
  if ( (__int64)&a2[-a1] <= 768 )
    return sub_549BE0(a1, a2);
  v7 = (char *)a1;
  do
  {
    v8 = (__int64)v7;
    v7 += 896;
    sub_549BE0(v8, v7);
  }
  while ( a2 - v7 > 768 );
  result = sub_549BE0((__int64)v7, a2);
  if ( *(__int64 *)v12 > 896 )
  {
    v10 = 7;
    do
    {
      sub_5495D0(a1, (__int64)a2, a3, v10);
      v11 = 2 * v10;
      v10 *= 4;
      result = sub_5495D0(a3, v3, a1, v11);
    }
    while ( v4 > v10 );
  }
  return result;
}

