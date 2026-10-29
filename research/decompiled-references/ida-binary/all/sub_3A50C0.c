__int64 __fastcall add_type_form_data_t__::vfunc_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 292);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 100, a1 + 292);
  return result;
}
