__int64 __fastcall sub_669800(_QWORD *a1, signed int a2)
{
  char *v2; // r12
  int v3; // edx
  __int64 result; // rax
  int v5; // edx

  v2 = (char *)a1 + 2556;
  v3 = sub_79B3A0((char *)a1 + 2556, *a1, 4294967294LL, 65);
  result = 1;
  if ( a2 < v3 )
  {
    v5 = sub_79B3A0(v2, *a1, 0xFFFFFFFFLL, 65);
    result = 4;
    if ( a2 < v5 )
      return (unsigned int)((unsigned __int8)sub_79B3A0(v2, *a1, (unsigned int)a2, 4176) == 0) + 2;
  }
  return result;
}

