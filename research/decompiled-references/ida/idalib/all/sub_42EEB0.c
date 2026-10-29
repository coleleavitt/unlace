unsigned __int64 __fastcall sub_42EEB0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r13
  _QWORD *v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  char *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+8h] [rbp-C0h]
  _QWORD v23[4]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-88h]
  __int128 v25; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v26[4]; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 1672);
  v27 = __readfsqword(0x28u);
  v25 = 0;
  v24 = v4;
  memset(v26, 0, sizeof(v26));
  sub_630CA0(*v4, 26, &v25, 16);
  v6 = *(_QWORD *)(a2 + 1672);
  ptr = nullptr;
  v22 = 0;
  v7 = v6 + 2400;
  sub_7BF130(v6 + 2400, a2, &ptr);
  v8 = a3[1];
  v9 = *a3;
  if ( a3[2] < (unsigned __int64)(v8 + 1) )
  {
    v20 = qvector_reserve(a3, v9, v8 + 1, 24);
    *a3 = v20;
    v8 = a3[1];
    v9 = v20;
  }
  v10 = v9 + 24 * v8;
  *(_QWORD *)v10 = 0;
  v11 = v24;
  *(_OWORD *)(v10 + 8) = 0;
  ++a3[1];
  v12 = *(_QWORD *)(v6 + 2400);
  v13 = sub_3BDE50(v11, v12);
  v16 = (char *)v26;
  if ( v13 >= (unsigned __int64)v25 && v13 < *((_QWORD *)&v25 + 1) )
  {
    LOBYTE(v26[0]) = 43;
    LODWORD(v12) = v12 - v25;
    v16 = (char *)v26 + 1;
  }
  qsnprintf((_DWORD)v16, 63, (unsigned int)"%a", v12, v14, v15);
  sub_35A790((char **)v10);
  v23[3] = a3;
  v23[0] = &off_2B28558;
  v17 = *(_QWORD **)(a2 + 1672);
  v23[1] = 0;
  v23[2] = v17;
  v18 = sub_631AD0(*v17, 20);
  sub_59A640(v7, a2, 0, v18, v23);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v27 - __readfsqword(0x28u);
}
