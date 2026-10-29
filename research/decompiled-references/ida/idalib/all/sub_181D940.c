void __fastcall sub_181D940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  const __m128i **v10; // rax
  unsigned __int64 *v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v7 = *(const __m128i ***)(a3 + 8);
  v8 = *(unsigned int *)(a3 + 16);
  v9 = (__int64)&v7[v8];
  if ( (const __m128i **)v9 != v7 )
  {
    v8 = (__int64)*v7;
    v10 = v7 + 1;
    a4 = *(_QWORD *)(v8 + 72);
    if ( *(_WORD *)(a4 + 8) == 379 )
    {
LABEL_16:
      v9 = a2;
      sub_181D360(a1, a2, (const __m128i *)v8, a4, a5, a6);
    }
    else
    {
      while ( (const __m128i **)v9 != v10 )
      {
        v8 = (__int64)*v10++;
        a4 = *(_QWORD *)(v8 + 72);
        if ( *(_WORD *)(a4 + 8) == 379 )
          goto LABEL_16;
      }
    }
  }
  if ( a2 && (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = sub_B8C3D0(a2, v9, v8, a4, a5, a6);
    v12 = (__int64 *)*v11;
    v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( *v11 < v13 )
    {
      v16 = *v11;
      while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 145 )
      {
        v16 += 8LL;
        if ( v13 == v16 )
          return;
      }
      if ( v13 == v16 )
        return;
    }
    else
    {
      if ( v12 == (__int64 *)v13 )
        return;
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 145 )
      {
        v14 = (__int64 *)(v13 + 8);
        while ( v12 != v14 )
        {
          v15 = *v14++;
          if ( *(_WORD *)(v15 + 36) == 145 )
            goto LABEL_22;
        }
        return;
      }
    }
LABEL_22:
    sub_1688200(*(_QWORD *)(a1 + 648), a2);
  }
}
