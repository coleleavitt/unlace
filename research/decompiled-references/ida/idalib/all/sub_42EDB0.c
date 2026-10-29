bool __fastcall sub_42EDB0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r12
  unsigned __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int128 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v3 = *(_QWORD **)(a2 + 1672);
  v4 = a3[1];
  v13 = __readfsqword(0x28u);
  v12 = 0;
  sub_630CA0(*v3, 26, &v12, 16);
  v6 = sub_3BDE50(*(_QWORD **)(a2 + 1672), *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 2400LL));
  if ( v6 < (unsigned __int64)v12 || v6 >= *((_QWORD *)&v12 + 1) )
  {
    v8 = a3[1];
    v9 = *a3;
    if ( a3[2] < (unsigned __int64)(v8 + 1) )
    {
      v11 = qvector_reserve(a3, v9, v8 + 1, 24);
      v8 = a3[1];
      *a3 = v11;
      v9 = v11;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    sub_35A790((char **)v10);
  }
  return a3[1] == v4;
}
