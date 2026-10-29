/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C6A80
// Address: 0x080C6A80

//----- (080C6A80) --------------------------------------------------------
unsigned int __cdecl sub_80C6A80(char **a1, int *a2)
{
  int v2; // ecx
  const char **v3; // esi
  size_t v4; // eax
  unsigned int v5; // edi
  size_t v6; // eax
  const char **v7; // edi
  size_t v8; // ecx
  unsigned int v9; // eax
  size_t v10; // eax
  unsigned int v11; // ecx
  __m128i v12; // xmm0
  size_t v13; // eax
  int v14; // esi
  size_t v15; // eax
  unsigned int result; // eax
  size_t v17; // ecx
  unsigned int v18; // esi
  unsigned int *v19; // edi
  unsigned int *v20; // ecx
  unsigned int v21; // edx
  int *v22; // ebx
  int *v23; // eax
  int v24; // esi
  int v25; // ecx
  size_t v26; // eax
  char v27; // al
  unsigned int v28; // esi
  size_t v29; // eax
  int v30; // eax
  int v31; // esi
  size_t v32; // eax
  const char *v33; // edx
  size_t v34; // ecx
  size_t v35; // eax
  const char *v36; // edi
  size_t v37; // ecx
  size_t v38; // eax
  size_t v39; // eax
  size_t v40; // eax
  int *v41; // eax
  unsigned int v42; // ebx
  int *v43; // edi
  int v44; // [esp-Ch] [ebp-B4h]
  int v45; // [esp-8h] [ebp-B0h]
  int v46; // [esp-4h] [ebp-ACh]
  int v47; // [esp+8h] [ebp-A0h]
  unsigned int v48; // [esp+14h] [ebp-94h]
  unsigned int *v49; // [esp+1Ch] [ebp-8Ch]
  int v50; // [esp+1Ch] [ebp-8Ch]
  unsigned __int64 v51; // [esp+20h] [ebp-88h]
  unsigned int v52; // [esp+20h] [ebp-88h]
  const char *v53; // [esp+20h] [ebp-88h]
  const char *v54; // [esp+30h] [ebp-78h]
  unsigned int v55; // [esp+30h] [ebp-78h]
  unsigned int *v56; // [esp+30h] [ebp-78h]
  unsigned int v57; // [esp+30h] [ebp-78h]
  unsigned int v58; // [esp+30h] [ebp-78h]
  _BYTE v59[12]; // [esp+40h] [ebp-68h] BYREF
  int v60; // [esp+4Ch] [ebp-5Ch] BYREF
  int v61; // [esp+50h] [ebp-58h] BYREF
  int v62; // [esp+54h] [ebp-54h] BYREF
  int *v63; // [esp+58h] [ebp-50h]
  int *v64; // [esp+5Ch] [ebp-4Ch]
  int *v65; // [esp+60h] [ebp-48h]
  int v66; // [esp+64h] [ebp-44h]
  unsigned int v67; // [esp+68h] [ebp-40h] BYREF
  unsigned int v68; // [esp+6Ch] [ebp-3Ch] BYREF
  _DWORD *v69; // [esp+70h] [ebp-38h]
  unsigned int *v70; // [esp+74h] [ebp-34h]
  unsigned int *v71; // [esp+78h] [ebp-30h]
  int v72; // [esp+7Ch] [ebp-2Ch]
  _BYTE v73[5]; // [esp+82h] [ebp-26h] BYREF
  _BYTE v74[5]; // [esp+87h] [ebp-21h] BYREF
  unsigned int v75[7]; // [esp+8Ch] [ebp-1Ch] BYREF

  v2 = *a2;
  v75[0] = __readgsdword(0x14u);
  v47 = v2;
  v3 = (const char **)a2[6];
  v48 = a2[1];
  if ( v2 != 0 && v48 != 0 && v3 )
  {
    v4 = sub_80CDC90(v73, (unsigned int)v74, 0xFFFFFF01) - v73;
    if ( v4 )
      sub_80C5C40(v4, a1, v73);
    if ( *v3 )
    {
      v5 = 0;
      do
        ++v5;
      while ( v3[v5] );
      v6 = sub_80CDC90(v73, (unsigned int)v74, v5) - v73;
      if ( v6 )
        sub_80C5C40(v6, a1, v73);
      v7 = &v3[v5];
      do
      {
        v54 = *v3;
        if ( *v3 )
        {
          v8 = strlen(*v3) + 1;
        }
        else
        {
          v8 = 1;
          v54 = (char *)&qword_811CFF4 - 281405;
        }
        ++v3;
        sub_80C5C40(v8, a1, v54);
      }
      while ( v7 != v3 );
    }
    else
    {
      v17 = sub_80CDC90(v73, (unsigned int)v74, 0) - v73;
      if ( v17 )
        sub_80C5C40(v17, a1, v73);
    }
    v62 = 0;
    v18 = 0;
    v64 = &v62;
    v65 = &v62;
    v63 = nullptr;
    v19 = (unsigned int *)(v47 + 12);
    v66 = 0;
    v56 = (unsigned int *)(v47 + 12);
    v52 = 0;
    do
    {
      v20 = v56;
      v21 = *v56;
      if ( *v56 )
      {
        v22 = &v62;
        v67 = *v56;
        v68 = v52;
        v23 = v63;
        if ( !v63 )
          goto LABEL_41;
        v57 = v18;
        v49 = v20;
        do
        {
          while ( 1 )
          {
            v24 = v23[2];
            v25 = v23[3];
            if ( v23[4] < v21 )
              break;
            v22 = v23;
            v23 = (int *)v23[2];
            if ( !v24 )
              goto LABEL_39;
          }
          v23 = (int *)v23[3];
        }
        while ( v25 );
LABEL_39:
        v18 = v57;
        v56 = v49;
        if ( v22 == &v62 || v21 < v22[4] )
        {
LABEL_41:
          sub_80C68C0(&v60, &v61, v22, &v67);
          ++v52;
        }
      }
      ++v18;
      v56 += 5;
    }
    while ( v18 < v48 );
    v68 = 0;
    v69 = nullptr;
    v70 = &v68;
    v71 = &v68;
    v72 = 0;
    v26 = sub_80CDC90(v73, (unsigned int)v74, v52) - v73;
    if ( v26 )
      sub_80C5C40(v26, a1, v73);
    v58 = 0;
    do
    {
      if ( *v19 )
      {
        sub_80C6780((int)v59, &v67, v19);
        if ( v59[4] )
        {
          if ( (*((_BYTE *)v19 - 7) & 1) != 0 )
          {
            v28 = 1;
          }
          else
          {
            v27 = *((_BYTE *)v19 - 3);
            if ( v27 == 1 )
            {
              v28 = 16;
            }
            else
            {
              if ( v27 != 2 )
              {
                if ( !byte_811F8A1 )
                {
                  if ( v75[0] == __readgsdword(0x14u) )
                    sub_80CFF40(1783, v44, v45, v46);
                  sub_80D7AB0();
                }
                BUG();
              }
              v28 = 32;
            }
          }
          v29 = sub_80CDC90(v73, (unsigned int)v74, v28) - v73;
          if ( v29 )
            sub_80C5C40(v29, a1, v73);
          v30 = 4 * v28;
          v31 = 0;
          v50 = v30;
          do
          {
            if ( *(_DWORD *)(*v19 + v31) )
            {
              v53 = *(const char **)(*v19 + v31);
              v32 = strlen(v53);
              v33 = v53;
              v34 = v32 + 1;
            }
            else
            {
              v33 = (char *)&qword_811CFF4 - 281405;
              v34 = 1;
            }
            sub_80C5C40(v34, a1, v33);
            v31 += 4;
          }
          while ( v31 != v50 );
        }
      }
      ++v58;
      v19 += 5;
    }
    while ( v58 < v48 );
    v35 = sub_80CDC90(v73, (unsigned int)v74, v48) - v73;
    if ( v35 )
      sub_80C5C40(v35, a1, v73);
    v14 = v47;
    v55 = 0;
    do
    {
      v36 = *(const char **)v14;
      if ( *(_DWORD *)v14 )
      {
        v37 = strlen(*(const char **)v14) + 1;
      }
      else
      {
        v36 = (char *)&qword_811CFF4 - 281405;
        v37 = 1;
      }
      sub_80C5C40(v37, a1, v36);
      v38 = sub_80CDC90(v73, (unsigned int)v74, *(_DWORD *)(v14 + 4)) - v73;
      if ( v38 )
        sub_80C5C40(v38, a1, v73);
      v39 = sub_80CDC90(v73, (unsigned int)v74, *(unsigned __int8 *)(v14 + 8)) - v73;
      if ( v39 )
        sub_80C5C40(v39, a1, v73);
      v40 = sub_80CDC90(v73, (unsigned int)v74, *(unsigned __int8 *)(v14 + 9)) - v73;
      if ( v40 )
        sub_80C5C40(v40, a1, v73);
      v41 = v63;
      v42 = *(_DWORD *)(v14 + 12);
      if ( v63 )
      {
        v43 = &v62;
        do
        {
          if ( v41[4] >= v42 )
          {
            v43 = v41;
            v41 = (int *)v41[2];
          }
          else
          {
            v41 = (int *)v41[3];
          }
        }
        while ( v41 );
        v9 = 0;
        if ( v43 != &v62 && v42 >= v43[4] )
          v9 = v43[5] + 1;
      }
      else
      {
        v9 = 0;
      }
      v10 = sub_80CDC90(v73, (unsigned int)v74, v9) - v73;
      if ( v10 )
        sub_80C5C40(v10, a1, v73);
      v11 = *(_DWORD *)(v14 + 16);
      v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0));
      v51 = 0;
      if ( v11 != -1 )
        v51 = _mm_add_epi64(v12, _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524))).m128i_u64[0];
      v13 = sub_80CDDF0(v73, (unsigned int)v75, v51, HIDWORD(v51)) - v73;
      if ( v13 )
        sub_80C5C40(v13, a1, v73);
      ++v55;
      v14 += 20;
    }
    while ( v55 < v48 );
    v15 = sub_80CDC90(v73, (unsigned int)v74, a2[12]) - v73;
    if ( v15 )
      sub_80C5C40(v15, a1, v73);
    sub_80C5D10(v69);
    sub_80C5ED0(v63);
  }
  result = v75[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80C70DA: variable 'v44' is possibly undefined
// 80C70DA: variable 'v45' is possibly undefined
// 80C70DA: variable 'v46' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
