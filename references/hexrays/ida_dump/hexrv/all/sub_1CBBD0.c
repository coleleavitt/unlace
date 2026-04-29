__int64 __fastcall sub_1CBBD0(_QWORD *a1, __m128i *a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 *v7; // rdi
  __int64 *v8; // rdx

  if ( a3 < 0 )
    return -1;
  v7 = (__int64 *)a1[184];
  v8 = &v7[5 * a1[185]];
  if ( !(40LL * a1[185]) )
  {
LABEL_8:
    if ( !under_debugger )
      sub_37DDE0(52700);
    BUG();
  }
  while ( a3 < v7[1] )
  {
    v7 += 5;
    if ( v8 == v7 )
      goto LABEL_8;
  }
  return sub_1CB900(v7, a1[187], a2, a3, a4, a5);
}
