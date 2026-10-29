__int64 __fastcall sub_BC9CB0(__int64 **a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(void); // rdx
  __int64 (*v6)(); // rdx
  __int64 result; // rax

  v3 = *a1;
  v4 = *v3;
  v5 = *(__int64 (**)(void))(*v3 + 224);
  if ( v5 != sub_BC58F0 )
  {
    result = v5();
    if ( !(_BYTE)result )
      return result;
    v3 = *a1;
    v4 = **a1;
  }
  v6 = *(__int64 (**)())(v4 + 5248);
  result = 1;
  if ( v6 != sub_BC6A50 )
    return ((__int64 (__fastcall *)(__int64 *, __int64))v6)(v3, a2);
  return result;
}
