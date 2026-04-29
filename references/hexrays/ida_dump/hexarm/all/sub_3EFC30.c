__int64 __fastcall sub_3EFC30(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax

  if ( sub_3EE080(a1, a2) || sub_3EE2E0(a1, a2) )
    result = sub_3EE210(a1, a2, a3);
  else
    result = get_dtype_size(*(unsigned __int8 *)(a2 + 5));
  if ( (_DWORD)result == 16 )
    return 8;
  return result;
}
