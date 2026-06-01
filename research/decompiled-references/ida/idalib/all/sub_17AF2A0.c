__int64 __fastcall sub_17AF2A0(__int64 a1, __int64 **a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  __int64 *v6; // r15
  _QWORD *v7; // r14
  unsigned __int64 v8; // rax
  __int64 *v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned __int8 v15; // [rsp+1Fh] [rbp-F9h] BYREF
  void *v16; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-F0h]
  char v18; // [rsp+2Ch] [rbp-ECh]
  void *v19[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v21[200]; // [rsp+50h] [rbp-C8h] BYREF

  v6 = *a2;
  v7 = *(_QWORD **)(a1 + 248);
  v17 = 1;
  v16 = nullptr;
  v18 = 0;
  v8 = sub_179FCF0(*v6, v7, &v15, (__int64)&v16);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v9 = sub_A81910(v7, v8, 0);
    sub_179CB10(*v6, (unsigned int *)v6 + 2, *v9, (unsigned __int64)(v9 + 1));
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a4, 0x1662u, 0);
    sub_15F7200(v21);
    *a2 = v9;
    v10 = 1;
    v11 = v17;
    *a3 = *v9;
    goto LABEL_3;
  }
  v10 = v15;
  if ( v15 )
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a4, 0x14B3u, 0);
    v10 = 0;
    sub_15F7200(v21);
    v11 = v17;
    goto LABEL_3;
  }
  v11 = v17;
  if ( v17 <= 0x40 )
  {
    if ( !v16 )
    {
LABEL_10:
      if ( a5 )
      {
        sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a4, a5, 0);
        sub_15F7200(v21);
        v11 = v17;
      }
      goto LABEL_3;
    }
  }
  else if ( v11 == (unsigned int)sub_2206780(&v16) )
  {
    goto LABEL_10;
  }
  sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a4, 0xC15u, 0);
  sub_C1DEB0(v19, (int)&v16, 10, v18 ^ 1, 0, 1u, 0);
  sub_1682AF0((__int64)v21, (__int64)v19);
  if ( v19[0] != &v20 )
    operator delete(v19[0]);
  v10 = 0;
  sub_15F7200(v21);
  v11 = v17;
LABEL_3:
  if ( v11 > 0x40 && v16 )
    operator delete[](v16);
  return v10;
}
