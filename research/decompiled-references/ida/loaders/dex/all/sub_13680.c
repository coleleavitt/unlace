__int64 __fastcall sub_13680(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int dword; // eax
  __int64 v6; // rdx
  unsigned int v7; // r12d
  int v8; // eax
  unsigned __int64 v9; // rax
  const char *v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rax
  const char *v15; // rcx
  const char *v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // r14d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  const char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rdx
  unsigned int v29; // r12d
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rdi
  const char *v33; // rcx
  const char *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rbp
  struct _Unwind_Exception *v47; // rbx
  const char *v48; // [rsp+0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+8h] [rbp-50h]
  unsigned __int64 v50; // [rsp+18h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  dword = get_dword(a3, a2, a3);
  v6 = *(_QWORD *)(a1 + 8);
  v48 = nullptr;
  v7 = dword;
  v8 = *(_DWORD *)a1;
  v49 = 0;
  v9 = (unsigned int)(v8 - 1);
  if ( v9 >= *(_QWORD *)(v6 + 56) )
  {
LABEL_33:
    v47 = (struct _Unwind_Exception *)sub_59F0();
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    _Unwind_Resume(v47);
  }
  sub_8BD0((__int64)&v48, *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v9), v7, 0x55u);
  v10 = s1;
  if ( (_QWORD)v49 )
    v10 = v48;
  sub_13370(a3, (__int64)"[0x%x] Type of class: (0x%x) '%s'", a2, v7, v10);
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  create_data(a3, 0x20000000, 4, -1);
  v11 = num_flag();
  set_op_type(a3, v11, 0);
  v13 = get_dword(a3 + 4, v11, v12);
  create_data(a3 + 4, 0x20000000, 4, -1);
  v14 = num_flag();
  set_op_type(a3 + 4, v14, 0);
  if ( v13 == -1 )
  {
    v16 = "Access flags: NONE";
    sub_13370(a3 + 4, (__int64)"Access flags: NONE");
  }
  else
  {
    sub_7A30((__int64 *)&v48, v13);
    v15 = s1;
    if ( (_QWORD)v49 )
      v15 = v48;
    v16 = "Access flags: (0x%x) '%s'";
    sub_13370(a3 + 4, (__int64)"Access flags: (0x%x) '%s'", v13, v15);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
  }
  v18 = get_dword(a3 + 8, v16, v17);
  create_data(a3 + 8, 0x20000000, 4, -1);
  v19 = num_flag();
  set_op_type(a3 + 8, v19, 0);
  v20 = *(_DWORD *)a1;
  v21 = *(_QWORD *)(a1 + 8);
  v48 = nullptr;
  v49 = 0;
  v22 = (unsigned int)(v20 - 1);
  if ( v22 >= *(_QWORD *)(v21 + 56) )
  {
    sub_59F0();
    goto LABEL_33;
  }
  sub_8BD0((__int64)&v48, *(_QWORD *)(*(_QWORD *)(v21 + 48) + 8 * v22), v18, 0x55u);
  v23 = s1;
  if ( (_QWORD)v49 )
    v23 = v48;
  sub_13370(a3 + 8, (__int64)"Type of superclass: (0x%x) '%s'", v18, v23);
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  v25 = (unsigned int)get_dword(a3 + 12, "Type of superclass: (0x%x) '%s'", v24);
  v26 = *(_QWORD *)(a1 + 152) + v25;
  sub_13370(a3 + 12, (__int64)"Interfaces offset: 0x%a", 0.0);
  v27 = 0x20000000;
  create_data(a3 + 12, 0x20000000, 4, -1);
  if ( (_DWORD)v25 )
  {
    v27 = v26;
    add_dref(a3 + 12, v26, 5);
  }
  v29 = get_dword(a3 + 16, v27, v28);
  create_data(a3 + 16, 0x20000000, 4, -1);
  if ( v29 == -1 )
  {
    v34 = "UNKNOWN";
    set_cmt(a3 + 16, "UNKNOWN", 0);
  }
  else
  {
    v30 = num_flag();
    set_op_type(a3 + 16, v30, 0);
    v31 = *(_DWORD *)a1;
    v32 = *(_QWORD *)(a1 + 8);
    v49 = 0;
    v48 = nullptr;
    sub_8910(v32, (__int64)&v48, v31, v29);
    v33 = s1;
    if ( (_QWORD)v49 )
      v33 = v48;
    v34 = "Source file: (0x%x) '%s'";
    sub_13370(a3 + 16, (__int64)"Source file: (0x%x) '%s'", v29, v33);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
  }
  v36 = (unsigned int)get_dword(a3 + 20, v34, v35);
  v37 = *(_QWORD *)(a1 + 152) + v36;
  sub_13370(a3 + 20, (__int64)"Annotations offset: 0x%a", 0.0);
  v38 = 0x20000000;
  create_data(a3 + 20, 0x20000000, 4, -1);
  if ( (_DWORD)v36 )
  {
    v38 = v37;
    add_dref(a3 + 20, v37, 5);
  }
  v40 = (unsigned int)get_dword(a3 + 24, v38, v39);
  v41 = *(_QWORD *)(a1 + 152) + v40;
  sub_13370(a3 + 24, (__int64)"Class data offset: 0x%a", 0.0);
  v42 = 0x20000000;
  create_data(a3 + 24, 0x20000000, 4, -1);
  if ( (_DWORD)v40 )
  {
    v42 = v41;
    add_dref(a3 + 24, v41, 5);
  }
  v44 = (unsigned int)get_dword(a3 + 28, v42, v43);
  v45 = *(_QWORD *)(a1 + 152) + v44;
  sub_13370(a3 + 28, (__int64)"Static values offset: 0x%a", 0.0);
  create_data(a3 + 28, 0x20000000, 4, -1);
  if ( (_DWORD)v44 )
    add_dref(a3 + 28, v45, 5);
  return a3 + 32;
}

