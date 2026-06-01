__m128i *__fastcall sub_FC5780(__m128i *a1, int a2, const void *a3, size_t a4)
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
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // [rsp+8h] [rbp-240h]
  __int64 v20; // [rsp+8h] [rbp-240h]
  char *v21; // [rsp+10h] [rbp-238h] BYREF
  __int16 v22; // [rsp+30h] [rbp-218h]
  __int64 v23[2]; // [rsp+40h] [rbp-208h] BYREF
  char v24; // [rsp+50h] [rbp-1F8h]
  __int16 v25; // [rsp+60h] [rbp-1E8h]
  __int64 v26; // [rsp+70h] [rbp-1D8h] BYREF
  _WORD v27[16]; // [rsp+78h] [rbp-1D0h] BYREF
  char v28; // [rsp+98h] [rbp-1B0h]
  __m128i v29[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int16 v30; // [rsp+C0h] [rbp-188h]
  __int64 v31; // [rsp+C8h] [rbp-180h]
  unsigned int v32; // [rsp+D8h] [rbp-170h]
  char v33; // [rsp+E0h] [rbp-168h]
  _BYTE ptr[24]; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v35[320]; // [rsp+108h] [rbp-140h] BYREF

  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(_QWORD *)ptr = v35;
  if ( a4 > 0x100 )
  {
    sub_2236E10(ptr, v35, a4, 1);
    v9 = (_BYTE *)(*(_QWORD *)&ptr[8] + *(_QWORD *)ptr);
  }
  else
  {
    v7 = a4;
    if ( !a4 )
      goto LABEL_3;
    v9 = v35;
  }
  memcpy(v9, a3, a4);
  v7 = a4 + *(_QWORD *)&ptr[8];
LABEL_3:
  *(_QWORD *)&ptr[8] = v7;
  v25 = 257;
  v30 = 257;
  v27[12] = 257;
  v22 = 259;
  v21 = "SDKSettings.json";
  sub_228A3B0(ptr, &v21, v23, &v26, v29);
  v30 = 261;
  v29[0] = *(__m128i *)ptr;
  sub_225D6F0((unsigned int)v23, a2, (unsigned int)v29, -1, 1, 0, 1);
  if ( (v24 & 1) != 0 )
  {
    a1[4].m128i_i8[8] &= ~1u;
    a1[4].m128i_i8[0] = 0;
  }
  else
  {
    sub_222E000(&v26, *(_QWORD *)(v23[0] + 8), *(_QWORD *)(v23[0] + 16) - *(_QWORD *)(v23[0] + 8));
    if ( (v28 & 1) != 0 )
    {
      v15 = v26;
      a1[4].m128i_i8[8] |= 1u;
      v26 = 0;
      a1->m128i_i64[0] = v15;
    }
    else if ( (_WORD)v26 == 7 && (sub_FC2C40(v29, (__int64)v27), v33) )
    {
      a1[4].m128i_i8[8] &= ~1u;
      sub_FC2B40(a1, v29);
      if ( v33 )
      {
        v16 = v31;
        v17 = 104LL * v32;
        if ( v32 )
        {
          v18 = v31 + 104LL * v32;
          do
          {
            if ( *(_QWORD *)v16 != -2 && *(_QWORD *)v16 != -1 && *(_BYTE *)(v16 + 96) )
              operator delete(*(_QWORD *)(v16 + 72), 32LL * *(unsigned int *)(v16 + 88), 4);
            v16 += 104;
          }
          while ( v18 != v16 );
          v16 = v31;
          v17 = 104LL * v32;
        }
        operator delete(v16, v17, 8);
      }
    }
    else
    {
      v10 = sub_2220490();
      v19 = v11;
      v12 = v10;
      v29[0].m128i_i64[0] = (__int64)"invalid SDKSettings.json";
      v30 = 259;
      v13 = operator new(0x40u);
      v14 = v19;
      v20 = v13;
      sub_2220590(v13, v29, v12, v14);
      a1[4].m128i_i8[8] |= 1u;
      a1->m128i_i64[0] = v20;
    }
    sub_FC2B10(&v26);
  }
  sub_FC2AF0(v23);
  if ( *(_BYTE **)ptr != v35 )
    free(*(void **)ptr);
  return a1;
}
