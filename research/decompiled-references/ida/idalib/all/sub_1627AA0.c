__m128i *__fastcall sub_1627AA0(_QWORD *a1, const __m128i *a2, _DWORD *a3, __m128 *a4, _DWORD *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm0
  __int64 v13; // rbx
  __m128 *v14; // rbp
  __int64 v15; // rax
  __m128i *v16; // r13
  __m128i *v18; // rsi
  unsigned __int64 v19; // r10
  unsigned __int8 *v20; // rbx
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 *v28; // r10
  __int64 v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __m128 *v35; // r14
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // r12
  void *v39; // rdi
  __m128 *v40; // [rsp+10h] [rbp-158h] BYREF
  int *v41; // [rsp+18h] [rbp-150h]
  _DWORD *v42; // [rsp+20h] [rbp-148h]
  __m128 *v43; // [rsp+28h] [rbp-140h]
  int v44; // [rsp+34h] [rbp-134h] BYREF
  __int64 v45; // [rsp+38h] [rbp-130h] BYREF
  __m128 v46; // [rsp+40h] [rbp-128h] BYREF
  _DWORD *v47; // [rsp+50h] [rbp-118h]
  __m128i v48; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v49; // [rsp+78h] [rbp-F0h]
  _BYTE v50[16]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v52; // [rsp+C0h] [rbp-A8h]
  __int64 v53; // [rsp+C8h] [rbp-A0h]
  char v54; // [rsp+118h] [rbp-50h]
  unsigned int v55; // [rsp+120h] [rbp-48h]
  char v56; // [rsp+124h] [rbp-44h]

  v8 = (_QWORD *)sub_168B6C0(a1);
  sub_B06B40(&v48, (__int64)v8, a2, (__int64)a3, (__int64)a4, (__int64)a5);
  v9 = *a1;
  if ( (unsigned __int8)sub_1E534E0(*a1, a3, 0)
    || a4 && (unsigned __int8)sub_1E534E0(v9, a4, 0)
    || a5 && (unsigned __int8)sub_1E534E0(v9, a5, 0) )
  {
    return nullptr;
  }
  if ( (*a3 & 0x20000) != 0 || a4 && (a4->m128_i32[0] & 0x20000) != 0 || a5 && (*a5 & 0x20000) != 0 )
  {
LABEL_17:
    v15 = v8[294];
    v8[304] += 64LL;
    v16 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v16[4] && v15 )
      v8[294] = v16 + 4;
    else
      v16 = (__m128i *)sub_986170((__int64)(v8 + 294), 64, 64, 3, v10, v11);
    sub_B06B40(v16, (__int64)v8, a2, (__int64)a3, (__int64)a4, (__int64)a5);
  }
  else
  {
    v40 = a4;
    v44 = 0;
    v47 = a5;
    v12 = _mm_loadh_ps((const double *)&v40);
    v40 = &v46;
    v41 = &v44;
    v42 = a3;
    v43 = a4;
    v13 = 0;
    v46 = v12;
    while ( 1 )
    {
      v14 = (__m128 *)v40->m128_u64[v13];
      if ( v14 )
      {
        if ( !(unsigned __int8)sub_1614300(v9, &v48, v40->m128_u64[v13], v41, (unsigned int)v13, 1) )
          return nullptr;
        if ( !v44 )
          break;
      }
      if ( ++v13 == 3 )
      {
        a3 = v42;
        a4 = v43;
        goto LABEL_17;
      }
    }
    v40 = v14;
    v18 = (__m128i *)(v9 + 8);
    sub_168B9F0(v50, v9 + 8, v49, 3154, 0);
    v19 = (unsigned __int64)v40;
    if ( v54 )
    {
      v20 = v52;
      if ( !v52 )
      {
        v32 = v53;
        v33 = *(_DWORD *)(v53 + 14976);
        if ( v33 )
        {
          v34 = (unsigned int)(v33 - 1);
          v35 = v40;
          *(_DWORD *)(v53 + 14976) = v34;
          v20 = *(unsigned __int8 **)(v32 + 8 * v34 + 14848);
          v36 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v37 = *((_QWORD *)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v38 = v37 + (v36 << 6);
          if ( v37 != v38 )
          {
            do
            {
              while ( 1 )
              {
                v38 -= 64;
                v39 = *(void **)(v38 + 24);
                if ( v39 == (void *)(v38 + 40) )
                  break;
                operator delete(v39);
                if ( v37 == v38 )
                  goto LABEL_38;
              }
            }
            while ( v37 != v38 );
LABEL_38:
            v19 = (unsigned __int64)v35;
          }
          *((_DWORD *)v20 + 134) = 0;
        }
        else
        {
          v20 = (unsigned __int8 *)operator new(0x3A0u);
          *v20 = 0;
          *((_QWORD *)v20 + 12) = v20 + 112;
          *((_QWORD *)v20 + 16) = v20 + 144;
          *((_QWORD *)v20 + 20) = v20 + 176;
          *((_QWORD *)v20 + 24) = v20 + 208;
          *((_QWORD *)v20 + 28) = v20 + 240;
          *((_QWORD *)v20 + 32) = v20 + 272;
          *((_QWORD *)v20 + 36) = v20 + 304;
          *((_QWORD *)v20 + 40) = v20 + 336;
          *((_QWORD *)v20 + 44) = v20 + 368;
          *((_QWORD *)v20 + 48) = v20 + 400;
          *((_QWORD *)v20 + 52) = v20 + 432;
          v20[112] = 0;
          *((_QWORD *)v20 + 13) = 0;
          *((_QWORD *)v20 + 17) = 0;
          v20[144] = 0;
          *((_QWORD *)v20 + 21) = 0;
          v20[176] = 0;
          *((_QWORD *)v20 + 25) = 0;
          v20[208] = 0;
          *((_QWORD *)v20 + 29) = 0;
          v20[240] = 0;
          *((_QWORD *)v20 + 33) = 0;
          v20[272] = 0;
          *((_QWORD *)v20 + 37) = 0;
          v20[304] = 0;
          *((_QWORD *)v20 + 41) = 0;
          v20[336] = 0;
          *((_QWORD *)v20 + 45) = 0;
          v20[368] = 0;
          *((_QWORD *)v20 + 49) = 0;
          v20[400] = 0;
          *((_QWORD *)v20 + 53) = 0x800000000LL;
          v19 = (unsigned __int64)v40;
          *((_QWORD *)v20 + 66) = v20 + 544;
          *((_QWORD *)v20 + 67) = 0x600000000LL;
        }
        v52 = v20;
      }
      v20[*v20 + 1] = 14;
      v21 = v52;
      v22 = *v52;
      *v52 = v22 + 1;
      *(_QWORD *)&v21[8 * v22 + 16] = &v48;
    }
    else if ( v56 )
    {
      v23 = sub_168B9E0(v50);
      v28 = v40;
      v29 = v23;
      v30 = v51;
      if ( v51 )
      {
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
        v28 = v40;
      }
      v40 = v28;
      v45 = v30;
      v31 = sub_1587BC0(v29, &v45, v24, v25, v26, v27);
      v18 = &v48;
      sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v55 + 8), (__int64)&v48, 0xEu);
      v19 = (unsigned __int64)v40;
    }
    v16 = nullptr;
    v45 = sub_EEC8C0(v19, (__int64)v18, *(double *)v12.m128_u64);
    sub_1587DB0((__int64)v50, &v45);
    sub_15F7200(v50);
  }
  return v16;
}
