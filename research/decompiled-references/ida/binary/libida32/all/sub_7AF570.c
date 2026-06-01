__int64 __fastcall sub_7AF570(__int64 a1, int a2, const char *a3)
{
  __int64 idc_class; // rax
  char *v6; // rsi
  size_t v7; // rax
  size_t v8; // r13
  unsigned int v9; // ebx
  void *v11; // r14
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  void *ptr[10]; // [rsp+8h] [rbp+8h] BYREF

  ptr[4] = (void *)__readfsqword(0x28u);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  vars0 = 2;
  memset(ptr, 0, 24);
  free_idcv(&vars0);
  v6 = "ode";
  vars0 = 2;
  LODWORD(ptr[0]) = a2;
  set_idcv_attr();
  if ( a3 )
  {
    free_idcv(&vars0);
    v7 = strlen(a3);
    vars0 = 7;
    memset(ptr, 0, 24);
    v8 = v7;
    if ( v7 )
    {
      v11 = (void *)(v7 + 1);
      ptr[0] = (void *)qvector_reserve(ptr, 0, v7 + 1, 1);
      ptr[1] = v11;
      memmove(ptr[0], a3, v8);
      *((_BYTE *)ptr[0] + v8) = 0;
    }
    v6 = "description";
    set_idcv_attr();
  }
  v9 = set_qerrno(90, v6);
  free_idcv(&vars0);
  return v9;
}

