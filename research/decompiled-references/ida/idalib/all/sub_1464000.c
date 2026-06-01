__int64 __fastcall sub_1464000(__int64 a1, unsigned __int64 a2, void **a3, __int64 a4, char a5)
{
  bool v7; // zf
  const __m128i *v9; // rcx
  __int64 v10; // rdi
  _BYTE *v11; // rsi
  __m128i *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  char v16; // r13
  unsigned int v17; // ebp
  _BYTE *v18; // rdi
  void **v19; // rcx
  void *v20; // rdx
  size_t v22; // rdx
  void **v23; // [rsp+8h] [rbp-3B0h] BYREF
  _BYTE *v24; // [rsp+10h] [rbp-3A8h]
  __int64 v25; // [rsp+18h] [rbp-3A0h]
  void *src; // [rsp+20h] [rbp-398h] BYREF
  size_t n; // [rsp+28h] [rbp-390h]
  _QWORD v28[8]; // [rsp+30h] [rbp-388h] BYREF
  void *v29; // [rsp+70h] [rbp-348h] BYREF
  __int64 v30; // [rsp+78h] [rbp-340h]
  _BYTE v31[96]; // [rsp+80h] [rbp-338h] BYREF
  unsigned __int8 *v32[6]; // [rsp+E0h] [rbp-2D8h] BYREF
  void *v33; // [rsp+110h] [rbp-2A8h]
  _DWORD v34[130]; // [rsp+128h] [rbp-290h] BYREF
  void *ptr; // [rsp+330h] [rbp-88h]
  __int64 v36; // [rsp+348h] [rbp-70h] BYREF
  unsigned __int8 v37; // [rsp+374h] [rbp-44h]
  char v38; // [rsp+375h] [rbp-43h]

  v7 = *(_WORD *)(a2 + 16) == 14;
  v23 = a3;
  v25 = a4;
  if ( !v7 )
  {
    v17 = 0;
    sub_FC70B0((__int64)v32, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 19);
    sub_AE9DF0(v32, 0, 2u);
    sub_AE9DF0(v32, v25, 1u);
    sub_AEA040((__int64)v32);
    return v17;
  }
  v9 = (const __m128i *)a2;
  v10 = 0;
  v11 = v31;
  v29 = v31;
  v30 = 0x400000000LL;
  v24 = v31;
  while ( 1 )
  {
    v12 = (__m128i *)&v11[24 * v10];
    *v12 = _mm_loadu_si128(v9);
    v13 = v9[1].m128i_i64[0];
    LODWORD(v30) = v30 + 1;
    v12[1].m128i_i64[0] = v13;
    if ( (*(_BYTE *)(a2 + 18) & 0x20) != 0 )
    {
      sub_FC70B0((__int64)v32, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 29);
      sub_AEA040((__int64)v32);
    }
    if ( a5 )
    {
      sub_14634E0((__int64 *)a1, (int *)a2);
    }
    else
    {
      v16 = *(_BYTE *)(a1 + 544);
      *(_BYTE *)(a1 + 544) = v16 | 0x20;
      sub_14634E0((__int64 *)a1, (int *)a2);
      *(_BYTE *)(a1 + 544) = (32 * ((v16 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
    }
    v10 = (unsigned int)v30;
    v11 = v29;
    if ( *(_WORD *)(a2 + 16) != 14 )
      break;
    v14 = (unsigned int)v30 + 1LL;
    v9 = (const __m128i *)a2;
    if ( v14 > HIDWORD(v30) )
    {
      if ( (unsigned __int64)v29 > a2 || a2 >= (unsigned __int64)v29 + 24 * (unsigned int)v30 )
      {
        sub_2237220(&v29, v24, v14, 24);
        v11 = v29;
        v9 = (const __m128i *)a2;
        v10 = (unsigned int)v30;
      }
      else
      {
        v15 = a2 - (_QWORD)v29;
        sub_2237220(&v29, v24, v14, 24);
        v11 = v29;
        v10 = (unsigned int)v30;
        v9 = (const __m128i *)((char *)v29 + v15);
      }
    }
  }
  sub_13EE5A0((__int64)v32, (int *)v29, (unsigned int)v30, (_QWORD *)a1, 0);
  v17 = v37;
  if ( v37 )
  {
    v17 = 0;
  }
  else
  {
    if ( !v38 )
    {
      src = v28;
      sub_145B9F0(&src, v33, (__int64)v33 + (unsigned int)(v34[128] - (_DWORD)v33));
      v18 = *v23;
      if ( src == v28 )
      {
        v22 = n;
        if ( n )
        {
          if ( n == 1 )
            *v18 = v28[0];
          else
            memcpy(v18, src, n);
          v22 = n;
          v18 = *v23;
        }
        v23[1] = (void *)v22;
        v18[v22] = 0;
        v18 = src;
        goto LABEL_20;
      }
      v19 = v23;
      if ( v18 == (_BYTE *)(v23 + 2) )
      {
        v23 = (void **)v28[0];
        *v19 = src;
        *(__m128 *)(v19 + 1) = _mm_loadh_ps((const double *)&v23);
      }
      else
      {
        v23 = (void **)v28[0];
        v20 = v19[2];
        *v19 = src;
        *(__m128 *)(v19 + 1) = _mm_loadh_ps((const double *)&v23);
        if ( v18 )
        {
          src = v18;
          v28[0] = v20;
LABEL_20:
          n = 0;
          *v18 = 0;
          if ( src != v28 )
            operator delete(src);
          v17 = 1;
          goto LABEL_24;
        }
      }
      v18 = v28;
      src = v28;
      goto LABEL_20;
    }
    sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), *(_DWORD *)v29, 19);
    sub_AE9DF0((unsigned __int8 **)&src, 0, 2u);
    sub_AE9DF0((unsigned __int8 **)&src, v25, 1u);
    sub_AEA040((__int64)&src);
  }
LABEL_24:
  if ( ptr != &v36 )
    free(ptr);
  if ( v33 != v34 )
    free(v33);
  if ( v29 != v31 )
    free(v29);
  return v17;
}
