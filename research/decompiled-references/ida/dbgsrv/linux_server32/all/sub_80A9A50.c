/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A9A50
// Address: 0x080A9A50

//----- (080A9A50) --------------------------------------------------------
unsigned int __cdecl sub_80A9A50(int a1, unsigned int a2, unsigned int a3, int a4, const char *a5)
{
  int v5; // eax
  __m128i v6; // xmm0
  int v7; // eax
  size_t v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  void *v12; // eax
  int v13; // eax
  size_t v14; // edx
  unsigned __int8 *(__cdecl *v15)(int, unsigned __int8, int *); // eax
  unsigned __int8 *v16; // eax
  unsigned int result; // eax
  char *v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edi
  size_t v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  char *v25; // eax
  unsigned int v26; // ebx
  char *v27; // eax
  char *v28; // eax
  unsigned int v29; // [esp+0h] [ebp-64h]
  unsigned int v30; // [esp+0h] [ebp-64h]
  size_t v31; // [esp+4h] [ebp-60h]
  size_t v32; // [esp+4h] [ebp-60h]
  char *v33; // [esp+8h] [ebp-5Ch]
  char *v34; // [esp+8h] [ebp-5Ch]
  char *v35; // [esp+8h] [ebp-5Ch]
  unsigned __int64 v36; // [esp+Ch] [ebp-58h]
  unsigned int v37; // [esp+Ch] [ebp-58h]
  char *v38; // [esp+Ch] [ebp-58h]
  unsigned int v39; // [esp+Ch] [ebp-58h]
  unsigned int v40; // [esp+Ch] [ebp-58h]
  size_t v41; // [esp+1Ch] [ebp-48h]
  size_t v42; // [esp+1Ch] [ebp-48h]
  size_t v43; // [esp+1Ch] [ebp-48h]
  size_t v44; // [esp+1Ch] [ebp-48h]
  char *s; // [esp+24h] [ebp-40h]
  unsigned int sa; // [esp+24h] [ebp-40h]
  void *ptr; // [esp+30h] [ebp-34h] BYREF
  unsigned int v48; // [esp+34h] [ebp-30h]
  unsigned int v49; // [esp+38h] [ebp-2Ch]
  _BYTE src[10]; // [esp+3Eh] [ebp-26h] BYREF
  _DWORD v51[7]; // [esp+48h] [ebp-1Ch] BYREF

  s = (char *)a5;
  v51[0] = __readgsdword(0x14u);
  if ( a3 == 1 )
  {
    v5 = a1 - 100;
    if ( !a1 )
      v5 = 0;
    a4 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(v5 + 244) + 204))(*(_DWORD *)(v5 + 244));
  }
  sub_80BD060((int *)&ptr, 56);
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(0));
  v36 = 0;
  if ( a2 != -1 )
    v36 = _mm_add_epi64(v6, _mm_load_si128((const __m128i *)&xmmword_80DE200)).m128i_u64[0];
  v7 = sub_80CDDF0(src, (unsigned int)v51, v36, HIDWORD(v36)) - src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v48;
    v37 = v48 + v7;
    if ( __CFADD__(v48, v7) )
    {
      if ( v48 > 0x7FFFFFFE )
      {
        if ( v48 != 0x7FFFFFFF )
          v48 = 0x7FFFFFFF;
LABEL_12:
        memcpy((char *)ptr + v9, src, v8);
        goto LABEL_13;
      }
      v37 = 0x7FFFFFFF;
    }
    v23 = v48;
    v33 = (char *)ptr;
    if ( v49 < v37 )
    {
      v30 = v48;
      v32 = v7;
      v27 = (char *)sub_80CF920((int)&ptr, ptr, v37, 1u);
      v23 = v48;
      v9 = v30;
      v33 = v27;
      ptr = v27;
      v8 = v32;
    }
    v31 = v8;
    v29 = v9;
    memset(&v33[v23], 0, v37 - v23);
    v9 = v29;
    v48 = v37;
    v8 = v31;
    goto LABEL_12;
  }
LABEL_13:
  sub_80A6580((char **)&ptr, a3);
  v10 = v48;
  v11 = v48 + 1;
  v12 = ptr;
  if ( a5 == (const char *)a4 )
  {
    if ( v49 < v11 )
    {
      v12 = sub_80CF920((int)&ptr, ptr, v48 + 1, 1u);
      v10 = v48;
      ptr = v12;
    }
    *((_BYTE *)v12 + v10) = 1;
    v19 = v48;
    v20 = ++v48;
    if ( a5 )
    {
      v21 = strlen(a5) + 1;
      v22 = v21 + v20;
      if ( __CFADD__(v21, v20) )
      {
        if ( v20 > 0x7FFFFFFE )
        {
          if ( v20 == 0x7FFFFFFF )
          {
LABEL_35:
            memcpy((char *)ptr + v20, s, v21);
            goto LABEL_17;
          }
LABEL_34:
          v48 = 0x7FFFFFFF;
          goto LABEL_35;
        }
        v22 = 0x7FFFFFFF;
      }
    }
    else
    {
      v22 = v19 + 2;
      if ( v19 + 2 < v20 )
      {
        v21 = 1;
        s = "";
        goto LABEL_34;
      }
      v21 = 1;
      s = "";
    }
    v25 = (char *)ptr;
    v26 = v20;
    if ( v49 < v22 )
    {
      v44 = v21;
      v40 = v22;
      v25 = (char *)sub_80CF920((int)&ptr, ptr, v22, 1u);
      v26 = v48;
      v21 = v44;
      ptr = v25;
      v22 = v40;
    }
    v42 = v21;
    v39 = v22;
    memset(&v25[v26], 0, v22 - v26);
    v21 = v42;
    v48 = v39;
    goto LABEL_35;
  }
  if ( v49 < v11 )
  {
    v12 = sub_80CF920((int)&ptr, ptr, v48 + 1, 1u);
    v10 = v48;
    ptr = v12;
  }
  *((_BYTE *)v12 + v10) = 0;
  ++v48;
  v13 = sub_80CDDF0(src, (unsigned int)v51, a4 + 1, (unsigned __int64)(a4 + 1LL) >> 32) - src;
  v14 = v13;
  if ( v13 )
  {
    v18 = (char *)v48;
    sa = v48 + v13;
    if ( __CFADD__(v48, v13) )
    {
      if ( v48 > 0x7FFFFFFE )
      {
        if ( v48 != 0x7FFFFFFF )
          v48 = 0x7FFFFFFF;
LABEL_27:
        memcpy(&v18[(_DWORD)ptr], src, v14);
        goto LABEL_17;
      }
      sa = 0x7FFFFFFF;
    }
    v24 = v48;
    v38 = (char *)ptr;
    if ( v49 < sa )
    {
      v35 = (char *)v48;
      v43 = v13;
      v28 = (char *)sub_80CF920((int)&ptr, ptr, sa, 1u);
      v24 = v48;
      v18 = v35;
      v38 = v28;
      ptr = v28;
      v14 = v43;
    }
    v34 = v18;
    v41 = v14;
    memset(&v38[v24], 0, sa - v24);
    v14 = v41;
    v48 = sa;
    v18 = v34;
    goto LABEL_27;
  }
LABEL_17:
  v15 = *(unsigned __int8 *(__cdecl **)(int, unsigned __int8, int *))(*(_DWORD *)a1 + 8);
  if ( v15 == sub_80A5C40 )
    v16 = sub_80B79D0(a1, 0x38u, (int *)&ptr, 0);
  else
    v16 = v15(a1, 56u, (int *)&ptr);
  sub_80CF780(v16);
  if ( ptr )
  {
    v48 = 0;
    sub_80CF780(ptr);
  }
  result = v51[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DE200: using guessed type __int128 xmmword_80DE200;
