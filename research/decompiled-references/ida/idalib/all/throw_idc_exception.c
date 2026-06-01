__int64 __fastcall throw_idc_exception(__int64 a1, const char *a2)
{
  __int64 idc_class; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  size_t v5; // rax
  size_t v6; // r13
  unsigned int v7; // ebx
  void *v9; // r14
  char v10[8]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[10]; // [rsp+8h] [rbp-50h] BYREF

  ptr[4] = (void *)__readfsqword(0x28u);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v10[0] = 2;
  memset(ptr, 0, 24);
  free_idcv(v10);
  if ( a2 )
  {
    v5 = strlen(a2);
    v10[0] = 7;
    memset(ptr, 0, 24);
    v6 = v5;
    if ( v5 )
    {
      v9 = (void *)(v5 + 1);
      ptr[0] = (void *)qvector_reserve(ptr, 0, v5 + 1, 1);
      ptr[1] = v9;
      memmove(ptr[0], a2, v6);
      *((_BYTE *)ptr[0] + v6) = 0;
    }
  }
  else
  {
    v10[0] = 7;
    memset(ptr, 0, 24);
  }
  set_idcv_attr(a1, "description", v10, 0, v3, v4);
  v7 = set_qerrno(90);
  free_idcv(v10);
  return v7;
}
