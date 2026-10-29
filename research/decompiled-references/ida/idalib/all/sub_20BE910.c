void __fastcall sub_20BE910(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r12
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r12
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 *v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = sub_20A0E90((__int64)a2);
  v5 = v4;
  v6 = sub_2244B30(v3, v4);
  v7 = sub_2244E60(a1 + 288, v3, v5, v6);
  if ( v7 == -1 )
    v8 = (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * *(unsigned int *)(a1 + 296));
  else
    v8 = (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * v7);
  sub_20BE5E0(v17, v8, 1);
  v9 = v17[0];
  sub_20BE5E0(v17, (__int64 *)(*(_QWORD *)(a1 + 288) + 8LL * *(unsigned int *)(a1 + 296)), 1);
  if ( v17[0] != v9 )
  {
    v14 = (_QWORD *)*v9;
    sub_2244F90(a1 + 288, *v9, v10, v11, v12, v13);
    operator delete(v14, *v14 + 17LL, 8);
  }
  if ( *(__int64 **)(a1 + 856) == a2 )
    *(_QWORD *)(a1 + 856) = 0;
  v15 = (__int64 *)a2[1];
  v16 = *a2;
  *v15 = *a2;
  *(_QWORD *)(v16 + 8) = v15;
  *(_OWORD *)a2 = 0;
  sub_20A0D10(a2);
  operator delete(a2, 0x40u);
}
