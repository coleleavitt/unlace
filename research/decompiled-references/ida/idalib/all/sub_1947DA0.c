unsigned __int64 __fastcall sub_1947DA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  void **v8; // rsi
  void **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v21; // rdx
  int v22; // eax

  v8 = *(void ***)(a4 + 16);
  v10 = sub_1946B40(a1, v8, a5, a6);
  if ( !v10 )
    return 0;
  v15 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = (__int64 *)v10;
  v17 = *v15;
  if ( *(_BYTE *)(*v15 + 16) != 52 )
    v17 = sub_F63050(*v15, v8, v11, v12);
  v18 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v16, (*(_BYTE *)(v17 + 18) & 8) != 0, v12, v13, v14);
  v19 = v18;
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v18, 24, 8);
  *(_DWORD *)v21 = *(_DWORD *)a4;
  *(_DWORD *)(v21 + 4) = *(_DWORD *)(a4 + 4);
  v22 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)(v21 + 16) = v16;
  *(_DWORD *)(v21 + 8) = v22;
  return v19;
}
