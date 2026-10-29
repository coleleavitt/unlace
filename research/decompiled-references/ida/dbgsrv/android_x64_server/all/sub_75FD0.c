/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75FD0
// Address: 0x0000000000075FD0

//----- (0000000000075FD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_75FD0(__int64 a1, double a2, __m128 a3)
{
  signed int qerrno; // r14d
  __int64 idc_class; // rax
  __int64 v5; // rbx
  void *v6; // rax
  void *v7; // rbp
  int v8; // esi
  const char *v9; // rbp
  size_t v10; // rdx
  char v12[8]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  qerrno = get_qerrno();
  idc_class = find_idc_class("exception");
  if ( a1 )
  {
    v5 = idc_class;
    free_idcv((char *)a1, a2, a3);
    *(_BYTE *)a1 = 5;
    v6 = operator new(0x20u);
    v7 = v6;
    if ( v5 )
      v8 = *(_DWORD *)(v5 + 28);
    else
      v8 = 0;
    sub_6B170((__int64)v6, v8);
    *(_QWORD *)(a1 + 8) = v7;
  }
  else
  {
    set_qerrno(0x5FCu);
  }
  v12[0] = 2;
  v14 = 0;
  ptr = (void *)qerrno;
  set_idcv_attr(a1, "qerrno", v12, 0, 0.0, a3);
  v9 = qstrerror(0xFFFFFFFF);
  if ( v12[0] == 5 )
  {
    sub_72DD0((char **)ptr, v12, 0.0, a3);
  }
  else if ( v12[0] == 7 && ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
    ptr = nullptr;
    *((_QWORD *)&v14 + 1) = 0;
  }
  v12[0] = 2;
  ptr = nullptr;
  if ( v9 )
    v10 = strlen(v9);
  else
    v10 = 0;
  v12[0] = 7;
  sub_4ABC0((__int64)&ptr, v9, v10);
  set_idcv_attr(a1, "description", v12, 0, 0.0, a3);
  set_qerrno(qerrno);
  if ( v12[0] == 5 )
  {
    sub_72DD0((char **)ptr, v12, 0.0, a3);
  }
  else if ( v12[0] == 7 && ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
    ptr = nullptr;
    *((_QWORD *)&v14 + 1) = 0;
  }
  return __readfsqword(0x28u);
}
