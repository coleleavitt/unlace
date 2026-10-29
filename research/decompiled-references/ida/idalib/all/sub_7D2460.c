__int64 __fastcall sub_7D2460(__int64 a1)
{
  int idcv_attr; // eax
  unsigned int v3; // edx
  void *v5; // rdi

  idcv_attr = get_idcv_attr(0, a1, "__li_idc", 0);
  v3 = 0;
  if ( idcv_attr )
    return v3;
  v5 = (void *)sub_7D17D0(a1);
  if ( !v5 )
    return (unsigned int)-1;
  close_linput(v5);
  return del_idcv_attr(a1, "li");
}
