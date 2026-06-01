/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75B90
// Address: 0x0000000000075B90

//----- (0000000000075B90) ----------------------------------------------------
unsigned __int64 __fastcall sub_75B90(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  unsigned int qerrno; // r14d
  _QWORD *v6; // rdi
  const char *v7; // rbx
  __int64 v8; // rax
  const char *v9; // rbp
  size_t v10; // rdx
  size_t v11; // rdx
  void *v12; // rbx
  void *v13; // rbx
  int v15; // [rsp+Ch] [rbp-5Ch] BYREF
  char v16[8]; // [rsp+10h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+30h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v16[0] = 2;
  *(_OWORD *)ptr = 0;
  v18 = 0;
  v15 = -1;
  qerrno = get_qerrno();
  v6 = *(_QWORD **)(a1 + 104);
  if ( v6 )
  {
    v7 = sub_6CAD0(v6, *(_DWORD *)(a1 + 112), (unsigned int *)&v15);
    v8 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(v8 + 8) )
      v9 = *(const char **)v8;
    else
      v9 = s1;
  }
  else
  {
    v9 = nullptr;
    v7 = nullptr;
  }
  if ( v16[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v16, 0.0, a4);
  }
  else if ( v16[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v18 = 0;
  }
  v16[0] = 2;
  ptr[0] = nullptr;
  if ( v7 )
    v10 = strlen(v7);
  else
    v10 = 0;
  v16[0] = 7;
  sub_4ABC0((__int64)ptr, v7, v10);
  set_idcv_attr(a2, "file", v16, 0, 0.0, a4);
  if ( v16[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v16, 0.0, a4);
  }
  else if ( v16[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v18 = 0;
  }
  v16[0] = 2;
  ptr[0] = nullptr;
  if ( v9 )
    v11 = strlen(v9);
  else
    v11 = 0;
  v16[0] = 7;
  sub_4ABC0((__int64)ptr, v9, v11);
  set_idcv_attr(a2, "func", v16, 0, 0.0, a4);
  v12 = (void *)v15;
  if ( v16[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v16, 0.0, a4);
  }
  else if ( v16[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v18 = 0;
  }
  v16[0] = 2;
  ptr[0] = v12;
  set_idcv_attr(a2, "line", v16, 0, 0.0, a4);
  v13 = *(void **)(a1 + 112);
  if ( v16[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v16, 0.0, a4);
  }
  else if ( v16[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v18 = 0;
  }
  v16[0] = 2;
  ptr[0] = v13;
  set_idcv_attr(a2, "pc", v16, 0, 0.0, a4);
  set_qerrno(qerrno);
  if ( v16[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v16, 0.0, a4);
  }
  else if ( v16[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v18 = 0;
  }
  return __readfsqword(0x28u);
}
