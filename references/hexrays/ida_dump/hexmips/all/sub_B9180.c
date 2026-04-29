__int64 __fastcall sub_B9180(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // r14d
  _QWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // al
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  _QWORD *v23; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL);
  v4 = *(_QWORD *)(v3 + 8LL * (int)a2);
  if ( !*(_QWORD *)(v4 + 608) )
  {
    sub_32BD80(*(_QWORD *)(v3 + 8LL * (int)a2));
    return 0;
  }
  v20 = *(_QWORD *)(a1 + 40);
  v8 = 24 * (a2 >> 32);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 600) + v8 + 8);
  v10 = sub_32BD80(v4);
  if ( (int)v9 <= 0 )
    return 0;
  v5 = 0;
  v11 = (_QWORD *)(v20 + 24LL * (int)a2);
  v12 = (unsigned int)(v9 - 1);
  v13 = 0;
  v14 = 4 * v12 + 4;
  do
  {
    v19 = *(int *)(*(_QWORD *)(*(_QWORD *)(v4 + 600) + v8) + v13);
    if ( v10 > (int)v19 )
    {
      v18 = *(_QWORD *)(*v11 + 8 * v19);
      if ( v18 )
      {
        if ( !v5
          || ((v23 = v11, v22 = v14, v21 = *(_QWORD *)(*v11 + 8 * v19), a3)
            ? (v15 = *(_QWORD *)(v5 + 8), v16 = *(_QWORD *)(*v11 + 8 * v19))
            : (v15 = *(_QWORD *)(v18 + 8), v16 = v5),
              v17 = sub_11E040(v16, v15, 0),
              v18 = v21,
              v14 = v22,
              v11 = v23,
              v17) )
        {
          v5 = v18;
        }
      }
    }
    v13 += 4;
  }
  while ( v13 != v14 );
  return v5;
}
