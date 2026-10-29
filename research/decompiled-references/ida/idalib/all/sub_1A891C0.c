unsigned __int64 __fastcall sub_1A891C0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        char a9)
{
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v15; // rax
  char v17; // [rsp+17h] [rbp-D1h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v19[200]; // [rsp+20h] [rbp-C8h] BYREF

  v12 = sub_168B6C0((__int64)a1);
  v13 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a5 )
    return v13;
  v15 = sub_A787C0(v12, v13, a4, a5, &v17, 0);
  v13 = v15;
  if ( !v17 )
  {
    if ( a9 && (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
    return v13;
  }
  sub_168B9F0((__int64)v19, a1, 0, 0xFD5u, 0);
  v18 = __PAIR64__(a6, a3);
  sub_1587DB0((__int64)v19, (__int64 *)&v18);
  sub_15F7200(v19);
  if ( !a9 )
    return v13;
  return 0;
}
