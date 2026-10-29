__int64 __fastcall sub_2018390(__int64 a1, _DWORD **a2, __int64 *a3, __int64 **a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 result; // rax
  int v12; // eax
  const __m128i *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r15
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int32 v23; // eax
  __m128i v24; // xmm3
  __int64 v25; // rdi
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  __m128i *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  const __m128i *v31; // rsi
  const __m128i *v32; // r11
  __m128i v33; // xmm0
  __int32 v34; // eax
  __m128i v35; // xmm1
  int v36; // ecx
  _DWORD *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-B0h]
  char v39; // [rsp+17h] [rbp-A1h]
  __int64 v40; // [rsp+28h] [rbp-90h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  __int64 v42; // [rsp+30h] [rbp-88h]
  int v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v46[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+70h] [rbp-48h]
  int v48; // [rsp+78h] [rbp-40h]
  char v49; // [rsp+7Ch] [rbp-3Ch]

  if ( *(_QWORD *)(a1 + 120) )
  {
    v7 = sub_227D6D0(a1, a2);
    v46[0] = "cl::location(x) specified more than once!";
    LOWORD(v47) = 259;
    sub_22116C0(a1, v46, 0, 0, v7);
  }
  else
  {
    v37 = *a2;
    *(_QWORD *)(a1 + 120) = *a2;
    LODWORD(v37) = *v37;
    *(_BYTE *)(a1 + 140) = 1;
    *(_DWORD *)(a1 + 136) = (_DWORD)v37;
  }
  v8 = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  v9 = *((unsigned int *)a4 + 2);
  *(_QWORD *)(a1 + 32) = v8;
  v10 = *a4;
  result = (__int64)&(*a4)[5 * v9];
  v38 = result;
  if ( *a4 != (__int64 *)result )
  {
    do
    {
      v12 = *((_DWORD *)v10 + 4);
      v13 = (const __m128i *)v46;
      v14 = v10[4];
      v15 = *v10;
      v16 = v10[1];
      v17 = *(unsigned int *)(a1 + 172);
      v46[2] = v10[3];
      v18 = *(unsigned int *)(a1 + 168);
      v46[3] = v14;
      v48 = v12;
      v19 = *(_QWORD *)(a1 + 160);
      LODWORD(v20) = v18;
      v21 = v18 + 1;
      v46[0] = v15;
      v46[1] = v16;
      v47 = off_2C71E50;
      v22 = v19 + 48 * v18;
      v49 = 1;
      if ( v21 > v17 )
      {
        v26 = -1;
        v39 = 0;
        if ( v19 <= (unsigned __int64)v46 && v22 > (unsigned __int64)v46 )
        {
          v39 = 1;
          v26 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v46 - v19) >> 4);
        }
        v42 = v15;
        v27 = sub_2237400(a1 + 160, a1 + 176, v21, 48, &v45);
        v28 = *(__m128i **)(a1 + 160);
        v29 = v27;
        v15 = v42;
        v20 = *(unsigned int *)(a1 + 168);
        v30 = 48 * v20;
        v31 = v28;
        v32 = &v28[3 * v20];
        if ( v28 != v32 )
        {
          v40 = v27;
          do
          {
            v33 = _mm_loadu_si128(v31);
            v34 = v31[2].m128i_i32[2];
            v31 += 3;
            v29 += 48;
            *(__m128i *)(v29 - 48) = v33;
            v35 = _mm_loadu_si128(v31 - 2);
            *(_DWORD *)(v29 - 8) = v34;
            LOBYTE(v34) = v31[-1].m128i_i8[12];
            *(__m128i *)(v29 - 32) = v35;
            *(_BYTE *)(v29 - 4) = v34;
            *(_QWORD *)(v29 - 16) = off_2C71E50;
          }
          while ( v32 != v31 );
          v27 = v40;
        }
        v36 = v45;
        if ( (__m128i *)(a1 + 176) != v28 )
        {
          v44 = v42;
          v43 = v45;
          v41 = v27;
          free(v28);
          v15 = v44;
          v36 = v43;
          v27 = v41;
          v20 = *(unsigned int *)(a1 + 168);
          v30 = 48 * v20;
        }
        *(_DWORD *)(a1 + 172) = v36;
        v13 = (const __m128i *)v46;
        v22 = v27 + v30;
        *(_QWORD *)(a1 + 160) = v27;
        if ( v39 )
          v13 = (const __m128i *)(v27 + 48 * v26);
      }
      v23 = v13[2].m128i_i32[2];
      v10 += 5;
      *(__m128i *)v22 = _mm_loadu_si128(v13);
      v24 = _mm_loadu_si128(v13 + 1);
      *(_DWORD *)(v22 + 40) = v23;
      LOBYTE(v23) = v13[2].m128i_i8[12];
      *(__m128i *)(v22 + 16) = v24;
      *(_BYTE *)(v22 + 44) = v23;
      *(_QWORD *)(v22 + 32) = off_2C71E50;
      v25 = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 168) = v20 + 1;
      result = sub_2216D40(v25, v15, v16);
    }
    while ( (__int64 *)v38 != v10 );
  }
  return result;
}
