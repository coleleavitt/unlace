__int64 __fastcall sub_E39F30(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v6; // ax
  void *v7; // rax
  unsigned int v8; // ebp
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  _QWORD v15[2]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v16; // [rsp+10h] [rbp-58h] BYREF
  __int16 v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+24h] [rbp-44h]
  void *v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  _OWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF

  v5 = (__int64)&a3[a4];
  v15[0] = &v16;
  switch ( (unsigned __int64)v15 )
  {
    case 0uLL:
      sub_E392B0(v15, a3, v5);
      v18 = 0;
      HIBYTE(v11) = HIBYTE(v17) & 0xFE;
      LOBYTE(v11) = -39;
      v17 = v11;
      v19 = v21;
      v7 = (void *)v15[0];
      if ( (__m128i *)v15[0] != &v16 )
        goto LABEL_3;
      goto LABEL_16;
    case 1uLL:
      sub_E392B0(v15, a3, v5);
      v18 = 0;
      HIBYTE(v12) = HIBYTE(v17) & 0xFE;
      LOBYTE(v12) = -51;
      v17 = v12;
      v19 = v21;
      v7 = (void *)v15[0];
      if ( (__m128i *)v15[0] == &v16 )
        goto LABEL_16;
      goto LABEL_3;
    case 2uLL:
      sub_E392B0(v15, a3, v5);
      v18 = 0;
      HIBYTE(v13) = HIBYTE(v17) & 0xFE;
      LOBYTE(v13) = -46;
      v17 = v13;
      v19 = v21;
      v7 = (void *)v15[0];
      if ( (__m128i *)v15[0] == &v16 )
        goto LABEL_16;
      goto LABEL_3;
    case 3uLL:
      sub_E392B0(v15, a3, v5);
      v18 = 0;
      HIBYTE(v14) = HIBYTE(v17) & 0xFE;
      LOBYTE(v14) = -37;
      v17 = v14;
      v19 = v21;
      v7 = (void *)v15[0];
      if ( (__m128i *)v15[0] == &v16 )
        goto LABEL_16;
      goto LABEL_3;
    case 4uLL:
      sub_E392B0(v15, a3, v5);
      v18 = 0;
      HIBYTE(v6) = HIBYTE(v17) & 0xFE;
      LOBYTE(v6) = -20;
      v17 = v6;
      v19 = v21;
      v7 = (void *)v15[0];
      if ( (__m128i *)v15[0] != &v16 )
        goto LABEL_3;
      goto LABEL_16;
    case 5uLL:
      sub_E392B0(v15, a3, v5);
      v18 = 0;
      HIBYTE(v10) = HIBYTE(v17) & 0xFE;
      LOBYTE(v10) = -19;
      v17 = v10;
      v19 = v21;
      v7 = (void *)v15[0];
      if ( (__m128i *)v15[0] == &v16 )
      {
LABEL_16:
        v21[0] = _mm_load_si128(&v16);
      }
      else
      {
LABEL_3:
        v19 = v7;
        *(_QWORD *)&v21[0] = v16.m128i_i64[0];
      }
      v20 = v15[1];
      v8 = sub_FD5980(a1, &v17);
      if ( v19 != v21 )
        operator delete(v19);
      return v8;
  }
}
