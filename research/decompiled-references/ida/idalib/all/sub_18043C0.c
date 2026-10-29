__int64 __fastcall sub_18043C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 *i; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  char v12[9]; // [rsp+Fh] [rbp-9h] BYREF

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_2;
  v7 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v8 = (__int64 *)*v7;
  a4 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 < a4 )
  {
    v11 = *v7;
    while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 355 )
    {
      v11 += 8LL;
      if ( a4 == v11 )
        goto LABEL_2;
    }
    if ( a4 == v11 )
      goto LABEL_2;
    return 1;
  }
  if ( v8 != (__int64 *)a4 )
  {
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 355 )
    {
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( v8 == i )
          break;
        v10 = *i;
        if ( *(_WORD *)(v10 + 36) == 355 )
          return 1;
      }
      goto LABEL_2;
    }
    return 1;
  }
LABEL_2:
  result = 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 59 <= 2 )
    return (unsigned int)sub_B67690(a1, (__int64)sub_1804740, (__int64)v12, a4, a5, a6) ^ 1;
  return result;
}
