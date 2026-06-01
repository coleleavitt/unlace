__int64 __fastcall sub_14F8060(__int64 a1, unsigned int a2, __m128i a3)
{
  bool v4; // zf
  unsigned __int16 v5; // cx
  __int64 *v6; // rdi
  char v7; // bp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rdi
  int v11; // edx
  _BYTE *v12; // rbx
  unsigned __int64 v13; // rdx
  __m128i *v14; // rcx
  __m128i *v15; // rax
  __int64 v16; // rax
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 *v20; // rdi
  int v21; // edx
  unsigned int v22; // eax
  unsigned __int16 v23; // si
  __int64 v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-130h] BYREF
  _BYTE *v26; // [rsp+10h] [rbp-128h]
  unsigned int v27; // [rsp+1Ch] [rbp-11Ch]
  __m128i v28; // [rsp+20h] [rbp-118h] BYREF
  int v29; // [rsp+30h] [rbp-108h]
  int v30; // [rsp+34h] [rbp-104h]
  unsigned __int8 *v31[10]; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+98h] [rbp-A0h]
  _BYTE v34[152]; // [rsp+A0h] [rbp-98h] BYREF

  v4 = *(_WORD *)(a1 + 32) == 24;
  v5 = *(_WORD *)(a1 + 92);
  v27 = a2;
  ptr = v34;
  v33 = 0x400000000LL;
  if ( v4 )
  {
    *(_WORD *)(a1 + 92) = v5 + 1;
  }
  else
  {
    if ( !v5 )
      goto LABEL_3;
    v22 = *(_DWORD *)(a1 + 2792);
    if ( v22 )
    {
      v23 = *(_WORD *)(a1 + 88);
      v24 = *(_QWORD *)(a1 + 2784) + 24LL * v22 - 24;
      do
      {
        if ( v23 == *(_WORD *)(v24 + 14) )
        {
          if ( *(_DWORD *)(v24 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_27;
        }
        else if ( v23 > *(_WORD *)(v24 + 14) )
        {
          goto LABEL_27;
        }
        if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v24 + 16) && *(_WORD *)(v24 + 18) >= v5 )
          break;
LABEL_27:
        --v22;
        v24 -= 24;
        *(_DWORD *)(a1 + 2792) = v22;
      }
      while ( v22 );
    }
    *(_WORD *)(a1 + 92) = v5 - 1;
  }
LABEL_3:
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v6, (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 25 )
  {
LABEL_14:
    v18 = sub_1478A90(a1);
    v8 = sub_19E4C10(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), (v18 << 32) | v27, ptr, (unsigned int)v33);
  }
  else
  {
    v26 = v34;
    while ( 1 )
    {
      v7 = *(_BYTE *)(a1 + 2040);
      *(_BYTE *)(a1 + 2040) = 1;
      v8 = sub_14BDAD0(a1, 0, a3);
      if ( v8 == 1 )
      {
        LOWORD(v31[0]) = 25;
        sub_15680D0(a1, v31, 1, 1);
        *(_BYTE *)(a1 + 2040) = v7;
        goto LABEL_15;
      }
      *(_BYTE *)(a1 + 2040) = v7;
      if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, 0) || (v9 = sub_14BDAD0(a1, 0, a3), v9 == 1) )
      {
        LOWORD(v31[0]) = 25;
        v8 = 1;
        sub_15680D0(a1, v31, 1, 1);
        goto LABEL_15;
      }
      v10 = *(__int64 **)(a1 + 8);
      v11 = 0;
      if ( (*(_BYTE *)(v10[7] + 1) & 8) != 0 && *(_WORD *)(a1 + 32) == 27 )
      {
        v21 = *(_DWORD *)(a1 + 16);
        v25 = v9;
        *(_DWORD *)(a1 + 40) = v21;
        sub_14634E0(v10, (int *)(a1 + 16));
        v11 = *(_DWORD *)(a1 + 40);
        v9 = v25;
      }
      v25 = v9;
      v12 = ptr;
      v29 = v11;
      v13 = (unsigned int)v33 + 1LL;
      v30 = 0;
      a3 = _mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v25), (__m128i)xmmword_23AA750);
      v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v33);
      v15 = &v28;
      v28 = a3;
      if ( v13 > HIDWORD(v33) )
      {
        if ( ptr > &v28 || v14 <= &v28 )
        {
          sub_2237220(&ptr, v26, v13, 24);
          v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v33);
          v15 = &v28;
        }
        else
        {
          sub_2237220(&ptr, v26, v13, 24);
          v15 = (__m128i *)((char *)ptr + (char *)&v28 - v12);
          v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v33);
        }
      }
      *v14 = _mm_loadu_si128(v15);
      v16 = v15[1].m128i_i64[0];
      LODWORD(v33) = v33 + 1;
      v14[1].m128i_i64[0] = v16;
      v17 = *(_WORD *)(a1 + 32);
      if ( v17 != 66 )
        break;
      v20 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v20, (int *)(a1 + 16));
      if ( *(_WORD *)(a1 + 32) == 25 )
        goto LABEL_14;
    }
    if ( v17 == 25 )
      goto LABEL_14;
    v8 = 1;
    sub_1564840(v31, a1, a1 + 16, 17);
    sub_AE9DF0(v31, 25, 4u);
    sub_AE9DF0(v31, 66, 4u);
    sub_AEA040((__int64)v31);
  }
LABEL_15:
  if ( ptr != v34 )
    free(ptr);
  return v8;
}
