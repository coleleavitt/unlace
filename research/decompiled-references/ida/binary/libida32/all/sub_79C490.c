void __fastcall sub_79C490(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *a1 = &off_2BD1D28;
  v2 = a1[2];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  v3 = (void *)a1[3];
  a1[1] = 0;
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
}

