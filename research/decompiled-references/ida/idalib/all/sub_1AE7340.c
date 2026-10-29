unsigned __int64 __fastcall sub_1AE7340(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v7; // r12
  unsigned __int64 *v9; // rbx
  _WORD *v10; // rbp
  int v11; // eax
  _QWORD *v12; // rdi
  int v13; // r15d
  __int64 v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 *v23; // [rsp+8h] [rbp-40h]

  v7 = 0;
  if ( a3 )
  {
    v23 = (unsigned __int64 *)(a2 + 8 * a3);
    if ( (unsigned __int64 *)a2 != v23 )
    {
      v9 = (unsigned __int64 *)a2;
      do
      {
        while ( 1 )
        {
          v10 = (_WORD *)*v9;
          v11 = sub_C00A40(*v9, a2, a3, a4, a5);
          v12 = *(_QWORD **)(a1 + 248);
          v13 = v11;
          v14 = v12[2329];
          v15 = sub_A81910(v12, v14, 0);
          v19 = sub_C00A40((unsigned __int64)v10, v14, v16, v17, v18);
          a2 = v19;
          v20 = sub_16B2590(a1, v19, v15, v13, v10, a6, *(double *)a7.m128_u64) & 0xFFFFFFFFFFFFFFFELL;
          v21 = v20;
          if ( !v7 )
            break;
          ++v9;
          a2 = (unsigned int)sub_C00A40(v20, a2, a3, a4, a5);
          v7 = sub_1928110(a1, a2, 0x20u, v7, v21, 0, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
          if ( v23 == v9 )
            return v7;
        }
        ++v9;
        v7 = v20;
      }
      while ( v23 != v9 );
    }
  }
  return v7;
}
