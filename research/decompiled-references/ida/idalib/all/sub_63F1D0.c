__int64 __fastcall sub_63F1D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  if ( (__int64 *)a1 != a2 )
  {
    qfree(*(void **)(a1 + 8));
    v3 = *a2;
    v4 = a2[1];
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = qstrdup(v4);
  }
  return a1;
}
