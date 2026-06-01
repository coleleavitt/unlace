void __fastcall sub_1BF7750(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  unsigned __int64 v14; // rsi
  unsigned __int8 v15; // al
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v21; // [rsp+28h] [rbp-40h]

  v8 = *(__int64 **)(a2 + 8);
  v9 = &v8[*(unsigned int *)(a2 + 16)];
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v21 = *v8;
      v14 = *v8 & 0xFFFFFFFFFFFFFFF8LL;
      v15 = *(_BYTE *)(v14 + 28) & 0x7F;
      v16 = v15;
      v17 = (unsigned int)v15 - 53;
      if ( (unsigned int)v17 <= 1 )
      {
        v14 = *(_QWORD *)(v14 + 64);
        v15 = *(_BYTE *)(v14 + 28) & 0x7F;
        v16 = v15;
      }
      if ( (unsigned int)(v16 - 34) > 5 )
        break;
      if ( a3 )
        goto LABEL_3;
      v18 = *(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(unsigned __int8 *)(v18 + 16);
      if ( (unsigned int)(v19 - 25) > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
          BUG();
        LOBYTE(v19) = *(_BYTE *)(sub_F63050(v18, v14, v19, v17) + 16);
      }
      if ( (_BYTE)v19 != 26 )
      {
LABEL_3:
        if ( v9 == ++v8 )
          return;
      }
      else
      {
        ++v8;
        sub_1BF10B0(a1, v14, v21, a4, a5, a6, a7, a8, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
        if ( v9 == v8 )
          return;
      }
    }
    if ( v15 == 71 )
      sub_1BF3B70(a1, (__int64 *)v14, v21, a3, a4, a5, *(double *)a7.m128_u64, a8, (__int64)a6, 0, 0, 0, 0);
    goto LABEL_3;
  }
}
