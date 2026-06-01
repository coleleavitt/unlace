void __fastcall sub_14524B0(__int64 a1, __int64 a2)
{
  size_t v3; // rdx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  _BYTE *v12; // rdi
  size_t v13; // r9
  _BYTE *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rdi
  size_t v17; // r9
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  size_t v20; // rax
  unsigned __int64 v21; // rdx
  size_t v22; // rax
  size_t v23; // [rsp+8h] [rbp-1C0h]
  size_t v24; // [rsp+8h] [rbp-1C0h]
  size_t v25; // [rsp+18h] [rbp-1B0h]
  size_t v26; // [rsp+18h] [rbp-1B0h]
  char v27; // [rsp+2Fh] [rbp-199h] BYREF
  char *v28; // [rsp+30h] [rbp-198h] BYREF
  size_t v29; // [rsp+38h] [rbp-190h]
  int v30[4]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v31; // [rsp+50h] [rbp-178h]
  void *v32; // [rsp+60h] [rbp-168h] BYREF
  size_t v33; // [rsp+68h] [rbp-160h]
  _QWORD v34[2]; // [rsp+70h] [rbp-158h] BYREF
  void *src; // [rsp+80h] [rbp-148h] BYREF
  size_t n; // [rsp+88h] [rbp-140h]
  __m128i v37; // [rsp+90h] [rbp-138h] BYREF
  void *v38[2]; // [rsp+A0h] [rbp-128h] BYREF
  _OWORD v39[4]; // [rsp+B0h] [rbp-118h] BYREF
  void *ptr; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-D0h]
  _BYTE v42[192]; // [rsp+108h] [rbp-C0h] BYREF

  if ( !(unsigned __int8)sub_1464550(a1, v30, 0) )
  {
    if ( v31 == 16 )
    {
      v27 = 0;
      ptr = v42;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v28 = (char *)sub_145C740(a1, v30, &ptr, &v27);
      v29 = v3;
      if ( !v27 )
      {
        v4 = sub_141AD20(a1, v30[0], &v28);
        if ( v29 )
        {
          v5 = sub_141EB20(
                 a1,
                 v30[0],
                 v28,
                 v29,
                 v4,
                 0,
                 0,
                 0,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr,
                 0,
                 1,
                 1);
          if ( v5 )
          {
            v6 = sub_1436660((_QWORD *)a1);
            v7 = sub_1465F30(v6);
            if ( v7 )
            {
              while ( 1 )
              {
                v8 = *(_QWORD *)(v7 + 8);
                if ( !v8 )
                  break;
                v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v8 & 4) == 0 || !v7 )
                  goto LABEL_14;
              }
              v7 = 0;
LABEL_14:
              v9 = *(_QWORD *)(v7 + 40);
              while ( 1 )
              {
                v10 = *(_QWORD *)(v5 + 8);
                if ( !v10 )
                  break;
                v5 = v10 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v10 & 4) == 0 || !v5 )
                  goto LABEL_18;
              }
              v5 = 0;
LABEL_18:
              if ( *(_QWORD *)(v5 + 40) > v9 )
              {
                LOBYTE(v34[0]) = 0;
                v33 = 0;
                v32 = v34;
                sub_14634E0(a1, a2);
                while ( *(_WORD *)(a2 + 16) != 2 )
                {
                  sub_13D35F0((__int64)&src, a2, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 56), nullptr);
                  v20 = j__strlen(" ");
                  if ( v20 > 0x7FFFFFFFFFFFFFFFLL - n )
                    std::__throw_length_error("basic_string::append");
                  v12 = src;
                  v13 = v20 + n;
                  if ( src == &v37 )
                    v21 = 15;
                  else
                    v21 = v37.m128i_i64[0];
                  if ( v13 <= v21 )
                  {
                    if ( v20 )
                    {
                      v11 = (char *)src + n;
                      if ( v20 == 1 )
                      {
                        *v11 = 32;
                        v12 = src;
                      }
                      else
                      {
                        v23 = v20 + n;
                        memcpy(v11, " ", v20);
                        v12 = src;
                        v13 = v23;
                      }
                    }
                  }
                  else
                  {
                    v24 = v20 + n;
                    sub_998B30((__int64)&src, n, 0, " ", v20);
                    v12 = src;
                    v13 = v24;
                  }
                  n = v13;
                  v12[v13] = 0;
                  v14 = src;
                  v38[0] = v39;
                  if ( src == &v37 )
                  {
                    v14 = v39;
                    v39[0] = _mm_load_si128(&v37);
                  }
                  else
                  {
                    v38[0] = src;
                    *(_QWORD *)&v39[0] = v37.m128i_i64[0];
                  }
                  v15 = n;
                  src = &v37;
                  v16 = v32;
                  v37.m128i_i8[0] = 0;
                  v38[1] = (void *)n;
                  v17 = v33 + n;
                  n = 0;
                  if ( v32 == v34 )
                    v18 = 15;
                  else
                    v18 = v34[0];
                  if ( v17 > v18 )
                  {
                    v26 = v17;
                    sub_998B30((__int64)&v32, v33, 0, v14, v15);
                    v16 = v32;
                    v17 = v26;
                  }
                  else if ( v15 )
                  {
                    v19 = (char *)v32 + v33;
                    if ( v15 == 1 )
                    {
                      *v19 = *v14;
                      v16 = v32;
                    }
                    else
                    {
                      v25 = v17;
                      memcpy(v19, v14, v15);
                      v16 = v32;
                      v17 = v25;
                    }
                  }
                  v33 = v17;
                  v16[v17] = 0;
                  if ( v38[0] != v39 )
                    operator delete(v38[0]);
                  if ( src != &v37 )
                    operator delete(src);
                  sub_14634E0(a1, a2);
                }
                v22 = v33;
                if ( v33 )
                {
                  --v33;
                  *((char *)v32 + v22 - 1) = 0;
                }
                sub_FC70B0((__int64)v38, *(_QWORD *)(a1 + 48), v30[0], 1295);
                sub_AEC220((unsigned __int8 **)v38, v32, v33);
                sub_AEA040((__int64)v38);
                if ( v32 != v34 )
                  operator delete(v32);
              }
            }
          }
          else if ( (*(_BYTE *)(a1 + 544) & 4) == 0 )
          {
            sub_FC70B0((__int64)v38, *(_QWORD *)(a1 + 48), v30[0], 1131);
            sub_AEC220((unsigned __int8 **)v38, v28, v29);
            sub_AEA040((__int64)v38);
          }
        }
      }
      if ( ptr != v42 )
        free(ptr);
    }
    else
    {
      sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 48), v30[0], 1127);
      sub_AEA040((__int64)&ptr);
    }
  }
}
