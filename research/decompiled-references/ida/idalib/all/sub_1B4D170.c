__int64 __fastcall sub_1B4D170(__int64 a1, unsigned int a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // r8
  _QWORD *v6; // r9
  unsigned int v7; // r12d
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v12; // rdi
  __int64 v13[4]; // [rsp+10h] [rbp-20h] BYREF

  v7 = sub_1B4AFC0(
         *(_DWORD *)a1,
         a3,
         *(__int64 **)(a1 + 8),
         *(_QWORD *)(a1 + 16),
         a2,
         *(_DWORD *)(a1 + 24),
         a4,
         a5,
         *(_OWORD *)(a1 + 32),
         *(unsigned int **)(a1 + 48),
         **(_QWORD **)(a1 + 56),
         (_DWORD *)*(unsigned int *)(*(_QWORD *)(a1 + 56) + 8LL),
         *(_QWORD *)(a1 + 64),
         *(_DWORD **)(a1 + 72));
  if ( !(_BYTE)v7 && a2 != 0 && a2 >= *(_DWORD *)(a1 + 28) )
  {
    v8 = *(__int64 **)(a1 + 56);
    v9 = *v8;
    v10 = *(_QWORD *)(*v8 + 120LL * a2 + 24);
    if ( v10 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 16) + 28LL) & 0x7F) == 0x2C )
      {
        v12 = *(_QWORD *)(a1 + 64);
        v13[0] = *(_QWORD *)(*v8 + 120LL * a2 + 24);
        *(_QWORD *)sub_1AFFC90(v12, v13, (__int64)v8, v9, v5, v6) = v10;
      }
    }
  }
  return v7;
}
