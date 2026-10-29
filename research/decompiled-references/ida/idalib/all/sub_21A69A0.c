_QWORD *__fastcall sub_21A69A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // r13
  unsigned int v7; // r12d
  char *v8; // r9
  char *v9; // rdx
  char v10; // r8
  char *v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  const char *v16; // rdi
  __int64 v17; // r14
  signed __int64 v18; // r15
  int v19; // eax
  char *v20; // rax
  __int64 v21; // r8
  char *v22; // rcx
  __m128i v23; // xmm0
  void *v24; // r15
  signed __int64 v25; // r9
  char *v26; // rax
  int v27; // eax
  __m128i si128; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  int v31; // eax
  __m128i v32; // xmm5
  int v33; // eax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  _QWORD *result; // rax
  __int64 v37; // rbx
  __m128i v38; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+18h] [rbp-D0h]
  const char **v40; // [rsp+20h] [rbp-C8h]
  _QWORD *v41; // [rsp+28h] [rbp-C0h]
  const char *v42; // [rsp+30h] [rbp-B8h] BYREF
  void *src[2]; // [rsp+38h] [rbp-B0h]
  __int128 v44; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-90h]
  int v46; // [rsp+60h] [rbp-88h]
  int v47; // [rsp+64h] [rbp-84h]
  int v48; // [rsp+68h] [rbp-80h]
  __m128i v49; // [rsp+70h] [rbp-78h] BYREF
  __int64 v50; // [rsp+80h] [rbp-68h]
  __m128i v51; // [rsp+88h] [rbp-60h] BYREF
  __m128i v52; // [rsp+98h] [rbp-50h] BYREF
  int v53; // [rsp+A8h] [rbp-40h]

  v41 = a1;
  v5 = sub_21A2A40(a3);
  v39 = a2 + 536;
  sub_21A48B0((const __m128i **)(a2 + 536), v5);
  v6 = (__int64)(*(_QWORD *)(a2 + 312) - *(_QWORD *)(a2 + 304)) >> 6;
  if ( v5 )
  {
    v7 = v5 - 1;
    v40 = &v42;
    do
    {
      while ( 1 )
      {
        v8 = *(char **)(a3 + 16);
        v9 = *(char **)(a3 + 8);
        if ( v8 == v9 )
        {
LABEL_24:
          v16 = "malformed uleb128, extends past end";
LABEL_25:
          sub_2221C70(v16, 1);
        }
        v10 = *v9;
        v11 = *(char **)(a3 + 8);
        v12 = 0;
        v13 = 0;
        v14 = *v9 & 0x7F;
        while ( 1 )
        {
          v15 = v14 << v12;
          ++v11;
          v12 += 7;
          v13 += v15;
          if ( v10 >= 0 )
            break;
          if ( v8 == v11 )
            goto LABEL_24;
          v10 = *v11;
          v14 = *v11 & 0x7F;
          if ( v12 > 0x3E )
          {
            if ( v12 == 63 )
            {
              if ( v14 != (v10 & 1) )
              {
LABEL_10:
                v16 = "uleb128 too big for uint64";
                goto LABEL_25;
              }
            }
            else if ( (*v11 & 0x7F) != 0 )
            {
              goto LABEL_10;
            }
          }
        }
        *(_QWORD *)(a3 + 8) = &v9[(_DWORD)v11 - (_DWORD)v9];
        if ( v13 > 0xFFFFFFFF )
          sub_2221C70("LEB is outside Varuint32 range", 1);
        if ( (unsigned int)v6 <= (unsigned int)v13 )
        {
          v42 = "invalid function type";
          WORD4(v44) = 259;
          v37 = operator new(0x38u);
          sub_2195A00(v37, (__int64)&v42, 3);
          result = v41;
          *v41 = v37;
          return result;
        }
        HIDWORD(v42) = v13;
        v17 = *(_QWORD *)(a2 + 544);
        *(_OWORD *)src = 0;
        v44 = 0;
        v45 = 0;
        LOBYTE(v50) = 0;
        v51 = 0u;
        v52 = 0u;
        if ( v17 == *(_QWORD *)(a2 + 552) )
        {
          sub_21A65F0(v39, (const __m128i *)v17, (__int64)v40);
          v24 = src[0];
        }
        else
        {
          v18 = (char *)src[1] - (char *)src[0];
          *(_DWORD *)v17 = (_DWORD)v42;
          v19 = HIDWORD(v42);
          *(_OWORD *)(v17 + 8) = 0;
          *(_DWORD *)(v17 + 4) = v19;
          *(_QWORD *)(v17 + 24) = 0;
          if ( v18 >> 3 )
          {
            if ( (unsigned __int64)(v18 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
              std::__throw_bad_alloc();
            v20 = (char *)operator new(v18);
            v21 = *(_QWORD *)(a2 + 544);
            v22 = v20;
          }
          else
          {
            v21 = v17;
            v22 = nullptr;
          }
          v38.m128i_i64[0] = (__int64)v22;
          v23 = _mm_loadl_epi64(&v38);
          *(_QWORD *)(v17 + 24) = &v22[v18];
          *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v23, v23);
          v24 = src[0];
          v25 = (char *)src[1] - (char *)src[0];
          if ( src[1] != src[0] )
          {
            v38.m128i_i64[1] = v21;
            v38.m128i_i64[0] = (char *)src[1] - (char *)src[0];
            v26 = (char *)memmove(v22, src[0], (char *)src[1] - (char *)src[0]);
            v21 = v38.m128i_i64[1];
            v25 = v38.m128i_i64[0];
            v22 = v26;
          }
          v27 = v46;
          si128 = _mm_load_si128((const __m128i *)((char *)&v44 + 8));
          v29 = _mm_load_si128(&v49);
          *(_QWORD *)(v17 + 16) = &v22[v25];
          v30 = _mm_loadu_si128(&v51);
          *(_DWORD *)(v17 + 48) = v27;
          v31 = v47;
          *(__m128i *)(v17 + 32) = si128;
          v32 = _mm_loadu_si128(&v52);
          *(_DWORD *)(v17 + 52) = v31;
          v33 = v48;
          *(__m128i *)(v17 + 64) = v29;
          *(_DWORD *)(v17 + 56) = v33;
          v34 = v50;
          *(__m128i *)(v17 + 88) = v30;
          *(_QWORD *)(v17 + 80) = v34;
          LODWORD(v34) = v53;
          *(__m128i *)(v17 + 104) = v32;
          *(_DWORD *)(v17 + 120) = v34;
          *(_QWORD *)(a2 + 544) = v21 + 128;
        }
        if ( !v24 )
          break;
        --v7;
        operator delete(v24);
        if ( v7 == -1 )
          goto LABEL_22;
      }
      --v7;
    }
    while ( v7 != -1 );
    if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16) )
      goto LABEL_23;
  }
  else
  {
LABEL_22:
    if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16) )
    {
LABEL_23:
      sub_21A2C10((__int64 *)&v42, "function section ended prematurely");
      v35 = v41;
      *v41 = v42;
      return v35;
    }
  }
  result = v41;
  *v41 = 0;
  return result;
}
