void __fastcall sub_62F7F0(__int64 *a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v17; // [rsp+0h] [rbp-50h]
  __int64 v18; // [rsp+8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+10h] [rbp-40h]

  if ( a2 != a3 && !*(_QWORD *)(a3 + 48) && *(_QWORD *)(a2 + 48) )
  {
    v7 = *a1;
    v18 = 0;
    v19 = v7;
    sub_62E310((__int64)a1, a3, &v18, a4, a5, a6);
    v8 = *a1;
    v9 = v18;
    v17 = v19;
    v10 = *(_DWORD *)(*a1 + 712);
    *(_DWORD *)(v8 + 712) = 1;
    v11 = sub_15DE370(v8);
    v12 = sub_15DE0E0(*a1, *(_QWORD *)(a2 + 48), v11);
    v13 = *a1;
    v14 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v15 = *(_QWORD *)(a3 + 48);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 8))-- == 1 )
        sub_15D7BC0(v13, v15);
    }
    *(_QWORD *)(a3 + 48) = v14;
    *(_DWORD *)(v8 + 712) = v10;
    sub_629FE0(v9, v17);
  }
}

