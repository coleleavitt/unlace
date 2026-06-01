__int64 __fastcall sub_BAE1C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*a1 + 232);
  if ( v3 != sub_BA1BC0 )
  {
    result = v3();
    if ( !(_BYTE)result )
      return result;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6648);
  result = 1;
  if ( v4 != sub_BA3450 )
    return ((__int64 (__fastcall *)(__int64 *, __int64))v4)(a1, a2);
  return result;
}

