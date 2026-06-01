__m128i *__fastcall sub_FA1A40(__m128i *a1, int a2, const void *a3, size_t a4)
{
  size_t v7; // rax
  _BYTE *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // [rsp+8h] [rbp-240h]
  __int64 v19; // [rsp+8h] [rbp-240h]
  char *v20; // [rsp+10h] [rbp-238h] BYREF
  __int16 v21; // [rsp+30h] [rbp-218h]
  __int64 v22[2]; // [rsp+40h] [rbp-208h] BYREF
  char v23; // [rsp+50h] [rbp-1F8h]
  __int16 v24; // [rsp+60h] [rbp-1E8h]
  __int64 v25; // [rsp+70h] [rbp-1D8h] BYREF
  _WORD v26[16]; // [rsp+78h] [rbp-1D0h] BYREF
  char v27; // [rsp+98h] [rbp-1B0h]
  __m128i v28[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int16 v29; // [rsp+C0h] [rbp-188h]
  __int64 v30; // [rsp+C8h] [rbp-180h]
  unsigned int v31; // [rsp+D8h] [rbp-170h]
  char v32; // [rsp+E0h] [rbp-168h]
  _BYTE ptr[24]; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v34[320]; // [rsp+108h] [rbp-140h] BYREF

  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  *(_QWORD *)ptr = v34;
  if ( a4 > 0x100 )
  {
    sub_22130D0(ptr, v34, a4, 1);
    v9 = (_BYTE *)(*(_QWORD *)&ptr[8] + *(_QWORD *)ptr);
  }
  else
  {
    v7 = a4;
    if ( !a4 )
      goto LABEL_3;
    v9 = v34;
  }
  memcpy(v9, a3, a4);
  v7 = a4 + *(_QWORD *)&ptr[8];
LABEL_3:
  *(_QWORD *)&ptr[8] = v7;
  v24 = 257;
  v29 = 257;
  v26[12] = 257;
  v21 = 259;
  v20 = "SDKSettings.json";
  sub_2266670(ptr, &v20, v22, &v25, v28);
  v29 = 261;
  v28[0] = *(__m128i *)ptr;
  sub_22399B0((unsigned int)v22, a2, (unsigned int)v28, -1, 1, 0, 1);
  if ( (v23 & 1) != 0 )
  {
    a1[4].m128i_i8[8] &= ~1u;
    a1[4].m128i_i8[0] = 0;
  }
  else
  {
    sub_220A2C0(&v25, *(_QWORD *)(v22[0] + 8), *(_QWORD *)(v22[0] + 16) - *(_QWORD *)(v22[0] + 8));
    if ( (v27 & 1) != 0 )
    {
      v15 = v25;
      a1[4].m128i_i8[8] |= 1u;
      v25 = 0;
      a1->m128i_i64[0] = v15;
    }
    else if ( (_WORD)v25 == 7 && (sub_F9EF00(v28, (__int64)v26), v32) )
    {
      a1[4].m128i_i8[8] &= ~1u;
      sub_F9EE00(a1, v28);
      if ( v32 )
      {
        v16 = v30;
        if ( v31 )
        {
          v17 = v30 + 104LL * v31;
          do
          {
            if ( *(_QWORD *)v16 != -2 && *(_QWORD *)v16 != -1 && *(_BYTE *)(v16 + 96) )
              operator delete();
            v16 += 104;
          }
          while ( v17 != v16 );
        }
        operator delete();
      }
    }
    else
    {
      v10 = sub_21FC750();
      v18 = v11;
      v12 = v10;
      v28[0].m128i_i64[0] = (__int64)"invalid SDKSettings.json";
      v29 = 259;
      v13 = operator new(0x40u);
      v14 = v18;
      v19 = v13;
      sub_21FC850(v13, v28, v12, v14);
      a1[4].m128i_i8[8] |= 1u;
      a1->m128i_i64[0] = v19;
    }
    sub_F9EDD0(&v25);
  }
  sub_F9EDB0(v22);
  if ( *(_BYTE **)ptr != v34 )
    free(*(void **)ptr);
  return a1;
}

