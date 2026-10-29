__int64 __fastcall throw_idc_exception(__int64 a1, const char *a2)
{
  __int64 idc_class; // rax
  size_t v3; // rax
  size_t v4; // r13
  unsigned int v5; // ebx
  void *v7; // r14
  char v8[8]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[10]; // [rsp+8h] [rbp-50h] BYREF

  ptr[4] = (void *)__readfsqword(0x28u);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v8[0] = 2;
  memset(ptr, 0, 24);
  free_idcv(v8);
  if ( a2 )
  {
    v3 = strlen(a2);
    v8[0] = 7;
    memset(ptr, 0, 24);
    v4 = v3;
    if ( v3 )
    {
      v7 = (void *)(v3 + 1);
      ptr[0] = (void *)qvector_reserve(ptr, 0, v3 + 1, 1);
      ptr[1] = v7;
      memmove(ptr[0], a2, v4);
      *((_BYTE *)ptr[0] + v4) = 0;
    }
  }
  else
  {
    v8[0] = 7;
    memset(ptr, 0, 24);
  }
  set_idcv_attr();
  v5 = set_qerrno(90, "description");
  free_idcv(v8);
  return v5;
}

