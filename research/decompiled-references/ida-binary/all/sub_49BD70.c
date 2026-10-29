void __fastcall chooser_flat_bucket_data_t__::vfunc_4(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  v3 = a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3, a2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
