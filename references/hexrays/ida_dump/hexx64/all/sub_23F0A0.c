__int64 __fastcall sub_23F0A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = a1 + 8;
  *(v2 - 8) = off_4DFA58;
  sub_255630(v2);
  clear_tinfo_t(a1 + 14);
  v3 = a1[5];
  *a1 = off_4DBCF8;
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
  }
  return j__qfree(a1);
}
