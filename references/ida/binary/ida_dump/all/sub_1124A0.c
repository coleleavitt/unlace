__int64 __fastcall sub_1124A0(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax

  if ( *(_DWORD *)(a1 + 76) != 4 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 7 )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  v8 = a4;
  v11 = sub_110EB0(v6, a4);
  if ( v11 == -1 )
    return 0;
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 64) )
    sub_111110(v6, v8, v12, v10, a5);
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13);
  v15 = sub_110EB0(v14, a5);
  if ( v11 != v15 || v15 == -1 )
    return 0;
  *a2 = v6;
  *a3 = v14;
  return 1;
}
