__int64 __fastcall sub_679750(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r12
  unsigned int v12; // r12d
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // r13
  __int64 *v18; // rbx

  sub_65FC50(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
  if ( (unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 144), a3, a4, a5, a6) )
  {
    v7 = *(_QWORD *)(a2 + 120);
    if ( !v7 )
      goto LABEL_5;
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) != 0 )
    {
      if ( !v8 )
LABEL_5:
        BUG();
      v8 = *(_QWORD *)v8;
      v9 = *(unsigned int *)(v8 + 8);
    }
    else
    {
      v9 = *(unsigned int *)(v8 + 8);
    }
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 16;
      v11 = v10 + 32 * v9;
      while ( (unsigned __int8)sub_674590(a1, v10, a3, a4, a5, a6) )
      {
        v10 += 32;
        if ( v10 == v11 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( (unsigned __int8)sub_674A70(a1, a2, a3, a4, a5, a6) )
      {
        v14 = 0;
        if ( (unsigned __int8)sub_79B790(a2) )
          v14 = sub_79AC10(a2);
        v12 = sub_66F3A0(a1, v14, a3, a4, a5, a6);
        if ( (_BYTE)v12 )
        {
          v15 = sub_6434A0(a2);
          v17 = v16;
          v18 = (__int64 *)v15;
          if ( v16 == (__int64 *)v15 )
            return v12;
          while ( (unsigned __int8)sub_6777E0(a1, *v18, a3, a4, a5, a6) )
          {
            if ( v17 == ++v18 )
              return v12;
          }
        }
      }
    }
  }
  return 0;
}

