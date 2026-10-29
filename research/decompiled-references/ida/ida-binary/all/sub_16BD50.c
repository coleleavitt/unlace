unsigned __int64 __fastcall sub_16BD50(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-20h]

  v3 = a1[1];
  v17 = __readfsqword(0x28u);
  *(_QWORD *)(*a1 + 8 * v3 - 8) = qstrdup(a2);
  v5 = qstrdup(a3);
  v6 = *a1;
  v7 = v5;
  v8 = a1[1];
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v15 = qvector_reserve(a1, v6, v8 + 1, 8);
    *a1 = v15;
    v6 = v15;
    v8 = a1[1];
  }
  *(_QWORD *)(v6 + 8 * v8) = v7;
  v9 = a1[1];
  v10 = a1[2];
  v11 = *a1;
  v12 = v9 + 1;
  v13 = v9 + 2;
  a1[1] = v12;
  if ( v10 < v13 )
  {
    v16 = qvector_reserve(a1, v11, v13, 8);
    *a1 = v16;
    v11 = v16;
    v12 = a1[1];
  }
  *(_QWORD *)(v11 + 8 * v12) = 0;
  ++a1[1];
  return v17 - __readfsqword(0x28u);
}
