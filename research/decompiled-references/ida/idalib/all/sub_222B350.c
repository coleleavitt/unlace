void __fastcall sub_222B350(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 *v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rcx
  _BYTE *v20; // rax
  _BYTE *v21; // rsi
  signed __int64 v22; // r13
  void **v23; // r13
  char *v24; // r12
  size_t v25; // r13
  signed __int64 v26; // r12
  __int64 v27; // r14
  unsigned __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  bool v37; // al
  void *v38; // rbx
  void *v39; // rbx
  bool v40; // al
  __m128i v41; // [rsp+0h] [rbp-88h] BYREF
  void *v42; // [rsp+10h] [rbp-78h] BYREF
  void *s2; // [rsp+18h] [rbp-70h]
  __int64 v44; // [rsp+20h] [rbp-68h]
  void *v45; // [rsp+30h] [rbp-58h] BYREF
  void *v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+58h] [rbp-30h]
  __int64 v49; // [rsp+60h] [rbp-28h]

  v4 = *a2;
  *(_WORD *)a1 = v4;
  v49 = v3;
  v48 = v2;
  switch ( v4 )
  {
    case 0LL:
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
      *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 4));
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 12));
      return;
    case 5LL:
      v36 = *((_QWORD *)a2 + 2);
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(a1 + 16) = v36;
      return;
    case 6LL:
      *(_QWORD *)(a1 + 8) = a1 + 24;
      sub_2228B90((_QWORD *)(a1 + 8), *((_BYTE **)a2 + 1), *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2));
      return;
    case 7LL:
      *(_QWORD *)(a1 + 8) = 0;
      v6 = a1 + 8;
      *(_QWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 16) = 0;
      sub_222B0E0((__int64 *)v6);
      operator delete(*(_QWORD *)(a1 + 8), (unsigned __int64)*(unsigned int *)(a1 + 24) << 6, 8);
      v11 = *((unsigned int *)a2 + 6);
      *(_DWORD *)(a1 + 24) = v11;
      if ( (_DWORD)v11 )
      {
        v12 = 0;
        v13 = sub_22300B0(v11 << 6, 8, v7, v8, v9, v10);
        v14 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 8) = v13;
        *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
        v15 = *((__int64 **)a2 + 1);
        *(_DWORD *)(a1 + 20) = *((_DWORD *)a2 + 5);
        v16 = v13;
        sub_E59960((void ***)&v42, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
        sub_E59960((void ***)&v45, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
        if ( v14 )
        {
          while ( 1 )
          {
            *(_QWORD *)(v16 + 16) = 0;
            *(_OWORD *)v16 = 0;
            v17 = *v15;
            if ( !*v15 )
            {
              v24 = (char *)v15[1];
              *(__m128i *)(v16 + 8) = _mm_loadu_si128((const __m128i *)(v15 + 1));
              v25 = *(_QWORD *)(v16 + 16);
              goto LABEL_29;
            }
            v18 = operator new(0x20u);
            v19 = v18;
            v20 = (_BYTE *)(v18 + 16);
            *(_QWORD *)v18 = v18 + 16;
            v21 = *(_BYTE **)v17;
            v22 = *(_QWORD *)(v17 + 8);
            if ( &v21[v22] && !v21 )
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            if ( (unsigned __int64)v22 > 0xF )
              break;
            if ( v22 == 1 )
            {
              *(_BYTE *)(v18 + 16) = *v21;
            }
            else if ( v22 )
            {
              goto LABEL_50;
            }
LABEL_10:
            *(_QWORD *)(v18 + 8) = v22;
            v20[v22] = 0;
            v23 = *(void ***)v16;
            *(_QWORD *)v16 = v18;
            if ( v23 )
            {
              if ( *v23 != v23 + 2 )
                operator delete(*v23);
              operator delete(v23, 0x20u);
              v19 = *(_QWORD *)v16;
            }
            v24 = *(char **)v19;
            v25 = *(_QWORD *)(v19 + 8);
            *(_QWORD *)(v16 + 8) = *(_QWORD *)v19;
            *(_QWORD *)(v16 + 16) = v25;
LABEL_29:
            if ( s2 == (void *)-1LL )
            {
              v37 = v24 + 1 == nullptr;
            }
            else if ( s2 == (void *)-2LL )
            {
              v37 = v24 + 2 == nullptr;
            }
            else
            {
              if ( v44 != v25 )
                goto LABEL_36;
              if ( !v25 )
                goto LABEL_40;
              v37 = memcmp(v24, s2, v25) == 0;
            }
            if ( !v37 )
            {
LABEL_36:
              if ( v46 == (void *)-1LL )
              {
                v40 = v24 + 1 == nullptr;
              }
              else if ( v46 == (void *)-2LL )
              {
                v40 = v24 + 2 == nullptr;
              }
              else
              {
                if ( v47 != v25 )
                {
LABEL_39:
                  sub_222B350(v16 + 24, v15 + 3);
                  goto LABEL_40;
                }
                if ( !v25 )
                  goto LABEL_40;
                v40 = memcmp(v24, v46, v25) == 0;
              }
              if ( v40 )
                goto LABEL_40;
              goto LABEL_39;
            }
LABEL_40:
            ++v12;
            v16 += 64;
            v15 += 8;
            if ( v14 == v12 )
              goto LABEL_41;
          }
          if ( v22 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v41.m128i_i64[1] = (__int64)v21;
          v41.m128i_i64[0] = v18;
          v20 = (_BYTE *)operator new(v22 + 1);
          *(_QWORD *)(v18 + 16) = v22;
          v19 = v41.m128i_i64[0];
          *(_QWORD *)v18 = v20;
          v21 = (_BYTE *)v41.m128i_i64[1];
LABEL_50:
          v41.m128i_i64[0] = v19;
          memcpy(v20, v21, v22);
          v20 = *(_BYTE **)v18;
          v19 = v41.m128i_i64[0];
          goto LABEL_10;
        }
LABEL_41:
        v38 = v45;
        if ( v45 )
        {
          if ( *(void **)v45 != (char *)v45 + 16 )
            operator delete(*(void **)v45);
          operator delete(v38, 0x20u);
        }
        v39 = v42;
        if ( v42 )
        {
          if ( *(void **)v42 != (char *)v42 + 16 )
            operator delete(*(void **)v42);
          operator delete(v39, 0x20u);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
      return;
    case 8LL:
      v26 = *((_QWORD *)a2 + 2) - *((_QWORD *)a2 + 1);
      v27 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v28 = 0xCCCCCCCCCCCCCCCDLL * (v26 >> 3);
      if ( v28 )
      {
        if ( v28 > 0x666666666666666LL )
          std::__throw_bad_alloc();
        v27 = operator new(v26);
      }
      v41.m128i_i64[0] = v27;
      v29 = _mm_loadl_epi64(&v41);
      *(_QWORD *)(a1 + 24) = v27 + v26;
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v29, v29);
      v30 = *((_QWORD *)a2 + 2);
      v31 = *((_QWORD *)a2 + 1);
      if ( v30 != v31 )
      {
        v32 = *((_QWORD *)a2 + 1);
        v33 = v27;
        do
        {
          v34 = v32;
          v35 = v33;
          v32 += 40;
          v33 += 40;
          sub_222B350(v35, v34);
        }
        while ( v30 != v32 );
        v27 += 8 * ((unsigned __int64)(v30 - 40 - v31) >> 3) + 40;
      }
      *(_QWORD *)(a1 + 16) = v27;
      return;
    default:
      return;
  }
}
