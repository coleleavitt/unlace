_QWORD *__fastcall sub_BC1800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rbx
  void *ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF

  ptr[0] = &vars10;
  v8 = sub_B8C330(a1);
  vars10 = a5;
  v9 = v8;
  ptr[1] = (void *)0x2000000002LL;
  v10 = a4 + 24 * a5;
  while ( v10 != a4 )
  {
    v11 = a4;
    a4 += 24;
    sub_F1D660(v11, ptr, v9);
  }
  v12 = sub_2223360(a2, ptr, a3, &off_2B4B380);
  if ( v12 )
  {
    v17 = (_QWORD *)(v12 - 104);
    if ( v12 != 104 )
      v17 = sub_705340((__int64 *)(*(_QWORD *)(v12 - 24) + 72LL), *(_QWORD *)(v12 - 24), v13, v14, v15, v16);
  }
  else
  {
    v17 = nullptr;
  }
  if ( ptr[0] != ptr )
    free(ptr[0]);
  return v17;
}
