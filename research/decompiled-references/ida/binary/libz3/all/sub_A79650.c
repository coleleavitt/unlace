__int64 __fastcall sub_A79650(__m128i **a1, __m128i **a2, int a3)
{
  __m128i *v3; // r14
  char *v4; // r12
  char *v5; // rbx
  void *v6; // rbp
  char *v7; // rsi
  __m128i *v9; // r15
  __int64 v10; // rax
  size_t v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rbp
  int v14; // eax
  __int64 v15; // rax
  void *v16; // r14
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-50h]
  __m128i *v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+18h] [rbp-40h]

  switch ( a3 )
  {
    case 0:
      *a1 = (__m128i *)&`typeinfo for'lp::bound_analyzer_on_row<std::vector<lp::row_cell<rational>,std_allocator<lp::row_cell<rational>>>,lp::lp_bound_propagator<smt::theory_lra::imp>>::limit_j(unsigned int,rational const&,bool,bool,bool)::{lambda(void)#1};
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    case 2:
      v9 = *a2;
      v10 = operator new(0x28u);
      v11 = v9->m128i_i64[1] - v9->m128i_i64[0];
      v20 = (__m128i *)v10;
      *(_QWORD *)(v10 + 16) = 0;
      *(_OWORD *)v10 = 0;
      if ( v11 )
        v21 = sub_186B270(v11);
      else
        v21 = 0;
      v20[1].m128i_i64[0] = v21 + v11;
      v12 = v21;
      *v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
      v13 = (__int64 *)v9->m128i_i64[0];
      v19 = v9->m128i_i64[1];
      if ( v19 == v9->m128i_i64[0] )
      {
LABEL_26:
        v20[1].m128i_i32[2] = v9[1].m128i_i32[2];
        v17 = v9[1].m128i_i16[6];
        v20->m128i_i64[1] = v12;
        v20[1].m128i_i16[6] = v17;
        v20[1].m128i_i8[14] = v9[1].m128i_i8[14];
        v18 = v9[2].m128i_i64[0];
        *a1 = v20;
        v20[2].m128i_i64[0] = v18;
        return 0;
      }
      while ( 1 )
      {
        v15 = *v13;
        v16 = qword_1C7F2C0;
        *(_DWORD *)(v12 + 8) = 0;
        *(_BYTE *)(v12 + 12) &= 0xFCu;
        *(_BYTE *)(v12 + 28) &= 0xFCu;
        *(_QWORD *)v12 = v15;
        *(_QWORD *)(v12 + 16) = 0;
        *(_DWORD *)(v12 + 24) = 1;
        *(_QWORD *)(v12 + 32) = 0;
        if ( (*((_BYTE *)v13 + 12) & 1) != 0 )
        {
          sub_182C690(v16, v12 + 8, v13 + 1);
          if ( (*((_BYTE *)v13 + 28) & 1) != 0 )
          {
LABEL_24:
            sub_182C690(v16, v12 + 24, v13 + 3);
            goto LABEL_21;
          }
        }
        else
        {
          *(_DWORD *)(v12 + 8) = *((_DWORD *)v13 + 2);
          if ( (*((_BYTE *)v13 + 28) & 1) != 0 )
            goto LABEL_24;
        }
        v14 = *((_DWORD *)v13 + 6);
        *(_BYTE *)(v12 + 28) &= ~1u;
        *(_DWORD *)(v12 + 24) = v14;
LABEL_21:
        v12 += 40;
        v13 += 5;
        if ( (__int64 *)v19 == v13 )
          goto LABEL_26;
      }
    case 3:
      v3 = *a1;
      if ( *a1 )
      {
        v4 = (char *)v3->m128i_i64[1];
        v5 = (char *)v3->m128i_i64[0];
        if ( v4 != (char *)v3->m128i_i64[0] )
        {
          do
          {
            v6 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v5 + 8);
            v7 = v5 + 24;
            v5 += 40;
            sub_182CBA0(v6, v7);
          }
          while ( v4 != v5 );
          v5 = (char *)v3->m128i_i64[0];
        }
        if ( v5 )
          sub_186B220(v5);
        operator delete(v3, 0x28u);
      }
      break;
  }
  return 0;
}

