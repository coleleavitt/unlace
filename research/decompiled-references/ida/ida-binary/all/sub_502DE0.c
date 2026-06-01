__int64 __fastcall sub_502DE0(int **a1, int a2, int a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rsi
  unsigned __int64 i; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm0
  char v23; // r10
  __int64 v24; // rdi
  int *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // [rsp+8h] [rbp-130h]
  __int64 v30; // [rsp+28h] [rbp-110h] BYREF
  __m128i v31; // [rsp+30h] [rbp-108h]
  char v32; // [rsp+40h] [rbp-F8h]
  __m128i si128; // [rsp+44h] [rbp-F4h]
  int v34; // [rsp+54h] [rbp-E4h]
  __m128i v35; // [rsp+58h] [rbp-E0h]
  void *ptr[2]; // [rsp+68h] [rbp-D0h]
  __int64 v37; // [rsp+78h] [rbp-C0h]
  char v38; // [rsp+80h] [rbp-B8h]
  __int64 v39; // [rsp+84h] [rbp-B4h]
  _QWORD v40[21]; // [rsp+90h] [rbp-A8h] BYREF

  v40[13] = __readfsqword(0x28u);
  if ( (__int64)a1[2] <= 0 )
    return 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    if ( !*a1 || **a1 > 1 )
      sub_5025F0((__int64)a1, 0, 0, 0, a5, a6);
    v11 = *(_QWORD *)&a1[1][2 * v10];
    v12 = *(_QWORD *)(a4 + 16);
    if ( v12 > 0 )
    {
      v13 = *(_QWORD *)(a4 + 8);
      v14 = v13 + 8 * v12;
      v15 = v13;
      while ( 1 )
      {
        v16 = v15;
        if ( v14 == v15 )
          break;
        v15 += 8;
        if ( v11 == *(_QWORD *)(v15 - 8) )
        {
          if ( v16 - v13 != -8 )
            goto LABEL_11;
          break;
        }
      }
    }
    a6 = *(_QWORD *)(v11 + 16);
    if ( (int)a6 > 0 )
      break;
LABEL_11:
    v10 = ++v9;
    if ( v9 >= (__int64)a1[2] )
      return 0;
  }
  v18 = (unsigned int)(a6 - 1);
  for ( i = 0; ; ++i )
  {
    memset(v40, 0, 0x60u);
    LODWORD(v40[4]) = -1;
    HIDWORD(v40[10]) = -1;
    if ( i >= a6 )
    {
      v32 = 0;
      v20 = v40;
      v34 = 0;
      v37 = 0;
      v35 = _mm_loadu_si128((const __m128i *)&v40[5]);
      v31 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DDDB0);
      *(_OWORD *)ptr = 0;
    }
    else
    {
      v20 = (_QWORD *)(*(_QWORD *)(v11 + 8) + 96 * i);
      v22 = _mm_loadu_si128((const __m128i *)(v20 + 7));
      v23 = *((_BYTE *)v20 + 16);
      a6 = *((unsigned int *)v20 + 9);
      v24 = v20[9];
      si128 = _mm_loadu_si128((const __m128i *)((char *)v20 + 20));
      v32 = v23;
      v34 = a6;
      v37 = v24;
      v31 = _mm_loadu_si128((const __m128i *)v20);
      v35 = _mm_loadu_si128((const __m128i *)(v20 + 5));
      *(__m128i *)ptr = v22;
      if ( v22.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v22.m128i_i64[0], 1u);
    }
    v21 = *((unsigned __int8 *)v20 + 80);
    v38 = *((_BYTE *)v20 + 80);
    v39 = *(_QWORD *)((char *)v20 + 84);
    if ( v31.m128i_i32[1] == a3 && si128.m128i_i32[0] == a2 )
      break;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v28 = i;
      free(ptr[0]);
      i = v28;
    }
    if ( i == v18 )
      goto LABEL_11;
    a6 = *(_QWORD *)(v11 + 16);
  }
  v25 = *(int **)(a4 + 16);
  v30 = v11;
  sub_5029D0((int **)a4, v25, &v30, v21, a5, a6);
  if ( !*(_QWORD *)a4 || **(int **)a4 > 1 )
    sub_5025F0(a4, 0, 0, 0, v26, v27);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11;
}
