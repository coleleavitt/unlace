__int64 *__fastcall sub_9CC5A0(__int64 a1)
{
  int v1; // eax
  __int64 *v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = sub_2221120();
  if ( v1 == -1 )
    sub_9CC560(v3, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  else
    sub_9CC560(v3, (__int64 *)(*(_QWORD *)a1 + 8LL * v1), 1);
  return v3[0];
}

