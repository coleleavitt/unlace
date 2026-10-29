__int64 __fastcall sub_A4F6B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v5; // rcx

  result = 0;
  v5 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v5 )
    result = *v5;
  *a1 = result;
  a1[1] = a2;
  a1[2] = a3;
  return result;
}
