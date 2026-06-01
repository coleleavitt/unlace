__int64 __fastcall sub_197F3A0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]

  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  sub_197C7E0((unsigned int *)&ptr, a1, *(_BYTE *)(a2 + 8), *(__int64 **)(a2 + 24), *(_QWORD *)(a2 + 32), a3, a4);
  if ( (unsigned __int8)sub_1AA8E70(
                          *(_QWORD *)(*a1 + 744),
                          *(unsigned __int8 *)(a2 + 8),
                          *(unsigned int *)(a2 + 12),
                          ptr,
                          vars8) )
    v5 = 1;
  else
    v5 = sub_1AA2840(
           *(_QWORD *)(*a1 + 744),
           5,
           *(unsigned int *)(a2 + 12),
           *(unsigned int *)(a2 + 20),
           0,
           0,
           0,
           0,
           4,
           0,
           *(unsigned int *)(a2 + 16),
           ptr,
           vars8,
           0);
  if ( ptr != &ptr )
    free(ptr);
  return v5;
}
