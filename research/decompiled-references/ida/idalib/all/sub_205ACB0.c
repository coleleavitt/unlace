__int64 __fastcall sub_205ACB0(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax
  char v3; // bp
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  __int64 i; // r13
  __int64 v9; // r15
  __m128i v10; // xmm2
  __int64 v11; // rax
  __m128i v12; // xmm1
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned int v15; // ebp
  int v17; // eax
  int v18; // eax
  __int16 v19; // [rsp+0h] [rbp-288h]
  __m128i v20; // [rsp+8h] [rbp-280h] BYREF
  __m128i v21; // [rsp+18h] [rbp-270h] BYREF
  __int64 v22; // [rsp+28h] [rbp-260h]
  __int64 v23; // [rsp+30h] [rbp-258h] BYREF
  int v24; // [rsp+38h] [rbp-250h]
  __int64 v25; // [rsp+40h] [rbp-248h]
  int v26; // [rsp+48h] [rbp-240h]
  char v27; // [rsp+50h] [rbp-238h]
  __int64 v28; // [rsp+60h] [rbp-228h]
  __int16 v29; // [rsp+68h] [rbp-220h]
  __m128i v30; // [rsp+70h] [rbp-218h]
  __m128i v31; // [rsp+80h] [rbp-208h]
  __int64 v32; // [rsp+90h] [rbp-1F8h]
  __int64 v33; // [rsp+98h] [rbp-1F0h] BYREF
  int v34; // [rsp+A0h] [rbp-1E8h]
  __int64 v35; // [rsp+A8h] [rbp-1E0h]
  int v36; // [rsp+B0h] [rbp-1D8h]
  char v37; // [rsp+B8h] [rbp-1D0h]
  _WORD v38[13]; // [rsp+C0h] [rbp-1C8h] BYREF
  __int128 v39; // [rsp+DAh] [rbp-1AEh]
  __int128 v40; // [rsp+EAh] [rbp-19Eh]
  int v41; // [rsp+FAh] [rbp-18Eh]
  __int16 v42; // [rsp+FEh] [rbp-18Ah]
  __int128 v43; // [rsp+100h] [rbp-188h]
  __int128 v44; // [rsp+110h] [rbp-178h]
  __int128 v45; // [rsp+120h] [rbp-168h]
  __m128i si128; // [rsp+130h] [rbp-158h]
  void *ptr; // [rsp+140h] [rbp-148h] BYREF
  __int64 v48; // [rsp+148h] [rbp-140h]
  _BYTE v49[312]; // [rsp+150h] [rbp-138h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v20 = 0u;
  LOBYTE(v19) = v1;
  ptr = v49;
  v48 = 0x2000000000LL;
  HIBYTE(v19) = *(_BYTE *)(a1 + 1) >> 1;
  if ( v1 == 63 )
  {
    v21.m128i_i64[0] = *(_QWORD *)(a1 + 24);
    v21.m128i_i64[1] = *(unsigned int *)(a1 + 32);
    goto LABEL_23;
  }
  v21 = 0u;
  if ( v1 != 34 )
  {
LABEL_23:
    v22 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v27 = 0;
    goto LABEL_5;
  }
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 72);
  v27 = 0;
  v4 = 0;
  v22 = v2;
  v5 = 0;
  if ( v3 )
  {
    sub_20150B0((__int64)&v23, a1 + 40);
    v4 = (unsigned int)v48;
    v27 = 1;
    v5 = (unsigned int)v48;
  }
LABEL_5:
  v6 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
  if ( v6 )
  {
    v7 = v6 - 1;
    for ( i = 0; ; ++i )
    {
      v9 = *(_QWORD *)(a1 + 32 * (i - v6));
      if ( v5 + 1 > (unsigned __int64)HIDWORD(v48) )
      {
        sub_2237220(&ptr, v49, v5 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v48) = v9;
      }
      else
      {
        *((_QWORD *)ptr + v5) = v9;
      }
      v5 = (unsigned int)(v48 + 1);
      LODWORD(v48) = v48 + 1;
      if ( v7 == i )
        break;
      v6 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
    }
    v3 = v27;
    v4 = (unsigned int)v5;
  }
  v20.m128i_i64[1] = v4;
  v10 = _mm_loadu_si128(&v21);
  v37 = 0;
  v20.m128i_i64[0] = (__int64)ptr;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = _mm_loadu_si128(&v20);
  v31 = v10;
  v28 = v11;
  v30 = v12;
  v29 = v19;
  v32 = v22;
  if ( v3 )
  {
    v17 = v24;
    v37 = 1;
    v24 = 0;
    v34 = v17;
    v33 = v23;
    v18 = v26;
    v26 = 0;
    v36 = v18;
    v35 = v25;
  }
  v13 = sub_2053DD0(v31.m128i_i64[0], v31.m128i_i64[0] + 4 * v31.m128i_i64[1]);
  v14 = sub_2053D00(v30.m128i_i64[0], v30.m128i_i64[0] + 8 * v30.m128i_i64[1]);
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v38[0] = v29;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  *(_QWORD *)&v38[1] = v14;
  *(_QWORD *)&v38[5] = v13;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v41 = 0;
  *(_QWORD *)&v38[9] = v32;
  *(_DWORD *)v38 = sub_2012F20(v38, 0x1Au, 0xFF51AFD7ED558CCDLL);
  v15 = sub_2050F80(v28, (int *)v38);
  if ( v37 )
    sub_200ED00((__int64)&v33);
  if ( v27 )
    sub_200ED00((__int64)&v23);
  if ( ptr != v49 )
    free(ptr);
  return v15;
}
