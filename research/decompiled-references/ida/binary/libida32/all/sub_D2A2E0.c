__int64 __fastcall sub_D2A2E0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // r12
  int v10; // edx
  int v11; // r13d
  __int64 v12; // rbp
  unsigned int v13; // eax
  void *v14; // r14
  __int64 v15; // rax
  __int64 v17[2]; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-40h]

  v1 = a1[22];
  v2 = (__int64 *)sub_DFDA20(v1, 16);
  v3 = v2[1];
  v4 = *v2;
  sub_DFDA50(v1, 16);
  v17[1] = v3;
  v9 = (void *)sub_D21170(a1, v3, v5, v6, v7, v8);
  v11 = v10;
  v12 = (__int64)v9;
  v17[0] = v4;
  sub_D279E0((__int64)&src, v17);
  if ( v19 > 0x40 )
  {
    sub_21E2280(&src, v17);
  }
  else
  {
    src = (void *)~(unsigned __int64)src;
    sub_CD43C0((unsigned __int64 *)&src);
  }
  v13 = v19;
  v14 = src;
  v19 = 0;
  if ( v13 > 0x40 )
  {
    memcpy(v9, src, 8 * (((unsigned __int64)v13 + 63) >> 6));
    operator delete[](v14);
    if ( v19 > 0x40 && src )
      operator delete[](src);
  }
  else
  {
    v12 = 0;
    if ( v13 )
      v12 = (__int64)((_QWORD)src << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
  }
  v15 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v15 = v12;
  *(_DWORD *)(v15 + 8) = v11;
  return 1;
}

