__int64 __fastcall sub_1990250(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  void *v6; // r12
  unsigned __int16 *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // edx
  __int16 v11; // cx
  int v12; // r9d
  __int64 v13; // rdi
  __int16 v14; // cx
  int v15; // r8d
  int v16; // ecx
  unsigned __int64 v18; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(void ***)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = sub_198FB20(a1, v5, a3);
  else
    v6 = sub_1988430(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = (unsigned __int16 *)sub_BFA3B0(a2);
  v8 = sub_190CCA0(a1, v7, *(double *)a3.m128_u64, a4);
  if ( v8 == 1 )
    return 1;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(void **)(a2 + 24) == v6 && *(_QWORD *)(a2 + 16) == v9 )
    return a2;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = *(_WORD *)v9;
  v18 = v9;
  v12 = *(_DWORD *)(a2 + 36);
  v13 = *a1;
  v14 = v11 & 0x1FF;
  if ( v14 == 19 )
  {
    v15 = *(_DWORD *)(v9 + 4);
    v16 = v9 + 24;
    return sub_19AB130(v13, (_DWORD)v6, v10, v16, v15, v12, v10 == 0);
  }
  if ( v14 == 103 )
  {
    v15 = *(_DWORD *)(v9 + 16);
    v16 = v9 + 48;
    return sub_19AB130(v13, (_DWORD)v6, v10, v16, v15, v12, v10 == 0);
  }
  return sub_19AB130(v13, (_DWORD)v6, v10, (unsigned int)&v18, 1, v12, v10 == 0);
}
