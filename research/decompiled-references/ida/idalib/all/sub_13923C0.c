__int64 __fastcall sub_13923C0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *i; // rbp
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 24); i != v1; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3) )
    v3 = *v1++;
  return result;
}
