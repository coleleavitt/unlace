__int64 __fastcall sub_7B0900(_QWORD *a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int i; // ebx
  unsigned int v5; // r12d
  __int64 (__fastcall *v6)(); // rcx
  int v7; // eax

  v2 = a1[3];
  v3 = *(_QWORD *)(v2 + 3296);
  if ( !v3 )
    return 1;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( i >= *(_DWORD *)(v3 - 4) )
        return 1;
      v5 = 2 * i;
      v6 = *(__int64 (__fastcall **)())(*a1 + 552LL);
      if ( v6 != sub_7C5680 )
      {
        v7 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v6)(a1, v5);
        goto LABEL_8;
      }
      if ( !a1[20] )
        break;
      v3 = *(_QWORD *)(v2 + 3296);
      ++i;
      if ( !v3 )
        return 1;
    }
    v7 = *(_DWORD *)(v3 + 24LL * (i & 0x7FFFFFFF));
LABEL_8:
    if ( v7 && (!(unsigned __int8)sub_7B0550(a1, v5, a2) || !(unsigned __int8)sub_7B0550(a1, v5 ^ 1, a2)) )
      break;
    v2 = a1[3];
    v3 = *(_QWORD *)(v2 + 3296);
    if ( !v3 )
      return 1;
  }
  return 0;
}

