__m128i *__fastcall sub_B16130(__m128i *a1, __int64 a2, int a3)
{
  int v4; // eax
  _QWORD *v5; // r13
  signed __int64 v6; // rax
  size_t v7; // rbp
  _QWORD *v8; // r13
  signed __int64 v9; // rax
  void *v10; // rbp
  size_t v11; // rax
  __m128i *v12; // rax
  _QWORD *v13; // rdi
  _BYTE *m128i_i8; // r12
  signed __int64 v16; // rax
  size_t v17; // rbp
  signed __int64 v18; // rax
  size_t v19; // rax
  __m128i *v20; // rax
  __int64 v21; // rcx
  __m128i *v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  char *v26; // rbp
  size_t v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+8h] [rbp-70h]
  void *v30[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v33[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a2 + 34) & 0xF0) == 0xF0 )
  {
    v29 = a3;
    v4 = sub_F83A90(a2);
    a3 = v29;
  }
  else
  {
    v4 = *(_BYTE *)(a2 + 34) >> 4;
  }
  switch ( v4 )
  {
    case 2:
      m128i_i8 = a1[1].m128i_i8;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      v16 = j__strlen("#pragma nounroll");
      v17 = v16;
      if ( (unsigned __int64)v16 > 0xF )
      {
        if ( v16 < 0 )
          goto LABEL_70;
        v23 = operator new(v16 + 1);
        a1[1].m128i_i64[0] = v17;
        a1->m128i_i64[0] = v23;
        m128i_i8 = (_BYTE *)v23;
      }
      else
      {
        if ( v16 == 1 )
        {
LABEL_30:
          a1[1].m128i_i8[0] = 35;
          goto LABEL_26;
        }
        if ( !v16 )
        {
LABEL_26:
          a1->m128i_i64[1] = v17;
          m128i_i8[v17] = 0;
          return a1;
        }
      }
      memcpy(m128i_i8, "#pragma nounroll", v17);
      m128i_i8 = (_BYTE *)a1->m128i_i64[0];
      goto LABEL_26;
    case 1:
      if ( *(_DWORD *)(a2 + 40) == 5 )
      {
        sub_AE1890((__int64)v30, a2, a3);
LABEL_17:
        v11 = j__strlen("#pragma unroll");
        v12 = (__m128i *)sub_978080(v30, 0, 0, "#pragma unroll", v11);
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
        {
          a1[1] = _mm_loadu_si128(v12 + 1);
        }
        else
        {
          a1->m128i_i64[0] = v12->m128i_i64[0];
          a1[1].m128i_i64[0] = v12[1].m128i_i64[0];
        }
        a1->m128i_i64[1] = v12->m128i_i64[1];
        v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
        v13 = v30[0];
        v12->m128i_i64[1] = 0;
        v12[1].m128i_i8[0] = 0;
        if ( v13 == v31 )
          return a1;
        goto LABEL_20;
      }
      v8 = v31;
      v30[0] = v31;
      v9 = j__strlen(&byte_22CD811);
      v10 = (void *)v9;
      if ( (unsigned __int64)v9 > 0xF )
      {
        if ( v9 < 0 )
          goto LABEL_70;
        v24 = (_QWORD *)operator new(v9 + 1);
        v31[0] = v10;
        v30[0] = v24;
      }
      else
      {
        if ( v9 == 1 )
        {
          LOBYTE(v31[0]) = 0;
LABEL_16:
          v30[1] = v10;
          *((_BYTE *)v10 + (_QWORD)v8) = 0;
          goto LABEL_17;
        }
        if ( !v9 )
          goto LABEL_16;
        v24 = v31;
      }
      memcpy(v24, &byte_22CD811, (size_t)v10);
      v8 = v30[0];
      goto LABEL_16;
    case 4:
      m128i_i8 = a1[1].m128i_i8;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      v18 = j__strlen("#pragma nounroll_and_jam");
      v17 = v18;
      if ( (unsigned __int64)v18 > 0xF )
      {
        if ( v18 < 0 )
          goto LABEL_70;
        v28 = operator new(v18 + 1);
        a1[1].m128i_i64[0] = v17;
        m128i_i8 = (_BYTE *)v28;
        a1->m128i_i64[0] = v28;
      }
      else
      {
        if ( v18 == 1 )
          goto LABEL_30;
        if ( !v18 )
          goto LABEL_26;
      }
      memcpy(m128i_i8, "#pragma nounroll_and_jam", v17);
      m128i_i8 = (_BYTE *)a1->m128i_i64[0];
      goto LABEL_26;
  }
  if ( v4 != 3 )
  {
    sub_AE1890((__int64)v32, a2, a3);
    switch ( *(_DWORD *)(a2 + 40) )
    {
      case 0:
        v26 = "vectorize";
        break;
      case 1:
        v26 = "vectorize_width";
        break;
      case 2:
        v26 = (char *)"interleave";
        break;
      case 3:
        v26 = "interleave_count";
        break;
      case 4:
        v26 = (char *)"unroll";
        break;
      case 5:
        v26 = "unroll_count";
        break;
      case 6:
        v26 = (char *)"unroll_and_jam";
        break;
      case 7:
        v26 = "unroll_and_jam_count";
        break;
      case 8:
        v26 = "pipeline";
        break;
      case 9:
        v26 = "pipeline_initiation_interval";
        break;
      case 0xA:
        v26 = "distribute";
        break;
      case 0xB:
        v26 = "vectorize_predicate";
        break;
    }
    v27 = j__strlen(v26);
    v20 = (__m128i *)sub_978080(v32, 0, 0, v26, v27);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v21 = v20->m128i_i64[0];
    v22 = v20 + 1;
    if ( (__m128i *)v20->m128i_i64[0] != &v20[1] )
      goto LABEL_34;
    goto LABEL_54;
  }
  if ( *(_DWORD *)(a2 + 40) != 7 )
  {
    v5 = v33;
    v32[0] = v33;
    v6 = j__strlen(&byte_22CD811);
    v7 = v6;
    if ( (unsigned __int64)v6 <= 0xF )
    {
      if ( v6 == 1 )
      {
        LOBYTE(v33[0]) = 0;
LABEL_11:
        v32[1] = v7;
        *((_BYTE *)v5 + v7) = 0;
        goto LABEL_33;
      }
      if ( !v6 )
        goto LABEL_11;
      v25 = v33;
LABEL_49:
      memcpy(v25, &byte_22CD811, v7);
      v5 = (_QWORD *)v32[0];
      goto LABEL_11;
    }
    if ( v6 >= 0 )
    {
      v25 = (_QWORD *)operator new(v6 + 1);
      v33[0] = v7;
      v32[0] = v25;
      goto LABEL_49;
    }
LABEL_70:
    std::__throw_length_error("basic_string::_M_create");
  }
  sub_AE1890((__int64)v32, a2, a3);
LABEL_33:
  v19 = j__strlen("#pragma unroll_and_jam");
  v20 = (__m128i *)sub_978080(v32, 0, 0, "#pragma unroll_and_jam", v19);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  v21 = v20->m128i_i64[0];
  v22 = v20 + 1;
  if ( (__m128i *)v20->m128i_i64[0] != &v20[1] )
  {
LABEL_34:
    a1->m128i_i64[0] = v21;
    a1[1].m128i_i64[0] = v20[1].m128i_i64[0];
    goto LABEL_35;
  }
LABEL_54:
  a1[1] = _mm_loadu_si128(v20 + 1);
LABEL_35:
  a1->m128i_i64[1] = v20->m128i_i64[1];
  v20->m128i_i64[0] = (__int64)v22;
  v20->m128i_i64[1] = 0;
  v20[1].m128i_i8[0] = 0;
  v13 = (_QWORD *)v32[0];
  if ( (_QWORD *)v32[0] != v33 )
  {
LABEL_20:
    operator delete(v13);
    return a1;
  }
  return a1;
}

