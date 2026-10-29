__int64 __fastcall sub_13919F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *i; // r14
  __int64 v8; // rdi
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 8);
  for ( i = *(__int64 **)(a1 + 16);
        i != v4;
        result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, a2, a3, a4) )
  {
    v8 = *v4++;
  }
  return result;
}
