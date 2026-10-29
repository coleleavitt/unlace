__int64 __fastcall sub_6795E0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // r13d
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // r12
  __int64 *v19; // rbx
  __m128i v20; // [rsp+0h] [rbp-38h]

  sub_661310(a1, a2);
  v7 = *(_QWORD *)(a2 + 120);
  if ( v7 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) != 0 )
    {
      if ( !v8 )
        goto LABEL_11;
      v8 = *(_QWORD *)v8;
    }
    if ( v8 )
    {
      v9 = *(unsigned int *)(v8 + 8);
      if ( (_DWORD)v9 )
      {
        v10 = v8 + 16;
        v11 = v10 + 32 * v9;
        while ( (unsigned __int8)sub_674590(a1, v10, a3, a4, a5, a6) )
        {
          v10 += 32;
          if ( v10 == v11 )
            goto LABEL_11;
        }
        return 0;
      }
    }
  }
LABEL_11:
  if ( (unsigned int)sub_77D1A0(a2) == 2 )
  {
    if ( (unsigned __int8)sub_674A70(a1, a2, a3, a4, a5, a6) )
    {
      v15 = 0;
      if ( (unsigned __int8)sub_79B790(a2) )
        v15 = sub_79AC10(a2);
      v12 = sub_66F3A0(a1, v15, a3, a4, a5, a6);
      if ( (_BYTE)v12 )
      {
        v16 = sub_6434A0(a2);
        v18 = v17;
        v19 = (__int64 *)v16;
        if ( v17 == (__int64 *)v16 )
          return v12;
        while ( (unsigned __int8)sub_6777E0(a1, *v19, a3, a4, a5, a6) )
        {
          if ( v18 == ++v19 )
            return v12;
        }
      }
    }
    return 0;
  }
  v14 = *(_QWORD *)(a2 + 56);
  if ( (v14 & 4) == 0 )
    return sub_674510(a1, 0, 0, 0.0, a4, a5, a6);
  v20 = _mm_loadu_si128((const __m128i *)(v14 & 0xFFFFFFFFFFFFFFF8LL));
  return sub_674510(a1, v20.m128i_i64[0], v20.m128i_i64[1], a3, v20, a5, a6);
}

