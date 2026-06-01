__int64 __fastcall sub_4E1930(_QWORD **a1)
{
  unsigned __int64 v1; // rax
  __int64 *v3; // rsi

  v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[50])(a1);
  if ( v1 == -1 )
    return 0;
  v3 = sub_4E07A0(a1[2], v1);
  if ( !v3 )
    return 0;
  else
    return ((__int64 (__fastcall *)(_QWORD **, __int64 *))(*a1)[52])(a1, v3);
}
