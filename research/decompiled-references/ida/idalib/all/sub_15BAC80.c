__int64 __fastcall sub_15BAC80(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // eax
  __int64 *v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = sub_2244B30("__handle", 8);
  v2 = sub_2244E60(a1 + 40, "__handle", 8, v1);
  if ( v2 == -1 )
    sub_15BAC40(v4, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(a1 + 48)), 1);
  else
    sub_15BAC40(v4, (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL * v2), 1);
  return *(_QWORD *)(*v4[0] + 8);
}
