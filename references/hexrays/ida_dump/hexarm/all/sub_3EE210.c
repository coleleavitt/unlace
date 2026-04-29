__int64 __fastcall sub_3EE210(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // ecx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
  {
    v4 = *(char *)(a2 + 32) - 1;
    if ( v4 > 4 )
      sub_3EACF0(a3, a1, a2);
    return (unsigned int)(1 << v4);
  }
  else
  {
    if ( !sub_3EDFE0(a1, a2) )
      sub_3EAD10(a3, a1, a2);
    return get_dtype_size(*(unsigned __int8 *)(a2 + 5));
  }
}
