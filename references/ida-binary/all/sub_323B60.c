double __fastcall segm_editor_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdi

  *a1 = segm_chooser_t___vtable;
  v3 = a1[28];
  if ( v3 )
  {
    a1[29] = 0;
    qfree(v3, a2);
  }
  v4 = a1[25];
  if ( v4 )
  {
    a1[26] = 0;
    qfree(v4, a2);
  }
  v5 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      qfree(v6, a2);
    }
    v5 -= 3;
  }
  while ( v5 != a1 + 7 );
  return qfree(a1, a2);
}
