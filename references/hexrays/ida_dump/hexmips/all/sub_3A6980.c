__int64 __fastcall sub_3A6980(_QWORD *a1)
{
  __int64 *v1; // r12
  __int64 *v3; // rbx
  __int64 v4; // rdi

  v1 = a1 + 7;
  v3 = a1 + 19;
  *a1 = &unk_4CBCC8;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      qfree(v4);
    }
    v3 -= 3;
  }
  while ( v3 != v1 );
  return qfree(a1);
}
