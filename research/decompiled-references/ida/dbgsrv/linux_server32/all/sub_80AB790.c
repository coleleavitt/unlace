/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AB790
// Address: 0x080AB790

//----- (080AB790) --------------------------------------------------------
unsigned int __cdecl sub_80AB790(int a1, unsigned int **a2)
{
  unsigned int v2; // edi
  size_t v3; // esi
  unsigned int v4; // edx
  char *v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // esi
  char *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // edx
  int (*v13)(); // eax
  const char *v14; // edi
  unsigned int v15; // esi
  __m128i v16; // xmm0
  size_t v17; // esi
  unsigned int v18; // edx
  char *v19; // eax
  unsigned int v20; // ecx
  size_t v21; // eax
  int v22; // esi
  unsigned int v23; // edx
  char *v24; // eax
  unsigned int v25; // ecx
  unsigned int result; // eax
  unsigned int v27; // [esp-78h] [ebp-78h]
  unsigned int v28; // [esp-64h] [ebp-64h]
  unsigned __int64 v29; // [esp-5Ch] [ebp-5Ch]
  unsigned int *v30; // [esp-44h] [ebp-44h]
  char *v31; // [esp-38h] [ebp-38h] BYREF
  unsigned int v32; // [esp-34h] [ebp-34h]
  unsigned int v33; // [esp-30h] [ebp-30h]
  _BYTE v34[5]; // [esp-2Ah] [ebp-2Ah] BYREF
  char v35; // [esp-25h] [ebp-25h] BYREF
  unsigned int v36; // [esp-20h] [ebp-20h] BYREF

  v36 = __readgsdword(0x14u);
  v30 = *a2;
  if ( !(28 * (_DWORD)a2[1]) )
    goto LABEL_53;
  while ( 1 )
  {
    v14 = (const char *)&dword_80DDFD8;
    v15 = *v30;
    if ( v30[2] )
      v14 = (const char *)v30[1];
    sub_80BD060((int *)&v31, 57);
    v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0));
    v29 = 0;
    if ( v15 != -1 )
      v29 = _mm_add_epi64(v16, _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524))).m128i_u64[0];
    v17 = sub_80CDDF0(v34, (unsigned int)&v36, v29, HIDWORD(v29)) - v34;
    if ( v17 )
    {
      LODWORD(v29) = v32;
      v18 = v17 + v32;
      if ( __CFADD__(v17, v32) )
      {
        if ( v32 > 0x7FFFFFFE )
        {
          if ( v32 != 0x7FFFFFFF )
            v32 = 0x7FFFFFFF;
          goto LABEL_33;
        }
        v18 = 0x7FFFFFFF;
      }
      v19 = v31;
      v20 = v32;
      if ( v33 < v18 )
      {
        v28 = v18;
        v19 = (char *)sub_80CF920((int)&v31, v31, v18, 1u);
        v20 = v32;
        v18 = v28;
        v31 = v19;
      }
      v28 = v18;
      memset(&v19[v20], 0, v18 - v20);
      v32 = v28;
LABEL_33:
      memcpy(&v31[v29], v34, v17);
    }
    if ( v14 )
    {
      v21 = strlen(v14);
      v22 = v32;
      LODWORD(v29) = v21 + 1;
      v23 = v32 + v21 + 1;
      if ( !__CFADD__(v32, v21 + 1) )
        goto LABEL_36;
      if ( v32 <= 0x7FFFFFFE )
      {
        v23 = 0x7FFFFFFF;
LABEL_36:
        v24 = v31;
        v25 = v32;
        if ( v33 < v23 )
          goto LABEL_40;
        goto LABEL_37;
      }
      if ( v32 == 0x7FFFFFFF )
        goto LABEL_6;
LABEL_5:
      v32 = 0x7FFFFFFF;
      goto LABEL_6;
    }
    v22 = v32;
    LODWORD(v29) = 1;
    v23 = v32 + 1;
    if ( v32 == -1 )
    {
      v14 = "";
      v22 = -1;
      goto LABEL_5;
    }
    v14 = "";
    v24 = v31;
    v25 = v32;
    if ( v33 < v23 )
    {
LABEL_40:
      v28 = v23;
      v24 = (char *)sub_80CF920((int)&v31, v24, v23, 1u);
      v25 = v32;
      v23 = v28;
      v31 = v24;
    }
LABEL_37:
    v28 = v23;
    memset(&v24[v25], 0, v23 - v25);
    v32 = v28;
LABEL_6:
    memcpy(&v31[v22], v14, v29);
    v2 = v30[5];
    LODWORD(v29) = v30[4];
    v3 = sub_80CDC90(v34, (unsigned int)&v35, v2) - v34;
    if ( !v3 )
      goto LABEL_12;
    v28 = v32;
    v4 = v3 + v32;
    if ( __CFADD__(v3, v32) )
    {
      if ( v32 > 0x7FFFFFFE )
      {
        if ( v32 != 0x7FFFFFFF )
          v32 = 0x7FFFFFFF;
        goto LABEL_11;
      }
      v4 = 0x7FFFFFFF;
    }
    v5 = v31;
    v6 = v32;
    if ( v33 < v4 )
    {
      v27 = v4;
      v5 = (char *)sub_80CF920((int)&v31, v31, v4, 1u);
      v6 = v32;
      v4 = v27;
      v31 = v5;
    }
    v27 = v4;
    memset(&v5[v6], 0, v4 - v6);
    v32 = v27;
LABEL_11:
    memcpy(&v31[v28], v34, v3);
LABEL_12:
    if ( !v2 )
      goto LABEL_17;
    v7 = v32;
    v28 = v32 + v2;
    if ( __CFADD__(v32, v2) )
    {
      if ( v32 > 0x7FFFFFFE )
      {
        if ( v32 != 0x7FFFFFFF )
          v32 = 0x7FFFFFFF;
        goto LABEL_16;
      }
      v28 = 0x7FFFFFFF;
      v8 = v31;
      v10 = v32;
      v9 = 0x7FFFFFFF;
      if ( v33 < 0x7FFFFFFF )
      {
LABEL_56:
        v8 = (char *)sub_80CF920((int)&v31, v8, v9, 1u);
        v10 = v32;
        v31 = v8;
      }
    }
    else
    {
      v8 = v31;
      v9 = v28;
      v10 = v32;
      if ( v33 < v28 )
        goto LABEL_56;
    }
    memset(&v8[v10], 0, v28 - v10);
    v32 = v28;
LABEL_16:
    memcpy(&v31[v7], (const void *)v29, v2);
LABEL_17:
    v11 = sub_80B7C10(a1 + 100, (int *)&v31, -1, nullptr);
    if ( v11 < 0 )
      break;
    if ( v11 )
    {
      v12 = *(_DWORD *)(a1 + 244);
      v13 = *(int (**)())(*(_DWORD *)v12 + 284);
      if ( v13 != sub_80533D0 )
        ((void (__cdecl *)(int, unsigned int *))v13)(v12, v30);
    }
    if ( v31 )
    {
      v32 = 0;
      sub_80CF780(v31);
    }
    v30 += 7;
    if ( v30 == &(*a2)[7 * (_DWORD)a2[1]] )
      goto LABEL_53;
  }
  if ( v31 )
  {
    v32 = 0;
    sub_80CF780(v31);
  }
LABEL_53:
  result = v36 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
