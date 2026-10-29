__int64 __fastcall sub_7BEFF0(unsigned __int64 *a1, __int64 a2, const char *a3, size_t a4, unsigned __int8 a5)
{
  __int64 v5; // r9
  __int64 result; // rax

  v5 = *(_QWORD *)(a2 + 1736);
  *a1 = -1;
  result = (__int64)a1;
  if ( *(_QWORD *)v5 )
    return sub_7B2560(
             *(_QWORD *)v5,
             (__int8 *)a2,
             a1,
             a3,
             a4,
             a5,
             *(void (__fastcall **)(__int8 *, __int64))(v5 + 2128));
  return result;
}
