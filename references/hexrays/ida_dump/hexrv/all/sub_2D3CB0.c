__int64 __fastcall sub_2D3CB0(__int64 a1)
{
  unsigned int v1; // r12d
  _QWORD *v2; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]
  __int128 v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+30h] [rbp-28h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = *(_QWORD **)(a1 + 88);
  v18 = __readfsqword(0x28u);
  if ( v2[1] > 2u )
    return v1;
  v13 = 0;
  v15 = 0;
  v17 = 1;
  v14 = 0;
  v16 = 0;
  sub_2D3720(v2, (__int64)&v13);
  v4 = v15;
  if ( (_QWORD)v14 )
  {
    v1 = 0;
    if ( v15 )
    {
      if ( !(_QWORD)v16 )
      {
LABEL_8:
        *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
        *(_QWORD *)v15 &= ~1uLL;
        *(_QWORD *)v15 |= 2uLL;
        goto LABEL_9;
      }
LABEL_20:
      v9 = *(_QWORD *)v15;
      v10 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v10 & 2) != 0 )
      {
LABEL_28:
        v1 = 0;
        *(_QWORD *)v4 = v9 & 3 | v4 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
        *(_QWORD *)v15 &= ~1uLL;
        *(_QWORD *)v15 |= 2uLL;
        *(_QWORD *)&v16 = 0;
LABEL_9:
        if ( v15 )
          qfree(v15);
        goto LABEL_11;
      }
      v11 = *(_QWORD **)(v10 + 8);
      if ( (*(_BYTE *)v11 & 2) != 0 )
      {
        v12 = *(_QWORD **)(v10 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
          goto LABEL_30;
      }
      else
      {
        sub_2ABC20(v11);
        v12 = *(_QWORD **)(v10 + 16);
        if ( (*(_BYTE *)v12 & 2) != 0 )
          goto LABEL_24;
      }
      sub_2ABC20(v12);
LABEL_24:
      if ( (*(_BYTE *)v10 & 2) != 0 )
      {
LABEL_25:
        if ( v9 > 3 )
          qfree(v10);
        v4 = v15;
        v9 = *(_QWORD *)v15;
        goto LABEL_28;
      }
LABEL_30:
      cleanup_argloc(v10 + 48);
      cleanup_argloc(v10 + 24);
      *(_QWORD *)v10 |= 2uLL;
      goto LABEL_25;
    }
  }
  else
  {
    if ( !(_QWORD)v16 )
    {
      if ( !*((_QWORD *)&v16 + 1) )
        LOBYTE(v1) = v17 == 1;
      if ( !v15 )
        goto LABEL_11;
      goto LABEL_8;
    }
    v1 = 0;
    if ( v15 )
      goto LABEL_20;
  }
LABEL_11:
  v5 = v13;
  if ( v13 )
  {
    v6 = v14;
    if ( (_QWORD)v14 )
    {
      v7 = 0;
      do
      {
        v8 = 3 * v7++;
        sub_2B4D80((_QWORD *)(32 * v8 + v5));
        v5 = v13;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v5);
  }
  return v1;
}
