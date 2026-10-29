unsigned int *__fastcall sub_1F90430(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *result; // rax
  __int64 v7; // [rsp+8h] [rbp-10h] BYREF

  v7 = a3;
  result = (unsigned int *)sub_1F90240(a1 + 1096, &v7, a3, a4, a5, a6);
  if ( *result < a2 )
    *result = a2;
  return result;
}
