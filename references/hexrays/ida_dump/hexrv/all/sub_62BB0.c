__int64 __fastcall sub_62BB0(_QWORD *a1)
{
  __int64 *v1; // r12
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rdi

  v1 = a1 + 3;
  v3 = a1 + 27;
  *a1 = off_4BE5E8;
  do
  {
    v4 = v3;
    v3 -= 4;
    sub_62900(v4);
  }
  while ( v3 != v1 );
  v5 = a1[1];
  *a1 = &unk_4BE6A0;
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5);
  }
  return j__qfree(a1);
}
