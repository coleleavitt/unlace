void __fastcall sub_1F99560(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // [rsp-10h] [rbp-28h]

  v5 = (unsigned int)a3;
  sub_9B9C90(a1[2], (unsigned int)a3);
  v10 = a2 + 24 * a3;
  while ( v10 != a2 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    a2 += 24;
    sub_1F992F0(a1, v5, v6, v7, v8, v9, *(_QWORD *)(a2 - 24), *(void **)(a2 - 16), v11);
  }
}
