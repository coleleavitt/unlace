__int64 __fastcall sub_7344A0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r12
  __int64 v4; // rbp
  __m128i *v6; // r13
  char *v7; // rax
  unsigned int v8; // r8d
  __int16 v9; // ax
  unsigned __int16 v10; // ax
  int v11; // edx

  v3 = a3;
  if ( !(_WORD)a2 )
    goto LABEL_2;
  v6 = (__m128i *)a1;
  v4 = sub_7361F0(*(_QWORD *)(a1 + 16), (unsigned __int16)a2);
  if ( !v4 )
  {
    dword_2CCC510 = 17;
    return 0;
  }
  a1 = *(_QWORD *)(a1 + 8);
  a2 = (unsigned __int16)a2;
  v7 = sub_733BE0((__m128i *)a1, a2, 0);
  if ( !v7 )
    goto LABEL_2;
  *(_QWORD *)v4 = v7;
  a1 = (unsigned int)*((__int16 *)v7 + 1);
  if ( (int)a1 <= 0 )
    goto LABEL_2;
  a2 = *((__int16 *)v7 + 1);
  v8 = v6->m128i_i32[0];
  a3 = v6->m128i_u32[0] / 9uLL;
  if ( a2 >= a3 )
    goto LABEL_2;
  a3 = *(unsigned __int16 *)&v7[4 * *((__int16 *)v7 + 1) + 6];
  *((_DWORD *)v7 - 2) = v8;
  if ( v6->m128i_i32[0] < (unsigned int)a3 )
  {
    v9 = -1;
    goto LABEL_12;
  }
  if ( (unsigned int)a3 >= v8 )
  {
LABEL_2:
    if ( !v3 )
      return 0;
LABEL_19:
    sub_737820(a1, a2, a3);
  }
  v9 = a3 - (4 * a1 + 16) - 4;
LABEL_12:
  *(_WORD *)(v4 + 8) = v9;
  *(_DWORD *)(v4 + 32) = 0;
  if ( v3 )
  {
    v10 = *(_WORD *)(v4 + 10);
    if ( v10 < (unsigned int)v6[363].m128i_i16[0] )
    {
      v11 = *(unsigned __int8 *)(v6[363].m128i_i64[1] + ((unsigned __int64)v10 >> 3));
      if ( !_bittest(&v11, v10 & 7) )
      {
        a2 = v4;
        a1 = (unsigned __int64)v6;
        if ( sub_734440(v6, (__int16 *)v4) )
        {
          sub_734010((__int64)v6[363].m128i_i64, *(_WORD *)(v4 + 10));
          return v4;
        }
        goto LABEL_19;
      }
    }
  }
  return v4;
}
