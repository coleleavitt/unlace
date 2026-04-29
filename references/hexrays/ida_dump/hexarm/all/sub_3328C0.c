__int64 __fastcall sub_3328C0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 that; // rbx
  __int64 v3; // rcx

  v1 = a1[1];
  if ( !v1 )
    return 0;
  that = a1[2];
  while ( 1 )
  {
    that = next_that(that, *(_QWORD *)(v1 + 8), sub_1B7C10, 0);
    if ( that != -1 )
    {
LABEL_7:
      a1[2] = that;
      return 1;
    }
    v3 = a1[1];
    if ( v3 + 16 == *(_QWORD *)*a1 + 16LL * *(_QWORD *)(*a1 + 8LL) )
      return 0;
    a1[1] = v3 + 16;
    that = *(_QWORD *)(v3 + 16);
    if ( (~((unsigned __int16)get_flags_ex(that, 4) >> 8) & 6) == 0 )
      goto LABEL_7;
    v1 = a1[1];
  }
}
