void __fastcall sub_7AD2B0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = &off_2B10C90;
  a1[11] = &unk_2BD1E68;
  v2 = (void *)a1[12];
  if ( v2 )
  {
    dlclose(v2);
    a1[12] = 0;
  }
  v3 = (void *)a1[13];
  if ( v3 )
  {
    a1[14] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[2];
  a1[1] = &unk_2BD1E68;
  if ( v4 )
  {
    dlclose(v4);
    a1[2] = 0;
  }
  v5 = (void *)a1[3];
  if ( v5 )
  {
    a1[4] = 0;
    qfree(v5);
  }
}

