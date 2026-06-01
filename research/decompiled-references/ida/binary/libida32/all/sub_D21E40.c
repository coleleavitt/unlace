__int64 __fastcall sub_D21E40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r12
  void *v12; // r13
  void *v13; // rbx
  unsigned int v14; // ebx
  void *v15; // r14
  void *v16; // rdi
  _QWORD *v17; // rax
  void *v19; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-50h]
  char v21; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-40h]

  v6 = a3;
  v8 = sub_D21CE0(a1, a3, a3, a4, a5, a6);
  v9 = a1[22];
  v11 = v10;
  v12 = (void *)v8;
  v13 = (void *)*(unsigned __int8 *)sub_DFDA20(v9, 8);
  sub_DFDA50(v9, 8);
  v19 = v13;
  v20 = 1;
  v21 = 1;
  sub_21E3050(&src, &v19, v6);
  v14 = v23;
  v15 = src;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v14 > 0x40 )
  {
    memcpy(v12, v15, 8 * (((unsigned __int64)v14 + 63) >> 6));
    v16 = v15;
    v15 = v12;
    operator delete[](v16);
  }
  v17 = (_QWORD *)sub_DFD980(a1[22], 16);
  *v17 = v15;
  v17[1] = v11;
  return 1;
}

