__int64 __fastcall eadd(__int64 a1, __int64 a2, _OWORD *a3, char a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int8 *v15; // rax
  int v16; // r12d
  int v17; // ecx
  unsigned __int16 *v18; // rdi
  __m128i *v19; // rdx
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // edi
  unsigned __int16 *v25; // rcx
  __m128i *v26; // rdx
  int v27; // eax
  int v28; // r8d
  unsigned int v29; // eax
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+10h] [rbp-78h]
  _WORD v34[6]; // [rsp+14h] [rbp-74h] BYREF
  __m128i v35; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-58h]
  __int16 v37; // [rsp+34h] [rbp-54h] BYREF
  char v38; // [rsp+36h] [rbp-52h] BYREF
  __m128i v39; // [rsp+40h] [rbp-48h]
  unsigned int v40; // [rsp+50h] [rbp-38h]
  __int16 v41; // [rsp+54h] [rbp-34h]
  unsigned __int64 v42; // [rsp+58h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  emovi(a1, &v32);
  emovi(a2, &v35);
  if ( a4 )
    v35.m128i_i16[0] = ~v35.m128i_i16[0];
  v10 = v35.m128i_u16[1];
  v11 = v32.m128i_u16[1] - (unsigned int)v35.m128i_u16[1];
  if ( v32.m128i_u16[1] - v35.m128i_u16[1] > 0 )
  {
    v6 = v36;
    v7 = v33;
    v8 = 0;
    v9 = 0;
    v12 = _mm_load_si128(&v35);
    v13 = _mm_load_si128(&v32);
    v40 = v6;
    v11 = v35.m128i_u16[1] - (unsigned int)v32.m128i_u16[1];
    v10 = v32.m128i_u16[1];
    v41 = 0;
    v36 = v33;
    v37 = 0;
    v33 = v6;
    v34[0] = 0;
    v39 = v12;
    v35 = v13;
    v32 = v12;
  }
  if ( (_DWORD)v11 )
  {
    if ( (int)v11 >= -113 )
    {
      v11 = (unsigned int)eshift(&v32, v11, v6, v7, v8, v9) != 1;
LABEL_17:
      if ( v32.m128i_i16[0] == v35.m128i_i16[0] )
      {
        v24 = 0;
        v25 = (unsigned __int16 *)&v37;
        v26 = (__m128i *)v34;
        do
        {
          v27 = v26->m128i_u16[0];
          v28 = *v25;
          v26 = (__m128i *)((char *)v26 - 2);
          --v25;
          v29 = v24 + v28 + v27;
          v25[1] = v29;
          v24 = HIWORD(v29);
        }
        while ( v26 != (__m128i *)&v32.m128i_i16[1] );
        v23 = 0;
      }
      else
      {
        v17 = 0;
        v18 = v34;
        v19 = (__m128i *)&v37;
        do
        {
          v20 = v19->m128i_u16[0];
          v21 = *v18;
          v19 = (__m128i *)((char *)v19 - 2);
          --v18;
          v22 = v20 - v21 - v17;
          v19->m128i_i16[1] = v22;
          v17 = HIWORD(v22) & 1;
        }
        while ( v19 != (__m128i *)&v35.m128i_i16[1] );
        v23 = 1;
      }
      if ( !(unsigned __int8)emdnorm(&v35, v11, v23, v10, 112) )
      {
LABEL_22:
        *a3 = 0;
        return 2;
      }
    }
  }
  else
  {
    v15 = &v35.m128i_i8[4];
    v6 = (unsigned __int64)v32.m128i_u64 + 4;
    do
    {
      v7 = *(unsigned __int16 *)v6;
      if ( (_WORD)v7 != *(_WORD *)v15 )
      {
        if ( *(_WORD *)v15 < (unsigned __int16)v7 )
        {
          v30 = _mm_load_si128(&v35);
          v31 = _mm_load_si128(&v32);
          v41 = 0;
          v40 = v36;
          v37 = 0;
          v36 = v33;
          v33 = v40;
          v34[0] = 0;
          v39 = v30;
          v35 = v31;
          v32 = v30;
        }
        goto LABEL_17;
      }
      v15 += 2;
      v6 += 2LL;
    }
    while ( v15 != &v38 );
    if ( v32.m128i_i16[0] != v35.m128i_i16[0] || !v35.m128i_i16[1] )
    {
      *a3 = 0;
      return 1;
    }
    v16 = v10 + 1;
    if ( v16 > 32766 )
      goto LABEL_22;
    v35.m128i_i16[1] = v16;
  }
  emovo(&v35, a3, v6, v7);
  return 1;
}
