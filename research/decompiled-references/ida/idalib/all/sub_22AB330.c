__int64 __fastcall sub_22AB330(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r13
  __int64 v6; // rbp
  __m128i *v7; // rsi
  __int64 v8; // rax
  void *v9; // rcx
  size_t v10; // r14
  char v11; // al
  int v12; // edx
  char **v13; // rbp
  char *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r14
  __m128i *v18; // rsi
  char **v19; // r15
  char *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbp
  __m128i *v24; // rsi
  void *v26; // rdi
  void *v27; // rdi
  void *v30; // [rsp+18h] [rbp-98h]
  __m128i v32; // [rsp+28h] [rbp-88h] BYREF
  __m128i v33; // [rsp+38h] [rbp-78h] BYREF
  void *v34; // [rsp+48h] [rbp-68h] BYREF
  int v35; // [rsp+50h] [rbp-60h]
  _QWORD v36[2]; // [rsp+58h] [rbp-58h] BYREF
  __int16 v37; // [rsp+68h] [rbp-48h]

  v4 = a2 + 32;
  v6 = *(_QWORD *)(a2 + 48);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v6 != a2 + 32 )
  {
    do
    {
      while ( 1 )
      {
        if ( !sub_9B4AA0(v6 + 32, "i") )
          goto LABEL_7;
        v9 = *(void **)(v6 + 32);
        v10 = *(_QWORD *)(v6 + 40);
        if ( a4 )
        {
          v30 = *(void **)(v6 + 32);
          v11 = sub_22A9170(v30, *(_QWORD *)(v6 + 40));
          v9 = v30;
          if ( !v11 )
            goto LABEL_7;
        }
        sub_22A8D00(v9, v10);
        v35 = v12;
        if ( !(_BYTE)v12 )
          break;
        v36[0] = v6 + 32;
        v34 = "+experimental-";
        v37 = 1027;
        sub_2253560(&v32, (_QWORD **)&v34);
        v7 = *(__m128i **)(a1 + 8);
        if ( v7 != *(__m128i **)(a1 + 16) )
        {
          v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
          v8 = v32.m128i_i64[0];
          if ( (__m128i *)v32.m128i_i64[0] == &v33 )
            goto LABEL_14;
          goto LABEL_5;
        }
LABEL_15:
        sub_A82970((void ***)a1, v7, &v32);
        if ( (__m128i *)v32.m128i_i64[0] == &v33 )
          goto LABEL_7;
        operator delete((void *)v32.m128i_i64[0]);
        v6 = std::_Rb_tree_increment(v6);
        if ( v4 == v6 )
          goto LABEL_17;
      }
      v36[0] = v6 + 32;
      v37 = 1027;
      v34 = "+";
      sub_2253560(&v32, (_QWORD **)&v34);
      v7 = *(__m128i **)(a1 + 8);
      if ( v7 == *(__m128i **)(a1 + 16) )
        goto LABEL_15;
      v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
      v8 = v32.m128i_i64[0];
      if ( (__m128i *)v32.m128i_i64[0] == &v33 )
      {
LABEL_14:
        v7[1] = _mm_load_si128(&v33);
        goto LABEL_6;
      }
LABEL_5:
      v7->m128i_i64[0] = v8;
      v7[1].m128i_i64[0] = v33.m128i_i64[0];
LABEL_6:
      v7->m128i_i64[1] = v32.m128i_i64[1];
      *(_QWORD *)(a1 + 8) += 32LL;
LABEL_7:
      v6 = std::_Rb_tree_increment(v6);
    }
    while ( v4 != v6 );
  }
LABEL_17:
  if ( a3 )
  {
    v13 = (char **)&off_2BF4000;
    while ( 1 )
    {
      v14 = *v13;
      v15 = -1;
      v34 = v36;
      if ( v14 )
        v15 = (__int64)&v14[strlen(v14)];
      sub_22A8AD0(&v34, v14, v15);
      v16 = *(_QWORD *)(a2 + 40);
      if ( !v16 )
        goto LABEL_28;
      v17 = v4;
      do
      {
        while ( !sub_2234B00(v16 + 32, (__int64)&v34) )
        {
          v17 = v16;
          v16 = *(_QWORD *)(v16 + 16);
          if ( !v16 )
            goto LABEL_26;
        }
        v16 = *(_QWORD *)(v16 + 24);
      }
      while ( v16 );
LABEL_26:
      if ( v4 == v17 || sub_2234B00((__int64)&v34, v17 + 32) )
      {
LABEL_28:
        if ( v34 != v36 )
          operator delete(v34);
        if ( **v13 )
        {
          v36[0] = *v13;
          v34 = "-";
          v37 = 771;
        }
        else
        {
          v34 = "-";
          v37 = 259;
        }
        sub_2253560(&v32, (_QWORD **)&v34);
        v18 = *(__m128i **)(a1 + 8);
        if ( v18 != *(__m128i **)(a1 + 16) )
        {
          v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
          if ( (__m128i *)v32.m128i_i64[0] == &v33 )
          {
            v18[1] = _mm_load_si128(&v33);
          }
          else
          {
            v18->m128i_i64[0] = v32.m128i_i64[0];
            v18[1].m128i_i64[0] = v33.m128i_i64[0];
          }
          v18->m128i_i64[1] = v32.m128i_i64[1];
          *(_QWORD *)(a1 + 8) += 32LL;
          goto LABEL_36;
        }
        sub_A82970((void ***)a1, v18, &v32);
        v26 = (void *)v32.m128i_i64[0];
        if ( (__m128i *)v32.m128i_i64[0] != &v33 )
LABEL_58:
          operator delete(v26);
      }
      else
      {
        v26 = v34;
        if ( v34 != v36 )
          goto LABEL_58;
      }
LABEL_36:
      v13 += 2;
      if ( &unk_2BF4C90 == (_UNKNOWN *)v13 )
      {
        v19 = (char **)&off_2BF3DE0;
        while ( 1 )
        {
          v20 = *v19;
          v21 = -1;
          v34 = v36;
          if ( v20 )
            v21 = (__int64)&v20[strlen(v20)];
          sub_22A8AD0(&v34, v20, v21);
          v22 = *(_QWORD *)(a2 + 40);
          if ( !v22 )
            goto LABEL_47;
          v23 = v4;
          do
          {
            while ( !sub_2234B00(v22 + 32, (__int64)&v34) )
            {
              v23 = v22;
              v22 = *(_QWORD *)(v22 + 16);
              if ( !v22 )
                goto LABEL_45;
            }
            v22 = *(_QWORD *)(v22 + 24);
          }
          while ( v22 );
LABEL_45:
          if ( v4 == v23 || sub_2234B00((__int64)&v34, v23 + 32) )
          {
LABEL_47:
            if ( v34 != v36 )
              operator delete(v34);
            if ( **v19 )
            {
              v36[0] = *v19;
              v34 = "-experimental-";
              v37 = 771;
            }
            else
            {
              v34 = "-experimental-";
              v37 = 259;
            }
            sub_2253560(&v32, (_QWORD **)&v34);
            v24 = *(__m128i **)(a1 + 8);
            if ( v24 != *(__m128i **)(a1 + 16) )
            {
              v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
              if ( (__m128i *)v32.m128i_i64[0] == &v33 )
              {
                v24[1] = _mm_load_si128(&v33);
              }
              else
              {
                v24->m128i_i64[0] = v32.m128i_i64[0];
                v24[1].m128i_i64[0] = v33.m128i_i64[0];
              }
              v24->m128i_i64[1] = v32.m128i_i64[1];
              *(_QWORD *)(a1 + 8) += 32LL;
              goto LABEL_55;
            }
            sub_A82970((void ***)a1, v24, &v32);
            v27 = (void *)v32.m128i_i64[0];
            if ( (__m128i *)v32.m128i_i64[0] != &v33 )
LABEL_65:
              operator delete(v27);
          }
          else
          {
            v27 = v34;
            if ( v34 != v36 )
              goto LABEL_65;
          }
LABEL_55:
          v19 += 2;
          if ( v19 == (char **)&unk_2BF3FF0 )
            return a1;
        }
      }
    }
  }
  return a1;
}
