void __fastcall sub_2AEF80(_QWORD *a1)
{
  *a1 = &off_4E0FB0;
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x38u);
}
