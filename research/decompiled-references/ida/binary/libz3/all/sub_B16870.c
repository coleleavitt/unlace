__int64 __fastcall sub_B16870(__int64 a1, char a2, char a3, unsigned int a4, unsigned int *a5)
{
  __int64 result; // rax
  unsigned int *v9; // r12
  unsigned int v10; // r14d
  unsigned int *v11; // r13
  unsigned int *v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // ecx
  unsigned int v17; // edx
  int v18; // edx
  unsigned int v19; // edi
  int v20; // esi
  unsigned int v21; // r8d
  int v22; // edi
  unsigned int v23; // eax
  unsigned __int64 v24; // xmm1_8
  unsigned int *v25; // r14
  int *v26; // r13
  int v27; // esi
  unsigned int v28; // eax
  __m128i v29; // xmm4
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int *v32; // r13
  int v33; // r14d
  int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // eax
  __int64 v39; // r14
  unsigned int v40; // ecx
  unsigned int v41; // edx
  unsigned __int64 v42; // xmm0_8
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned __int64 v45; // xmm0_8
  unsigned int v46; // eax
  __m128i v47; // xmm7
  unsigned int v48; // r14d
  unsigned int v49; // edi
  int v50; // eax
  int v51; // esi
  unsigned int v52; // edi
  int v53; // eax
  int v54; // esi
  unsigned int v55; // eax
  unsigned __int64 v57; // [rsp+0h] [rbp-128h]
  unsigned int v59; // [rsp+20h] [rbp-108h]
  unsigned int v60; // [rsp+24h] [rbp-104h]
  unsigned int v61; // [rsp+3Ch] [rbp-ECh] BYREF
  unsigned int *v62; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int *v63; // [rsp+48h] [rbp-E0h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-D0h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 v68; // [rsp+70h] [rbp-B8h] BYREF
  _DWORD v69[2]; // [rsp+78h] [rbp-B0h] BYREF
  _DWORD v70[2]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-A0h] BYREF
  _DWORD v72[4]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v73; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v74; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v75; // [rsp+B0h] [rbp-78h] BYREF
  int v76; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v77; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v78; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int v80; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v81; // [rsp+E0h] [rbp-48h] BYREF
  unsigned int v82; // [rsp+E8h] [rbp-40h]

  if ( a4 <= 1 && a3 != 1 )
    return (unsigned int)dword_1C7ED24;
  result = (unsigned int)dword_1C7ED20;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      return *a5;
    }
    else
    {
      ++*(_DWORD *)(a1 + 20);
      v9 = nullptr;
      v10 = 1;
      v59 = sub_B036D0(*(__int64 **)(a1 + 8));
      do
      {
        ++*(_DWORD *)(a1 + 20);
        v61 = sub_B036D0(*(__int64 **)(a1 + 8));
        v62 = v9;
        sub_B0E290(&v62, &v61);
        ++v10;
        v9 = v62;
      }
      while ( v10 < a4 );
      if ( a4 != 2 )
      {
        v11 = v62;
        v12 = &v62[a4 - 2];
        do
        {
          v13 = *v11;
          v14 = dword_1C7ED20;
          if ( dword_1C7ED24 != *v11 )
          {
            v14 = dword_1C7ED24;
            if ( v13 != dword_1C7ED20 )
              v14 = v13 ^ 1;
          }
          v64 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v11[1])).m128i_u64[0];
          sub_B0DE40(a1, &v64);
          ++v11;
        }
        while ( v12 != v11 );
      }
      v15 = 1;
      do
      {
        v16 = a5[v15 - 1];
        v17 = dword_1C7ED20;
        if ( dword_1C7ED24 != v16 )
        {
          v17 = dword_1C7ED24;
          if ( v16 != dword_1C7ED20 )
            v17 = v16 ^ 1;
        }
        v65 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v9[v15 - 1])).m128i_u64[0];
        sub_B0DE40(a1, &v65);
        v18 = dword_1C7ED20;
        v19 = a5[v15];
        v20 = dword_1C7ED20;
        if ( v19 != dword_1C7ED24 )
        {
          v20 = v19 ^ 1;
          if ( v19 == dword_1C7ED20 )
            v20 = dword_1C7ED24;
        }
        v21 = v9[v15 - 1];
        v22 = dword_1C7ED20;
        if ( v21 != dword_1C7ED24 )
        {
          v22 = v21 ^ 1;
          if ( v21 == dword_1C7ED20 )
            v22 = dword_1C7ED24;
        }
        if ( dword_1C7ED24 != v59 )
        {
          v18 = dword_1C7ED24;
          if ( v59 != dword_1C7ED20 )
            v18 = v59 ^ 1;
        }
        v72[1] = v22;
        v72[2] = v20;
        v72[0] = v18;
        sub_B0DC80(a1, v72);
        ++v15;
      }
      while ( (unsigned int)v15 < a4 );
      v60 = a4 - 1;
      if ( a3 )
      {
        v23 = dword_1C7ED20;
        if ( v59 != dword_1C7ED24 )
        {
          v23 = dword_1C7ED24;
          if ( v59 != dword_1C7ED20 )
            v23 = v59 ^ 1;
        }
        v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v9[a4 - 2])).m128i_u64[0];
        v74 = a5[a4 - 1];
        v73 = v24;
        sub_B0DC80(a1, &v73);
      }
      if ( a4 != 2 )
      {
        v25 = a5 + 1;
        v26 = (int *)(v9 + 1);
        do
        {
          v27 = *v26;
          v28 = dword_1C7ED20;
          if ( *v26 != dword_1C7ED24 )
          {
            v28 = dword_1C7ED24;
            if ( v27 != dword_1C7ED20 )
              v28 = v27 ^ 1;
          }
          v29 = _mm_cvtsi32_si128(*v25);
          v76 = *(v26 - 1);
          v75 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v29).m128i_u64[0];
          sub_B0DC80(a1, &v75);
          ++v25;
          ++v26;
        }
        while ( v25 != &a5[a4 - 1] );
      }
      v30 = *v9;
      v31 = dword_1C7ED20;
      if ( *v9 != dword_1C7ED24 )
      {
        v31 = dword_1C7ED24;
        if ( v30 != dword_1C7ED20 )
          v31 = v30 ^ 1;
      }
      v66 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(*a5)).m128i_u64[0];
      sub_B0DE40(a1, &v66);
      if ( a2 )
      {
        v32 = nullptr;
        v33 = 0;
        do
        {
          ++*(_DWORD *)(a1 + 20);
          v34 = sub_B036D0(*(__int64 **)(a1 + 8));
          v63 = v32;
          LODWORD(v81) = v34;
          sub_B0E290(&v63, (unsigned int *)&v81);
          ++v33;
          v32 = v63;
        }
        while ( v33 != v60 );
        v35 = *v63;
        v36 = dword_1C7ED20;
        if ( dword_1C7ED24 != *v63 )
        {
          v36 = dword_1C7ED24;
          if ( v35 != dword_1C7ED20 )
            v36 = v35 ^ 1;
        }
        v67 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(*v9)).m128i_u64[0];
        sub_B0DE40(a1, &v67);
        v37 = *v32;
        v38 = dword_1C7ED20;
        if ( dword_1C7ED24 != *v32 )
        {
          v38 = dword_1C7ED24;
          if ( v37 != dword_1C7ED20 )
            v38 = v37 ^ 1;
        }
        v68 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(a5[1])).m128i_u64[0];
        sub_B0DE40(a1, &v68);
        v39 = 1;
        if ( a4 != 2 )
        {
          do
          {
            v40 = v32[v39];
            v41 = dword_1C7ED20;
            if ( dword_1C7ED24 != v40 )
            {
              v41 = dword_1C7ED24;
              if ( v40 != dword_1C7ED20 )
                v41 = v40 ^ 1;
            }
            v42 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v41), _mm_cvtsi32_si128(v9[v39])).m128i_u64[0];
            v78 = v32[v39 - 1];
            v77 = v42;
            sub_B0DC80(a1, &v77);
            v43 = v32[v39];
            v44 = dword_1C7ED20;
            if ( dword_1C7ED24 != v43 )
            {
              v44 = dword_1C7ED24;
              if ( v43 != dword_1C7ED20 )
                v44 = v43 ^ 1;
            }
            v45 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v44), _mm_cvtsi32_si128(a5[v39 + 1])).m128i_u64[0];
            v80 = v32[v39 - 1];
            v79 = v45;
            sub_B0DC80(a1, &v79);
            ++v39;
          }
          while ( v39 != v60 );
        }
        if ( a3 )
        {
          ++*(_DWORD *)(a1 + 20);
          v46 = sub_B036D0(*(__int64 **)(a1 + 8));
          v47 = _mm_cvtsi32_si128(v46);
          v48 = v46;
          v49 = a5[v60];
          v50 = dword_1C7ED20;
          v57 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), v47).m128i_u64[0];
          v51 = dword_1C7ED20;
          if ( dword_1C7ED24 != v49 )
          {
            v51 = v49 ^ 1;
            if ( v49 == dword_1C7ED20 )
              v51 = dword_1C7ED24;
          }
          if ( dword_1C7ED24 != v48 )
          {
            v50 = dword_1C7ED24;
            if ( v48 != dword_1C7ED20 )
              v50 = v48 ^ 1;
          }
          v69[1] = v51;
          v69[0] = v50;
          sub_B0DE40(a1, v69);
          v52 = v9[a4 - 2];
          v53 = dword_1C7ED20;
          v54 = dword_1C7ED20;
          if ( dword_1C7ED24 != v52 )
          {
            v54 = v52 ^ 1;
            if ( v52 == dword_1C7ED20 )
              v54 = dword_1C7ED24;
          }
          if ( dword_1C7ED24 != v48 )
          {
            v53 = dword_1C7ED24;
            if ( v48 != dword_1C7ED20 )
              v53 = v48 ^ 1;
          }
          v70[1] = v54;
          v70[0] = v53;
          sub_B0DE40(a1, v70);
          v55 = *(v32 - 1) - 1;
          v81 = v57;
          v82 = v32[v55];
          sub_B0DC80(a1, &v81);
        }
        else
        {
          v71 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(v32[*(v32 - 1) - 1])).m128i_u64[0];
          sub_B0DE40(a1, &v71);
        }
        sub_186B220(v32 - 2);
      }
      sub_186B220(v9 - 2);
      return v59;
    }
  }
  return result;
}

