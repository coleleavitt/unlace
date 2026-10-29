bool __fastcall sub_5B5590(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 1672);
  v4 = a3[1];
  v12 = __readfsqword(0x28u);
  v11 = 0;
  sub_630CA0(*v3, 26, &v11, 16);
  if ( !(unsigned __int8)sub_42DA80(a2, *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 2456LL), (unsigned __int64 *)&v11) )
  {
    v7 = a3[1];
    v8 = *a3;
    if ( a3[2] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(a3, v8, v7 + 1, 24);
      v7 = a3[1];
      *a3 = v10;
      v8 = v10;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    ++a3[1];
    sub_35A790((char **)v9);
  }
  return a3[1] == v4;
}
