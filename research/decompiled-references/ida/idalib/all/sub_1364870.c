__int64 __fastcall sub_1364870(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *(a1 - 2) = &off_2C43568;
  *a1 = off_2C43628;
  v2 = a1[6];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[1];
  if ( v3 )
    operator delete(v3);
  return nullsub_1230(a1);
}
