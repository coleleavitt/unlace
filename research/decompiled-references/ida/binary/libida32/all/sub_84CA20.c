_QWORD *__fastcall sub_84CA20(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v3; // r9
  _QWORD *result; // rax

  v2 = *(unsigned int **)a1;
  if ( *(_DWORD *)(a1 + 168) == 2 )
    v3 = *(int *)(a1 + 96);
  else
    v3 = *(int *)(a1 + 80);
  sub_847F60(*(unsigned int **)a1, 32, 3, 0, 142, v3);
  sub_847F60(v2, 32, 1, 0, 127, -2);
  sub_847F60(v2, 32, 12, 0, 137, 16);
  sub_847F60(v2, 32, 137, 40, 3, 0);
  sub_847F60(v2, 32, 2, 0, 137, 32);
  sub_849F80(v2, 0x42u, 3, 0, 3, 0, 0xCu, 0);
  sub_847F60(v2, 32, 130, 120, 3, 0);
  sub_849F80(v2, 0x42u, 13, 0, 13, 0, 0xCu, 0);
  sub_847F60(v2, 32, 130, 128, 13, 0);
  result = sub_8452F0((__int64)v2, 36);
  if ( a2 )
  {
    if ( result )
    {
      result[2] &= ~1uLL;
      result[3] = a2;
    }
  }
  return result;
}

