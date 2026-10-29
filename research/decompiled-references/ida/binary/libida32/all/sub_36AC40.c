__int64 __fastcall sub_36AC40(__int64 a1)
{
  unsigned int idcv_attr; // ebx
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars18 = 0;
  vars8 = 0;
  idcv_attr = get_idcv_attr();
  if ( !idcv_attr )
  {
    idcv_attr = idcv_int64(&vars0, a1);
    if ( !idcv_attr )
      clear_tinfo_t(&vars8);
  }
  free_idcv(&vars0);
  return idcv_attr;
}

