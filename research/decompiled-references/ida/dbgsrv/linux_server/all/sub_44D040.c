/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D040
// Address: 0x000000000044D040

//----- (000000000044D040) ----------------------------------------------------
__int64 __fastcall sub_44D040(__m128i *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int8 v7; // dl
  char *i; // rax
  char v9; // dl
  unsigned __int32 v10; // edi
  __m128i v11; // xmm0
  __int8 v12; // dl
  char v13; // dl
  __int32 v15; // edx
  char v16; // cl
  int v17; // [rsp+4h] [rbp-24h] BYREF
  void *ptr; // [rsp+8h] [rbp-20h]

  ptr = (void *)__readfsqword(0x28u);
  v7 = a1[9].m128i_i8[0];
  for ( i = (char *)a1->m128i_i64[1]; ; i = (char *)a1->m128i_i64[1] )
  {
    if ( !v7 )
      goto LABEL_3;
LABEL_18:
    while ( 2 )
    {
      v13 = *i;
      do
      {
        ++i;
        if ( v13 != 42 )
        {
          if ( !v13 )
            goto LABEL_9;
          goto LABEL_17;
        }
        a1->m128i_i64[1] = (__int64)i;
        v13 = *i;
        if ( *i == 47 )
        {
          if ( (a1[40].m128i_i8[12] & 1) != 0 )
            goto LABEL_25;
LABEL_23:
          ++i;
LABEL_17:
          a1->m128i_i64[1] = (__int64)i;
          goto LABEL_18;
        }
      }
      while ( v13 != 41 );
      if ( (a1[40].m128i_i8[12] & 2) == 0 )
        goto LABEL_23;
LABEL_25:
      ++i;
      a1[9].m128i_i8[0] = 0;
      a1->m128i_i64[1] = (__int64)i;
LABEL_3:
      while ( 1 )
      {
        v9 = *i;
        if ( (unsigned __int8)(*i - 9) > 4u )
          break;
LABEL_15:
        a1->m128i_i64[1] = (__int64)++i;
      }
LABEL_4:
      if ( v9 == 32 )
        goto LABEL_15;
      if ( v9 == 59 )
      {
        v10 = a1[40].m128i_i32[3] & 8;
        if ( !v10 )
          return v10;
      }
      else
      {
        if ( v9 == 47 )
        {
          v15 = a1[40].m128i_i32[3];
          if ( (v15 & 1) == 0 )
            return 0;
          v16 = i[1];
          if ( v16 == 42 )
            goto LABEL_37;
        }
        else
        {
          if ( v9 != 40 )
          {
            if ( v9 )
              return 0;
            break;
          }
          v15 = a1[40].m128i_i32[3];
          v10 = v15 & 2;
          if ( (v15 & 2) == 0 )
            return v10;
          v16 = i[1];
          if ( v16 == 42 )
          {
LABEL_37:
            a1[9].m128i_i8[0] = 1;
            continue;
          }
        }
        if ( v16 != 47 )
          return 0;
        v10 = v15 & 4;
        if ( (v15 & 4) == 0 )
          return v10;
      }
      break;
    }
LABEL_9:
    if ( !a1[4].m128i_i64[0] )
      break;
    sub_4495F0((__int64)a1);
    v7 = a1[9].m128i_i8[0];
  }
  a1[21].m128i_i8[0] = 0;
  i = (char *)sub_44C380((__int64)a1, &v17);
  v10 = v17;
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)i, (__m128i)(unsigned __int64)i);
  switch ( v17 )
  {
    case -1:
      return 34;
    case 34:
      return v10;
    case 0:
      v12 = a1[9].m128i_i8[0];
      a1[1].m128i_i64[0] = (__int64)i;
      a1[21].m128i_i8[0] = 1;
      *a1 = v11;
      if ( v12 )
        goto LABEL_18;
      v9 = *i;
      if ( (unsigned __int8)(*i - 9) <= 4u )
        goto LABEL_15;
      goto LABEL_4;
  }
  return sub_479EB0(v17);
}
