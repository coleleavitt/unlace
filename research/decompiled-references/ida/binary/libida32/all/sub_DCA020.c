__int64 __fastcall sub_DCA020(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  void *v9; // r12
  __int64 v10; // r13
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  void *v13; // r15
  __int64 *v14; // rax
  __int64 v16; // [rsp+8h] [rbp-60h]
  void *v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-50h]
  char v19; // [rsp+1Ch] [rbp-4Ch]
  void *src; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-40h]

  v6 = sub_D21170(a1, a2, a3, a4, a5, a6);
  v7 = a1[22];
  v16 = v8;
  v9 = (void *)v6;
  v10 = v6;
  v11 = *(_DWORD *)sub_DFDA20(v7, 8);
  sub_DFDA50(v7, 8);
  v18 = 32;
  v17 = (void *)v11;
  v19 = 0;
  sub_21E30A0(&src, &v17, a2);
  v12 = v21;
  v13 = src;
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v12 > 0x40 )
  {
    memcpy(v9, v13, 8 * (((unsigned __int64)v12 + 63) >> 6));
    operator delete[](v13);
  }
  else
  {
    v10 = 0;
    if ( v12 )
      v10 = (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
  }
  v14 = (__int64 *)sub_DFD980(a1[22], 16);
  *v14 = v10;
  v14[1] = v16;
  return 1;
}

