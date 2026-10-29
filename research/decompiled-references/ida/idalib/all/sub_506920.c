__int64 __fastcall sub_506920(_QWORD *a1, unsigned int a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  _QWORD *v7; // r10
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 **v10; // r13
  __int64 *v11; // rdx

  if ( !a1[4] )
    return 0;
  v8 = sub_504020((__int64)a1, a2, a3);
  if ( (_BYTE)v8 )
  {
    v9 = v7[1];
    if ( a2 < (unsigned int)v9 )
      v9 = a2;
    v10 = (__int64 **)(16 * v9 + *v7);
    sub_505250((__int64)a1, (__int64)"set_start n %u %a..%a newstart %a", a2, a4, a5, a6);
    sub_5047B0((__int64 *)(a1[4] + 64LL), 3, (__int64)a1, a2, a3, **v10);
    sub_504300(a1, **v10, a3);
    netnode_supdel(*a1, **v10, 339);
    **v10 = a3;
    v11 = *v10;
    *((_BYTE *)v10 + 12) = 1;
    sub_505BD0(a1[4] + 64LL, (__int64)a1, (unsigned __int64 *)v11);
  }
  return v8;
}
