__m128i *__fastcall sub_226F7A0(__m128i *a1, __int64 a2)
{
  size_t v3; // r12
  __m128i *v4; // rcx
  _BYTE *v5; // rbp
  size_t v6; // rax
  __int64 *v7; // r14
  size_t v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  size_t v13; // rdx
  _BYTE *v14; // rsi
  __m128i *v15; // rax
  size_t v16; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 ***v29; // rcx
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  void *v32; // rdi
  size_t v33; // rdx
  size_t v34; // rax
  __m128i v35; // xmm1
  __int64 **v36; // rax
  __int64 *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-E0h]
  __m128i v39; // [rsp+10h] [rbp-D8h] BYREF
  __m128i *v40; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-C0h]
  __m128i v42; // [rsp+30h] [rbp-B8h] BYREF
  char *v43; // [rsp+40h] [rbp-A8h] BYREF
  size_t v44; // [rsp+48h] [rbp-A0h]
  __m128i v45; // [rsp+50h] [rbp-98h]
  __int16 v46; // [rsp+60h] [rbp-88h]
  void *v47; // [rsp+70h] [rbp-78h] BYREF
  __m128i v48; // [rsp+78h] [rbp-70h] BYREF
  _BYTE *v49; // [rsp+88h] [rbp-60h]
  __int64 v50; // [rsp+90h] [rbp-58h]
  _BYTE v51[80]; // [rsp+98h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a2 + 64);
  if ( !v3 || (v5 = *(_BYTE **)(a2 + 56), v3 == j__strlen("!")) && !memcmp(v5, "!", v3) )
  {
    v4 = a1 + 1;
    switch ( *(_DWORD *)(a2 + 32) )
    {
      case 0:
        a1->m128i_i64[0] = (__int64)v4;
        v16 = j__strlen("tag:yaml.org,2002:null");
        sub_226E150(a1, "tag:yaml.org,2002:null", (__int64)&aTagYamlOrg2002[v16]);
        break;
      case 1:
      case 2:
        a1->m128i_i64[0] = (__int64)v4;
        v18 = j__strlen("tag:yaml.org,2002:str");
        sub_226E150(a1, "tag:yaml.org,2002:str", (__int64)&aTagYamlOrg2002_0[v18]);
        break;
      case 4:
        a1->m128i_i64[0] = (__int64)v4;
        v19 = j__strlen("tag:yaml.org,2002:map");
        sub_226E150(a1, "tag:yaml.org,2002:map", (__int64)&aTagYamlOrg2002_1[v19]);
        break;
      case 5:
        a1->m128i_i64[0] = (__int64)v4;
        v20 = j__strlen("tag:yaml.org,2002:seq");
        sub_226E150(a1, "tag:yaml.org,2002:seq", (__int64)&aTagYamlOrg2002_2[v20]);
        break;
      default:
        a1->m128i_i64[0] = (__int64)v4;
        v21 = j__strlen(&byte_22F0C30);
        sub_226E150(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v21));
        break;
    }
    return a1;
  }
  v42.m128i_i8[0] = 0;
  v41 = 0;
  v40 = &v42;
  v6 = v3;
  do
  {
    if ( v5[--v6] == 33 )
    {
      v7 = *(__int64 **)(a2 + 8);
      v38 = *v7 + 112;
      if ( v6 )
        goto LABEL_8;
      v43 = "!";
      v44 = j__strlen("!");
      v22 = sub_226F6B0(v38, (__int64)&v43);
      v23 = *(_BYTE **)(v22 + 48);
      v24 = *(_QWORD *)(v22 + 56);
      v47 = &v48.m128i_u64[1];
      sub_226E150(&v47, v23, (__int64)&v23[v24]);
      sub_A0AAD0((__int64)&v40, &v47);
      if ( v47 != &v48.m128i_u64[1] )
        operator delete(v47);
      if ( 0x7FFFFFFFFFFFFFFFLL - v41 < v3 - 1 )
        goto LABEL_61;
      sub_9EE560(&v40, v5 + 1, v3 - 1);
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      v15 = v40;
      if ( v40 != &v42 )
        goto LABEL_30;
      goto LABEL_16;
    }
  }
  while ( v6 );
  v7 = *(__int64 **)(a2 + 8);
LABEL_8:
  v8 = j__strlen("!!");
  if ( v3 < v8 || v8 && memcmp(v5, "!!", v8) )
  {
    v25 = v3;
    while ( 1 )
    {
      v26 = v25 - 1;
      if ( v5[v25 - 1] == 33 )
        break;
      --v25;
      if ( !v26 )
        goto LABEL_35;
    }
    if ( v3 <= v25 )
      v25 = v3;
    v26 = v25;
LABEL_35:
    v27 = *v7;
    v39.m128i_i64[1] = v26;
    v39.m128i_i64[0] = (__int64)v5;
    v28 = sub_226F6B0(v27 + 112, (__int64)&v39);
    v29 = *(__int64 ****)(a2 + 8);
    if ( (__int64 **)v28 == *v29 + 15 )
    {
      v35 = _mm_load_si128(&v39);
      v51[0] = 0;
      v43 = "Unknown tag handle ";
      v49 = v51;
      v45 = v39;
      v50 = 0;
      v46 = 1283;
      v36 = *v29;
      LODWORD(v47) = 22;
      v37 = *v36;
      v48 = v35;
      sub_226E270(*v37, (__int64)&v43, (char *)v39.m128i_i64[0]);
      v32 = v49;
      if ( v49 == v51 )
      {
LABEL_38:
        v33 = v3 - 1;
        if ( v5[v3 - 1] == 33 )
        {
          v33 = v3;
        }
        else
        {
          if ( v3 == 1 )
          {
            v3 = 1;
LABEL_45:
            if ( 0x7FFFFFFFFFFFFFFFLL - v41 < v3 )
              goto LABEL_61;
LABEL_46:
            sub_9EE560(&v40, v5, v3);
            a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
            v15 = v40;
            if ( v40 != &v42 )
              goto LABEL_30;
LABEL_16:
            a1[1] = _mm_load_si128(&v42);
            goto LABEL_31;
          }
          v34 = v3 - 2;
          if ( v5[v3 - 2] != 33 )
          {
            while ( 1 )
            {
              if ( !v34 )
                goto LABEL_45;
              if ( v5[v34 - 1] == 33 )
                break;
              --v34;
            }
            if ( v3 < v34 )
            {
              v5 += v3;
              v3 = 0;
              goto LABEL_46;
            }
            v33 = v34;
          }
        }
        v3 -= v33;
        v5 += v33;
        goto LABEL_45;
      }
    }
    else
    {
      v30 = *(_BYTE **)(v28 + 48);
      v31 = *(_QWORD *)(v28 + 56);
      v47 = &v48.m128i_u64[1];
      sub_226E150(&v47, v30, (__int64)&v30[v31]);
      sub_A0AAD0((__int64)&v40, &v47);
      v32 = v47;
      if ( v47 == &v48.m128i_u64[1] )
        goto LABEL_38;
    }
    operator delete(v32);
    goto LABEL_38;
  }
  v9 = *v7;
  v43 = "!!";
  v44 = j__strlen("!!");
  v10 = sub_226F6B0(v9 + 112, (__int64)&v43);
  v11 = *(_BYTE **)(v10 + 48);
  v12 = *(_QWORD *)(v10 + 56);
  v47 = &v48.m128i_u64[1];
  sub_226E150(&v47, v11, (__int64)&v11[v12]);
  sub_A0AAD0((__int64)&v40, &v47);
  if ( v47 != &v48.m128i_u64[1] )
    operator delete(v47);
  if ( v3 > 1 )
  {
    v13 = v3 - 2;
    v14 = v5 + 2;
    if ( v3 - 2 <= 0x7FFFFFFFFFFFFFFFLL - v41 )
      goto LABEL_15;
LABEL_61:
    std::__throw_length_error("basic_string::append");
  }
  v14 = &v5[v3];
  v13 = 0;
LABEL_15:
  sub_9EE560(&v40, v14, v13);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  v15 = v40;
  if ( v40 == &v42 )
    goto LABEL_16;
LABEL_30:
  a1->m128i_i64[0] = (__int64)v15;
  a1[1].m128i_i64[0] = v42.m128i_i64[0];
LABEL_31:
  a1->m128i_i64[1] = v41;
  return a1;
}
