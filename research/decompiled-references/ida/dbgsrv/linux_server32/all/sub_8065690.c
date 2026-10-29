/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8065690
// Address: 0x08065690

//----- (08065690) --------------------------------------------------------
int __userpurge sub_8065690@<eax>(int a1, _DWORD *a2, const __m128i *a3)
{
  _DWORD *v3; // esi
  __m128i v4; // xmm0
  unsigned int v5; // ebp
  _DWORD *v6; // ecx
  char *v7; // edx
  int *v8; // ebp
  __m128i v9; // xmm0
  int *v10; // esi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  unsigned int *v14; // ecx
  unsigned int v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  int *v18; // esi
  int v19; // edx
  char *v20; // edx
  unsigned int v21; // edx
  unsigned int *v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v26; // eax
  _DWORD **v27; // edx
  _DWORD *v28; // eax
  char *v29; // edx
  char *v30; // edx
  __m128i v31; // xmm0
  signed int v32; // [esp+1Ch] [ebp-B0h]
  int *v33; // [esp+24h] [ebp-A8h]
  int v34; // [esp+28h] [ebp-A4h]
  int v35; // [esp+2Ch] [ebp-A0h]
  int v36; // [esp+30h] [ebp-9Ch]
  int v37; // [esp+34h] [ebp-98h]
  int v38; // [esp+38h] [ebp-94h]
  int v39; // [esp+3Ch] [ebp-90h]
  int v40; // [esp+44h] [ebp-88h]
  unsigned int v41; // [esp+48h] [ebp-84h]
  unsigned int v42; // [esp+4Ch] [ebp-80h]
  int *v43; // [esp+50h] [ebp-7Ch]
  signed int v44; // [esp+54h] [ebp-78h]
  __m128i v45; // [esp+80h] [ebp-4Ch] BYREF
  __m128i v46; // [esp+90h] [ebp-3Ch] BYREF
  unsigned int v47; // [esp+ACh] [ebp-20h]

  v3 = a2;
  v47 = __readgsdword(0x14u);
  v4 = _mm_loadu_si128(a3);
  v5 = a3->m128i_u32[3];
  v6 = (_DWORD *)_mm_cvtsi128_si32(v4);
  v39 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(a3->m128i_u32[2]));
  v7 = (char *)(v6 + 11);
  v41 = v5;
  v34 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(a3->m128i_u32[1]));
  v42 = v34;
  if ( v6 + 11 == (_DWORD *)v39 )
  {
    v7 = *(char **)(v5 + 4);
    v41 = v5 + 4;
    v42 = (unsigned int)v7;
    v39 = (int)(v7 + 484);
  }
  v40 = a2[4];
  v37 = a2[2];
  v33 = (int *)a2[5];
  v35 = -1171354717 * ((v40 - v37) >> 2);
  v38 = a2[6];
  v43 = (int *)a2[9];
  v36 = a2[7];
  v32 = v35 - 1171354717 * (((int)v6 - v34) >> 2) + 11 * ((v5 == 0) + ((int)(v5 - (_DWORD)v33) >> 2) - 1);
  v44 = v32;
  if ( v32 >= (v35 - 1171354717 * ((v38 - v36) >> 2) + 11 * ((unsigned int)(v43 == nullptr) + v43 - v33 - 1)) >> 1 )
  {
    if ( (char *)v38 != v7 )
    {
      v45 = v4;
      if ( v43 == (int *)v41 )
      {
        sub_8065500(&v46, (int)v7, v38, (unsigned int *)&v45);
      }
      else
      {
        sub_8065500(&v46, (int)v7, v39, (unsigned int *)&v45);
        v17 = _mm_load_si128(&v46);
        if ( v43 != (int *)(v41 + 4) )
        {
          v18 = (int *)(v41 + 4);
          do
          {
            v19 = *v18;
            v45 = v17;
            ++v18;
            sub_8065500(&v46, v19, v19 + 484, (unsigned int *)&v45);
            v17 = _mm_load_si128(&v46);
          }
          while ( v43 != v18 );
          v3 = a2;
        }
        v45 = v17;
        sub_8065500(&v46, v36, v38, (unsigned int *)&v45);
      }
      v7 = (char *)v3[6];
      v36 = v3[7];
    }
    if ( v7 == (char *)v36 )
    {
      operator delete(v7, 0x1E4u);
      v27 = (_DWORD **)(v3[9] - 4);
      v3[9] = v27;
      v28 = *v27;
      v29 = (char *)*v27 + (_DWORD)(&off_811D1D8 - 33846269);
      v3[7] = v28;
      v28 += 110;
      v3[8] = v29;
      v3[6] = v28;
      sub_80C6090(v28);
    }
    else
    {
      v20 = v7 - 44;
      v3[6] = v20;
      sub_80C6090(v20);
    }
    v16 = _mm_loadl_epi64((const __m128i *)(v3 + 2));
    v13 = v3[4];
    v14 = (unsigned int *)v3[5];
    v32 += -1171354717 * ((_mm_cvtsi128_si32(v16) - v16.m128i_i32[1]) >> 2);
  }
  else
  {
    if ( (_DWORD *)v37 != v6 )
    {
      v45 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v7), _mm_cvtsi32_si128(v42)),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(v41)));
      if ( v33 == (int *)v5 )
      {
        sub_8065320(&v46, v37, (int)v6, (unsigned int *)&v45);
      }
      else
      {
        v8 = (int *)(v5 - 4);
        sub_8065320(&v46, v34, (int)v6, (unsigned int *)&v45);
        v9 = _mm_load_si128(&v46);
        if ( v33 != v8 )
        {
          v10 = v8;
          do
          {
            v11 = *v10;
            v45 = v9;
            --v10;
            sub_8065320(&v46, v11, v11 + 484, (unsigned int *)&v45);
            v9 = _mm_load_si128(&v46);
          }
          while ( v33 != v10 );
          v3 = a2;
        }
        v45 = v9;
        sub_8065320(&v46, v37, v40, (unsigned int *)&v45);
      }
      v6 = (_DWORD *)v3[2];
      v40 = v3[4];
    }
    if ( v6 == (_DWORD *)(v40 - 44) )
    {
      sub_80C6090(v6);
      operator delete((void *)v3[3], 0x1E4u);
      v14 = (unsigned int *)(v3[5] + 4);
      v3[5] = v14;
      v26 = *v14;
      v30 = (char *)&off_811D1D8 + *v14 - 135385076;
      v3[2] = *v14;
      v31 = _mm_cvtsi32_si128(v26);
      v3[3] = v26;
      v3[4] = v30;
      *(_DWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = _mm_unpacklo_epi32(v31, v31).m128i_u64[0];
      goto LABEL_31;
    }
    sub_80C6090(v6);
    v12 = v3[3];
    v13 = v3[4];
    v14 = (unsigned int *)v3[5];
    v15 = v3[2] + 44;
    v3[2] = v15;
    v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v12));
    v32 += -1171354717 * ((int)(v15 - v12) >> 2);
  }
  *(_DWORD *)(a1 + 8) = v13;
  *(_QWORD *)a1 = v16.m128i_i64[0];
  if ( v32 < 0 )
  {
    v21 = ~(~v32 / 0xBu);
LABEL_27:
    v22 = &v14[v21];
    *(_DWORD *)(a1 + 12) = v22;
    v23 = *v22;
    *(_QWORD *)(a1 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v23 + 484)).m128i_u64[0];
    v24 = 44 * (v32 - 11 * v21) + v23;
    goto LABEL_28;
  }
  v26 = _mm_cvtsi128_si32(v16);
LABEL_31:
  if ( v32 > 10 )
  {
    v21 = v32 / 0xBu;
    goto LABEL_27;
  }
  *(_DWORD *)(a1 + 12) = v14;
  v24 = v26 + 44 * v44;
LABEL_28:
  *(_DWORD *)a1 = v24;
  if ( v47 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 811D1D8: using guessed type _UNKNOWN *off_811D1D8;
