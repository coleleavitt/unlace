__int64 __fastcall sub_1DD49D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v6; // rsi
  __int64 *v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  int v16; // edx
  __int16 v17; // cx
  int v18; // r9d
  __int16 v19; // cx
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rcx
  unsigned __int64 v23[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(void ***)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v7 = (__int64 *)sub_1DD4760((__int64)a1, v6, a3, a4);
  else
    v7 = sub_1DD1930((__int64)a1, (__int64)v6, a3, a4);
  if ( !v7 )
    return 1;
  v8 = sub_BFA3B0(a2);
  v13 = sub_1DC71F0(a1, v8, v9, v10, v11, v12, a3, a4);
  if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = *a1;
  v15 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && *(__int64 **)(a2 + 24) == v7 && *(_QWORD *)(a2 + 16) == v15 )
    return a2;
  v16 = *(_DWORD *)(a2 + 32);
  v17 = *(_WORD *)v15;
  v23[0] = v15;
  v18 = *(_DWORD *)(a2 + 36);
  v19 = v17 & 0x1FF;
  if ( v19 == 19 )
  {
    v20 = *(unsigned int *)(v15 + 4);
    v21 = (unsigned __int64 *)(v15 + 24);
    return sub_19AB130(v14, v7, v16, v21, v20, v18, a3, (__m128i)a4, v16 == 0);
  }
  if ( v19 == 103 )
  {
    v20 = *(unsigned int *)(v15 + 16);
    v21 = (unsigned __int64 *)(v15 + 48);
    return sub_19AB130(v14, v7, v16, v21, v20, v18, a3, (__m128i)a4, v16 == 0);
  }
  return sub_19AB130(v14, v7, v16, v23, 1u, v18, a3, (__m128i)a4, v16 == 0);
}
