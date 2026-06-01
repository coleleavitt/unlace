__int64 __fastcall sub_5061A0(__int64 a1, unsigned int a2, unsigned __int64 a3, double a4, double a5, double a6)
{
  _QWORD *v7; // r9
  unsigned int v8; // r13d
  __int64 v9; // rax
  _BYTE *v10; // r14
  unsigned __int64 *v11; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
    return 0;
  v8 = sub_503FB0(a1, a2, a3);
  if ( (_BYTE)v8 )
  {
    v9 = v7[1];
    if ( a2 < (unsigned int)v9 )
      v9 = a2;
    v10 = (_BYTE *)(16 * v9 + *v7);
    sub_505250(a1, (__int64)"set_end n %u %a..%a newend %a", a2, a4, a5, a6);
    sub_5047B0((__int64 *)(*(_QWORD *)(a1 + 32) + 64LL), 4, a1, a2, a3, *(_QWORD *)(*(_QWORD *)v10 + 8LL));
    *(_QWORD *)(*(_QWORD *)v10 + 8LL) = a3;
    v11 = *(unsigned __int64 **)v10;
    v10[12] = 1;
    sub_505BD0(*(_QWORD *)(a1 + 32) + 64LL, a1, v11);
  }
  return v8;
}
