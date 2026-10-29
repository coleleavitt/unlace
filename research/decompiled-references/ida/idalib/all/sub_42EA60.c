bool __fastcall sub_42EA60(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 1672);
  v5 = a3[1];
  v20 = __readfsqword(0x28u);
  v19 = 0;
  sub_630CA0(*v4, 26, &v19, 16);
  v7 = sub_3BDE50(*(_QWORD **)(a2 + 1672), *(_QWORD *)(a2 + 1520));
  if ( v7 < (unsigned __int64)v19 || v7 >= *((_QWORD *)&v19 + 1) )
  {
    v10 = a3[1];
    v11 = *a3;
    if ( a3[2] < (unsigned __int64)(v10 + 1) )
    {
      v17 = qvector_reserve(a3, v11, v10 + 1, 24);
      v10 = a3[1];
      *a3 = v17;
      v11 = v17;
    }
    v12 = v11 + 24 * v10;
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    ++a3[1];
    sub_35A790((char **)v12);
  }
  v8 = sub_631AD0(a2, 94);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v13 = sub_3BDE50(*(_QWORD **)(a2 + 1672), v8);
    if ( v13 < (unsigned __int64)v19 || v13 >= *((_QWORD *)&v19 + 1) )
    {
      v14 = a3[1];
      v15 = *a3;
      if ( a3[2] < (unsigned __int64)(v14 + 1) )
      {
        v18 = qvector_reserve(a3, v15, v14 + 1, 24);
        v14 = a3[1];
        *a3 = v18;
        v15 = v18;
      }
      v16 = v15 + 24 * v14;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      ++a3[1];
      sub_35A790((char **)v16);
    }
  }
  return a3[1] == v5;
}
