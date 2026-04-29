unsigned __int64 __fastcall sub_3EE680(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rdi
  int *v9; // rax
  int v10; // ebp
  unsigned __int8 *v11; // rax
  unsigned int *v12; // rbx
  __int64 v13; // rcx
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i v20; // xmm1
  _QWORD *v21; // rcx
  __int64 v22; // rdi
  __m128i v23; // xmm0
  int v24; // r9d
  __m128i v25; // xmm1
  _QWORD *v26; // rdi
  unsigned __int8 v27; // al
  __m128i v28; // xmm0
  __int64 v29; // rcx
  unsigned int dtype_size; // eax
  int v31; // [rsp+8h] [rbp-B0h]
  int v32; // [rsp+Ch] [rbp-ACh]
  unsigned int *v33; // [rsp+10h] [rbp-A8h]
  int v34; // [rsp+18h] [rbp-A0h]
  _DWORD v35[3]; // [rsp+28h] [rbp-90h]
  _DWORD v36[3]; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int8 v37[4]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+44h] [rbp-74h]
  unsigned __int8 v39[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v40[16]; // [rsp+60h] [rbp-58h] BYREF
  char v41; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v6 = 0;
  v35[0] = a3;
  v7 = 0;
  v35[1] = a4;
  v35[2] = a5;
  do
  {
    if ( v35[v6] != -1 && ((dword_40A6A0[v6] & a2) != 0 || (dword_40A6C0[v6] & a2) != 0) )
    {
      v8 = v7++;
      v36[v8] = v6;
    }
    ++v6;
  }
  while ( v6 != 3 );
  if ( v7 <= 0 )
  {
LABEL_23:
    v10 = -1;
  }
  else
  {
    v9 = v36;
    while ( 1 )
    {
      v10 = *v9;
      if ( (unsigned int)*v9 <= 7 && (dword_40A6C0[v10] & a2) != 0 )
        break;
      if ( ++v9 == &v36[v7] )
        goto LABEL_23;
    }
  }
  v11 = v37;
  do
  {
    *((_DWORD *)v11 + 1) = -1;
    v11 += 16;
    *((_WORD *)v11 - 8) = 0;
    *((_WORD *)v11 - 7) = 0;
    *((_QWORD *)v11 - 1) = 0;
  }
  while ( v11 != (unsigned __int8 *)&v41 );
  if ( v10 != -1 )
  {
    v20 = _mm_cvtsi32_si128(v35[v10]);
    v21 = &a1[5 * v10];
    if ( ((*((_BYTE *)v21 + 65) - 2) & 0xFD) != 0 )
    {
      v22 = *((unsigned __int8 *)v21 + 69);
      if ( (_BYTE)v22 == 10 )
      {
        v23 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 80LL));
      }
      else
      {
        v31 = v7;
        v20 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v20));
        v23 = _mm_cvtsi32_si128(get_dtype_size(v22));
        v7 = v31;
      }
    }
    else
    {
      v23 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 84LL));
    }
    v37[0] = 1;
    v38 = _mm_unpacklo_epi32(v23, v20).m128i_u64[0];
  }
  if ( v7 > 0 )
  {
    v12 = v36;
    v13 = 1;
    v14 = &v36[v7];
    do
    {
      while ( 1 )
      {
        v15 = *v12;
        if ( v10 != *v12 && v15 <= 7 && (dword_40A6A0[v15] & a2) != 0 && (int)v13 <= 2 )
          break;
        if ( ++v12 == v14 )
          goto LABEL_21;
      }
      v24 = v13 + 1;
      v25 = _mm_cvtsi32_si128(v35[v15]);
      v26 = &a1[5 * (int)v15];
      if ( ((*((_BYTE *)v26 + 65) - 2) & 0xFD) != 0 )
      {
        v27 = *((_BYTE *)v26 + 69);
        if ( v27 == 10 )
        {
          v28 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 80LL));
        }
        else
        {
          v33 = v14;
          v34 = v13 + 1;
          v32 = v13;
          dtype_size = get_dtype_size(v27);
          v14 = v33;
          v28 = _mm_cvtsi32_si128(dtype_size);
          v24 = v34;
          v13 = v32;
          v25 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v25));
        }
      }
      else
      {
        v28 = _mm_cvtsi32_si128(*(_DWORD *)(a1[104] + 84LL));
      }
      v29 = 16 * v13;
      ++v12;
      v37[v29] = 1;
      *(_QWORD *)&v37[v29 + 4] = _mm_unpacklo_epi32(v28, v25).m128i_u64[0];
      v13 = v24;
    }
    while ( v12 != v14 );
  }
LABEL_21:
  sub_3EBC10((__int64)a1, 62, v39, v40, v37);
  sub_175140((_QWORD *)(a1[1] + 1000LL), a1 + 5, v16, v17, v18);
  sub_1181E0((__int64)v40);
  sub_1181E0((__int64)v39);
  sub_1181E0((__int64)v37);
  return v42 - __readfsqword(0x28u);
}
