void __fastcall sub_1A2F130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  unsigned __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbx
  __m128i v26; // [rsp+0h] [rbp-A8h] BYREF
  char **v27; // [rsp+10h] [rbp-98h]
  _BYTE *v28; // [rsp+18h] [rbp-90h]
  char *v29; // [rsp+20h] [rbp-88h] BYREF
  __int64 v30; // [rsp+28h] [rbp-80h]
  _BYTE v31[120]; // [rsp+30h] [rbp-78h] BYREF

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 1;
  if ( a3 && (v6 = a3, (*(_BYTE *)(a3 + 80) & 0x7Fu) - 35 <= 3) && sub_C1DDA0(a3) )
  {
    sub_17AC8F0(a2, v6);
    v10 = sub_1A2C910(v6);
    if ( v10 && a6 )
    {
      v11 = 0;
      v27 = &v29;
      v29 = v31;
      v28 = v31;
      v12 = 0;
      v30 = 0x400000000LL;
LABEL_9:
      v26.m128i_i64[0] = v6;
      *(__m128 *)&v29[16 * v12] = _mm_loadh_ps((const double *)v26.m128i_i64);
      for ( LODWORD(v30) = v11 + 1; ; LODWORD(v30) = v30 + 1 )
      {
        if ( (*(_BYTE *)(v10 + 80) & 0x7Fu) - 35 <= 3 && sub_C1DDA0(v10) )
        {
          v20 = sub_B72690(v10 + 72);
          v14 = sub_B72690(v20);
        }
        else
        {
          v13 = *(_QWORD *)(sub_B8C1B0(v10 + 72) + 16);
          if ( (v13 & 4) != 0 )
            v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v15 = *(_BYTE *)(v14 + 8);
        v10 = 0;
        v16 = v14 - 72;
        if ( (v15 & 0x7Fu) - 34 < 6 )
          v10 = v16;
        if ( (*(_BYTE *)(v6 + 80) & 0x7Fu) - 35 <= 3 && sub_C1DDA0(v6) )
        {
          v21 = sub_B72690(v6 + 72);
          v18 = sub_B72690(v21);
        }
        else
        {
          v17 = *(_QWORD *)(sub_B8C1B0(v6 + 72) + 16);
          v18 = (v17 & 4) != 0 ? *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL) : v17 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v11 = v30;
        if ( (*(_BYTE *)(v18 + 8) & 0x7Fu) - 34 > 5 )
          break;
        v6 = v18 - 72;
        if ( !v10 || v18 == 72 )
          break;
        v12 = (unsigned int)v30;
        if ( (unsigned int)v30 < (unsigned __int64)HIDWORD(v30) )
          goto LABEL_9;
        v26.m128i_i64[0] = v6;
        v19 = (__m128i)_mm_loadh_ps((const double *)v26.m128i_i64);
        if ( HIDWORD(v30) < (unsigned __int64)(unsigned int)v30 + 1 )
        {
          v26 = v19;
          sub_2237220(v27, v28, (unsigned int)v30 + 1LL, 16);
          v12 = (unsigned int)v30;
          v19 = _mm_load_si128(&v26);
        }
        *(__m128i *)&v29[16 * v12] = v19;
      }
      v22 = 16LL * (unsigned int)v30;
      v23 = &v29[v22];
      v26.m128i_i64[0] = (__int64)v29;
      if ( v29 != &v29[v22] )
      {
        do
        {
          while ( 1 )
          {
            v24 = *((_QWORD *)v23 - 1);
            v25 = *((_QWORD *)v23 - 2);
            sub_1E03DC0(a2, v24, v25, a5, a4);
            sub_1E03470(a2, v24, v25, a5);
            if ( v24 )
            {
              if ( (*(_BYTE *)(v24 + 80) & 0x7Fu) - 35 <= 3 && sub_C1DDA0(v24) )
                break;
            }
            v23 -= 16;
            if ( (char *)v26.m128i_i64[0] == v23 )
              goto LABEL_38;
          }
          v23 -= 16;
          sub_1A2ED40(a2, v24, v25, a5, a4);
        }
        while ( (char *)v26.m128i_i64[0] != v23 );
LABEL_38:
        v23 = v29;
      }
      if ( v23 != (char *)(v27 + 2) )
        free(v23);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
}
