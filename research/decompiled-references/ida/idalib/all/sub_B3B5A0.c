__m128i *__fastcall sub_B3B5A0(__m128i *a1, _QWORD *a2)
{
  __m128i *v2; // r15
  int v3; // r9d
  char v4; // r13
  bool v5; // r12
  _QWORD *v6; // rbx
  char v7; // r14
  char v8; // al
  __m128i *v9; // rbx
  size_t v10; // rax
  __m128i *v11; // rdx
  __m128i *v12; // rdi
  __m128i *v13; // rdi
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // r9
  size_t v17; // r8
  _BYTE *v18; // rcx
  _BYTE *v19; // rax
  size_t v20; // r9
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rdi
  size_t v23; // r12
  _BYTE *v24; // rax
  size_t v25; // r9
  unsigned __int64 v26; // rdx
  size_t v27; // rax
  _BYTE *v28; // rdx
  size_t v29; // r9
  unsigned __int64 v30; // rcx
  size_t v31; // r8
  _BYTE *v32; // rcx
  _BYTE *v33; // rdi
  unsigned __int64 v34; // r9
  _BYTE *v35; // rdi
  size_t v36; // r12
  unsigned __int64 v37; // rdx
  __m128i *v38; // rax
  unsigned __int8 *v39; // rax
  unsigned __int8 *v40; // r11
  size_t v42; // [rsp+10h] [rbp-88h]
  unsigned __int64 v43; // [rsp+10h] [rbp-88h]
  size_t v44; // [rsp+10h] [rbp-88h]
  size_t v45; // [rsp+10h] [rbp-88h]
  size_t v46; // [rsp+10h] [rbp-88h]
  size_t v47; // [rsp+10h] [rbp-88h]
  size_t v48; // [rsp+18h] [rbp-80h]
  void *v49; // [rsp+20h] [rbp-78h] BYREF
  size_t v50; // [rsp+28h] [rbp-70h]
  __m128i v51; // [rsp+30h] [rbp-68h] BYREF
  void *v52; // [rsp+40h] [rbp-58h] BYREF
  size_t v53; // [rsp+48h] [rbp-50h]
  __m128i v54[4]; // [rsp+50h] [rbp-48h] BYREF

  v2 = a1;
  v3 = *((_DWORD *)a2 + 5);
  v51.m128i_i8[0] = 0;
  v54[0].m128i_i8[0] = 0;
  v49 = &v51;
  v50 = 0;
  v52 = v54;
  v53 = 0;
  if ( v3 )
  {
    v4 = 0;
    v5 = 1;
    v6 = a2 + 2;
    v7 = 0;
    while ( 1 )
    {
      while ( v3 == 2 )
      {
LABEL_27:
        if ( v5 || v4 )
        {
          v31 = *((unsigned int *)a2 + 6);
          v32 = (_BYTE *)a2[4];
          if ( v31 > 0x7FFFFFFFFFFFFFFFLL - v50 )
            goto LABEL_85;
          v33 = v49;
          v34 = v31 + v50;
          if ( v49 == &v51 )
          {
            if ( v34 <= 0xF )
            {
LABEL_58:
              if ( *((_DWORD *)a2 + 6) )
              {
                v35 = (char *)v49 + v50;
                if ( v31 == 1 )
                {
                  *v35 = *v32;
                  v33 = v49;
                }
                else
                {
                  v43 = v31 + v50;
                  memcpy(v35, (const void *)a2[4], *((unsigned int *)a2 + 6));
                  v33 = v49;
                  v34 = v43;
                }
              }
              v50 = v34;
              v33[v34] = 0;
              goto LABEL_16;
            }
          }
          else if ( v34 <= v51.m128i_i64[0] )
          {
            goto LABEL_58;
          }
          v46 = v31 + v50;
          sub_998B30((__int64)&v49, v50, 0, v32, v31);
          v50 = v46;
          *((_BYTE *)v49 + v46) = 0;
        }
        else if ( v7 )
        {
          v17 = *((unsigned int *)a2 + 6);
          v18 = (_BYTE *)a2[4];
          if ( v17 > 0x7FFFFFFFFFFFFFFFLL - v53 )
            goto LABEL_85;
          v19 = v52;
          v20 = v17 + v53;
          if ( v52 == v54 )
            v21 = 15;
          else
            v21 = v54[0].m128i_i64[0];
          if ( v20 > v21 )
          {
            v47 = v17 + v53;
            sub_998B30((__int64)&v52, v53, 0, v18, v17);
            v53 = v47;
            *((_BYTE *)v52 + v47) = 0;
          }
          else
          {
            if ( *((_DWORD *)a2 + 6) )
            {
              v22 = (char *)v52 + v53;
              if ( v17 == 1 )
              {
                *v22 = *v18;
                v19 = v52;
              }
              else
              {
                v42 = v17 + v53;
                memcpy(v22, (const void *)a2[4], *((unsigned int *)a2 + 6));
                v19 = v52;
                v20 = v42;
              }
            }
            v53 = v20;
            v19[v20] = 0;
          }
        }
LABEL_16:
        sub_B433F0(*a2, v6);
        v3 = *((_DWORD *)a2 + 5);
        if ( !v3 )
          goto LABEL_17;
      }
      if ( (unsigned int)(v3 - 4) > 1 )
      {
        if ( v3 != 1 )
          goto LABEL_16;
      }
      else
      {
        v8 = *(_BYTE *)(sub_B3E290(a2[1], *((unsigned int *)a2 + 6)) + 19);
        if ( (v8 & 4) != 0 )
        {
          v4 = 1;
          v50 = 0;
          *(_BYTE *)v49 = 0;
          sub_B433F0(*a2, v6);
          v3 = *((_DWORD *)a2 + 5);
          goto LABEL_9;
        }
        if ( (v8 & 8) != 0 )
        {
          v36 = v53;
          if ( 0x7FFFFFFFFFFFFFFFLL - v53 <= 7 )
LABEL_85:
            std::__throw_length_error("basic_string::append");
          if ( v52 == v54 )
            v37 = 15;
          else
            v37 = v54[0].m128i_i64[0];
          if ( v53 + 8 > v37 )
            sub_998B30((__int64)&v52, v53, 0, "Returns ", 8u);
          else
            *(_QWORD *)((char *)v52 + v53) = 0x20736E7275746552LL;
          v53 = v36 + 8;
          v7 = 1;
          v4 = 0;
          *((_BYTE *)v52 + v36 + 8) = 0;
          v5 = 0;
          sub_B433F0(*a2, v6);
          v3 = *((_DWORD *)a2 + 5);
          goto LABEL_9;
        }
        if ( (v8 & 2) != 0 )
        {
          if ( v4 )
            goto LABEL_17;
          v5 = 0;
          if ( *((_DWORD *)a2 + 5) != 1 )
            goto LABEL_16;
          v5 = 0;
          if ( v7 )
            goto LABEL_41;
          goto LABEL_7;
        }
        if ( *((_DWORD *)a2 + 5) != 1 )
          goto LABEL_16;
      }
      if ( !v4 && !v5 )
      {
        v5 = 0;
        if ( !v7 )
          goto LABEL_7;
LABEL_41:
        v23 = v53;
        v24 = v52;
        v25 = v53 + 1;
        if ( v52 == v54 )
          v26 = 15;
        else
          v26 = v54[0].m128i_i64[0];
        if ( v25 > v26 )
        {
          v44 = v53 + 1;
          sub_998B30((__int64)&v52, v53, 0, nullptr, 1u);
          v24 = v52;
          v25 = v44;
        }
        v24[v23] = 32;
        v53 = v25;
        *((_BYTE *)v52 + v23 + 1) = 0;
        v5 = 0;
        goto LABEL_7;
      }
      v27 = v50;
      v28 = v49;
      v29 = v50 + 1;
      if ( v49 == &v51 )
        v30 = 15;
      else
        v30 = v51.m128i_i64[0];
      if ( v29 > v30 )
      {
        v48 = v50 + 1;
        v45 = v50;
        sub_998B30((__int64)&v49, v50, 0, nullptr, 1u);
        v28 = v49;
        v29 = v48;
        v27 = v45;
      }
      v28[v27] = 32;
      v50 = v29;
      *((_BYTE *)v49 + v27 + 1) = 0;
LABEL_7:
      sub_B433F0(*a2, v6);
      v3 = *((_DWORD *)a2 + 5);
      if ( v3 != 2 )
        goto LABEL_8;
      v15 = sub_B3B2F0((unsigned __int8 *)a2[4], a2[4] + *((unsigned int *)a2 + 6));
      if ( v16 != v15 )
        goto LABEL_27;
      sub_B433F0(*a2, v6);
      v3 = *((_DWORD *)a2 + 5);
LABEL_8:
      if ( v3 == 1 )
      {
        sub_B433F0(*a2, v6);
        if ( v4 )
        {
LABEL_17:
          v2 = a1;
          break;
        }
        v3 = *((_DWORD *)a2 + 5);
        if ( v5 )
        {
          v39 = sub_B3B2F0((unsigned __int8 *)v49, (__int64)v49 + v50);
          v5 = v40 == v39;
          v7 = 0;
        }
        else
        {
          v7 = 0;
          v4 = 0;
        }
      }
LABEL_9:
      if ( !v3 )
        goto LABEL_17;
    }
  }
  v9 = v2 + 1;
  sub_B3B430((unsigned __int8 **)&v49);
  v10 = v50;
  if ( !v50 )
  {
    sub_B3B430((unsigned __int8 **)&v52);
    v38 = (__m128i *)v52;
    v2->m128i_i64[0] = (__int64)v9;
    if ( v38 == v54 )
    {
      v2[1] = _mm_load_si128(v54);
    }
    else
    {
      v2->m128i_i64[0] = (__int64)v38;
      v2[1].m128i_i64[0] = v54[0].m128i_i64[0];
    }
    v13 = (__m128i *)v49;
    v2->m128i_i64[1] = v53;
    goto LABEL_23;
  }
  v11 = (__m128i *)v49;
  v2->m128i_i64[0] = (__int64)v9;
  if ( v11 == &v51 )
  {
    v2[1] = _mm_load_si128(&v51);
  }
  else
  {
    v2->m128i_i64[0] = (__int64)v11;
    v2[1].m128i_i64[0] = v51.m128i_i64[0];
  }
  v12 = (__m128i *)v52;
  v2->m128i_i64[1] = v10;
  v49 = &v51;
  v51.m128i_i8[0] = 0;
  v50 = 0;
  if ( v12 != v54 )
  {
    operator delete(v12);
    v13 = (__m128i *)v49;
LABEL_23:
    if ( v13 != &v51 )
      operator delete(v13);
  }
  return v2;
}
