__int64 __fastcall sub_14080(__int64 a1, int a2, __int64 a3, double a4)
{
  __int64 v5; // rdx
  unsigned int dword; // eax
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v16; // ebp

  sub_7150(a3, 1u, (__int64)"Annotation directory item [%d]", a2);
  create_data(a3, 0x20000000, 4, -1);
  dword = get_dword(a3, 0x20000000, v5);
  if ( dword )
  {
    v16 = dword;
    set_cmt(a3, "Offset to class annotations", 0);
    add_dref(a3, *(_QWORD *)(a1 + 152) + v16, 5);
  }
  else
  {
    set_cmt(a3, "Class has no direct annotations", 0);
  }
  create_data(a3 + 4, 0x20000000, 4, -1);
  set_cmt(a3 + 4, "Count of annotated fields", 0);
  v8 = get_dword(a3 + 4, "Count of annotated fields", v7);
  create_data(a3 + 8, 0x20000000, 4, -1);
  set_cmt(a3 + 8, "Count of annotated methods", 0);
  v10 = get_dword(a3 + 8, "Count of annotated methods", v9);
  create_data(a3 + 12, 0x20000000, 4, -1);
  set_cmt(a3 + 12, "Count of annotated parameters", 0);
  v12 = get_dword(a3 + 12, "Count of annotated parameters", v11);
  v13 = sub_13E20(a1, a3 + 16, v8, "field", a4);
  if ( v13 == -1 )
    return -1;
  v14 = sub_13E20(a1, v13, v10, "method", a4);
  if ( v14 == -1 )
    return -1;
  else
    return sub_13E20(a1, v14, v12, "parameter", a4);
}

