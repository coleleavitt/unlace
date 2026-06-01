__int64 __fastcall sub_196D0D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v5; // rsi
  void *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  int v10; // edx
  int v11; // r9d
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  __int16 v15; // cx
  int v16; // r8d
  int v17; // ecx
  unsigned __int64 v18; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(void ***)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = sub_196CB60(a1, v5, a3);
  else
    v6 = sub_19425F0(a1, (__int64)v5, a3, a4);
  if ( !v6 )
    return 1;
  v7 = sub_BFA3B0(a2);
  v8 = sub_1933BC0(a1, v7, *(double *)a3.m128_u64, a4);
  if ( v8 == 1 )
    return 1;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = *(_DWORD *)(a2 + 36);
  v12 = *a1;
  v13 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(_WORD *)v13;
  v18 = v13;
  v15 = v14 & 0x1FF;
  if ( v15 == 19 )
  {
    v16 = *(_DWORD *)(v13 + 4);
    v17 = v13 + 24;
    return sub_19AB130(v12, (_DWORD)v6, v10, v17, v16, v11, v10 == 0);
  }
  if ( v15 == 103 )
  {
    v16 = *(_DWORD *)(v13 + 16);
    v17 = v13 + 48;
    return sub_19AB130(v12, (_DWORD)v6, v10, v17, v16, v11, v10 == 0);
  }
  return sub_19AB130(v12, (_DWORD)v6, v10, (unsigned int)&v18, 1, v11, v10 == 0);
}
