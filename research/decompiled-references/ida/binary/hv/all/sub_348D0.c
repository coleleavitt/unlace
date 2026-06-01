void __fastcall sub_348D0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  *a1 = &off_161378;
  v2 = (void *)a1[25];
  if ( v2 )
  {
    a1[26] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[18];
  if ( v3 )
  {
    a1[19] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[15];
  if ( v4 )
  {
    a1[16] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[12];
  if ( v5 )
  {
    a1[13] = 0;
    j__free(v5);
  }
  v6 = (void *)a1[9];
  if ( v6 )
  {
    a1[10] = 0;
    j__free(v6);
  }
  v7 = (void *)a1[6];
  if ( v7 )
  {
    a1[7] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[3];
  if ( v8 )
  {
    a1[4] = 0;
    j__free(v8);
  }
  operator delete(a1, 0xE0u);
}

