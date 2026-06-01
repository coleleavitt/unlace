/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044530
// Address: 0x0000000140044530

//----- (0000000140044530) ----------------------------------------------------
char __fastcall sub_140044530(_QWORD *a1, double a2)
{
  __int64 *v3; // rdi
  __int64 *i; // rbx
  __int64 **v5; // rcx
  __int64 *j; // rax
  __int64 *k; // rcx
  _QWORD *v8; // rbx
  void *v9; // rcx

  v3 = (__int64 *)a1[51];
  for ( i = (__int64 *)*v3; i != v3; v3 = (__int64 *)a1[51] )
  {
    if ( !(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *, _QWORD, _QWORD))(*a1 + 288LL))(
            a1,
            i[5],
            i + 6,
            *((unsigned __int8 *)i + 56),
            0) )
      sub_140002CE0((struct __crt_locale_pointers *)"Failed to restore broken breakpoint at 0x%a\n", a2);
    v5 = (__int64 **)i[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( j = (__int64 *)i[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] )
      {
        if ( i != (__int64 *)j[2] )
          break;
        i = j;
      }
      i = j;
    }
    else
    {
      i = (__int64 *)i[2];
      for ( k = *v5; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        i = k;
    }
  }
  v8 = (_QWORD *)v3[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    sub_140009800((__int64)(a1 + 51), (__int64)(a1 + 51), v8[2]);
    v9 = v8;
    v8 = (_QWORD *)*v8;
    j_j_free(v9);
  }
  v3[1] = (__int64)v3;
  *v3 = (__int64)v3;
  v3[2] = (__int64)v3;
  a1[52] = 0;
  return 1;
}
