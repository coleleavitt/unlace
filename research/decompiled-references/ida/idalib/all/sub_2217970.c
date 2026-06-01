__int64 *__fastcall sub_2217970(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 *v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v4 = sub_2244E60(a1, a2, a3, a4);
  if ( v4 == -1 )
    sub_2217930(v6, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  else
    sub_2217930(v6, (__int64 *)(*(_QWORD *)a1 + 8LL * v4), 1);
  return v6[0];
}
