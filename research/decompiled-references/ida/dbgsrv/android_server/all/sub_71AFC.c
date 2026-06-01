/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71AFC
// Address: 0x0000000000071AFC

//----- (0000000000071AFC) ----------------------------------------------------
void __fastcall sub_71AFC(__int64 a1, __int64 a2)
{
  unsigned int qerrno; // w20
  _QWORD *v5; // x0
  char *v6; // x0
  __int64 v7; // x8
  const char *v8; // x24
  const char *v9; // x22
  size_t v10; // x2
  size_t v11; // x2
  __int64 v12; // x22
  __int64 v13; // x21
  int v14; // [xsp+4h] [xbp-6Ch] BYREF
  unsigned __int8 v15[8]; // [xsp+8h] [xbp-68h] BYREF
  pthread_mutex_t ptr; // [xsp+10h] [xbp-60h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v15[0] = 2;
  memset(&ptr, 0, 24);
  v14 = -1;
  qerrno = get_qerrno();
  v5 = *(_QWORD **)(a1 + 104);
  if ( v5 )
  {
    v6 = sub_698C8(v5, *(_DWORD *)(a1 + 112), &v14);
    v7 = *(_QWORD *)(a1 + 104);
    v8 = v6;
    if ( *(_QWORD *)(v7 + 8) )
      v9 = *(const char **)v7;
    else
      v9 = &byte_F154B;
  }
  else
  {
    v9 = nullptr;
    v8 = nullptr;
  }
  if ( v15[0] == 5 )
  {
    sub_6F17C(ptr.__align, v15);
  }
  else if ( v15[0] == 7 && ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  v15[0] = 2;
  ptr.__align = 0;
  if ( v8 )
    v10 = strlen(v8);
  else
    v10 = 0;
  v15[0] = 7;
  sub_4968C(&ptr, v8, v10);
  set_idcv_attr(a2, "file", v15, 0);
  if ( v15[0] == 5 )
  {
    sub_6F17C(ptr.__align, v15);
  }
  else if ( v15[0] == 7 && ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  v15[0] = 2;
  ptr.__align = 0;
  if ( v9 )
    v11 = strlen(v9);
  else
    v11 = 0;
  v15[0] = 7;
  sub_4968C(&ptr, v9, v11);
  set_idcv_attr(a2, "func", v15, 0);
  v12 = v14;
  if ( v15[0] == 5 )
  {
    sub_6F17C(ptr.__align, v15);
  }
  else if ( v15[0] == 7 && ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  v15[0] = 2;
  ptr.__align = v12;
  set_idcv_attr(a2, "line", v15, 0);
  v13 = *(_QWORD *)(a1 + 112);
  if ( v15[0] == 5 )
  {
    sub_6F17C(ptr.__align, v15);
  }
  else if ( v15[0] == 7 && ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  v15[0] = 2;
  ptr.__align = v13;
  set_idcv_attr(a2, byte_104400, v15, 0);
  set_qerrno(qerrno);
  if ( v15[0] == 5 )
  {
    sub_6F17C(ptr.__align, v15);
  }
  else if ( v15[0] == 7 )
  {
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
}
// F154B: using guessed type char byte_F154B;
