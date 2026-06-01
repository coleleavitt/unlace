/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430620
// Address: 0x00430620

//----- (00430620) --------------------------------------------------------
int __thiscall sub_430620(int *this, int a2, _DWORD *a3)
{
  int *v3; // edi
  unsigned int v4; // ecx
  int v5; // esi
  int v6; // eax
  char *v8; // edi
  int *v9; // ecx
  __m128d v10; // xmm0
  __m128 v11; // xmm2
  __m128i v12; // xmm0
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int **v16; // eax
  int *v17; // edx
  _DWORD *v18; // eax
  int v19; // eax
  int v20; // edx
  int *v21; // ecx
  int **v22; // [esp+14h] [ebp-20h]
  double v23; // [esp+1Ch] [ebp-18h] BYREF
  int *v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+30h] [ebp-4h]
  unsigned int v26; // [esp+40h] [ebp+Ch]
  int *v27; // [esp+40h] [ebp+Ch]

  v3 = this;
  v24 = this;
  HIDWORD(v23) = a3;
  if ( a3[5] > 0xFu )
    HIDWORD(v23) = *a3;
  v4 = 0;
  v5 = -2128831035;
  if ( a3[4] )
  {
    do
    {
      v6 = *(unsigned __int8 *)(HIDWORD(v23) + v4++);
      v5 = 16777619 * (v5 ^ v6);
    }
    while ( v4 < a3[4] );
    v3 = v24;
  }
  sub_430150((int **)v3, (int **)&v23, a3, v5);
  if ( HIDWORD(v23) )
  {
    *(_DWORD *)a2 = HIDWORD(v23);
    *(_BYTE *)(a2 + 4) = 0;
    return a2;
  }
  if ( v3[2] == 119304647 )
    sub_4627A2((int)"unordered_map/set too long");
  v22 = (int **)(v3 + 1);
  v25 = 0;
  v8 = (char *)sub_4627C2(0x24u);
  *(_OWORD *)(v8 + 8) = 0;
  *((_DWORD *)v8 + 6) = 0;
  *((_DWORD *)v8 + 7) = 0;
  *(_OWORD *)(v8 + 8) = *(_OWORD *)a3;
  *((_QWORD *)v8 + 3) = *((_QWORD *)a3 + 2);
  a3[4] = 0;
  a3[5] = 15;
  *(_BYTE *)a3 = 0;
  *((_WORD *)v8 + 16) = 0;
  v9 = v24;
  v25 = 1;
  v10 = (__m128d)COERCE_UNSIGNED_INT64((double)(v24[2] + 1));
  v10.m128d_f64[0] = (double)(unsigned int)(v24[2] + 1);
  v26 = v24[7];
  v11 = _mm_cvtpd_ps(v10);
  if ( (float)(v11.m128_f32[0] / (float)v26) <= *(float *)v24 )
  {
    v17 = (int *)LODWORD(v23);
  }
  else
  {
    v11.m128_f32[0] = v11.m128_f32[0] / *(float *)v24;
    v12 = (__m128i)_mm_cvtps_pd(v11);
    v23 = *(double *)v12.m128i_i64;
    v23 = sub_468340(v12);
    v13 = sub_462B40((__m128i)_mm_cvtpd_ps((__m128d)*(unsigned __int64 *)&v23));
    v14 = 8;
    if ( v13 > 8 )
      v14 = v13;
    v15 = v26;
    if ( v26 < v14 )
    {
      if ( v26 >= 0x200 || (v15 = 8 * v26, 8 * v26 < v14) )
        v15 = v14;
    }
    sub_431260(v24, v15);
    v16 = sub_430150((int **)v24, (int **)&v23, (_DWORD *)v8 + 2, v5);
    v9 = v24;
    v17 = *v16;
    HIDWORD(v23) = v16[1];
  }
  v18 = (_DWORD *)v17[1];
  ++v9[2];
  *((_DWORD *)v8 + 1) = v18;
  *(_DWORD *)v8 = v17;
  *v18 = v8;
  v17[1] = (int)v8;
  HIDWORD(v23) = v18;
  v19 = v5 & v9[6];
  v27 = v17;
  v20 = v9[3];
  v21 = *(int **)(v20 + 8 * v19);
  if ( v21 == *v22 )
  {
    *(_DWORD *)(v20 + 8 * v19) = v8;
LABEL_23:
    *(_DWORD *)(v20 + 8 * v19 + 4) = v8;
    goto LABEL_24;
  }
  if ( v21 == v27 )
  {
    *(_DWORD *)(v20 + 8 * v19) = v8;
  }
  else if ( *(_DWORD *)(v20 + 8 * v19 + 4) == HIDWORD(v23) )
  {
    goto LABEL_23;
  }
LABEL_24:
  *(_DWORD *)a2 = v8;
  *(_BYTE *)(a2 + 4) = 1;
  return a2;
}
