void __fastcall sub_1F693A0(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 *v16; // rdi
  _BYTE v17[16]; // [rsp+0h] [rbp-D8h] BYREF
  void *v18; // [rsp+10h] [rbp-C8h]
  __int64 v19; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr; // [rsp+88h] [rbp-50h]
  __int64 v21; // [rsp+98h] [rbp-40h] BYREF

  sub_1F58FC0(a1, a2);
  v3 = *(_QWORD **)(*a1 + 8);
  v4 = sub_1EE13A0((__int64)v3, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 24) = sub_1EDB980(v3, v4, v5, v6, v7, v8);
  v9 = *a1;
  v10 = *(unsigned int *)(v9 + 24);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10) )
  {
    *(_QWORD *)(a2 + 16) = sub_1F19070(v9);
    if ( (*(_DWORD *)a2 & 0x20000) != 0 )
      goto LABEL_3;
  }
  else if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
LABEL_3:
    *(_QWORD *)(a2 + 32) = 0;
    return;
  }
  sub_1F68FC0((__int64)v17, *a1);
  v15 = sub_A55A00(*(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL), (__int64)v17, v11, v12, v13, v14);
  v16 = (__int64 *)ptr;
  *(_QWORD *)(a2 + 32) = v15;
  if ( v16 != &v21 )
    free(v16);
  if ( v18 != &v19 )
    free(v18);
}
