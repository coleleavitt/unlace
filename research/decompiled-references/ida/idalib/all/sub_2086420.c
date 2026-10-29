const __m128i *__fastcall sub_2086420(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        const __m128i a7,
        __int64 a8)
{
  __int64 v10; // rbp
  __int64 v11; // r15
  char v12; // r14
  __m128 v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  __m128i v16; // xmm2
  const __m128i *result; // rax
  __m128i v18; // xmm3
  __int64 v19; // rdx
  __int64 v20; // r10
  const __m128i **v21; // r9
  unsigned __int64 v22; // rdx
  __int32 v23; // eax
  int v24; // eax
  int v25; // r8d
  unsigned int v26; // eax
  const __m128i **v27; // rsi
  const __m128i *v28; // rdx
  unsigned __int8 v29; // cl
  __int8 *v30; // rcx
  __int64 v31; // r9
  const __m128i **v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  bool v37; // zf
  __m128 *v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  const __m128i ***v42; // rdx
  __int64 v43; // [rsp-8h] [rbp-F0h]
  const __m128i *v44; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v45; // [rsp+8h] [rbp-E0h] BYREF
  __m128 *v46; // [rsp+10h] [rbp-D8h]
  __int64 v47; // [rsp+18h] [rbp-D0h]
  const __m128i **v48; // [rsp+20h] [rbp-C8h]
  int v49; // [rsp+28h] [rbp-C0h]
  int v50; // [rsp+2Ch] [rbp-BCh]
  const __m128i *v51; // [rsp+30h] [rbp-B8h] BYREF
  const __m128i **v52; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v53; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-98h]
  __m128i v55; // [rsp+60h] [rbp-88h] BYREF
  __int64 v56; // [rsp+70h] [rbp-78h]
  __m128 v57; // [rsp+80h] [rbp-68h] BYREF
  __m128 v58; // [rsp+90h] [rbp-58h]
  __int64 v59; // [rsp+A0h] [rbp-48h]
  __int64 v60[8]; // [rsp+A8h] [rbp-40h] BYREF

  v10 = *a1;
  v44 = (const __m128i *)a2;
  v11 = a7.m128i_i64[1];
  v12 = a8;
  v45 = a3;
  v49 = a6;
  if ( a5 )
    goto LABEL_2;
  v20 = *(unsigned int *)(v10 + 848);
  v57.m128_u64[0] = a2;
  v57.m128_u64[1] = a3;
  v56 = a8;
  v21 = *(const __m128i ***)(v10 + 832);
  v59 = a8;
  v55 = _mm_loadu_si128(&a7);
  v58 = (__m128)v55;
  v60[0] = a4;
  v47 = v10 + 832;
  if ( !(_DWORD)v20 )
  {
    v46 = (__m128 *)&v55;
LABEL_26:
    sub_2081FC0(v46, &v21[v20], &v21[v20], v47, 1);
    v40 = v55.m128i_i64[0];
    goto LABEL_27;
  }
  if ( (_BYTE)v59 )
  {
    v22 = v58.m128_u64[1];
    v23 = v58.m128_i32[0];
  }
  else
  {
    v22 = 0;
    v23 = 0;
  }
  v55.m128i_i64[0] = v22;
  v46 = (__m128 *)&v55;
  v50 = v20;
  v48 = v21;
  v53.m128i_i32[0] = v23;
  v24 = sub_2077090((__int64)v44, &v57.m128_i64[1], v53.m128i_i32, v55.m128i_i64, v60);
  v25 = 1;
  v26 = (v50 - 1) & v24;
  v27 = &v48[v26];
  v28 = *v27;
  if ( *v27 == (const __m128i *)-4096LL )
  {
LABEL_32:
    v21 = *(const __m128i ***)(v10 + 832);
    v20 = *(unsigned int *)(v10 + 848);
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( v28 != (const __m128i *)-8192LL )
    {
      v29 = v28[-1].m128i_u8[0];
      v30 = (v29 & 2) != 0 ? (__int8 *)v28[-2].m128i_i64[0] : &v28->m128i_i8[-16 - 8LL * ((v29 >> 2) & 0xF)];
      if ( *(_OWORD *)&v57 == *(_OWORD *)v30
        && (_BYTE)v59 == v28[2].m128i_i8[0]
        && (!(_BYTE)v59 || v58.m128_i32[0] == v28[1].m128i_i32[0] && v28[1].m128i_i64[1] == v58.m128_u64[1])
        && v60[0] == v28[2].m128i_i64[1] )
      {
        break;
      }
    }
    v26 = (v50 - 1) & (v25 + v26);
    v27 = &v48[v26];
    v28 = *v27;
    if ( *v27 == (const __m128i *)-4096LL )
      goto LABEL_32;
    ++v25;
  }
  sub_2081FC0(v46, v27, (_QWORD *)(*(_QWORD *)(v10 + 832) + 8LL * *(unsigned int *)(v10 + 848)), v47, 1);
  v40 = v55.m128i_i64[0];
LABEL_27:
  v41 = *(unsigned int *)(v10 + 848);
  v48 = (const __m128i **)v40;
  sub_2081FC0(v46, (_QWORD *)(*(_QWORD *)(v10 + 832) + 8 * v41), (_QWORD *)(*(_QWORD *)(v10 + 832) + 8 * v41), v47, 1);
  if ( (const __m128i **)v55.m128i_i64[0] == v48 || (result = *v48) == nullptr )
  {
    if ( !(_BYTE)v49 )
      return nullptr;
    v10 = *a1;
LABEL_2:
    a7.m128i_i64[1] = v11;
    v13 = _mm_loadh_ps((const double *)&v45);
    v14 = _mm_loadu_si128(&a7);
    LOBYTE(a8) = v12;
    v57 = v13;
    v44 = (const __m128i *)a4;
    v53 = v14;
    v54 = a8;
    v58 = _mm_loadh_ps((const double *)&v44);
    v15 = sub_20B4330(48, 4, a5);
    v16 = _mm_load_si128(&v53);
    v56 = v54;
    v55 = v16;
    v44 = (const __m128i *)v15;
    sub_20B2FD0(v15, (_DWORD)a1, 16, a5, (unsigned int)&v57, 4, 0, 0);
    result = v44;
    v44->m128i_i16[1] = 41;
    v18 = _mm_load_si128(&v55);
    v51 = result;
    result[1] = v18;
    v19 = v56;
    result[2].m128i_i64[1] = a4;
    result[2].m128i_i64[0] = v19;
    if ( a5 )
    {
      if ( a5 != 1 )
        return result;
      sub_20AC2A0(result, v43, v19);
      return v51;
    }
    if ( (unsigned __int8)sub_207FA20((__int64 *)(v10 + 832), &v51, &v52) )
    {
      sub_2081FC0(
        (__m128 *)&v55,
        v52,
        (_QWORD *)(*(_QWORD *)(v10 + 832) + 8LL * *(unsigned int *)(v10 + 848)),
        v10 + 832,
        1);
      return v51;
    }
    v32 = v52;
    v33 = (unsigned int)(*(_DWORD *)(v10 + 840) + 1);
    v34 = *(unsigned int *)(v10 + 848);
    v55.m128i_i64[0] = (__int64)v52;
    v35 = (unsigned int)(4 * v33);
    if ( (unsigned int)v35 >= 3 * (int)v34 )
    {
      sub_20860C0(v10 + 832, 2 * v34, v33, (unsigned int)(2 * v34), v35, v31);
      v46 = (__m128 *)&v55;
      v42 = (const __m128i ***)&v55;
    }
    else
    {
      v36 = (unsigned int)(v34 - *(_DWORD *)(v10 + 844) - v33);
      v46 = (__m128 *)&v55;
      if ( (unsigned int)v36 > (unsigned int)v34 >> 3 )
      {
LABEL_20:
        v37 = &(*v32)[256] == nullptr;
        *(_DWORD *)(v10 + 840) = v33;
        if ( !v37 )
          --*(_DWORD *)(v10 + 844);
        v38 = v46;
        *v32 = v51;
        v39 = *(_QWORD *)(v10 + 832);
        v52 = v32;
        sub_2081FC0(v38, v32, (_QWORD *)(v39 + 8 * v34), v10 + 832, 1);
        return v51;
      }
      sub_20860C0(v10 + 832, v34, v33, v36, v35, v31);
      v42 = (const __m128i ***)v46;
    }
    sub_207FA20((__int64 *)(v10 + 832), &v51, v42);
    v34 = *(unsigned int *)(v10 + 848);
    v32 = (const __m128i **)v55.m128i_i64[0];
    LODWORD(v33) = *(_DWORD *)(v10 + 840) + 1;
    goto LABEL_20;
  }
  return result;
}
