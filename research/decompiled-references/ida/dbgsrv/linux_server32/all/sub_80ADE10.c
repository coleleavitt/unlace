/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80ADE10
// Address: 0x080ADE10

//----- (080ADE10) --------------------------------------------------------
int __cdecl sub_80ADE10(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        int (__cdecl *a5)(int a1, int a2, void *a3, _DWORD *a4))
{
  _DWORD *v5; // ecx
  __m128i v6; // xmm1
  int v7; // edi
  int v8; // ebx
  __m128i v9; // xmm0
  _DWORD *v10; // eax
  int *v12; // eax
  _DWORD *v13; // ecx
  char v14; // al
  unsigned int v15; // ebx
  const char *v16; // eax
  int v17; // eax
  int v18; // eax
  char *v19; // eax
  _BYTE *v20; // edi
  int (__cdecl *v21)(int, int, void *, _DWORD *); // eax
  _DWORD *v22; // [esp+0h] [ebp-5Ch]
  int v23; // [esp+4h] [ebp-58h]
  int v24; // [esp+4h] [ebp-58h]
  _DWORD *v25; // [esp+4h] [ebp-58h]
  int v26; // [esp+8h] [ebp-54h]
  unsigned int v27; // [esp+8h] [ebp-54h]
  int *v28; // [esp+Ch] [ebp-50h]
  int v29; // [esp+Ch] [ebp-50h]
  _DWORD *v30; // [esp+10h] [ebp-4Ch]
  _DWORD *v31; // [esp+18h] [ebp-44h]
  int *v32; // [esp+1Ch] [ebp-40h]
  int (__cdecl *v33)(int, int, void *, _DWORD *); // [esp+20h] [ebp-3Ch]
  __m128i v34; // [esp+24h] [ebp-38h]
  int v35; // [esp+24h] [ebp-38h]
  void *ptr; // [esp+34h] [ebp-28h] BYREF
  int v37; // [esp+38h] [ebp-24h]
  int v38; // [esp+3Ch] [ebp-20h]
  unsigned int v39; // [esp+40h] [ebp-1Ch]

  v5 = a1;
  v30 = a3;
  v6 = _mm_loadl_epi64((const __m128i *)&a2);
  v7 = _mm_cvtsi128_si32(v6);
  v34.m128i_i64[0] = v6.m128i_i64[0];
  v31 = a4;
  v8 = _mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u));
  v33 = a5;
  v39 = __readgsdword(0x14u);
  if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
  {
    sub_8058290();
    v5 = a1;
  }
  if ( !(v8 | v7) )
    goto LABEL_9;
  v9 = _mm_add_epi64((__m128i)-1LL, v34);
  if ( __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v9, 0x20u)), _mm_cvtsi128_si32(v9)) < (unsigned int)v5[14] )
  {
    v10 = (_DWORD *)*v5;
    if ( *v5 && v10[1] == 1 )
    {
      v28 = &dword_80DDFD8;
      if ( v10[3] )
        v28 = (int *)v10[2];
      v26 = (int)v5;
      v23 = v5[13];
      v12 = sub_80CD4D0((int)v28, 0);
      v13 = (_DWORD *)v26;
      v32 = v12;
      if ( v12 )
      {
        v29 = 100 * (v7 - 1) + v23;
        v27 = *(_DWORD *)(v29 + 8);
        if ( v33 )
        {
          v24 = (int)v13;
          ptr = nullptr;
          v37 = 0;
          v38 = 0;
          v14 = sub_80D2000("IDA_DWARF_MAX_ZIP_RATIO", &ptr);
          v13 = (_DWORD *)v24;
          v15 = 1000;
          if ( v14 )
          {
            v16 = (const char *)&dword_80DDFD8;
            if ( v37 )
              v16 = (const char *)ptr;
            v17 = strtol(v16, nullptr, 10);
            v13 = (_DWORD *)v24;
            v15 = v17;
          }
          if ( ptr )
          {
            v22 = v13;
            v37 = 0;
            sub_80CF780(ptr);
            v13 = v22;
          }
          v18 = v27 / v15;
        }
        else
        {
          v18 = *(_DWORD *)(v29 + 8);
        }
        v25 = v13;
        ptr = (void *)v18;
        if ( (unsigned __int8)sub_80AD760(
                                v32,
                                (unsigned int *)&ptr,
                                1u,
                                *(_DWORD *)(v29 + 32),
                                *(_DWORD *)(v29 + 36),
                                -1) )
        {
          v19 = (char *)&dword_80DDFD8;
          if ( *(_DWORD *)(v29 + 16) )
            v19 = *(char **)(v29 + 12);
          v20 = sub_80A8730(v25, v6.m128i_i64[0], v19, v27);
          if ( v20 )
          {
            sub_80CD730((int)v32, *(_QWORD *)(v29 + 32), 0);
            v21 = sub_80A68F0;
            if ( v33 )
              v21 = v33;
            v35 = v21((int)v32, v29, v20, v31);
            if ( v35 )
              sub_80A89A0((int)v25, v20);
            else
              *v30 = v20;
            goto LABEL_30;
          }
          if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
            sub_8058290();
          *v31 = 8;
        }
        else
        {
          if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
            sub_8058290();
          *v31 = 435;
        }
        v35 = 1;
LABEL_30:
        sub_80CD620(v32);
        goto LABEL_10;
      }
    }
    sub_8058290();
LABEL_9:
    v35 = 1;
    goto LABEL_10;
  }
  if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
    sub_8058290();
  v35 = -1;
LABEL_10:
  if ( v39 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v35;
}
// 80ADE80: variable 'v34' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E72C: using guessed type int dword_811E72C;
