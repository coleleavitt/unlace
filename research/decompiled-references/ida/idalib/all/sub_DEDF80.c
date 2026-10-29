__int64 __fastcall sub_DEDF80(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r14
  void *v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  void *v14; // rdx
  unsigned int v15; // eax
  char v16; // bl
  bool v17; // dl
  void *v18; // rsi
  unsigned int v19; // ebx
  void *v20; // r15
  __int64 *v21; // rax
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

  v7 = sub_D44EB0(a1, a2, a3, a4, a5, a6);
  v8 = a1[22];
  v10 = v9;
  v11 = (void *)v7;
  v12 = v7;
  v13 = sub_E21760(v8, 24);
  v30 = *(_DWORD *)(v13 + 8);
  v14 = *(void **)v13;
  *(_DWORD *)(v13 + 8) = 0;
  v29 = v14;
  LOBYTE(v14) = *(_BYTE *)(v13 + 12);
  LODWORD(v13) = *(_DWORD *)(v13 + 16);
  v31 = (char)v14;
  v32 = v13;
  sub_E21790(v8, 24);
  v15 = v30;
  v16 = HIBYTE(v32) & 0x20;
  v17 = (v32 & 0x20000000) == 0;
  v28 = v30;
  if ( v30 > 0x40 )
  {
    v23 = (v32 & 0x20000000) == 0;
    sub_2205510(&src);
    v15 = v28;
    v18 = src;
    v17 = v23;
  }
  else
  {
    v18 = v29;
  }
  v24 = v18;
  v26 = v17;
  v25 = v15;
  if ( v16 )
    sub_2206DE0(&src, &v24, a2);
  else
    sub_2206D90(&src, &v24, a2);
  v19 = v28;
  v20 = src;
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( v19 > 0x40 )
  {
    memcpy(v11, v20, 8 * (((unsigned __int64)v19 + 63) >> 6));
    operator delete[](v20);
  }
  else
  {
    v12 = 0;
    if ( v19 )
      v12 = (__int64)((_QWORD)v20 << (64 - (unsigned __int8)v19)) >> (64 - (unsigned __int8)v19);
  }
  v21 = (__int64 *)sub_E216C0(a1[22], 16);
  *v21 = v12;
  v21[1] = v10;
  return 1;
}
