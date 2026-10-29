/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EC90
// Address: 0x0045EC90

//----- (0045EC90) --------------------------------------------------------
int __stdcall sub_45EC90(_WORD *a1, _WORD *a2, _WORD *a3, char a4)
{
  unsigned int v4; // edi
  int v5; // eax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  int v8; // esi
  int v9; // edx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // bp
  unsigned int v12; // edi
  int v14; // [esp+14h] [ebp-40h]
  int v15; // [esp+18h] [ebp-3Ch]
  char v16; // [esp+1Ch] [ebp-38h]
  __m128i v17; // [esp+20h] [ebp-34h] BYREF
  int v18; // [esp+30h] [ebp-24h]
  __int16 v19; // [esp+34h] [ebp-20h]
  __m128i v20; // [esp+38h] [ebp-1Ch] BYREF
  int v21; // [esp+48h] [ebp-Ch]
  __int16 v22; // [esp+4Ch] [ebp-8h]
  char v23; // [esp+64h] [ebp+10h]

  sub_45F620(a1, &v20);
  sub_45F620(a2, &v17);
  if ( a4 )
    v17.m128i_i16[0] = ~v17.m128i_i16[0];
  v4 = v17.m128i_u16[1];
  v5 = v20.m128i_u16[1] - v17.m128i_u16[1];
  if ( v5 <= 0 )
  {
    v7 = v20;
    v14 = v21;
    v6 = v17;
    v15 = v18;
  }
  else
  {
    v6 = v20;
    v7 = v17;
    v14 = v18;
    v15 = v21;
    v18 = v21;
    v21 = v14;
    v4 = (unsigned int)_mm_cvtsi128_si32(v20) >> 16;
    v5 = v17.m128i_u16[1] - v20.m128i_u16[1];
    v17 = v20;
    v19 = 0;
    v20 = v7;
    v22 = 0;
  }
  v16 = 0;
  if ( v5 )
  {
    if ( v5 >= -113 )
    {
      v16 = sub_45F7E0(&v20, v5) != 1;
LABEL_21:
      if ( v20.m128i_i16[0] == v17.m128i_i16[0] )
      {
        sub_45D960(&v20, &v17);
        v23 = 0;
      }
      else
      {
        sub_45DEE0(&v20, &v17);
        v23 = 1;
      }
      if ( !sub_45F2B0((int)&v17, v16, v23, v4, 112) )
      {
LABEL_25:
        *(_OWORD *)a3 = 0;
        return 2;
      }
    }
  }
  else
  {
    v8 = 2;
    v9 = 0;
    do
    {
      v10 = v20.m128i_u16[v9 + 2];
      v11 = v17.m128i_u16[v9 + 2];
      if ( v10 != v11 )
      {
        if ( v10 > v11 )
        {
          v18 = v14;
          v19 = 0;
          v21 = v15;
          v17 = v7;
          v22 = 0;
          v20 = v6;
        }
        goto LABEL_21;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 11 );
    if ( v20.m128i_i16[0] != v17.m128i_i16[0] || !v17.m128i_i16[1] )
    {
      *(_OWORD *)a3 = 0;
      return 1;
    }
    v12 = v4 + 1;
    if ( v12 >= 0x7FFF )
      goto LABEL_25;
    v17.m128i_i16[1] = v12;
  }
  sub_45F690(&v17, a3);
  return 1;
}
