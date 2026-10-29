__int64 __fastcall sub_21B14F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  void (*v3)(void); // rax
  __int64 result; // rax

  v2 = *a2;
  v3 = *(void (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v3 != (char *)sub_21B1110 )
    v3();
  result = 2 * (9LL * *(unsigned __int8 *)(v2 + 17) + 9);
  *a2 += result;
  return result;
}
