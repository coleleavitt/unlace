__int64 __fastcall sub_195F150(__int64 **a1, __m128 a2, __m128 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax

  v3 = a1[1];
  v4 = sub_B780B0(*a1[2]);
  v5 = *a1;
  result = sub_195EBE0(v3, v4, 0, a2, a3, v6, v7, v8);
  *v5 = result;
  return result;
}
