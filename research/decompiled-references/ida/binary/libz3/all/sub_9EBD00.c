__int64 __fastcall sub_9EBD00(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 result; // rax
  void *v6; // r12
  char *v7; // rdx
  char *v8; // rax
  unsigned int v9; // [rsp+0h] [rbp-15Ch]
  _BYTE v10[16]; // [rsp+4h] [rbp-158h] BYREF
  _BYTE v11[16]; // [rsp+14h] [rbp-148h] BYREF
  void *ptr; // [rsp+24h] [rbp-138h] BYREF
  __int64 v13; // [rsp+2Ch] [rbp-130h]
  _BYTE v14[296]; // [rsp+34h] [rbp-128h] BYREF

  if ( a2 == a3 )
    return 1;
  if ( !(unsigned __int8)sub_98AD60(a2) )
    return 0;
  ptr = v14;
  v13 = 0x1000000000LL;
  sub_9EB220((__int64)v10, v4, a2, (__int64)&ptr);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v10);
  sub_182CBA0(v6, v11);
  v7 = (char *)ptr + 16 * (unsigned int)v13;
  if ( v7 == ptr )
  {
LABEL_13:
    if ( ptr && ptr != v14 )
      sub_186B220(ptr);
    return 0;
  }
  v8 = (char *)ptr;
  while ( *(_QWORD *)v8 != a3 )
  {
    v8 += 16;
    if ( v7 == v8 )
      goto LABEL_13;
  }
  result = *((unsigned int *)v8 + 2);
  if ( ptr )
  {
    if ( ptr != v14 )
    {
      v9 = result;
      sub_186B220(ptr);
      return v9;
    }
  }
  return result;
}

