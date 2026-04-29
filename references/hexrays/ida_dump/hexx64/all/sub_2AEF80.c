void __fastcall sub_2AEF80(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4E0FB0;
  v2 = a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x38u);
}
