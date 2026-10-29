__int64 __fastcall sub_1C92BE0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  __int64 *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int16 *v11; // rax
  int v13; // edx
  int v14; // r9d
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int16 v17; // cx
  __int16 v18; // cx
  unsigned __int64 v19; // r8
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(void ***)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = (__int64 *)sub_1C925E0(a1, v5, a3);
  else
    v6 = sub_1C8AA80(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = sub_BFA3B0(a2);
  v11 = sub_1C7CFE0(a1, v7, a3, a4, v8, v9, v10);
  if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v13 = *(_DWORD *)(a2 + 32);
  v14 = *(_DWORD *)(a2 + 36);
  v15 = *a1;
  v16 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(_WORD *)v16;
  v21[0] = v16;
  v18 = v17 & 0x1FF;
  if ( v18 == 19 )
  {
    v19 = *(unsigned int *)(v16 + 4);
    v20 = (unsigned __int64 *)(v16 + 24);
    return sub_19AB130(v15, v6, v13, v20, v19, v14, a3, (__m128i)a4, v13 == 0);
  }
  if ( v18 == 103 )
  {
    v19 = *(unsigned int *)(v16 + 16);
    v20 = (unsigned __int64 *)(v16 + 48);
    return sub_19AB130(v15, v6, v13, v20, v19, v14, a3, (__m128i)a4, v13 == 0);
  }
  return sub_19AB130(v15, v6, v13, v21, 1u, v14, a3, (__m128i)a4, v13 == 0);
}
