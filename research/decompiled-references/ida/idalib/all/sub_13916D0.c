__int64 __fastcall sub_13916D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 *v3; // rbx
  __int64 *i; // r13
  __int64 v6; // rdi
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = *(__int64 **)(a1 + 16);
        i != v3;
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, a2, a3) )
  {
    v6 = *v3++;
  }
  return result;
}
