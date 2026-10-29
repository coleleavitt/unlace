__int64 __fastcall sub_1D27160(__int64 **a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v6; // rsi
  __int64 *v7; // r12
  unsigned __int16 *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // edx
  __int16 v16; // cx
  int v17; // r9d
  __int16 v18; // cx
  unsigned __int64 v19; // r8
  unsigned __int64 *v20; // rcx
  unsigned __int64 v22[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(void ***)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v7 = (__int64 *)sub_1D26A30(a1, v6, a3);
  else
    v7 = sub_1D1AAC0(a1, (__int64)v6, a3, a4);
  if ( !v7 )
    return 1;
  v8 = (unsigned __int16 *)sub_BFA3B0(a2);
  v12 = sub_1D11200((__int64 *)a1, v8, a3, a4, v9, v10, v11);
  if ( v12 == 1 )
    return 1;
  v13 = *a1;
  v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*((_DWORD *)*a1 + 3158) && *(__int64 **)(a2 + 24) == v7 && *(_QWORD *)(a2 + 16) == v14 )
    return a2;
  v15 = *(_DWORD *)(a2 + 32);
  v16 = *(_WORD *)v14;
  v22[0] = v14;
  v17 = *(_DWORD *)(a2 + 36);
  v18 = v16 & 0x1FF;
  if ( v18 == 19 )
  {
    v19 = *(unsigned int *)(v14 + 4);
    v20 = (unsigned __int64 *)(v14 + 24);
    return sub_19AB130((__int64)v13, v7, v15, v20, v19, v17, a3, (__m128i)a4, v15 == 0);
  }
  if ( v18 == 103 )
  {
    v19 = *(unsigned int *)(v14 + 16);
    v20 = (unsigned __int64 *)(v14 + 48);
    return sub_19AB130((__int64)v13, v7, v15, v20, v19, v17, a3, (__m128i)a4, v15 == 0);
  }
  return sub_19AB130((__int64)v13, v7, v15, v22, 1u, v17, a3, (__m128i)a4, v15 == 0);
}
