__int64 __fastcall sub_7AEFF0(__int64 a1)
{
  int idcv_attr; // eax
  unsigned int v2; // edx
  void *v4; // rdi

  idcv_attr = get_idcv_attr();
  v2 = 0;
  if ( idcv_attr )
    return v2;
  v4 = (void *)sub_7AE370(a1);
  if ( !v4 )
    return (unsigned int)-1;
  close_linput(v4);
  return del_idcv_attr();
}

