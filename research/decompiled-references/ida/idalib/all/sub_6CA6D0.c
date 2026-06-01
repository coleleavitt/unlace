__int64 __fastcall sub_6CA6D0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int128 v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v5 = *a1;
  v11 = __readfsqword(0x28u);
  v6 = *(__int64 **)(v5 + 1672);
  v10 = 0;
  sub_630CA0(*v6, 26, &v10, 0x10u, a5);
  result = 0;
  if ( a2 >= (unsigned __int64)v10 && a2 < *((_QWORD *)&v10 + 1) )
  {
    v8 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), a2);
    v9 = *a1;
    *(_QWORD *)&v10 = v8;
    return sub_7BE710(&v10, v9, -3, 65);
  }
  return result;
}
