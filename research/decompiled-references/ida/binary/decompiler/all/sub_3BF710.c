__int64 __fastcall sub_3BF710(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 i; // rbx

  free_idcv();
  idcv_object();
  v1 = sub_255720(a1, 0);
  for ( i = 0; i < *(_QWORD *)(v1 + 8); ++i )
  {
    tag_remove();
    qsnprintf();
    set_idcv_attr();
  }
  free_idcv();
  return 0;
}
