unsigned __int64 __fastcall sub_799220(__int64 a1)
{
  unsigned int qerrno; // r13d
  __int64 idc_class; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  const char *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // rax
  size_t v9; // r14
  size_t v11; // r15
  char v12[8]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __int128 v14; // [rsp+10h] [rbp-58h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  qerrno = get_qerrno(a1);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v12[0] = 2;
  ptr = (void *)(int)qerrno;
  v14 = 0;
  set_idcv_attr(a1, "qerrno", v12, 0, v3, v4);
  v5 = (const char *)qstrerror(0xFFFFFFFFLL);
  free_idcv(v12);
  if ( v5 )
  {
    v8 = strlen(v5);
    v12[0] = 7;
    ptr = nullptr;
    v9 = v8;
    v14 = 0;
    if ( v8 )
    {
      v11 = v8 + 1;
      ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
      *(_QWORD *)&v14 = v11;
      memmove(ptr, v5, v9);
      *((_BYTE *)ptr + v9) = 0;
    }
  }
  else
  {
    v12[0] = 7;
    ptr = nullptr;
    v14 = 0;
  }
  set_idcv_attr(a1, "description", v12, 0, v6, v7);
  set_qerrno(qerrno);
  free_idcv(v12);
  return v15 - __readfsqword(0x28u);
}
