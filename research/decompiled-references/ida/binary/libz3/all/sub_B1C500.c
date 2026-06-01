void __fastcall sub_B1C500(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        int *a6,
        unsigned int **a7)
{
  __int64 v7; // r11
  __int64 v9; // r13
  unsigned int *v11; // rax
  int *v12; // r12
  unsigned int *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // esi
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // eax
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int *v30; // rax
  unsigned int *v31; // r12
  unsigned int *v32; // r15
  unsigned int v33; // eax
  unsigned int v34; // r13d
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // edx
  unsigned int v41; // eax
  int v42; // [rsp+Ch] [rbp-B4h]
  unsigned int v43; // [rsp+18h] [rbp-A8h]
  unsigned int v44; // [rsp+18h] [rbp-A8h]
  unsigned int v45; // [rsp+1Ch] [rbp-A4h]
  bool v46; // [rsp+1Ch] [rbp-A4h]
  unsigned int v47; // [rsp+1Ch] [rbp-A4h]
  unsigned int v48; // [rsp+20h] [rbp-A0h]
  __int64 v49; // [rsp+20h] [rbp-A0h]
  __int64 v51; // [rsp+28h] [rbp-98h]
  unsigned int v52; // [rsp+3Ch] [rbp-84h] BYREF
  __int64 v53; // [rsp+40h] [rbp-80h] BYREF
  __int64 v54; // [rsp+48h] [rbp-78h] BYREF
  __int64 v55; // [rsp+50h] [rbp-70h] BYREF
  __int64 v56; // [rsp+58h] [rbp-68h] BYREF
  unsigned int *v57; // [rsp+60h] [rbp-60h] BYREF
  __int64 v58; // [rsp+68h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v61; // [rsp+80h] [rbp-40h] BYREF
  int v62; // [rsp+88h] [rbp-38h]

  v7 = a5;
  v9 = a3;
  if ( a2 != 1 )
  {
    if ( !a2 )
      return;
    if ( a3 == 1 )
      goto LABEL_13;
    while ( (_DWORD)v9 )
    {
      if ( !(_DWORD)v7 )
        goto LABEL_55;
LABEL_74:
      if ( a2 >= (unsigned int)v9 )
      {
        while ( a2 < (unsigned int)v7 )
        {
          v7 = a2;
          if ( (_DWORD)v9 != 1 )
            goto LABEL_74;
          LODWORD(v7) = a2;
LABEL_13:
          if ( (_DWORD)v7 == 1 )
          {
            LODWORD(v9) = 1;
            goto LABEL_61;
          }
          LODWORD(v9) = 1;
          if ( !(_DWORD)v7 )
            goto LABEL_72;
        }
        if ( a2 >= (int)v7 + (int)v9 )
        {
LABEL_61:
          sub_B1C010(a1, v9, a4, v7, a6, a7);
          return;
        }
        v48 = v7;
        if ( sub_B1BFA0(a1, v9, v7, a2) )
        {
          sub_B18A00(a1, a2, v9, (__int64)a4, v48, (__int64)a6, a7);
        }
        else
        {
          v45 = v48;
          v57 = nullptr;
          v58 = 0;
          v53 = 0;
          v54 = 0;
          sub_B15990(v9, a4, &v53, &v54);
          v14 = v53;
          v55 = 0;
          v49 = v54;
          v56 = 0;
          sub_B15990(v45, a6, &v55, &v56);
          v15 = v56;
          v51 = v55;
          v46 = (a2 & 1) == 0;
          if ( (a2 & 1) != 0 )
          {
            v17 = (a2 + 1) >> 1;
            v16 = (a2 - 1) >> 1;
          }
          else
          {
            v16 = a2 >> 1;
            v17 = (a2 >> 1) + 1;
          }
          if ( v55 )
            v18 = *(_DWORD *)(v55 - 4);
          else
            v18 = 0;
          if ( v14 )
            v19 = *(_DWORD *)(v14 - 4);
          else
            v19 = 0;
          v43 = v16;
          sub_B1C500(a1, v17, v19, v14, v18, v55, (__int64)&v57);
          if ( v15 )
            v20 = *(_DWORD *)(v15 - 4);
          else
            v20 = 0;
          if ( v49 )
            v21 = *(_DWORD *)(v49 - 4);
          else
            v21 = 0;
          sub_B1C500(a1, v43, v21, v49, v20, v15, (__int64)&v58);
          if ( v46 )
          {
            v22 = 0x3FFFFFFFCLL;
            v23 = *(v57 - 1) - 1;
            v47 = v57[v23];
            v24 = v58;
            if ( v58 )
              v22 = 4LL * (unsigned int)(*(_DWORD *)(v58 - 4) - 1);
            v25 = *(_DWORD *)(v58 + v22);
            *(v57 - 1) = v23;
            --*(_DWORD *)(v24 - 4);
            v42 = v25;
            v26 = sub_B16F10(a1, v47, v25);
            v27 = *(_DWORD *)(a1 + 16) == 1;
            v44 = v26;
            v52 = v26;
            if ( v27 )
              goto LABEL_82;
            v28 = dword_1C7ED20;
            if ( v47 != dword_1C7ED24 )
            {
              v28 = dword_1C7ED24;
              if ( v47 != dword_1C7ED20 )
                v28 = v47 ^ 1;
            }
            v59 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v44)).m128i_u64[0];
            sub_B0DE40(a1, &v59);
            v29 = dword_1C7ED20;
            if ( dword_1C7ED24 != v42 )
            {
              v29 = dword_1C7ED24;
              if ( v42 != dword_1C7ED20 )
                v29 = v42 ^ 1;
            }
            v60 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v44)).m128i_u64[0];
            sub_B0DE40(a1, &v60);
            if ( *(_DWORD *)(a1 + 16) )
            {
LABEL_82:
              v41 = dword_1C7ED20;
              if ( dword_1C7ED24 != v44 )
              {
                v41 = dword_1C7ED24;
                if ( dword_1C7ED20 != v44 )
                  v41 = v44 ^ 1;
              }
              v62 = v42;
              v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v41), _mm_cvtsi32_si128(v47)).m128i_u64[0];
              sub_B0DC80(a1, &v61);
            }
            sub_B171C0(a1, &v57, &v58, a7);
            sub_B0E5E0(a7, &v52);
          }
          else
          {
            sub_B171C0(a1, &v57, &v58, a7);
          }
          if ( v58 )
            sub_186B220((void *)(v58 - 8));
          if ( v57 )
            sub_186B220(v57 - 2);
          if ( v15 )
            sub_186B220((void *)(v15 - 8));
          if ( v51 )
            sub_186B220((void *)(v51 - 8));
          if ( v49 )
            sub_186B220((void *)(v49 - 8));
          if ( v14 )
            sub_186B220((void *)(v14 - 8));
        }
        return;
      }
      v9 = a2;
    }
    goto LABEL_5;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
    {
LABEL_5:
      if ( (unsigned int)v7 > a2 )
        v7 = a2;
      if ( (_DWORD)v7 )
      {
        v11 = (unsigned int *)a6;
        v12 = &a6[v7];
        do
        {
          v13 = v11;
          sub_B0E5E0(a7, v11);
          v11 = v13 + 1;
        }
        while ( v13 + 1 != (unsigned int *)v12 );
      }
      return;
    }
    if ( !a5 )
      goto LABEL_55;
  }
  if ( !a5 )
  {
LABEL_72:
    v9 = 1;
LABEL_55:
    v30 = a4;
    if ( (unsigned int)v9 > a2 )
      v9 = a2;
    v31 = &a4[v9];
    do
    {
      v32 = v30;
      sub_B0E5E0(a7, v30);
      v30 = v32 + 1;
    }
    while ( v31 != v32 + 1 );
    return;
  }
  v33 = sub_B16F10(a1, *a4, *a6);
  v27 = *(_DWORD *)(a1 + 16) == 1;
  LODWORD(v60) = v33;
  v34 = v33;
  if ( v27 )
    goto LABEL_78;
  v35 = *a4;
  v36 = dword_1C7ED20;
  if ( *a4 != dword_1C7ED24 )
  {
    v36 = dword_1C7ED24;
    if ( v35 != dword_1C7ED20 )
      v36 = v35 ^ 1;
  }
  v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v34)).m128i_u64[0];
  sub_B0DE40(a1, &v61);
  v37 = *a6;
  v38 = dword_1C7ED20;
  if ( dword_1C7ED24 != *a6 )
  {
    v38 = dword_1C7ED24;
    if ( dword_1C7ED20 != v37 )
      v38 = v37 ^ 1;
  }
  v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), _mm_cvtsi32_si128(v34)).m128i_u64[0];
  sub_B0DE40(a1, &v61);
  if ( *(_DWORD *)(a1 + 16) )
  {
LABEL_78:
    v39 = dword_1C7ED20;
    if ( dword_1C7ED24 != v34 )
    {
      v39 = dword_1C7ED24;
      if ( dword_1C7ED20 != v34 )
        v39 = v34 ^ 1;
    }
    v40 = *a6;
    v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(*a4)).m128i_u64[0];
    v62 = v40;
    sub_B0DC80(a1, &v61);
  }
  sub_B0E5E0(a7, (unsigned int *)&v60);
}

