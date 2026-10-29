unsigned __int64 __fastcall sub_A77C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned int v12; // [rsp+1Ch] [rbp-DCh]
  __int64 v13; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v15[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a6;
  v7 = a5;
  v12 = a4;
  ptr[0] = v15;
  ptr[1] = (void *)0x2000000000LL;
  sub_F608E0(ptr, a2, a3, a4, a5, a6);
  v13 = 0;
  v8 = sub_2223360(a1 + 512, ptr, &v13, &off_2B410A0);
  if ( !v8 || (v9 = v8 - 24, v8 == 24) )
  {
    v9 = sub_A6FFD0(
           (__int64 *)(a1 + 2352),
           8LL
         * ((*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                         + 8LL))
         + 48,
           4u);
    sub_F5E360(v9, a2, a3, v12, v7, v6);
    sub_A6A720(a1 + 8, v9);
    sub_2223210(a1 + 512, v9 + 24, v13, &off_2B410A0);
  }
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return v9 & 0xFFFFFFFFFFFFFFF0LL;
}
