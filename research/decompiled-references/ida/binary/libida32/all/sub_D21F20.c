__int64 __fastcall sub_D21F20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  void *v11; // r14
  unsigned int v12; // ebx
  void *v13; // r12
  void *v14; // rdi
  _QWORD *v15; // rax
  void *v17; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-70h]
  char v19; // [rsp+Ch] [rbp-6Ch]
  void *src; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-60h]
  void *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-50h]

  v6 = a3;
  v8 = sub_D21CE0(a1, a3, a3, a4, a5, a6);
  v10 = v9;
  v11 = (void *)v8;
  sub_CE7240((__int64)&v22, a1[22]);
  sub_CD4C20((__int64)&v17, (__int64 *)&v22);
  if ( v19 )
    sub_21E3050(&src, &v17, v6);
  else
    sub_21E30A0(&src, &v17, v6);
  v12 = v21;
  v13 = src;
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v12 > 0x40 )
  {
    memcpy(v11, v13, 8 * (((unsigned __int64)v12 + 63) >> 6));
    v14 = v13;
    v13 = v11;
    operator delete[](v14);
  }
  v15 = (_QWORD *)sub_DFD980(a1[22], 16);
  *v15 = v13;
  v15[1] = v10;
  return 1;
}

