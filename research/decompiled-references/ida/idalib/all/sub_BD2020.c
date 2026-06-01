__int64 __fastcall sub_BD2020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*a1 + 232);
  if ( v3 != sub_BC5900 )
  {
    result = v3();
    if ( !(_BYTE)result )
      return result;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6616);
  result = 1;
  if ( v4 != sub_BC7150 )
    return ((__int64 (__fastcall *)(__int64 *, __int64))v4)(a1, a2);
  return result;
}
