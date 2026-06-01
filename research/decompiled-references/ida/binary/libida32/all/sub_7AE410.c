__int64 __fastcall sub_7AE410(__int64 a1)
{
  void *v1; // rax

  v1 = (void *)sub_7AE370(a1);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  close_linput(v1);
  return del_idcv_attr();
}

