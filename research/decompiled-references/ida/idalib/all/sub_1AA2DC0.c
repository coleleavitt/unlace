__int64 __fastcall sub_1AA2DC0(
        __int64 *a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        const void *a8,
        __int64 a9)
{
  __int64 v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[200]; // [rsp+0h] [rbp-C8h] BYREF

  if ( a2 != 13 )
    return 0;
  if ( !a9 )
  {
    sub_168B9F0((__int64)v22, a1, a7, 0xB4Au, 0);
    sub_15F7200(v22);
    return 0;
  }
  v12 = sub_168B6F0((__int64)a1);
  v13 = (_QWORD *)sub_168B6C0((__int64)a1);
  v15 = sub_BB0D70(v13, v12, a3, a4, a7, v14, a8, a9);
  *(_BYTE *)(v15 + 29) &= 0x9Fu;
  v16 = v15;
  v17 = (__m128i *)sub_168B6F0((__int64)a1);
  sub_B94AD0(v17, v16, v18, v19, v20, v21);
  return v16;
}
