void __fastcall sub_1401650(__int64 a1, __int64 *a2, unsigned int *a3, _BYTE *a4)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // r12
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  bool v17; // zf
  __int64 v18; // rax
  __int64 *v19; // [rsp+10h] [rbp-198h]
  __int64 *v20; // [rsp+10h] [rbp-198h]
  __int64 v21; // [rsp+28h] [rbp-180h] BYREF
  void *v22; // [rsp+30h] [rbp-178h] BYREF
  signed __int64 v23; // [rsp+38h] [rbp-170h]
  _BYTE v24[16]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE *v25[2]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v26; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-138h]
  __m128i v28; // [rsp+80h] [rbp-128h] BYREF
  char v29; // [rsp+90h] [rbp-118h] BYREF
  _QWORD *v30; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD v31[4]; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE ptr[24]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v33[192]; // [rsp+E8h] [rbp-C0h] BYREF

  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)ptr = v33;
  v6 = sub_13F8890(a1, a2, (__int64)a3, (__int64 *)ptr, a4);
  if ( v6 )
  {
    v7 = (unsigned __int64)v6;
    if ( !*((_BYTE *)a3 + 40) )
    {
      v8 = *((_BYTE **)a3 + 1);
      v9 = *((_QWORD *)a3 + 2);
      v22 = v24;
      sub_13F27F0(&v22, v8, (__int64)&v8[v9]);
      v25[0] = &v26;
      sub_13F28B0(v25, *(_BYTE **)ptr, *(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
      v10 = *a3;
      v27 = v7;
      v11 = dword_2614740[v10];
      v28.m128i_i64[0] = (__int64)&v29;
      sub_13F27F0(&v28, v22, (__int64)v22 + v23);
      v30 = v31;
      sub_13F27F0(&v30, v25[0], (__int64)&v25[0][(unsigned __int64)v25[1]]);
      v31[2] = v27;
      sub_1400A10(a1, (__int64)a2, &v28, v11, 0);
      sub_13F29E0((__int64)&v28);
      sub_13F29E0((__int64)&v22);
      goto LABEL_4;
    }
    v19 = (__int64 *)(a1 + 440);
    v21 = *(_QWORD *)(v6[2] + 8LL);
    if ( (unsigned __int8)sub_13F78D0((__int64 *)(a1 + 440), &v21, &v22) )
    {
      if ( *((_QWORD *)v22 + 1) )
      {
        v20 = *((__int64 **)v22 + 1);
        sub_FC70B0((__int64)&v28, *(_QWORD *)(a1 + 8), a3[1], 1094);
        sub_FEEE60((__int64)&v22, v20, 0);
        sub_AEC220((unsigned __int8 **)&v28, v22, v23);
        if ( v22 != v24 )
          operator delete(v22);
        sub_AEA040((__int64)&v28);
        goto LABEL_4;
      }
LABEL_24:
      LOWORD(v30) = 261;
      LOWORD(v25[0]) = 260;
      v22 = a3 + 2;
      v28 = *(__m128i *)ptr;
      sub_13FE8E0(a1, (unsigned __int64)a2, v7, (__int64)&v22, (__int64)&v28);
      goto LABEL_4;
    }
    v13 = *(unsigned int *)(a1 + 456);
    v14 = v22;
    v15 = *(_DWORD *)(a1 + 448) + 1;
    v16 = (unsigned int)(4 * v15);
    v28.m128i_i64[0] = (__int64)v22;
    if ( (unsigned int)v16 >= 3 * (int)v13 )
    {
      sub_13FDC70((__int64)v19, 2 * v13, (__int64)v22, v13, v16, v12);
    }
    else
    {
      if ( (int)v13 - *(_DWORD *)(a1 + 452) - v15 > (unsigned int)v13 >> 3 )
      {
LABEL_21:
        v17 = *v14 == -4096;
        *(_DWORD *)(a1 + 448) = v15;
        if ( !v17 )
          --*(_DWORD *)(a1 + 452);
        v18 = v21;
        v14[1] = 0;
        *v14 = v18;
        goto LABEL_24;
      }
      sub_13FDC70((__int64)v19, v13, (__int64)v22, v13, v16, v12);
    }
    sub_13F78D0(v19, &v21, &v28);
    v14 = (_QWORD *)v28.m128i_i64[0];
    v15 = *(_DWORD *)(a1 + 448) + 1;
    goto LABEL_21;
  }
  if ( (!*((_BYTE *)a3 + 41) || *((_BYTE *)a3 + 56) || *((_BYTE *)a3 + 72)) && *a3 != 4 )
  {
    sub_13FB960((__int64)(a2 + 88), (unsigned __int64)a3);
    if ( !*((_BYTE *)a3 + 56) && !*((_BYTE *)a3 + 72) )
      sub_FEF280((__int64)a2, 0);
  }
LABEL_4:
  if ( *(_BYTE **)ptr != v33 )
    free(*(void **)ptr);
}
