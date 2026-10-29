__int64 __fastcall sub_DED270(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r13
  void *v11; // r14
  __int64 v12; // rax
  void *v13; // rdx
  unsigned int v14; // eax
  char v15; // bl
  bool v16; // dl
  void *v17; // rcx
  unsigned int v18; // ebx
  void *v19; // r12
  void *v20; // rdi
  _QWORD *v21; // rax
  bool v23; // [rsp+Fh] [rbp-79h]
  void *v24; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-70h]
  bool v26; // [rsp+1Ch] [rbp-6Ch]
  void *src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-60h]
  void *v29; // [rsp+30h] [rbp-58h]
  unsigned int v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+3Ch] [rbp-4Ch]
  int v32; // [rsp+40h] [rbp-48h]

  v7 = sub_D45A20(a1, a2, a3, a4, a5, a6);
  v8 = a1[22];
  v10 = v9;
  v11 = (void *)v7;
  v12 = sub_E21760(v8, 24);
  v30 = *(_DWORD *)(v12 + 8);
  v13 = *(void **)v12;
  *(_DWORD *)(v12 + 8) = 0;
  v29 = v13;
  LOBYTE(v13) = *(_BYTE *)(v12 + 12);
  LODWORD(v12) = *(_DWORD *)(v12 + 16);
  v31 = (char)v13;
  v32 = v12;
  sub_E21790(v8, 24);
  v14 = v30;
  v15 = HIBYTE(v32) & 0x20;
  v16 = (v32 & 0x20000000) == 0;
  v28 = v30;
  if ( v30 > 0x40 )
  {
    v23 = (v32 & 0x20000000) == 0;
    sub_2205510(&src);
    v14 = v28;
    v17 = src;
    v16 = v23;
  }
  else
  {
    v17 = v29;
  }
  v26 = v16;
  v25 = v14;
  v24 = v17;
  if ( v15 )
    sub_2206DE0(&src, &v24, a2);
  else
    sub_2206D90(&src, &v24, a2);
  v18 = v28;
  v19 = src;
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( v18 > 0x40 )
  {
    memcpy(v11, v19, 8 * (((unsigned __int64)v18 + 63) >> 6));
    v20 = v19;
    v19 = v11;
    operator delete[](v20);
  }
  v21 = (_QWORD *)sub_E216C0(a1[22], 16);
  *v21 = v19;
  v21[1] = v10;
  return 1;
}
