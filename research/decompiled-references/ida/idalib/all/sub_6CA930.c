__int64 __fastcall sub_6CA930(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 *v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int128 v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v7 = *a1;
  v14 = __readfsqword(0x28u);
  v9 = *(__int64 **)(v7 + 1672);
  v13 = 0;
  sub_630CA0(*v9, 26, &v13, 0x10u, a5);
  result = -1;
  if ( a3 >= (unsigned __int64)v13 && a3 < *((_QWORD *)&v13 + 1) )
  {
    v11 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), a3);
    v12 = *a1;
    *(_QWORD *)&v13 = v11;
    return sub_7BEA80(&v13, v12, a2, a4, 83);
  }
  return result;
}
