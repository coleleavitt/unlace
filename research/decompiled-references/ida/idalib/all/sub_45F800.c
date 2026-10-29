__int64 __fastcall sub_45F800(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, unsigned __int8); // rax
  __int64 result; // rax

  if ( !a2[34] )
    return 0;
  v2 = sub_4576D0(a2, (__int64)(a1 + 2));
  v3 = a1[13];
  if ( v2 )
  {
    if ( v2[3] != v3 )
    {
      if ( !a1[3] )
        sub_368890();
      sub_368890();
    }
    v4 = *v2;
    v5 = *v2 + 24 * v2[1];
    if ( v5 != *v2 )
    {
      do
      {
        while ( 1 )
        {
          if ( !v3 )
            sub_368890();
          v6 = *(unsigned __int8 *)(v4 + 16);
          v7 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*a1 + 32LL);
          if ( v7 != sub_3DB9D0 )
            break;
          merge_handler_perform_merging(a1, v6);
          v4 += 24;
          v3 = a1[13];
          if ( v5 == v4 )
            goto LABEL_10;
        }
        ((void (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))v7)(
          a1,
          v6,
          *(_QWORD *)v4,
          *(_QWORD *)(v4 + 8),
          0,
          0);
        v4 += 24;
        v3 = a1[13];
      }
      while ( v5 != v4 );
    }
LABEL_10:
    result = 1;
    if ( v3 )
      sub_368890();
  }
  else
  {
    if ( v3 )
      sub_368890();
    return 0;
  }
  return result;
}
