__int64 __fastcall sub_17813B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const __m128i *v4; // rbx
  bool v5; // zf
  __int64 v6; // rax
  const __m128i *v7; // rdi
  __int8 v8; // al
  __int16 v9; // ax
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int8 v16; // r14
  __int8 v17; // r15
  bool v18; // bp
  const __m128i *v19; // rdi
  unsigned int v20; // eax
  void *v21; // rdi
  const __m128i *v22; // rax
  __int16 v23; // dx
  __int8 v24; // bp
  unsigned int v26; // eax
  __int8 v27; // dl
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  const __m128i *v32; // [rsp+0h] [rbp-88h]
  __int32 v33; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v36; // [rsp+20h] [rbp-68h]
  __int8 v37; // [rsp+24h] [rbp-64h]
  char v38; // [rsp+28h] [rbp-60h]
  __int16 v39; // [rsp+30h] [rbp-58h]
  __m128i v40; // [rsp+38h] [rbp-50h]
  char v41; // [rsp+48h] [rbp-40h]

  v2 = a2;
  v4 = *(const __m128i **)(*a1 + 744);
  v5 = v4[4].m128i_i8[0] == 0;
  v32 = v4;
  v33 = v4[2].m128i_i32[0];
  v6 = v4[2].m128i_i64[1];
  v38 = 0;
  v34 = v6;
  if ( v5 )
  {
    v7 = v4;
  }
  else
  {
    v36 = v4[3].m128i_u32[2];
    if ( v36 > 0x40 )
    {
      sub_2205510(&v35);
      v7 = *(const __m128i **)(*a1 + 744);
    }
    else
    {
      v7 = v4;
      v35 = v4[3].m128i_i64[0];
    }
    v8 = v4[3].m128i_i8[12];
    v38 = 1;
    v37 = v8;
  }
  v9 = v4[4].m128i_i16[4];
  v10 = _mm_loadu_si128(v4 + 5);
  v41 = 1;
  v11 = *(unsigned int *)(a2 + 4);
  v39 = v9;
  v40 = v10;
  sub_1AA58B0(v7, v11);
  v15 = sub_177B9C0(a1, *(unsigned __int16 **)(v2 + 8), 0, *(double *)v10.m128i_i64, v12, v13, v14);
  if ( v15 == 1 || (v28 = sub_175B800(a1, *(unsigned __int16 **)(v2 + 16)), v28 == 1) )
  {
    v2 = 1;
  }
  else
  {
    v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v30 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v2 + 16) != v29 || *(_QWORD *)(v2 + 8) != v30 )
      v2 = sub_1C3AA30(
             *a1,
             *(_DWORD *)(v2 + 4),
             v30,
             *(_DWORD *)(v2 + 24),
             *(_DWORD *)(v2 + 24),
             v29,
             *(_DWORD *)(v2 + 28));
  }
  if ( v41 )
  {
    v16 = v32[4].m128i_i8[8];
    v17 = v32[5].m128i_i8[12];
    v18 = (v32[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v16 = v39;
    v17 = v40.m128i_i8[12];
    v18 = (v33 & 2) != 0;
  }
  v5 = v32[4].m128i_i8[0] == 0;
  v19 = v32 + 3;
  v32[2].m128i_i32[0] = v33;
  v32[2].m128i_i64[1] = v34;
  if ( v5 )
  {
    if ( !v38 )
      goto LABEL_16;
    v26 = v36;
    v32[3].m128i_i32[2] = v36;
    if ( v26 > 0x40 )
      sub_2205510(v19);
    else
      v32[3].m128i_i64[0] = v35;
    v22 = v32;
    v27 = v37;
    v32[4].m128i_i8[0] = 1;
    v32[3].m128i_i8[12] = v27;
  }
  else
  {
    v20 = v32[3].m128i_u32[2];
    if ( !v38 )
    {
      v32[4].m128i_i8[0] = 0;
      if ( v20 > 0x40 )
      {
        v21 = (void *)v32[3].m128i_i64[0];
        v22 = v32;
        if ( v21 )
        {
          operator delete[](v21);
          v22 = v32;
        }
        goto LABEL_17;
      }
LABEL_16:
      v22 = v32;
      goto LABEL_17;
    }
    if ( v20 <= 0x40 && v36 <= 0x40 )
    {
      v31 = v35;
      v32[3].m128i_i32[2] = v36;
      v22 = v32;
      v32[3].m128i_i64[0] = v31;
    }
    else
    {
      sub_22056A0(v19, &v35);
      v22 = v32;
    }
    v32[3].m128i_i8[12] = v37;
  }
LABEL_17:
  v32[4].m128i_i16[4] = v39;
  v22[5].m128i_i64[0] = v40.m128i_i64[0];
  v22[5].m128i_i32[2] = v40.m128i_i32[2];
  v23 = v40.m128i_i16[6];
  v22[4].m128i_i8[8] = v16;
  v22[5].m128i_i16[6] = v23;
  LOBYTE(v23) = 2 * v18;
  v24 = v22[2].m128i_i8[0];
  v22[5].m128i_i8[12] = v17;
  v22[2].m128i_i8[0] = v23 | v24 & 0xFD;
  sub_98E4B0((__int64)&v35);
  return v2;
}
