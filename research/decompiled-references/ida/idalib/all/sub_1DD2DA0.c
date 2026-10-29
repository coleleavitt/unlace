unsigned __int16 *__fastcall sub_1DD2DA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r13
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  unsigned __int16 *v17; // r12
  int v18; // eax

  v4 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
  v5 = sub_1DD1930((__int64)a1, v4, a3, a4);
  if ( !v5 )
    return (_WORD *)(&dword_0 + 1);
  v10 = v5;
  v11 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), v6, v7, v8, v9, a3, a4);
  if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return (_WORD *)(&dword_0 + 1);
  v15 = *a1;
  v16 = *(_QWORD *)(a2 + 32);
  v17 = (unsigned __int16 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL);
  if ( !*(_DWORD *)(v15 + 12632) && v10 == (__int64 *)v4 && (unsigned __int16 *)v16 == v17 )
    return sub_19A3E40(v15, (unsigned __int16 *)a2, v12, v13, v14, a3, a4);
  v18 = sub_EEC140(v16);
  return (unsigned __int16 *)sub_18D9980(v15, *(unsigned int *)(a2 + 16), v10, v18, v17, *(double *)a3.m128_u64);
}
