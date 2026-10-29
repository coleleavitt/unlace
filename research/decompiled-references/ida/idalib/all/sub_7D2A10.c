__int64 __fastcall sub_7D2A10(__int64 a1, int a2, const char *a3)
{
  __int64 idc_class; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rbx
  unsigned int v11; // ebx
  void *v13; // r14
  char v14[8]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[10]; // [rsp+8h] [rbp-50h] BYREF

  ptr[4] = (void *)__readfsqword(0x28u);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v14[0] = 2;
  memset(ptr, 0, 24);
  free_idcv(v14);
  v14[0] = 2;
  ptr[0] = (void *)a2;
  set_idcv_attr(a1, "ode", v14, 0, v5, v6);
  if ( a3 )
  {
    free_idcv(v14);
    v7 = strlen(a3);
    v14[0] = 7;
    memset(ptr, 0, 24);
    v10 = v7;
    if ( v7 )
    {
      v13 = (void *)(v7 + 1);
      ptr[0] = (void *)qvector_reserve(ptr, 0, v7 + 1, 1);
      ptr[1] = v13;
      memmove(ptr[0], a3, v10);
      *((_BYTE *)ptr[0] + v10) = 0;
    }
    set_idcv_attr(a1, "description", v14, 0, v8, v9);
  }
  v11 = set_qerrno(90);
  free_idcv(v14);
  return v11;
}
