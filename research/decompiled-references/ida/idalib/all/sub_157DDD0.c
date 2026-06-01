__int64 __fastcall sub_157DDD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( !a2 )
    return 1;
  v2 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) < 0 )
  {
    v3 = 0;
    if ( v2 )
      v3 = sub_B8C660(a2);
  }
  else if ( v2 )
  {
    v3 = *(_QWORD *)(a2 - 8);
  }
  else
  {
    v3 = 0;
  }
  if ( *(_QWORD *)(a1 + 32) == v3 )
    return sub_BC7960((_BYTE *)a1, a2);
  else
    return 1;
}
