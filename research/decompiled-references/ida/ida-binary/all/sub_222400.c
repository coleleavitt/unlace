__int64 __fastcall sub_222400(
        __int64 a1,
        __int64 a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  double v19; // xmm4_8
  double v20; // xmm5_8
  char v21; // al
  char v22; // r14
  char v23; // al
  unsigned __int64 v24; // rdx
  char v25; // r15
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  char v36; // al
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+18h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 153) )
    return 0;
  v14 = sub_241540(&qword_8CC120);
  v15 = v14;
  if ( (dword_8BA504 & 4) != 0 )
  {
    if ( (unsigned __int8)sub_2105C0((__int64)qword_8CBAA0, v14) )
      return 0;
  }
  if ( !getseg(v15) )
  {
    sub_240EA0(1);
    if ( !(unsigned __int8)is_mapped(v15) )
      return 0;
  }
  v21 = dword_8BA504;
  if ( (dword_8BA504 & 2) != 0 )
  {
    v22 = sub_241770(&qword_8CC120);
    if ( v22 )
    {
      if ( !*(_BYTE *)(a1 + 152) )
        goto LABEL_23;
      goto LABEL_22;
    }
    v21 = dword_8BA504;
  }
  if ( (v21 & 1) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 152) )
      *(_BYTE *)(a1 + 152) = 1;
    goto LABEL_10;
  }
  v23 = sub_241710(&qword_8CC120);
  v22 = v23;
  if ( !*(_BYTE *)(a1 + 152) )
  {
    *(_BYTE *)(a1 + 152) = v23 ^ 1;
    if ( !v23 )
    {
      v21 = dword_8BA504;
LABEL_10:
      v22 = 0;
      goto LABEL_11;
    }
LABEL_23:
    v22 = *(_BYTE *)(a1 + 156) | a3;
    if ( v22 )
    {
      if ( (dword_8BA504 & 3) == 0 )
        goto LABEL_34;
      v24 = *(_QWORD *)(a1 + 128);
      v25 = *(_BYTE *)(a1 + 156) | a3;
      v26 = v24 - 1;
      if ( (__int64)(v24 - 1) < 0 )
        goto LABEL_34;
LABEL_26:
      v27 = *(_QWORD *)(a1 + 120);
      while ( *(_QWORD *)(v27 + 16 * v26) != v15 )
      {
        if ( v26-- == 0 )
          goto LABEL_32;
      }
      if ( v26 != v24 )
      {
        v43.m128i_i64[0] = -1;
        v43.m128i_i16[4] = 0;
        if ( v26 >= v24 )
        {
          v37 = *(_QWORD *)(a1 + 136);
          v17 = a1 + 120;
          if ( (unsigned __int64)&v43 < v27 || (unsigned __int64)&v43 >= v27 + 16 * v37 )
          {
            if ( v37 < v26 )
            {
              v41 = qvector_reserve(a1 + 120, v27, v26, 16);
              v24 = *(_QWORD *)(a1 + 128);
              *(_QWORD *)(a1 + 120) = v41;
            }
            if ( v24 < v26 )
            {
              do
              {
                v40 = v24;
                a4 = (__m128)_mm_load_si128(&v43);
                ++v24;
                *(__m128 *)(*(_QWORD *)(a1 + 120) + 16 * v40) = a4;
              }
              while ( v26 != v24 );
            }
          }
          else
          {
            if ( v37 < v26 )
            {
              v42 = qvector_reserve(a1 + 120, v27, v26, 16);
              v24 = *(_QWORD *)(a1 + 128);
              *(_QWORD *)(a1 + 120) = v42;
            }
            if ( v24 < v26 )
            {
              do
              {
                v38 = v24;
                v16 = 0;
                ++v24;
                v39 = *(_QWORD *)(a1 + 120) + 16 * v38;
                *(_QWORD *)v39 = -1;
                *(_WORD *)(v39 + 8) = 0;
              }
              while ( v26 != v24 );
            }
          }
        }
        *(_QWORD *)(a1 + 128) = v26;
      }
LABEL_32:
      v29 = v22;
      v22 = v25;
      if ( *(_BYTE *)(a1 + 153) && !v29 )
      {
LABEL_50:
        if ( !(unsigned int)sub_236E30(13, *(_DWORD *)(a2 + 4), v15, v16, v17, v18) )
        {
          sub_2214A0(a1, v15);
          sub_2221A0(a1, v15, *(double *)a4.m128_u64);
          if ( *(_BYTE *)(a1 + 152) )
          {
            if ( (*(_BYTE *)(a1 + 153) & 4) != 0 )
              sub_222010(a1, v15, 2, dword_8BA500);
          }
        }
      }
LABEL_34:
      if ( *(_BYTE *)(a1 + 156) && v22 )
        sub_211B40(a1);
      goto LABEL_14;
    }
    v22 = 1;
LABEL_49:
    v25 = 1;
    sub_211B40(a1);
    v36 = dword_8BA504;
LABEL_59:
    if ( (v36 & 3) == 0 )
      goto LABEL_32;
    v24 = *(_QWORD *)(a1 + 128);
    v26 = v24 - 1;
    if ( (__int64)(v24 - 1) < 0 )
      goto LABEL_32;
    goto LABEL_26;
  }
LABEL_22:
  v21 = dword_8BA504;
LABEL_11:
  if ( (v21 & 2) != 0 )
  {
    if ( (unsigned __int8)sub_241770(&qword_8CC120) && !*(_BYTE *)(a1 + 155) )
    {
LABEL_45:
      v25 = *(_BYTE *)(a1 + 156) | a3;
      if ( v25 )
      {
        v36 = dword_8BA504;
        goto LABEL_59;
      }
      if ( *(_BYTE *)(a1 + 152) && (*(_BYTE *)(a1 + 153) & 4) != 0 )
        sub_222010(a1, v15, 2, dword_8BA500);
      goto LABEL_49;
    }
    v36 = dword_8BA504;
    if ( (dword_8BA504 & 1) == 0 )
      goto LABEL_58;
LABEL_54:
    if ( !(unsigned __int8)sub_241710(&qword_8CC120) || *(_BYTE *)(a1 + 154) )
    {
      v36 = dword_8BA504;
LABEL_58:
      v25 = 0;
      goto LABEL_59;
    }
    goto LABEL_45;
  }
  if ( (v21 & 1) != 0 )
    goto LABEL_54;
  v22 |= *(_BYTE *)(a1 + 153) == 0;
  if ( !v22 )
    goto LABEL_50;
LABEL_14:
  if ( *(_BYTE *)(a1 + 153)
    && n > 1
    && (unsigned __int8)sub_19DF30(
                          (__int64)&qword_8CB6C0,
                          v15,
                          (__int64)"trace",
                          &v43,
                          *(double *)a4.m128_u64,
                          a5,
                          a6,
                          a7,
                          v19,
                          v20,
                          a10,
                          a11) )
  {
    sub_23DDB0();
    if ( !v43.m128i_i8[0] )
      sub_169700(
        (int)"%a: trace condition validated, suspending the process\n",
        v15,
        v30,
        v31,
        v32,
        v33,
        a4,
        a5,
        a6,
        a7,
        v34,
        v35,
        a10,
        a11,
        0);
  }
  return 1;
}
