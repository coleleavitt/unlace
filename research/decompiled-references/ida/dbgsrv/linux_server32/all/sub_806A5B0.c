/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806A5B0
// Address: 0x0806A5B0

//----- (0806A5B0) --------------------------------------------------------
int __cdecl sub_806A5B0(_WORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __m128i v3; // xmm1
  __m128i v4; // xmm3
  int v5; // eax
  int v6; // edx
  bool v7; // al
  int v8; // ecx
  int v9; // edx
  __m128i v10; // xmm0
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int32 v14; // ecx
  __int32 v15; // ecx
  int v16; // eax
  __m128i v17; // xmm1
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  __m128i v21; // xmm0
  unsigned __int16 v22; // dx
  int v23; // ebx
  int v24; // eax
  __m128i v25; // xmm2
  bool v26; // zf
  char v27; // al
  __int32 v28; // ecx
  __int16 v29; // ax
  _DWORD *v30; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  signed int v37; // eax
  __int32 v38; // ecx
  unsigned __int64 v39; // rax
  bool v40; // cf
  unsigned __int64 v41; // rax
  __m128i v42; // xmm0
  int v43; // ebx
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // eax
  int v47; // edx
  unsigned __int64 v48; // rax
  int v49; // ebx
  int v50; // ecx
  unsigned __int64 v51; // [esp+0h] [ebp-B8h]
  int v52; // [esp+Ch] [ebp-ACh]
  __m128i v53; // [esp+10h] [ebp-A8h] BYREF
  __m128i v54; // [esp+20h] [ebp-98h]
  __m128i v55; // [esp+30h] [ebp-88h]
  int v56; // [esp+40h] [ebp-78h]
  int v57; // [esp+44h] [ebp-74h]
  int v58; // [esp+48h] [ebp-70h]
  unsigned __int8 v59; // [esp+4Fh] [ebp-69h]
  _BYTE v60[4]; // [esp+5Ch] [ebp-5Ch] BYREF
  int v61; // [esp+60h] [ebp-58h]
  __int32 v62; // [esp+7Ch] [ebp-3Ch]
  unsigned int v63; // [esp+84h] [ebp-34h]
  unsigned int v64; // [esp+9Ch] [ebp-1Ch]

  v64 = __readgsdword(0x14u);
  v59 = *((_BYTE *)a1 + 388);
  if ( (unsigned __int8)(v59 - 1) <= 1u || (*((unsigned __int8 (__cdecl **)(_WORD *, int, _DWORD))a1 + 95))(a1, 1, v59) )
  {
    v55.m128i_i8[0] = *((_BYTE *)a1 + 389);
    if ( (unsigned __int8)(v55.m128i_i8[0] - 1) <= 1u
      || (*((unsigned __int8 (__cdecl **)(_WORD *, int, _DWORD))a1 + 95))(a1, 3, v55.m128i_u8[0]) )
    {
      v1 = sub_80CD730(*((_DWORD *)a1 + 90), 0, 1);
      v3 = _mm_loadl_epi64((const __m128i *)(a1 + 182));
      v4 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(v2)), v3);
      v53.m128i_i64[0] = v4.m128i_i64[0];
      v58 = _mm_cvtsi128_si32(v4);
      v57 = _mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u));
      v54 = _mm_add_epi64(v3, _mm_load_si128((const __m128i *)&xmmword_80DE150));
      v5 = sub_80CD730(*((_DWORD *)a1 + 90), v54.m128i_i64[0], 0);
      if ( (v6 & v5) == 0xFFFFFFFF )
        goto LABEL_40;
      *((_BYTE *)a1 + 476) = v55.m128i_i8[0] == 2;
      v7 = v59 == 2;
      *((_BYTE *)a1 + 477) = v59 == 2;
      *((_BYTE *)a1 + 478) = v7;
      if ( sub_806A1B0((int)a1, a1 + 200, 2, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 201, 2, 1) < 0 )
        goto LABEL_40;
      v59 = sub_806A380((int)a1);
      if ( !v59 )
        goto LABEL_40;
      if ( *((_BYTE *)a1 + 477) )
      {
        v55.m128i_i32[0] = 56;
        v8 = 64;
        v9 = 16;
        v56 = 16;
        v10 = _mm_cvtsi32_si128(8u);
        v11 = 24;
        v12 = 24;
        v54.m128i_i32[0] = 64;
        v52 = 24;
      }
      else
      {
        v8 = 52;
        v55.m128i_i32[0] = 32;
        v9 = 8;
        v10 = _mm_cvtsi32_si128(4u);
        v56 = 8;
        v11 = 12;
        v12 = 16;
        v54.m128i_i32[0] = 40;
        v52 = 12;
      }
      *((_DWORD *)a1 + 76) = v12;
      *((_DWORD *)a1 + 80) = v12;
      v13 = v56;
      *((_DWORD *)a1 + 73) = v8;
      v14 = v55.m128i_i32[0];
      *((_DWORD *)a1 + 81) = v13;
      *((_DWORD *)a1 + 74) = v14;
      v15 = v54.m128i_i32[0];
      *((_DWORD *)a1 + 82) = v52;
      *((_DWORD *)a1 + 75) = v15;
      *((_DWORD *)a1 + 77) = v9;
      *((_DWORD *)a1 + 78) = v9;
      *((_DWORD *)a1 + 79) = v11;
      *(__m128i *)(a1 + 166) = _mm_shuffle_epi32(v10, 0);
      if ( sub_806A1B0((int)a1, a1 + 202, 4, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 204, *((_DWORD *)a1 + 83), 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 208, *((_DWORD *)a1 + 84), 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 212, *((_DWORD *)a1 + 84), 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 216, 4, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 218, 2, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 219, 2, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 220, 2, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 221, 2, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 222, 2, 1) < 0 )
        goto LABEL_40;
      if ( sub_806A1B0((int)a1, a1 + 223, 2, 1) < 0 )
        goto LABEL_40;
      v16 = (unsigned __int16)a1[218];
      if ( v16 != *((_DWORD *)a1 + 73)
        && !(*((unsigned __int8 (__cdecl **)(_WORD *, int, int, _DWORD))a1 + 95))(a1, 2, v16, *((_DWORD *)a1 + 73)) )
      {
        goto LABEL_40;
      }
      v17 = _mm_loadl_epi64((const __m128i *)a1 + 26);
      v18 = (unsigned __int16)a1[220];
      v19 = _mm_cvtsi128_si32(v17);
      v55.m128i_i8[0] = (_WORD)v18 == 0;
      v20 = _mm_cvtsi128_si32(_mm_srli_epi64(v17, 0x20u));
      if ( ((_WORD)v18 == 0) == ((v20 | v19) == 0) )
      {
        if ( v20 | v19 )
        {
          v32 = (unsigned __int16)a1[219];
          if ( v32 != *((_DWORD *)a1 + 74) )
          {
            if ( !(*((unsigned __int8 (__cdecl **)(_WORD *, int, int, _DWORD))a1 + 95))(
                    a1,
                    4,
                    v32,
                    *((_DWORD *)a1 + 74)) )
              goto LABEL_40;
            v33 = *((_DWORD *)a1 + 74);
            if ( (unsigned __int16)a1[219] < v33 )
              goto LABEL_40;
            a1[219] = v33;
          }
        }
      }
      else
      {
        if ( !(*((unsigned __int8 (__cdecl **)(_WORD *, int, int, __int32, __int32))a1 + 95))(
                a1,
                5,
                v18,
                v17.m128i_i32[0],
                v17.m128i_i32[1]) )
          goto LABEL_40;
        *((_DWORD *)a1 + 104) = 0;
        *((_DWORD *)a1 + 105) = 0;
        a1[220] = 0;
      }
      v21 = _mm_loadl_epi64((const __m128i *)(a1 + 212));
      v22 = a1[222];
      v23 = _mm_cvtsi128_si32(v21);
      v24 = _mm_cvtsi128_si32(_mm_srli_epi64(v21, 0x20u));
      if ( !v22 && v24 | v23 )
      {
        v55 = _mm_add_epi64(v21, _mm_loadl_epi64((const __m128i *)(a1 + 182)));
        v46 = sub_80CD730(*((_DWORD *)a1 + 90), v55.m128i_i64[0], 0);
        if ( v47 != -1 || v46 != -1 )
        {
          v54.m128i_i8[0] = sub_806A490((int *)a1, (int)v60);
          if ( v54.m128i_i8[0] )
          {
            if ( !v61 )
            {
              v21 = _mm_loadl_epi64((const __m128i *)(a1 + 212));
              v55.m128i_i32[0] = v62;
              v23 = _mm_cvtsi128_si32(v21);
              v24 = _mm_cvtsi128_si32(_mm_srli_epi64(v21, 0x20u));
LABEL_30:
              v25.m128i_i64[0] = v21.m128i_i64[0];
              v51 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v21, 0x20u)), _mm_cvtsi128_si32(v21));
              v26 = v55.m128i_i32[0] == 0;
              *((_DWORD *)a1 + 112) = v55.m128i_i32[0];
              if ( v26 == ((v24 | v23) == 0) )
              {
                v36 = (unsigned __int16)a1[221];
                if ( v51 )
                {
                  if ( v36 == *((_DWORD *)a1 + 75) )
                  {
                    v38 = v55.m128i_i32[0];
                    v37 = (unsigned __int16)a1[221];
                  }
                  else
                  {
                    if ( !(*((unsigned __int8 (__cdecl **)(_WORD *, int, int, _DWORD))a1 + 95))(
                            a1,
                            6,
                            v36,
                            *((_DWORD *)a1 + 75))
                      || (v37 = (unsigned __int16)a1[221], v37 < *((_DWORD *)a1 + 75)) )
                    {
LABEL_33:
                      *((_DWORD *)a1 + 106) = 0;
                      *((_DWORD *)a1 + 107) = 0;
                      a1[222] = 0;
                      *((_DWORD *)a1 + 112) = 0;
                      goto LABEL_34;
                    }
                    v25 = _mm_loadl_epi64((const __m128i *)(a1 + 212));
                    v38 = *((_DWORD *)a1 + 112);
                    v55.m128i_i32[0] = v38;
                    v51 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v25, 0x20u)), _mm_cvtsi128_si32(v25));
                  }
                  v39 = (unsigned int)v38 * (unsigned __int64)(unsigned int)v37;
                  v40 = __CFADD__(v51, v39);
                  v41 = v51 + v39;
                  v42 = _mm_sub_epi64(
                          _mm_loadl_epi64((const __m128i *)(a1 + 186)),
                          _mm_loadl_epi64((const __m128i *)(a1 + 182)));
                  v43 = _mm_cvtsi128_si32(v42);
                  v56 = v40;
                  v44 = _mm_cvtsi128_si32(_mm_srli_epi64(v42, 0x20u));
                  if ( !v40 && __PAIR64__(v44, v43) >= v41 )
                  {
                    v28 = v51;
                    if ( v51 )
                    {
                      v45 = (unsigned __int16)a1[223];
                      if ( (_WORD)v45 == 0xFFFF && v54.m128i_i8[0] )
                      {
                        v45 = v63;
                        if ( v63 )
                        {
                          *((_DWORD *)a1 + 113) = v63;
                        }
                        else
                        {
                          *((_DWORD *)a1 + 113) = 0xFFFF;
                          v45 = 0xFFFF;
                        }
                      }
                      else
                      {
                        *((_DWORD *)a1 + 113) = v45;
                        if ( !v45 )
                          goto LABEL_34;
                      }
                      v28 = v55.m128i_i32[0];
                      if ( v45 >= v55.m128i_i32[0] )
                      {
                        if ( !(*((unsigned __int8 (__cdecl **)(_WORD *, int, unsigned int, __int32))a1 + 95))(
                                a1,
                                17,
                                v45,
                                v55.m128i_i32[0]) )
                          goto LABEL_40;
                        *((_DWORD *)a1 + 113) = 0;
                      }
                    }
LABEL_34:
                    if ( !*((_QWORD *)a1 + 52)
                      || a1[200] != 1
                      || (*((unsigned __int8 (__cdecl **)(_WORD *, int, __int32, __int32))a1 + 95))(a1, 18, v28, v28) )
                    {
                      v29 = a1[201];
                      if ( v29 == 40 || v29 == 183 )
                      {
                        v34 = *((_DWORD *)a1 + 117);
                        if ( v34 )
                          (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v34 + 4))(*((_DWORD *)a1 + 117));
                        v35 = operator new(0x40u);
                        *(_DWORD *)(v35 + 8) = 0;
                        *(_DWORD *)v35 = &off_811B8D4;
                        *(_DWORD *)(v35 + 16) = v35 + 8;
                        *(_DWORD *)(v35 + 20) = v35 + 8;
                        *(_DWORD *)(v35 + 40) = v35 + 32;
                        *(_DWORD *)(v35 + 44) = v35 + 32;
                        *(_DWORD *)(v35 + 12) = 0;
                        *(_DWORD *)(v35 + 24) = 0;
                        *(_DWORD *)(v35 + 32) = 0;
                        *(_DWORD *)(v35 + 36) = 0;
                        *(_DWORD *)(v35 + 48) = 0;
                        *(_DWORD *)(v35 + 52) = 0;
                        *(_DWORD *)(v35 + 56) = 0;
                        *(_WORD *)(v35 + 60) = 0;
                        *(_BYTE *)(v35 + 62) = 0;
                        *((_DWORD *)a1 + 117) = v35;
                      }
                      else
                      {
                        v30 = (_DWORD *)operator new(4u);
                        *((_DWORD *)a1 + 117) = v30;
                        *v30 = &off_811B894;
                      }
                      goto LABEL_41;
                    }
LABEL_40:
                    v59 = 0;
LABEL_41:
                    v55 = _mm_add_epi64(_mm_load_si128(&v53), _mm_loadl_epi64((const __m128i *)(a1 + 182)));
                    sub_80CD730(*((_DWORD *)a1 + 90), v55.m128i_i64[0], 0);
                    goto LABEL_42;
                  }
                }
                else
                {
                  v42 = _mm_sub_epi64(
                          _mm_loadl_epi64((const __m128i *)(a1 + 186)),
                          _mm_loadl_epi64((const __m128i *)(a1 + 182)));
                  v48 = (unsigned __int16)v36 * (unsigned __int64)v55.m128i_u32[0];
                  v49 = _mm_cvtsi128_si32(v42);
                  v50 = _mm_cvtsi128_si32(_mm_srli_epi64(v42, 0x20u));
                  v40 = __PAIR64__(v50, v49) < v48;
                  v28 = (__PAIR64__(v50, v49) - v48) >> 32;
                  if ( !v40 )
                    goto LABEL_34;
                }
                v27 = (*((int (__cdecl **)(_WORD *, int, __int32, __int32, __int32, __int32, __int32))a1 + 95))(
                        a1,
                        7,
                        v55.m128i_i32[0],
                        v25.m128i_i32[0],
                        v25.m128i_i32[1],
                        v42.m128i_i32[0],
                        v42.m128i_i32[1]);
              }
              else
              {
                v54 = _mm_sub_epi64(
                        _mm_loadl_epi64((const __m128i *)(a1 + 186)),
                        _mm_loadl_epi64((const __m128i *)(a1 + 182)));
                v27 = (*((int (__cdecl **)(_WORD *, int, __int32, __int32, __int32, __int32, __int32))a1 + 95))(
                        a1,
                        7,
                        v55.m128i_i32[0],
                        v21.m128i_i32[0],
                        v21.m128i_i32[1],
                        v54.m128i_i32[0],
                        v54.m128i_i32[1]);
              }
              if ( !v27 )
                goto LABEL_40;
              goto LABEL_33;
            }
          }
        }
        v21 = _mm_loadl_epi64((const __m128i *)(a1 + 212));
        v22 = a1[222];
        v23 = _mm_cvtsi128_si32(v21);
        v24 = _mm_cvtsi128_si32(_mm_srli_epi64(v21, 0x20u));
      }
      v54.m128i_i8[0] = 0;
      v55.m128i_i32[0] = v22;
      goto LABEL_30;
    }
  }
  v59 = 0;
LABEL_42:
  if ( v64 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v59;
}
// 806A64A: variable 'v2' is possibly undefined
// 806A6B1: variable 'v6' is possibly undefined
// 806AB03: variable 'v28' is possibly undefined
// 806AE3F: variable 'v47' is possibly undefined
// 80DE150: using guessed type __int128 xmmword_80DE150;
// 811B894: using guessed type int (*off_811B894)();
// 811B8D4: using guessed type int (__cdecl *off_811B8D4)(int);
