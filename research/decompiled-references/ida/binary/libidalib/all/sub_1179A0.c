__int64 __fastcall sub_1179A0(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  size_t v3; // r12
  void *v5; // [rsp+28h] [rbp-A0h]

  v2 = add_idc_gvar();
  free_idcv();
  idcv_object();
  free_idcv();
  set_idcv_attr();
  qsnprintf();
  free_idcv();
  if ( a2 )
  {
    v3 = strlen(a2);
    if ( v3 )
    {
      v5 = (void *)qvector_reserve();
      memmove(v5, a2, v3);
      *((_BYTE *)v5 + v3) = 0;
    }
  }
  set_idcv_attr();
  free_idcv();
  return v2;
}

