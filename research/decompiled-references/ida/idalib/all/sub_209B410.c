__int64 __fastcall sub_209B410(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __m128 si128; // xmm0
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD); // rbp
  size_t v8; // rax
  __int64 v9; // rax
  size_t v10; // rdx
  size_t v11; // r13
  __int64 v12; // r12
  size_t v13; // rax
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // r12d
  __int64 *v17; // rbx
  size_t v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rsi
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r10
  char v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rbp
  char *v36; // rax
  _QWORD *v37; // rdi
  unsigned int v39; // eax
  int v40; // edx
  unsigned int v41; // eax
  const void *v42; // [rsp+0h] [rbp-F8h]
  size_t v43; // [rsp+8h] [rbp-F0h]
  __int64 v45; // [rsp+28h] [rbp-D0h]
  __int64 v46; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 v47; // [rsp+3Eh] [rbp-BAh]
  char v48; // [rsp+3Fh] [rbp-B9h]
  __int64 v49; // [rsp+40h] [rbp-B8h]
  unsigned int v50; // [rsp+48h] [rbp-B0h]
  unsigned int v51; // [rsp+4Ch] [rbp-ACh]
  __int64 *v52; // [rsp+50h] [rbp-A8h]
  void **p_ptr; // [rsp+58h] [rbp-A0h]
  __int64 v54; // [rsp+60h] [rbp-98h]
  __int64 v55; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  __m128i v57; // [rsp+78h] [rbp-80h]
  __int64 v58[2]; // [rsp+90h] [rbp-68h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-48h]

  v47 = sub_208F2E0(a2);
  if ( v47 )
  {
    return 0;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v52 = *(__int64 **)(a2 + 40);
    v3 = *(_QWORD *)(v2 + 16);
    v4 = *(_QWORD *)(v2 + 8);
    if ( v4 != v3 )
    {
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(v3 - 8) + 208LL;
      if ( v4 != v3 - 8 )
      {
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(v3 - 16) + 208LL;
        if ( v4 != v3 - 16 )
        {
          *(_QWORD *)(a1 + 208) = *(_QWORD *)(v3 - 24) + 208LL;
          if ( v4 != v3 - 24 )
          {
            *(_QWORD *)(a1 + 216) = *(_QWORD *)(v3 - 32) + 208LL;
            if ( v4 != v3 - 32 )
            {
              *(_QWORD *)(a1 + 224) = *(_QWORD *)(v3 - 40) + 208LL;
              if ( v4 != v3 - 40 )
                *(_QWORD *)(a1 + 232) = *(_QWORD *)(v3 - 48) + 208LL;
            }
          }
        }
      }
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D60);
    ptr = nullptr;
    v57 = (__m128i)si128;
    v6 = sub_20922C0(*v52);
    v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 24LL);
    v8 = j__strlen("size-info");
    v48 = v7(v6, "size-info", v8);
    if ( v48 )
    {
      v51 = sub_20986D0((__int64)v52, (__int64)&ptr);
      v50 = sub_208D420(a2);
    }
    else
    {
      v50 = 0;
    }
    v9 = sub_20CC3B0(a2);
    v11 = v10;
    v12 = v9;
    v43 = v10;
    v42 = (const void *)v9;
    v13 = j__strlen("OptFunction");
    v14 = sub_224A990("OptFunction", v13, v12, v11);
    v15 = *(_DWORD *)(a1 + 56);
    v54 = v14;
    if ( v15 )
    {
      v16 = 0;
      v49 = a1 + 240;
      p_ptr = &ptr;
      do
      {
        while ( 1 )
        {
          v58[0] = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v16);
          v17 = (__int64 *)v58[0];
          v18 = j__strlen("RunPass");
          v45 = sub_224AF30("RunPass", v18, sub_20944E0, v58, v19, v20);
          sub_2096B60(a1 + 32, (__int64)v17, 0, 3, v42, v43, *(double *)si128.m128_u64);
          if ( dword_2CFD4D8 > 3 )
            sub_2099E50(a1 + 32, v17, *(double *)si128.m128_u64);
          sub_209AA40(a1 + 32, (__int64)v17);
          sub_2233820(v58);
          v60 = 0;
          *(_QWORD *)&v46 = a2;
          v58[0] = (__int64)&off_2BE61D0;
          si128 = _mm_loadh_ps(&v46);
          v59 = (__m128i)si128;
          v21 = sub_20C1010(v17);
          if ( v21 )
          {
            *(_QWORD *)&v46 = v21;
            sub_224E010(v21);
            v22 = (__int64 *)a2;
            v23 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v17 + 128))(v17, a2);
            v27 = *(_QWORD *)&v46;
            v28 = v23;
            if ( v48 )
            {
              v41 = sub_208D420(a2);
              v27 = *(_QWORD *)&v46;
              if ( v50 != v41 )
              {
                v22 = v52;
                v55 = *(_QWORD *)&v46;
                LODWORD(v46) = v41;
                sub_2098940(v17, (__int64)v52, v41 - (unsigned __int64)v50, v51, (__int64)p_ptr, a2);
                v24 = v51 - v50;
                v27 = v55;
                v25 = (unsigned int)(LODWORD(v46) + v24);
                v50 = LODWORD(v46);
                v51 = LODWORD(v46) + v24;
              }
            }
            sub_224E0F0(v27, v22, v24, v25, v26);
          }
          else
          {
            v28 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v17 + 128))(v17, a2);
            if ( v48 )
            {
              v39 = sub_208D420(a2);
              if ( v39 != v50 )
              {
                LODWORD(v46) = v39;
                sub_2098940(v17, (__int64)v52, v39 - (unsigned __int64)v50, v51, (__int64)p_ptr, a2);
                v40 = v51 - v50;
                v50 = LODWORD(v46);
                v51 = LODWORD(v46) + v40;
              }
            }
          }
          v58[0] = (__int64)&off_2BE61D0;
          sub_22338A0(v58);
          v47 |= v28;
          if ( v28 )
            sub_2096B60(a1 + 32, (__int64)v17, 1, 3, v42, v43, *(double *)si128.m128_u64);
          if ( dword_2CFD4D8 > 3 )
          {
            sub_2099D90(a1 + 32, v17, *(double *)si128.m128_u64);
            if ( dword_2CFD4D8 > 3 )
              sub_2099CC0(a1 + 32, v17, *(double *)si128.m128_u64);
          }
          if ( v28 )
            sub_209B040(a1 + 32, (__int64)v17, *(double *)si128.m128_u64);
          v58[0] = v17[2];
          *sub_209A420(v49, v58, v29, v30, v31, v32) = (__int64)v17;
          sub_2097AE0(a1 + 32, (__int64)v17, v42, v43, 3, *(double *)si128.m128_u64);
          if ( !v45 )
            break;
          sub_224D6D0(v45);
          if ( ++v16 >= *(_DWORD *)(a1 + 56) )
            goto LABEL_27;
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 56) );
    }
LABEL_27:
    if ( v54 )
      sub_224D6D0(v54);
    v33 = ptr;
    if ( v57.m128i_i32[1] && v57.m128i_i32[0] )
    {
      v34 = 0;
      v35 = 8LL * (unsigned int)(v57.m128i_i32[0] - 1) + 8;
      v36 = (char *)ptr;
      do
      {
        v37 = *(_QWORD **)&v36[v34];
        if ( v37 != (_QWORD *)-8LL && v37 )
        {
          operator delete(v37, *v37 + 17LL, 8);
          v36 = (char *)ptr;
        }
        v34 += 8;
      }
      while ( v35 != v34 );
      v33 = v36;
    }
    free(v33);
  }
  return v47;
}
