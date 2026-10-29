void __fastcall sub_3E08D0(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v3; // rdx

  v1 = (__int64 *)a1[5];
  v2 = &v1[a1[6]];
  if ( v2 != v1 )
  {
    do
    {
      v3 = *v1++;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 80LL))(a1, a1[8], v3);
    }
    while ( v2 != v1 );
    v1 = (__int64 *)a1[5];
  }
  if ( v1 )
  {
    a1[6] = 0;
    qfree(v1);
    a1[5] = 0;
    a1[7] = 0;
  }
}
