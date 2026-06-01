unsigned __int64 __fastcall sub_A81D80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax

  v8 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v9 = *(_QWORD *)(a1 + 2352);
  *(_QWORD *)(a1 + 2432) += 48LL;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v11 = v8 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)a2 | (unsigned __int8)v8) & 7;
  if ( *(_QWORD *)(a1 + 2360) >= v10 + 48 && v9 )
  {
    *(_QWORD *)(a1 + 2352) = v10 + 48;
    v12 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v13 = v12;
  }
  else
  {
    v13 = sub_986170(a1 + 2352, 48, 48, 4, a5, a6);
    v12 = v13;
    v10 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  sub_F64DD0(v13, a1, a2, v11, a3);
  v14 = *(unsigned int *)(a1 + 16);
  if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    sub_2237220(a1 + 8, a1 + 24, v14 + 1, 8);
    v14 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v14) = v12;
  ++*(_DWORD *)(a1 + 16);
  return v10;
}
