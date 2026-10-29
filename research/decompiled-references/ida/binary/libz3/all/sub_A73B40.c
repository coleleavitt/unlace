void __fastcall sub_A73B40(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 *v3; // r15
  __int64 v4; // rax
  bool v5; // zf
  unsigned int v6; // ebx
  __int64 v7; // rax
  char v8; // dl
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rbp
  void *v13; // rbx
  void *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // [rsp+8h] [rbp-C0h]
  __int64 v24; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-B0h]
  __m128 v26; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-68h] BYREF
  int v31; // [rsp+70h] [rbp-58h] BYREF
  char v32; // [rsp+74h] [rbp-54h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  int v34; // [rsp+80h] [rbp-48h]
  char v35; // [rsp+84h] [rbp-44h]
  __int64 v36; // [rsp+88h] [rbp-40h]

  v3 = *(__int64 **)(a1 + 64);
  v28[0] = 1;
  v30[0] = 1;
  v4 = v3[1];
  v5 = *((_BYTE *)v3 + 768) == 0;
  v27[0] = 0;
  v27[1] = 0;
  v28[1] = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30[1] = 0;
  v24 = 0;
  v25 = v4;
  if ( v5 )
  {
    sub_25A130((char *)v29);
    sub_25A130((char *)v27);
  }
  else
  {
    v6 = 0;
    v7 = *(_QWORD *)(*v3 + 32);
    if ( v7 )
    {
      do
      {
        if ( v6 >= *(_DWORD *)(v7 - 4) )
          break;
        v8 = sub_FFAE60(v3[63]);
        v7 = *(_QWORD *)(*v3 + 32);
        if ( v8 )
        {
          v9 = *(_QWORD **)(v7 + 8LL * v6);
          if ( v9 )
          {
            if ( (unsigned __int8)sub_966310(*v3, *(__int64 **)(v7 + 8LL * v6)) )
            {
              if ( (unsigned __int8)sub_FFAE60(v3[63]) )
              {
                v23 = v3[63];
                v15 = sub_FF9FB0(v23, v6);
                sub_FFC2C0(&v31, v23, v15);
              }
              else
              {
                v31 = 0;
                v32 &= 0xFCu;
                v35 &= 0xFCu;
                v33 = 0;
                v34 = 1;
                v36 = 0;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v31, &qword_1C7F2A0);
              }
              if ( (unsigned __int8)sub_C05810(a2, *v9, &v24, 0) )
              {
                if ( (unsigned __int8)sub_1666AE0(v3 + 2, v24, v29, &v26) )
                {
                  v14 = qword_1C7F2C0;
                  if ( !sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v31, (__int64)v29) )
                  {
                    if ( (unsigned int)sub_180B130(v14) )
                    {
                      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
                      {
                        sub_186A4C0(*(double *)a3.m128i_i64);
                        v16 = sub_180B150(v14, &v31);
                        a3 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)(*v3 + 16)),
                               (__m128i)(unsigned __int64)v9);
                        v26 = (__m128)a3;
                        v17 = sub_AA7260(v16, &v26);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        v18 = sub_2FCE40(v17, (__int64)v29);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        v19 = sub_2FCE40(v18, (__int64)&v31);
                        std::operator<<<std::char_traits<char>>();
                        sub_186A500(v19, "\n");
                      }
                      else
                      {
                        v20 = sub_180B150(v14, &v31);
                        a3 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)(*v3 + 16)),
                               (__m128i)(unsigned __int64)v9);
                        v26 = (__m128)a3;
                        v21 = sub_AA7260(v20, &v26);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        v22 = sub_2FCE40(v21, (__int64)v29);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_2FCE40(v22, (__int64)&v31);
                        std::operator<<<std::char_traits<char>>();
                      }
                    }
                  }
                }
              }
              sub_25A130((char *)&v31);
            }
            v7 = *(_QWORD *)(*v3 + 32);
          }
        }
        ++v6;
      }
      while ( v7 );
      v10 = v24;
      v11 = v25;
      if ( v24 )
      {
        v5 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v5 )
          sub_15D7BC0(v11, v10);
      }
    }
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v29);
    sub_182CBA0(v12, v30);
    v13 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v27);
    sub_182CBA0(v13, v28);
  }
}

