unsigned __int64 *__fastcall sub_5204C0(unsigned __int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v4)(void); // rax
  unsigned __int64 *result; // rax

  v4 = *(__int64 (**)(void))(*a1 + 32);
  if ( (char *)v4 == (char *)sub_3DB7B0 )
    result = a1 + 2;
  else
    result = (unsigned __int64 *)v4();
  if ( a3 >= *result && a3 < result[1] )
  {
    result = (unsigned __int64 *)(*(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, _QWORD))(*a1 + 40))(
                                   a1,
                                   a3,
                                   0);
    if ( (unsigned __int64 *)a3 == result )
      return (unsigned __int64 *)sub_5200A0(a2, *(_QWORD *)(a1[5] + 8 * a3) + 32LL);
  }
  return result;
}
