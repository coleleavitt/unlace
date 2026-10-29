__int64 __fastcall sub_1391F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *i; // r13
  __int64 v6; // rdi
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = *(__int64 **)(a1 + 16);
        i != v3;
        result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 216LL))(v6, a2, a3) )
  {
    v6 = *v3++;
  }
  return result;
}
