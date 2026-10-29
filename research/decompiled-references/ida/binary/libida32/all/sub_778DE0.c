unsigned __int64 __fastcall sub_778DE0(__int64 a1)
{
  unsigned int qerrno; // r13d
  __int64 idc_class; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r14
  void *v9; // r15
  char v10[8]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[4]; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  qerrno = get_qerrno(a1);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v10[0] = 2;
  LODWORD(ptr[0]) = qerrno;
  memset((char *)ptr + 4, 0, 20);
  set_idcv_attr();
  v5 = (const char *)qstrerror(0xFFFFFFFFLL, "qerrno", v3, v4);
  free_idcv(v10);
  if ( v5 )
  {
    v6 = strlen(v5);
    v10[0] = 7;
    memset(ptr, 0, 24);
    v7 = v6;
    if ( v6 )
    {
      v9 = (void *)(v6 + 1);
      ptr[0] = (void *)qvector_reserve(ptr, 0, v6 + 1, 1);
      ptr[1] = v9;
      memmove(ptr[0], v5, v7);
      *((_BYTE *)ptr[0] + v7) = 0;
    }
  }
  else
  {
    v10[0] = 7;
    memset(ptr, 0, 24);
  }
  set_idcv_attr();
  set_qerrno(qerrno, "description");
  free_idcv(v10);
  return v12 - __readfsqword(0x28u);
}

