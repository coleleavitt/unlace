/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408C60
// Address: 0x00408C60

//----- (00408C60) --------------------------------------------------------
int __thiscall sub_408C60(int this, int a2, unsigned __int8 *a3)
{
  int **v6; // eax
  int *v7; // ecx
  int **v8; // esi
  unsigned int v9; // ebx
  int v10; // ecx
  float v11; // xmm3_4
  __m128 v12; // xmm2
  __m128i v13; // xmm0
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int *v16; // edx
  int *v17; // ebx
  int v18; // eax
  int v19; // ecx
  int *v20; // edi
  int **v21; // esi
  double v22; // [esp+18h] [ebp-1Ch] BYREF
  int **v23; // [esp+20h] [ebp-14h]
  int **v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+30h] [ebp-4h]
  int v26; // [esp+40h] [ebp+Ch]

  v26 = 16777619 * (a3[3] ^ (16777619 * (a3[2] ^ (16777619 * (a3[1] ^ (16777619 * (*a3 ^ 0x811C9DC5)))))));
  sub_408B50((int **)this, (int **)&v22, a3, v26);
  if ( HIDWORD(v22) )
  {
    *(_DWORD *)a2 = HIDWORD(v22);
    *(_BYTE *)(a2 + 4) = 0;
    return a2;
  }
  if ( *(_DWORD *)(this + 8) == 0xFFFFFFF )
    sub_4627A2((int)"unordered_map/set too long");
  v23 = (int **)(this + 4);
  v25 = 0;
  v24 = nullptr;
  v6 = (int **)sub_4627C2(0x10u);
  v7 = *(int **)a3;
  v8 = v6;
  v24 = v6;
  v6[2] = v7;
  v6[3] = nullptr;
  v9 = *(_DWORD *)(this + 28);
  v10 = *(_DWORD *)(this + 8) + 1;
  v11 = *(float *)this;
  v25 = 1;
  v12 = _mm_cvtpd_ps((__m128d)COERCE_UNSIGNED_INT64((double)(unsigned int)v10));
  if ( (float)(v12.m128_f32[0] / (float)v9) <= v11 )
  {
    v16 = (int *)LODWORD(v22);
  }
  else
  {
    v12.m128_f32[0] = v12.m128_f32[0] / v11;
    v13 = (__m128i)_mm_cvtps_pd(v12);
    v22 = *(double *)v13.m128i_i64;
    v22 = sub_468340(v13);
    v14 = sub_462B40((__m128i)_mm_cvtpd_ps((__m128d)*(unsigned __int64 *)&v22));
    v15 = 8;
    if ( v14 > 8 )
      v15 = v14;
    if ( v9 < v15 )
    {
      if ( v9 >= 0x200 || (v9 *= 8, v9 < v15) )
        v9 = v15;
    }
    sub_40BDA0((int *)this, v9);
    v16 = *sub_408B50((int **)this, (int **)&v22, v8 + 2, v26);
  }
  v17 = (int *)v16[1];
  ++*(_DWORD *)(this + 8);
  *v8 = v16;
  v8[1] = v17;
  *v17 = (int)v8;
  v16[1] = (int)v8;
  v18 = v26 & *(_DWORD *)(this + 24);
  v19 = *(_DWORD *)(this + 12);
  v20 = *(int **)(v19 + 8 * v18);
  v21 = v24;
  if ( v20 == *v23 )
  {
    *(_DWORD *)(v19 + 8 * v18) = v24;
LABEL_18:
    *(_DWORD *)(v19 + 8 * v18 + 4) = v21;
    goto LABEL_19;
  }
  if ( v20 == v16 )
  {
    *(_DWORD *)(v19 + 8 * v18) = v24;
  }
  else if ( *(int **)(v19 + 8 * v18 + 4) == v17 )
  {
    goto LABEL_18;
  }
LABEL_19:
  *(_DWORD *)a2 = v21;
  *(_BYTE *)(a2 + 4) = 1;
  return a2;
}
