__int64 __fastcall sub_22A6F70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r13d
  const __m128i *v6; // rbx
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // rax
  char *v10; // rsi
  char *v11; // rax
  char *v12; // rsi
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rsi
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  _QWORD *v23; // rax
  __m128i v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+10h] [rbp-38h]

  if ( a2 == 11 )
  {
    if ( *(_QWORD *)a1 == 0x637261676E6F6F6CLL && *(_WORD *)(a1 + 8) == 13928 )
    {
      v5 = 270;
      if ( *(_BYTE *)(a1 + 10) == 52 )
      {
LABEL_10:
        v6 = (const __m128i *)&off_2BF03E0;
        while ( 1 )
        {
          while ( 1 )
          {
            v7 = v6[1].m128i_i64[0];
            v24 = _mm_loadu_si128(v6);
            v25 = v7;
            if ( (_DWORD)v7 == (v5 & (unsigned int)v7) )
              break;
LABEL_11:
            v6 = (const __m128i *)((char *)v6 + 24);
            if ( &unk_2BF0530 == (_UNKNOWN *)v6 )
              return 1;
          }
          v8 = *(char **)(a3 + 8);
          if ( v8 == *(char **)(a3 + 16) )
          {
            sub_1245C50(a3, v8, &v24);
            goto LABEL_11;
          }
          v9 = v24.m128i_i64[1];
          v10 = v8 + 16;
          v6 = (const __m128i *)((char *)v6 + 24);
          *((_QWORD *)v10 - 2) = v24.m128i_i64[0];
          *((_QWORD *)v10 - 1) = v9;
          *(_QWORD *)(a3 + 8) = v10;
          if ( &unk_2BF0530 == (_UNKNOWN *)v6 )
            return 1;
        }
      }
    }
    return 0;
  }
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 909402476 )
    {
      v5 = 318;
      if ( *(_BYTE *)(a1 + 4) == 52 )
        goto LABEL_10;
    }
    if ( *(_DWORD *)a1 == 909533548 )
    {
      v5 = 32574;
      if ( *(_BYTE *)(a1 + 4) == 52 )
        goto LABEL_10;
    }
    return 0;
  }
  if ( a2 != 8 )
    return 0;
  if ( *(_QWORD *)a1 == 0x302E31763436616CLL || (result = 0, *(_QWORD *)a1 == 0x312E31763436616CLL) )
  {
    v11 = *(char **)(a3 + 8);
    v12 = *(char **)(a3 + 16);
    v24.m128i_i64[1] = 6;
    v24.m128i_i64[0] = (__int64)"+64bit";
    if ( v11 == v12 )
    {
      sub_1075D80(a3, v12, &v24);
      v12 = *(char **)(a3 + 16);
      v13 = *(char **)(a3 + 8);
    }
    else
    {
      *(_QWORD *)v11 = "+64bit";
      v13 = v11 + 16;
      *((_QWORD *)v13 - 1) = 6;
      *(_QWORD *)(a3 + 8) = v13;
    }
    v24.m128i_i64[1] = 2;
    v24.m128i_i64[0] = (__int64)"+d";
    if ( v12 == v13 )
    {
      sub_1075D80(a3, v12, &v24);
      v12 = *(char **)(a3 + 16);
      v14 = *(char **)(a3 + 8);
    }
    else
    {
      *(_QWORD *)v13 = "+d";
      v14 = v13 + 16;
      *((_QWORD *)v14 - 1) = 2;
      *(_QWORD *)(a3 + 8) = v14;
    }
    v24.m128i_i64[1] = 4;
    v24.m128i_i64[0] = (__int64)"+lsx";
    if ( v14 == v12 )
    {
      sub_1075D80(a3, v12, &v24);
      v12 = *(char **)(a3 + 16);
      v15 = *(char **)(a3 + 8);
    }
    else
    {
      *(_QWORD *)v14 = "+lsx";
      v15 = v14 + 16;
      *((_QWORD *)v15 - 1) = 4;
      *(_QWORD *)(a3 + 8) = v15;
    }
    v24.m128i_i64[1] = 4;
    v24.m128i_i64[0] = (__int64)"+ual";
    if ( v15 == v12 )
    {
      sub_1075D80(a3, v15, &v24);
      v16 = *(char **)(a3 + 8);
    }
    else
    {
      *(_QWORD *)v15 = "+ual";
      v16 = v15 + 16;
      *((_QWORD *)v16 - 1) = 4;
      *(_QWORD *)(a3 + 8) = v16;
    }
    if ( *(_QWORD *)a1 == 0x312E31763436616CLL )
    {
      v17 = *(char **)(a3 + 16);
      v24.m128i_i64[1] = 8;
      v24.m128i_i64[0] = (__int64)"+frecipe";
      if ( v16 == v17 )
      {
        sub_1075D80(a3, v17, &v24);
        v17 = *(char **)(a3 + 16);
        v18 = *(char **)(a3 + 8);
      }
      else
      {
        *(_QWORD *)v16 = "+frecipe";
        v18 = v16 + 16;
        *((_QWORD *)v18 - 1) = 8;
        *(_QWORD *)(a3 + 8) = v18;
      }
      v24.m128i_i64[1] = 7;
      v24.m128i_i64[0] = (__int64)"+lam-bh";
      if ( v18 == v17 )
      {
        sub_1075D80(a3, v17, &v24);
        v17 = *(char **)(a3 + 16);
        v19 = *(char **)(a3 + 8);
      }
      else
      {
        *(_QWORD *)v18 = "+lam-bh";
        v19 = v18 + 16;
        *((_QWORD *)v19 - 1) = 7;
        *(_QWORD *)(a3 + 8) = v19;
      }
      v24.m128i_i64[1] = 7;
      v24.m128i_i64[0] = (__int64)"+lamcas";
      if ( v17 == v19 )
      {
        sub_1075D80(a3, v17, &v24);
        v17 = *(char **)(a3 + 16);
        v20 = *(char **)(a3 + 8);
      }
      else
      {
        *(_QWORD *)v19 = "+lamcas";
        v20 = v19 + 16;
        *((_QWORD *)v20 - 1) = 7;
        *(_QWORD *)(a3 + 8) = v20;
      }
      v24.m128i_i64[1] = 10;
      v24.m128i_i64[0] = (__int64)"+ld-seq-sa";
      if ( v20 == v17 )
      {
        sub_1075D80(a3, v17, &v24);
        v17 = *(char **)(a3 + 16);
        v21 = *(char **)(a3 + 8);
      }
      else
      {
        *(_QWORD *)v20 = "+ld-seq-sa";
        v21 = v20 + 16;
        *((_QWORD *)v21 - 1) = 10;
        *(_QWORD *)(a3 + 8) = v21;
      }
      v24.m128i_i64[1] = 6;
      v24.m128i_i64[0] = (__int64)"+div32";
      if ( v17 == v21 )
      {
        sub_1075D80(a3, v17, &v24);
        v17 = *(char **)(a3 + 16);
        v22 = *(char **)(a3 + 8);
      }
      else
      {
        *(_QWORD *)v21 = "+div32";
        v22 = v21 + 16;
        *((_QWORD *)v22 - 1) = 6;
        *(_QWORD *)(a3 + 8) = v22;
      }
      v24.m128i_i64[1] = 4;
      v24.m128i_i64[0] = (__int64)"+scq";
      if ( v17 == v22 )
      {
        sub_1075D80(a3, v17, &v24);
      }
      else
      {
        *(_QWORD *)v22 = "+scq";
        v23 = v22 + 16;
        *(v23 - 1) = 4;
        *(_QWORD *)(a3 + 8) = v23;
      }
    }
    return 1;
  }
  return result;
}
