__int64 __fastcall sub_11E6860(__int64 a1, int a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int *v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-108h] BYREF
  __int64 v12; // [rsp+8h] [rbp-100h]
  _QWORD v13[4]; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v14; // [rsp+30h] [rbp-D8h]
  const char *v15; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v16; // [rsp+60h] [rbp-A8h]
  char *v17; // [rsp+70h] [rbp-98h] BYREF
  __int16 v18; // [rsp+90h] [rbp-78h]
  void *v19; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h] BYREF

  v17 = "macos";
  v18 = 259;
  v15 = "apple";
  v16 = 259;
  v6 = sub_22B7480(a1 + 16);
  v14 = 261;
  v13[1] = v7;
  v13[0] = v6;
  sub_22BBD90(&v19, v13, &v15, &v17);
  v11 = sub_22B8070(&v19);
  v12 = v8;
  if ( v19 != &v21 )
    operator delete(v19);
  v9 = (unsigned int *)(a1 + 3940);
  LODWORD(v19) = a2;
  HIDWORD(v19) = HIDWORD(v19) & 0x80000000 | a3 & 0x7FFFFFFF;
  HIBYTE(v19) |= 0x80u;
  LODWORD(v20) = v20 & 0x80000000 | a4 & 0x7FFFFFFF;
  v20 = v20 & 0x7FFFFFFF | 0x80000000LL;
  if ( (unsigned int)v11 | HIDWORD(v12) & 0x7FFFFFFF | ((unsigned int)v12 | HIDWORD(v11)) & 0x7FFFFFFF
    && (unsigned __int8)sub_A09E20(v9, (unsigned int *)&v11) )
  {
    v9 = (unsigned int *)&v11;
  }
  return sub_A09E20(v9, (unsigned int *)&v19);
}
