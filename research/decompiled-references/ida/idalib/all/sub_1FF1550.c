__int64 __fastcall sub_1FF1550(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 i; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  _WORD *v12; // r13
  _QWORD *v13; // rdi

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v5 = *a3;
  v6 = (a3[1] - v5) >> 5;
  if ( v6 )
  {
    for ( i = 0; ; i = v8 )
    {
      v10 = 32 * i + v5;
      v11 = *(_QWORD *)(v10 + 8);
      v12 = *(_WORD **)v10;
      if ( v11 <= 1 || *v12 != 28461 )
      {
        v13 = *(_QWORD **)(a1 + 8);
        if ( v13 == *(_QWORD **)(a1 + 16) )
        {
          sub_10BCB90((void ***)a1, *(const __m128i **)(a1 + 8), v10);
        }
        else
        {
          *v13 = v13 + 2;
          sub_1FF0D10(v13, *(_BYTE **)v10, *(_QWORD *)v10 + *(_QWORD *)(v10 + 8));
          *(_QWORD *)(a1 + 8) += 32LL;
        }
      }
      v8 = i + 1;
      if ( v11 == 2 )
      {
        v9 = i + 2;
        if ( *v12 == 28461 )
          v8 = v9;
      }
      if ( v6 <= v8 )
        break;
      v5 = *a3;
    }
  }
  return a1;
}
