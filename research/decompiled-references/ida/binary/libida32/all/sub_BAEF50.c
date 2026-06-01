__int64 __fastcall sub_BAEF50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6544);
  if ( v4 != sub_BA3380 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 6552);
  if ( v5 != sub_BA3390 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, *(_QWORD *)(a2 + 32));
  if ( !(_BYTE)result )
    return 0;
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) )
      return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 96))(a1);
  }
  return result;
}

