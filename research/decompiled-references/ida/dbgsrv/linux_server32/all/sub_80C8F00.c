/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C8F00
// Address: 0x080C8F00

//----- (080C8F00) --------------------------------------------------------
int __cdecl sub_80C8F00(int a1, int a2, _OWORD *a3, char a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  int result; // eax
  __int32 *v10; // eax
  __int32 *v11; // edx
  int v12; // ecx
  unsigned __int16 *v13; // ebx
  __m128i *v14; // edx
  int v15; // eax
  int v16; // esi
  unsigned int v17; // eax
  char v18; // si
  char v19; // al
  unsigned int v20; // ebx
  unsigned __int16 *v21; // ecx
  __m128i *v22; // edx
  int v23; // eax
  int v24; // esi
  unsigned int v25; // eax
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  char v28; // [esp+Ch] [ebp-70h]
  char v29; // [esp+Ch] [ebp-70h]
  __m128i v30; // [esp+1Ah] [ebp-62h] BYREF
  int v31; // [esp+2Ah] [ebp-52h]
  __int16 v32; // [esp+2Eh] [ebp-4Eh] BYREF
  __m128i v33; // [esp+30h] [ebp-4Ch] BYREF
  int v34; // [esp+40h] [ebp-3Ch]
  __int16 v35; // [esp+44h] [ebp-38h] BYREF
  __m128i v36; // [esp+46h] [ebp-36h] BYREF
  int v37; // [esp+56h] [ebp-26h]
  __int16 v38; // [esp+5Ah] [ebp-22h]
  unsigned int v39; // [esp+5Ch] [ebp-20h]

  v39 = __readgsdword(0x14u);
  sub_80C8760(a1, &v30);
  sub_80C8760(a2, &v33);
  if ( a4 )
    v33.m128i_i16[0] = ~v33.m128i_i16[0];
  v4 = v33.m128i_u16[1];
  v5 = v30.m128i_u16[1] - v33.m128i_u16[1];
  if ( v5 > 0 )
  {
    v6 = v34;
    v7 = _mm_loadu_si128(&v33);
    v8 = _mm_loadu_si128(&v30);
    v32 = 0;
    v34 = v31;
    v37 = v6;
    v35 = 0;
    v31 = v6;
    v38 = 0;
    v4 = v30.m128i_u16[1];
    v36 = v7;
    v5 = v33.m128i_u16[1] - v30.m128i_u16[1];
    v33 = v8;
    v30 = v7;
  }
  if ( v5 )
  {
    if ( v5 >= -113 )
    {
      LOBYTE(v5) = sub_80C8520((int)&v30, v5) != 1;
LABEL_19:
      if ( v30.m128i_i16[0] == v33.m128i_i16[0] )
      {
        v29 = v5;
        v20 = 0;
        v21 = (unsigned __int16 *)&v35;
        v22 = (__m128i *)&v32;
        do
        {
          v23 = v22->m128i_u16[0];
          v24 = *v21;
          v22 = (__m128i *)((char *)v22 - 2);
          --v21;
          v25 = v20 + v24 + v23;
          v21[1] = v25;
          v20 = HIWORD(v25);
        }
        while ( v22 != (__m128i *)&v30.m128i_i16[1] );
        v18 = v29;
        v19 = 0;
      }
      else
      {
        v28 = v5;
        v12 = 0;
        v13 = (unsigned __int16 *)&v32;
        v14 = (__m128i *)&v35;
        do
        {
          v15 = v14->m128i_u16[0];
          v16 = *v13;
          v14 = (__m128i *)((char *)v14 - 2);
          --v13;
          v17 = v15 - v16 - v12;
          v14->m128i_i16[1] = v17;
          v12 = HIWORD(v17) & 1;
        }
        while ( v14 != (__m128i *)&v33.m128i_i16[1] );
        v18 = v28;
        v19 = 1;
      }
      if ( !(unsigned __int8)sub_80C87C0((int)&v33, v18, v19, v4, 112) )
      {
LABEL_24:
        *a3 = 0;
        result = 2;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v10 = &v33.m128i_i32[1];
    v11 = &v30.m128i_i32[1];
    do
    {
      if ( *(_WORD *)v11 != *(_WORD *)v10 )
      {
        if ( *(_WORD *)v10 < *(_WORD *)v11 )
        {
          v26 = _mm_loadu_si128(&v33);
          v27 = _mm_loadu_si128(&v30);
          v38 = 0;
          v37 = v34;
          v35 = 0;
          v34 = v31;
          v31 = v37;
          v32 = 0;
          v36 = v26;
          v33 = v27;
          v30 = v26;
        }
        goto LABEL_19;
      }
      v10 = (__int32 *)((char *)v10 + 2);
      v11 = (__int32 *)((char *)v11 + 2);
    }
    while ( v10 != (__int32 *)&v36 );
    if ( v30.m128i_i16[0] != v33.m128i_i16[0] || !v33.m128i_i16[1] )
    {
      *a3 = 0;
      goto LABEL_8;
    }
    if ( v4 + 1 > 32766 )
      goto LABEL_24;
    v33.m128i_i16[1] = v4 + 1;
  }
  sub_80C8700(&v33, (int)a3);
LABEL_8:
  result = 1;
LABEL_9:
  if ( v39 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
