__int64 __fastcall sub_A80CA0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // [rsp+8h] [rbp-E0h]
  __int64 v13; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v16[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = a3;
  ptr[0] = v16;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, a4);
  sub_9B7040((__int64)ptr, SHIDWORD(a4));
  v13 = 0;
  v7 = sub_2223360(a1 + 928, ptr, &v13, off_2B40E60);
  if ( !v7 )
  {
    v10 = (_QWORD *)sub_A794A0((__int64 *)(a1 + 2352), 24, 3u);
    *v10 = 0;
    v11 = v13;
    v10[1] = (4 * v4) | a2 & 0xFFFFFFFFFFFFFFFBLL;
    v10[2] = a4;
    v12 = v10;
    sub_2223210(a1 + 928, v10, v11, off_2B40E60);
    v7 = (__int64)v12;
  }
  sub_F22AF0(&v14, v7);
  v8 = v14;
  if ( ptr[0] != v16 )
    free(ptr[0]);
  return v8;
}
