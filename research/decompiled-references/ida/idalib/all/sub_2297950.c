void __fastcall __noreturn sub_2297950(const char *src, int a2)
{
  int v2; // ebp
  size_t v3; // rax
  size_t v4; // rbx
  void *v5; // r15
  size_t v6; // rbp
  size_t v7; // rbp
  unsigned __int64 v8; // rdx
  _BYTE *v9; // rdi
  size_t v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __m128i *v13; // rax
  unsigned __int16 *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rax
  _BYTE *v17; // rdi
  _QWORD *v18; // rax
  size_t v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-F0h] BYREF
  void *dest; // [rsp+10h] [rbp-E8h] BYREF
  __m128 v22; // [rsp+18h] [rbp-E0h] BYREF
  void *v23; // [rsp+30h] [rbp-C8h]
  size_t v24; // [rsp+38h] [rbp-C0h]
  _QWORD v25[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *v26; // [rsp+50h] [rbp-A8h] BYREF
  size_t v27; // [rsp+58h] [rbp-A0h]
  _QWORD v28[2]; // [rsp+60h] [rbp-98h] BYREF
  void *srca; // [rsp+70h] [rbp-88h] BYREF
  size_t n; // [rsp+78h] [rbp-80h]
  _QWORD v31[2]; // [rsp+80h] [rbp-78h] BYREF
  void *p_dest; // [rsp+90h] [rbp-68h] BYREF
  size_t v33; // [rsp+98h] [rbp-60h]
  __m128i v34; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v35; // [rsp+B0h] [rbp-48h]

  v2 = a2;
  v22.m128_i8[8] = 0;
  v22.m128_u64[0] = 0;
  dest = &v22.m128_u16[4];
  v23 = v25;
  v3 = strlen(src);
  v4 = v3;
  if ( v3 > 0xF )
  {
    v16 = (_QWORD *)operator new(v3 + 1);
    v25[0] = v4;
    v23 = v16;
  }
  else
  {
    if ( v3 == 1 )
    {
      LOBYTE(v25[0]) = *src;
      goto LABEL_4;
    }
    if ( !v3 )
    {
LABEL_4:
      v24 = v4;
      *((_BYTE *)v23 + v4) = 0;
      if ( a2 == -1 )
        v2 = *__errno_location();
      sub_2287FA0((__int64)&srca, v2);
      v5 = v23;
      v6 = v24;
      v26 = v28;
      if ( (char *)v23 + v24 && !v23 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( v24 > 0xF )
      {
        if ( (v24 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        v18 = (_QWORD *)operator new(v24 + 1);
        v28[0] = v6;
        v26 = v18;
      }
      else
      {
        if ( v24 == 1 )
        {
          LOBYTE(v28[0]) = *(_BYTE *)v23;
          goto LABEL_11;
        }
        if ( !v24 )
        {
LABEL_11:
          v27 = v6;
          *((_BYTE *)v26 + v6) = 0;
          v7 = v27;
          if ( v27 == 0x7FFFFFFFFFFFFFFFLL || v27 == 9223372036854775806LL )
            std::__throw_length_error("basic_string::append");
          if ( v26 == v28 )
            v8 = 15;
          else
            v8 = v28[0];
          if ( v27 + 2 > v8 )
            sub_998B30((__int64)&v26, v27, 0, ": ", 2u);
          else
            *(_WORD *)((char *)v26 + v27) = 8250;
          v27 = v7 + 2;
          *((_BYTE *)v26 + v7 + 2) = 0;
          v9 = v26;
          v10 = v27 + n;
          if ( v26 == v28 )
            v11 = 15;
          else
            v11 = v28[0];
          if ( v10 <= v11 )
          {
            if ( n )
            {
              v17 = (char *)v26 + v27;
              if ( n == 1 )
                *v17 = *(_BYTE *)srca;
              else
                memcpy(v17, srca, n);
              v9 = v26;
            }
          }
          else
          {
            if ( srca == v31 )
              v12 = 15;
            else
              v12 = v31[0];
            if ( v10 <= v12 )
            {
              v13 = (__m128i *)sub_99BDC0(&srca, 0, 0, v26, v27);
LABEL_24:
              p_dest = &v34;
              if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
              {
                v34 = _mm_loadu_si128(v13 + 1);
              }
              else
              {
                p_dest = (void *)v13->m128i_i64[0];
                v34.m128i_i64[0] = v13[1].m128i_i64[0];
              }
              v33 = v13->m128i_u64[1];
              v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
              v14 = (unsigned __int16 *)dest;
              v13->m128i_i64[1] = 0;
              v13[1].m128i_i8[0] = 0;
              if ( p_dest == &v34 )
              {
                v19 = v33;
                if ( v33 )
                {
                  if ( v33 == 1 )
                    *(_BYTE *)v14 = v34.m128i_i8[0];
                  else
                    memcpy(v14, p_dest, v33);
                  v14 = (unsigned __int16 *)dest;
                  v19 = v33;
                }
                v22.m128_u64[0] = v19;
                *((_BYTE *)v14 + v19) = 0;
              }
              else
              {
                if ( v14 == &v22.m128_u16[4] )
                {
                  v20 = v34.m128i_i64[0];
                  dest = p_dest;
                  v22 = _mm_loadh_ps((const double *)&v20);
                }
                else
                {
                  v20 = v34.m128i_i64[0];
                  v15 = v22.m128_i64[1];
                  dest = p_dest;
                  v22 = _mm_loadh_ps((const double *)&v20);
                  if ( v14 )
                  {
                    p_dest = v14;
                    v34.m128i_i64[0] = v15;
                    goto LABEL_30;
                  }
                }
                p_dest = &v34;
              }
LABEL_30:
              v33 = 0;
              *(_BYTE *)p_dest = 0;
              if ( p_dest != &v34 )
                operator delete(p_dest);
              if ( v26 != v28 )
                operator delete(v26);
              if ( srca != v31 )
                operator delete(srca);
              if ( v23 != v25 )
                operator delete(v23);
              p_dest = &dest;
              v35 = 260;
              sub_2221AD0((__int64)&p_dest, 1u);
            }
            sub_998B30((__int64)&v26, v27, 0, srca, n);
            v9 = v26;
          }
          v27 = v10;
          v13 = (__m128i *)&v26;
          v9[v10] = 0;
          goto LABEL_24;
        }
        v18 = v28;
      }
      memcpy(v18, v5, v6);
      goto LABEL_11;
    }
    v16 = v25;
  }
  memcpy(v16, src, v4);
  goto LABEL_4;
}
