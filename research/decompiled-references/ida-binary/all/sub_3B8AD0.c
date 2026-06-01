double __fastcall sub_3B8AD0(__int64 a1, const char *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  double result; // xmm0_8

  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v3 != *(_QWORD *)a1 )
  {
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 8LL))(*v2);
      ++v2;
    }
    while ( (_QWORD *)v3 != v2 );
    v2 = *(_QWORD **)a1;
  }
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(v2, a2);
  }
  return result;
}
