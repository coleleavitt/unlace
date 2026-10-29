unsigned __int64 __fastcall sub_67E0B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 that; // rbx
  unsigned __int64 v9; // r15
  int v10; // r12d
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  const __m128i *i; // r12
  unsigned int j; // ebx
  unsigned int v17; // eax
  __m128i v18; // xmm0
  __int64 v19; // rsi
  int v20; // eax
  __m128i v21; // [rsp+10h] [rbp-168h] BYREF
  __int128 v22; // [rsp+20h] [rbp-158h]
  unsigned __int64 v23[33]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v24; // [rsp+138h] [rbp-40h]

  v6 = *(__int64 **)(a1 + 1672);
  v24 = __readfsqword(0x28u);
  v7 = sub_631AD0(*v6, 19, a3, a4, a5, a6);
  if ( v7 != -1 )
  {
    that = v7;
    while ( 1 )
    {
      v9 = sub_3BE900(*(_QWORD **)(a1 + 1672), that, 4);
      if ( (unsigned __int8)is_stroff(v9, 0) )
        break;
      do
      {
        v10 = 1;
        if ( !(unsigned __int8)is_stroff(v9, 1) )
          break;
LABEL_6:
        v11 = sub_3C8E00(*(unsigned __int8 ***)(a1 + 1672), (__int64 *)v23, v21.m128i_i64, that, v10);
        sub_3C8980(*(__int64 **)(a1 + 1672), that, v10, v23, v11, v21.m128i_i64[0]);
      }
      while ( v10 != 1 );
      that = next_that(that, -1, sub_67DD70, 0);
      if ( that == -1 )
        goto LABEL_9;
    }
    v10 = 0;
    goto LABEL_6;
  }
LABEL_9:
  v12 = *(unsigned int *)(a1 + 932);
  if ( (unsigned int)v12 <= 0x1A )
  {
    v13 = 67188736;
    if ( _bittest64(&v13, v12) )
    {
      for ( i = (const __m128i *)sub_506150(*(_QWORD *)(a1 + 1672) + 1624LL);
            i;
            i = (const __m128i *)sub_505EB0(*(_QWORD *)(a1 + 1672) + 1624LL, i->m128i_i64[0]) )
      {
        for ( j = *(_DWORD *)(a1 + 996); *(_DWORD *)(a1 + 1000) >= (signed int)j; ++j )
        {
          while ( (unsigned __int8)get_sreg_range(0, i->m128i_i64[0]) )
          {
            if ( *(_DWORD *)(a1 + 1000) < (signed int)++j )
              goto LABEL_19;
          }
          v17 = j - *(_DWORD *)(a1 + 996);
          v21 = 0;
          v22 = 0;
          v18 = _mm_loadu_si128(i);
          BYTE8(v22) = 4;
          v21 = v18;
          *(_QWORD *)&v22 = i[3].m128i_i64[(int)v17 + 1];
          if ( *(_DWORD *)(a1 + 1012) == j )
          {
            v20 = *(_DWORD *)(a1 + 932);
            if ( (unsigned int)(v20 - 12) <= 1 )
            {
              *(_QWORD *)&v22 = i[3].m128i_i64[0];
            }
            else if ( v20 == 16 )
            {
              *(_QWORD *)&v22 = getinf(12);
            }
          }
          v19 = j;
          sub_51A800(a1, v19, (__int64)&v21);
        }
LABEL_19:
        ;
      }
    }
  }
  dword_2CCC3C8 &= ~0x2000u;
  return v24 - __readfsqword(0x28u);
}
