unsigned __int16 *__fastcall sub_1D54BC0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int16 *v16; // r12
  int v17; // eax

  v4 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
  v5 = sub_1D51480(a1, v4, a3, a4);
  if ( !v5 )
    return (_WORD *)(&dword_0 + 1);
  v9 = v5;
  v10 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 32), a3, a4, v6, v7, v8);
  if ( v10 == 1 )
    return (_WORD *)(&dword_0 + 1);
  v14 = *a1;
  v15 = *(_QWORD *)(a2 + 32);
  v16 = (unsigned __int16 *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( !*(_DWORD *)(v14 + 12632) && v9 == (__int64 *)v4 && (unsigned __int16 *)v15 == v16 )
    return sub_19A3E40(v14, (unsigned __int16 *)a2, v11, v12, v13, a3, a4);
  v17 = sub_EEC140(v15);
  return (unsigned __int16 *)sub_18D9980(v14, *(unsigned int *)(a2 + 16), v9, v17, v16, *(double *)a3.m128_u64);
}
