__int64 __fastcall sub_5170(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 eah; // r14

  if ( !a5 )
    return 0;
  eah = get_eah();
  result = get_data_value();
  if ( !(_BYTE)result )
    return 0;
  *a2 = 0;
  *a1 = *(_QWORD *)(eah + 16) & a5;
  return result;
}
