__int64 __fastcall sub_A1F4D0(__int64 *a1, __int64 *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64 *, void **); // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  void *v27; // rdi
  const __m128i *v28; // r8
  __int64 v29; // rcx
  const __m128i *i; // rdx
  __m128i v31; // xmm1
  __int64 v32; // [rsp+8h] [rbp-170h]
  __int64 v34; // [rsp+28h] [rbp-150h]
  char v35; // [rsp+3Fh] [rbp-139h] BYREF
  __int64 v36; // [rsp+40h] [rbp-138h] BYREF
  __int64 v37; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-128h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+60h] [rbp-118h] BYREF
  __int64 v40; // [rsp+68h] [rbp-110h]
  __int128 v41; // [rsp+70h] [rbp-108h]
  __int64 v42; // [rsp+80h] [rbp-F8h]
  char v43; // [rsp+88h] [rbp-F0h]
  int v44; // [rsp+8Ch] [rbp-ECh]
  void **p_ptr; // [rsp+90h] [rbp-E8h]
  void *ptr; // [rsp+A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-D0h]
  _WORD v48[96]; // [rsp+B8h] [rbp-C0h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v3 = -858993459 * ((a2[1] - *a2) >> 3);
  if ( v3 )
  {
    v4 = 0;
    v32 = (unsigned int)(v3 - 1);
    while ( 1 )
    {
      v5 = v4 + 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, (unsigned int)v4, &v36) )
      {
        v6 = a2[1];
        v7 = *a2;
        v8 = v6 - *a2;
        v9 = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 3);
        if ( v9 <= v4 )
        {
          if ( v9 < v5 )
          {
            v18 = v5 - v9;
            if ( v5 != v9 )
            {
              if ( v18 > 0xCCCCCCCCCCCCCCCDLL * ((a2[2] - v6) >> 3) )
              {
                v23 = 0x666666666666666LL;
                if ( v18 > 0x666666666666666LL - v9 )
                  std::__throw_length_error("vector::_M_default_append");
                v24 = v5 - v9;
                if ( v9 >= v18 )
                  v24 = 0xCCCCCCCCCCCCCCCDLL * ((a2[1] - *a2) >> 3);
                if ( __CFADD__(v24, v9) )
                {
                  v25 = -16;
                }
                else
                {
                  if ( v24 - 0x3333333333333333LL * ((a2[1] - *a2) >> 3) <= 0x666666666666666LL )
                    v23 = v24 - 0x3333333333333333LL * ((a2[1] - *a2) >> 3);
                  v25 = 40 * v23;
                }
                v7 = operator new(v25);
                v26 = v7 + v8;
                do
                {
                  *(_QWORD *)(v26 + 32) = 0;
                  v26 += 40;
                  *(_OWORD *)(v26 - 40) = 0;
                  *(_OWORD *)(v26 - 24) = 0;
                  *(_BYTE *)(v26 - 35) = 1;
                  *(_BYTE *)(v26 - 33) = 1;
                  *(_BYTE *)(v26 - 31) = 0;
                  *(_QWORD *)(v26 - 16) = 0;
                }
                while ( v26 != v7 + v8 + 40 * v18 );
                v27 = (void *)*a2;
                v28 = (const __m128i *)a2[1];
                v29 = v7;
                for ( i = (const __m128i *)*a2; v28 != i; *(_QWORD *)(v29 - 8) = i[-1].m128i_i64[1] )
                {
                  v31 = _mm_loadu_si128(i);
                  i = (const __m128i *)((char *)i + 40);
                  v29 += 40;
                  *(__m128i *)(v29 - 40) = v31;
                  *(__m128i *)(v29 - 24) = _mm_loadu_si128((const __m128i *)((char *)i - 24));
                }
                if ( v27 )
                {
                  v34 = v7;
                  operator delete(v27);
                  v7 = v34;
                }
                *a2 = v7;
                a2[1] = v7 + 40 * v5;
                a2[2] = v7 + v25;
              }
              else
              {
                v19 = v6 + 40 * v18;
                do
                {
                  *(_QWORD *)(v6 + 32) = 0;
                  v6 += 40;
                  *(_OWORD *)(v6 - 40) = 0;
                  *(_OWORD *)(v6 - 24) = 0;
                  *(_BYTE *)(v6 - 35) = 1;
                  *(_BYTE *)(v6 - 33) = 1;
                  *(_BYTE *)(v6 - 31) = 0;
                  *(_QWORD *)(v6 - 16) = 0;
                }
                while ( v6 != v19 );
                a2[1] = v6;
              }
            }
          }
          else if ( v9 > v5 )
          {
            v17 = v7 + 40 * v5;
            if ( v6 != v17 )
              a2[1] = v17;
          }
        }
        v10 = v7 + 40 * v4;
        (*(void (__fastcall **)(__int64 *))(*a1 + 104))(a1);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, char *, __int64 *))(*a1 + 120))(
               a1,
               "Position",
               1,
               0,
               &v35,
               &v37) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
          {
            ptr = v48;
            si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
            v41 = 0;
            v39 = &off_2BC1F40;
            LODWORD(v40) = 2;
            v43 = 0;
            v44 = 1;
            v42 = 0;
            p_ptr = &ptr;
            sub_2257B70(&v39, 0, 0, 0);
            v20 = sub_2254970(a1);
            sub_2255160(v10, v20, &v39);
            v21 = p_ptr[1];
            v38[0] = *p_ptr;
            v22 = *a1;
            v38[1] = v21;
            (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(v22 + 216))(a1, v38, 0);
            v39 = (__int64 (__fastcall **)())&unk_2C4C288;
            sub_2257A60(&v39);
            if ( ptr != v48 )
              free(ptr);
          }
          else
          {
            v12 = *a1;
            v39 = nullptr;
            v40 = 0;
            (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)(), _QWORD))(v12 + 216))(a1, &v39, 0);
            v13 = sub_2254970(a1);
            v14 = (void *)sub_2255170(v39, v40, v13, v10);
            if ( v15 )
            {
              v16 = *(void (__fastcall **)(__int64 *, void **))(*a1 + 248);
              v48[4] = 261;
              ptr = v14;
              si128.m128i_i64[0] = v15;
              v16(a1, &ptr);
            }
          }
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v37);
        }
        BYTE1(ptr) = 0;
        sub_A1EF30((__int64)a1, (__int64)"Nullability", (_BYTE *)(v10 + 8), &ptr, 0);
        HIDWORD(ptr) = 0;
        sub_A1F0A0((__int64)a1, (__int64)"RetainCountConvention", v10 + 12, (__int64 *)&ptr, 0);
        BYTE1(ptr) = 0;
        sub_A1F2C0(a1, (__int64)"NoEscape", v10 + 4, &ptr, 0);
        BYTE1(ptr) = 0;
        sub_A1F2C0(a1, (__int64)"Lifetimebound", v10 + 6, &ptr, 0);
        ptr = (void *)&byte_22CD811;
        si128.m128i_i64[0] = 0;
        sub_A1F410(a1, (__int64)"Type", v10 + 24, (__int64)&ptr, 0);
        (*(void (__fastcall **)(__int64 *))(*a1 + 112))(a1);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v36);
        if ( v32 == v4 )
          return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
      }
      else if ( v32 == v4 )
      {
        return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
      }
      ++v4;
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
}

