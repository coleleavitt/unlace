__int64 __fastcall sub_2109C70(__int64 a1, const void *a2, size_t a3, char a4)
{
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
  __int64 *v10; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  _QWORD *v14; // r12
  unsigned int v15; // eax
  __int64 *v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 *v22; // [rsp+8h] [rbp-50h]
  __int64 *v23[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = sub_2244B30(a2, a3);
  v6 = sub_2244CB0(a1 + 2192, a2, a3, v5);
  v9 = v6;
  v10 = (__int64 *)(*(_QWORD *)(a1 + 2192) + 8LL * v6);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_2109C30(v23, v10, 0);
      return *(_QWORD *)(*v23[0] + 8);
    }
    --*(_DWORD *)(a1 + 2208);
  }
  v22 = v10;
  v12 = sub_22300B0(a3 + 17, 8, v6, v10, v7, v8);
  v13 = v22;
  v14 = (_QWORD *)v12;
  if ( a3 )
  {
    memcpy((void *)(v12 + 16), a2, a3);
    v13 = v22;
  }
  *((_BYTE *)v14 + a3 + 16) = 0;
  *v14 = a3;
  v14[1] = 0;
  *v13 = (__int64)v14;
  ++*(_DWORD *)(a1 + 2204);
  v15 = sub_22450D0(a1 + 2192, v9);
  sub_2109C30(v23, (__int64 *)(*(_QWORD *)(a1 + 2192) + 8LL * v15), 0);
  v16 = v23[0];
  v17 = *v23[0];
  v18 = **(_QWORD **)v23[0];
  v19 = sub_2105F40((__int64 *)(a1 + 480), 176, 3u);
  sub_2113B00(v19, 7, v17 + 16, v18, (unsigned __int8)(a4 - 2) <= 1u, 0, 0);
  *(_QWORD *)v19 = off_2C73078;
  *(_QWORD *)(*v16 + 8) = v19;
  v20 = sub_2105F80(a1);
  *(_QWORD *)(v20 + 8) = v19;
  **(_QWORD **)(v19 + 8) = v20;
  *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) = v20;
  return *(_QWORD *)(*v16 + 8);
}
