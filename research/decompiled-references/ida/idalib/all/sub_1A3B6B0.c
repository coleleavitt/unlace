__int64 __fastcall sub_1A3B6B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  signed __int64 v4; // r12
  unsigned __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  bool v10; // zf
  int v11; // eax
  _BYTE *v12; // rax
  __int64 *v13; // r8
  _BYTE *v14; // r12
  _BYTE *v15; // r15
  __int64 *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rsi
  __int64 *v21; // rax
  size_t v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r13
  void *v31; // rdi
  __m128i v32; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v33; // [rsp+10h] [rbp-58h]
  __int64 *v34; // [rsp+18h] [rbp-50h]
  __int64 v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+28h] [rbp-40h]

  v2 = a1;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 24) )
    sub_1747DA0((void **)(a1 + 16), (char **)(a2 + 16));
  v3 = 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 52) = *(_QWORD *)(a2 + 52);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_BYTE *)(a1 + 61) = *(_BYTE *)(a2 + 61);
  v4 = *(_QWORD *)(a2 + 72) - *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
  if ( v5 )
  {
    if ( v5 > 0xAAAAAAAAAAAAAAALL )
      std::__throw_bad_alloc();
    v3 = operator new(v4);
  }
  v32.m128i_i64[0] = v3;
  v6 = _mm_loadl_epi64(&v32);
  *(_QWORD *)(a1 + 80) = v3 + v4;
  *(__m128i *)(a1 + 64) = _mm_unpacklo_epi64(v6, v6);
  result = *(_QWORD *)(a2 + 72);
  v8 = *(__int64 **)(a2 + 64);
  v35 = result;
  if ( (__int64 *)result != v8 )
  {
    v36 = a1;
    do
    {
      *(_OWORD *)v3 = 0;
      result = *((unsigned int *)v8 + 4);
      v9 = v8[1];
      v10 = *v8 == 0;
      *(_DWORD *)(v3 + 16) = result;
      *(_QWORD *)(v3 + 8) = v9;
      if ( !v10 )
      {
        v11 = *(_DWORD *)(v9 + 14976);
        if ( v11 )
        {
          v27 = (unsigned int)(v11 - 1);
          *(_DWORD *)(v9 + 14976) = v27;
          v14 = *(_BYTE **)(v9 + 8 * v27 + 14848);
          v28 = *((unsigned int *)v14 + 134);
          v29 = *((_QWORD *)v14 + 66);
          *v14 = 0;
          *((_DWORD *)v14 + 106) = 0;
          v30 = v29 + (v28 << 6);
          while ( v29 != v30 )
          {
            while ( 1 )
            {
              v30 -= 64;
              v31 = *(void **)(v30 + 24);
              if ( v31 == (void *)(v30 + 40) )
                break;
              operator delete(v31);
              if ( v29 == v30 )
                goto LABEL_39;
            }
          }
LABEL_39:
          v13 = (__int64 *)(v14 + 112);
          *((_DWORD *)v14 + 134) = 0;
          v32.m128i_i64[0] = (__int64)(v14 + 432);
        }
        else
        {
          v12 = (_BYTE *)operator new(0x3A0u);
          v13 = (__int64 *)(v12 + 112);
          v14 = v12;
          *v12 = 0;
          v12 += 144;
          *((_QWORD *)v12 - 6) = v13;
          *((_QWORD *)v12 - 5) = 0;
          *(v12 - 32) = 0;
          *((_QWORD *)v14 + 16) = v12;
          *((_QWORD *)v14 + 20) = v14 + 176;
          *((_QWORD *)v14 + 24) = v14 + 208;
          *((_QWORD *)v14 + 28) = v14 + 240;
          *((_QWORD *)v14 + 32) = v14 + 272;
          *((_QWORD *)v14 + 36) = v14 + 304;
          *((_QWORD *)v14 + 40) = v14 + 336;
          *((_QWORD *)v14 + 44) = v14 + 368;
          *((_QWORD *)v14 + 48) = v14 + 400;
          v32.m128i_i64[0] = (__int64)(v14 + 432);
          *((_QWORD *)v14 + 17) = 0;
          v14[144] = 0;
          *((_QWORD *)v14 + 21) = 0;
          v14[176] = 0;
          *((_QWORD *)v14 + 25) = 0;
          v14[208] = 0;
          *((_QWORD *)v14 + 29) = 0;
          v14[240] = 0;
          *((_QWORD *)v14 + 33) = 0;
          v14[272] = 0;
          *((_QWORD *)v14 + 37) = 0;
          v14[304] = 0;
          *((_QWORD *)v14 + 41) = 0;
          v14[336] = 0;
          *((_QWORD *)v14 + 45) = 0;
          v14[368] = 0;
          *((_QWORD *)v14 + 49) = 0;
          v14[400] = 0;
          *((_QWORD *)v14 + 52) = v14 + 432;
          *((_QWORD *)v14 + 53) = 0x800000000LL;
          *((_QWORD *)v14 + 66) = v14 + 544;
          *((_QWORD *)v14 + 67) = 0x600000000LL;
        }
        *(_QWORD *)v3 = v14;
        v15 = (_BYTE *)*v8;
        v16 = v13;
        v17 = *v8 + 96;
        *v14 = *(_BYTE *)*v8;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        v14[4] = v15[4];
        v14[5] = v15[5];
        v14[6] = v15[6];
        v14[7] = v15[7];
        v14[8] = v15[8];
        v14[9] = v15[9];
        v14[10] = v15[10];
        *((_QWORD *)v14 + 2) = *((_QWORD *)v15 + 2);
        *((_QWORD *)v14 + 3) = *((_QWORD *)v15 + 3);
        *((_QWORD *)v14 + 4) = *((_QWORD *)v15 + 4);
        *((_QWORD *)v14 + 5) = *((_QWORD *)v15 + 5);
        v18 = *((_QWORD *)v15 + 6);
        v32.m128i_i64[1] = v3;
        *((_QWORD *)v14 + 6) = v18;
        v19 = *((_QWORD *)v15 + 7);
        v33 = v8;
        *((_QWORD *)v14 + 7) = v19;
        *((_QWORD *)v14 + 8) = *((_QWORD *)v15 + 8);
        *((_QWORD *)v14 + 9) = *((_QWORD *)v15 + 9);
        *((_QWORD *)v14 + 10) = *((_QWORD *)v15 + 10);
        *((_QWORD *)v14 + 11) = *((_QWORD *)v15 + 11);
        do
        {
          if ( (__int64 *)v17 != v16 - 2 )
          {
            v21 = (__int64 *)*(v16 - 2);
            v22 = *(_QWORD *)(v17 + 8);
            if ( v21 == v16 )
              v23 = 15;
            else
              v23 = *v16;
            if ( v22 > v23 )
            {
              if ( (v22 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v24 = 2 * v23;
              if ( v22 < 2 * v23 )
              {
                v25 = v24 + 1;
                if ( (v23 & 0x4000000000000000LL) != 0 )
                {
                  v25 = 0x8000000000000000LL;
                  v24 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v25 = v22 + 1;
                v24 = *(_QWORD *)(v17 + 8);
              }
              v21 = (__int64 *)operator new(v25);
              v26 = (__int64 *)*(v16 - 2);
              if ( v26 != v16 )
              {
                v34 = v21;
                operator delete(v26);
                v21 = v34;
              }
              *(v16 - 2) = (__int64)v21;
              *v16 = v24;
            }
            if ( v22 )
            {
              v20 = *(_BYTE **)v17;
              if ( v22 == 1 )
                *(_BYTE *)v21 = *v20;
              else
                memcpy(v21, v20, v22);
              v21 = (__int64 *)*(v16 - 2);
            }
            *(v16 - 1) = v22;
            *((_BYTE *)v21 + v22) = 0;
          }
          v17 += 32;
          v16 += 4;
        }
        while ( v16 != (__int64 *)v32.m128i_i64[0] );
        v3 = v32.m128i_i64[1];
        v8 = v33;
        sub_E32260((__int64 *)v14 + 52, (__int64 *)v15 + 52);
        result = sub_9EED30((__int64)(v14 + 528), (__int64 *)v15 + 66);
      }
      v3 += 24;
      v8 += 3;
    }
    while ( (__int64 *)v35 != v8 );
    v2 = v36;
  }
  *(_QWORD *)(v2 + 72) = v3;
  return result;
}
