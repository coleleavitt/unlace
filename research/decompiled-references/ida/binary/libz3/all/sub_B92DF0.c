void __fastcall sub_B92DF0(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // eax
  int *v8; // rbp
  int v9; // r13d
  __int64 v10; // r12
  __int64 i; // rbp
  void *v12; // rdi
  __m128i *v13; // r12
  __int64 j; // rdx
  void *v15; // r15
  __int64 v16; // r15
  _DWORD *v17; // rax
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  unsigned int v20; // ecx
  unsigned int *v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rdx
  _QWORD *v28; // [rsp+8h] [rbp-E0h]
  unsigned int v29; // [rsp+18h] [rbp-D0h]
  void *v30; // [rsp+20h] [rbp-C8h]
  int v31[2]; // [rsp+20h] [rbp-C8h]
  unsigned int v32; // [rsp+28h] [rbp-C0h]
  unsigned int v33; // [rsp+2Ch] [rbp-BCh]
  unsigned int v34; // [rsp+34h] [rbp-B4h] BYREF
  int v35[2]; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v36; // [rsp+40h] [rbp-A8h] BYREF
  int v37[2]; // [rsp+50h] [rbp-98h] BYREF
  int v38[2]; // [rsp+58h] [rbp-90h]
  int v39[2]; // [rsp+60h] [rbp-88h] BYREF
  int v40[2]; // [rsp+68h] [rbp-80h]
  int v41; // [rsp+70h] [rbp-78h]
  _QWORD v42[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v43; // [rsp+90h] [rbp-58h]
  __int64 v44; // [rsp+98h] [rbp-50h]
  int v45; // [rsp+A0h] [rbp-48h]

  sub_B88530((_QWORD *)a1);
  sub_B7ACC0(a1, a2, a3, a4);
  v28 = (_QWORD *)(a1 + 968);
  v5 = *(_QWORD *)(a1 + 992);
  v6 = (unsigned int)(2 * *(_DWORD *)(a1 + 956));
  v32 = 2 * *(_DWORD *)(a1 + 956);
  v7 = 2 * *(_DWORD *)(a1 + 960);
  v8 = (int *)(v5 + 40 * v6);
  v9 = *v8;
  v36 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v32 | 1)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v7 | 1)));
  if ( !v9 && !v8[8] )
  {
    v8 = (int *)(v5 + 40LL * (v32 | 1));
    if ( *v8 || v8[8] )
    {
      v32 |= 1u;
    }
    else
    {
      v8 = (int *)(v5 + 40LL * v7);
      if ( *v8 || v8[8] )
      {
        v32 = v7;
      }
      else
      {
        v8 = (int *)(v5 + 40LL * (v7 | 1));
        if ( !*v8 && !v8[8] )
          goto LABEL_27;
        v32 = v7 | 1;
      }
    }
  }
  v42[0] = 0;
  v42[1] = 0;
  v43 = 1;
  v44 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v42, v8);
  v10 = *(_QWORD *)(a1 + 992);
  v45 = v8[8];
  if ( v10 )
  {
    for ( i = v10 + 40LL * *(unsigned int *)(v10 - 4); i != v10; v10 += 40 )
    {
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v10 + 20) & 1) != 0
        || *(_DWORD *)(v10 + 16) != 1
        || (v43 & 0x100000000LL) != 0
        || (_DWORD)v43 != 1 )
      {
        sub_1852000(qword_1C7F2C0, v10, v42);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, v10, v42);
        sub_182CBA0(v12, v10 + 16);
        *(_BYTE *)(v10 + 20) &= ~1u;
        *(_DWORD *)(v10 + 16) = 1;
      }
      *(_DWORD *)(v10 + 32) -= v45;
    }
  }
  v13 = &v36;
  sub_25A130((char *)v42);
  for ( j = *(_QWORD *)(a1 + 992); ; j = *(_QWORD *)(a1 + 992) )
  {
    v16 = v13->m128i_u32[0];
    v17 = (_DWORD *)(j + 40 * v16);
    if ( *v17 || v17[8] )
    {
      *(_QWORD *)v37 = 0;
      *(_QWORD *)v38 = 0;
      *(_QWORD *)v35 = 4294967294LL;
      *(_QWORD *)v39 = 1;
      *(_QWORD *)v40 = 0;
      sub_182CBA0(qword_1C7F2C0, v39);
      v39[0] = 1;
      LOBYTE(v39[1]) &= ~1u;
      v41 = 0;
      v34 = sub_B859A0((__int64)v28, v32, v16, v37, (unsigned __int64 *)v35);
      v18 = v34;
      v19 = (unsigned int *)(*(_QWORD *)(a1 + 1008) + ((unsigned __int64)v34 << 6));
      if ( !*((_BYTE *)v19 + 60) )
      {
        v25 = *(_DWORD *)(a1 + 1096);
        v26 = *v19;
        *((_BYTE *)v19 + 60) = 1;
        v33 = v18;
        v19[12] = v25;
        *(_DWORD *)(a1 + 1096) = v25 + 1;
        v27 = *(_QWORD *)(a1 + 992);
        *(_DWORD *)(a1 + 1100) = v18;
        *(_QWORD *)v31 = v19;
        sub_89AC50((__int64)v42, v27 + 40LL * v19[1], v27 + 40 * v26);
        if ( (unsigned __int8)sub_89B840(*(_QWORD *)v31 + 8LL, (__int64)v42) )
        {
          sub_25A130((char *)v42);
          sub_B916A0(v28, v33);
        }
        else
        {
          sub_25A130((char *)v42);
        }
        sub_B76360((unsigned int **)(a1 + 1104), &v34);
      }
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v37);
      sub_182CBA0(v30, v39);
      *(_QWORD *)v37 = 0;
      *(_QWORD *)v35 = 4294967294LL;
      *(_QWORD *)v38 = 0;
      *(_QWORD *)v39 = 1;
      *(_QWORD *)v40 = 0;
      sub_182CBA0(qword_1C7F2C0, v39);
      v39[0] = 1;
      LOBYTE(v39[1]) &= ~1u;
      v41 = 0;
      v34 = sub_B859A0((__int64)v28, v16, v32, v37, (unsigned __int64 *)v35);
      v20 = v34;
      v21 = (unsigned int *)(*(_QWORD *)(a1 + 1008) + ((unsigned __int64)v34 << 6));
      if ( !*((_BYTE *)v21 + 60) )
      {
        v22 = *(_DWORD *)(a1 + 1096);
        v23 = *v21;
        *((_BYTE *)v21 + 60) = 1;
        v29 = v20;
        v21[12] = v22;
        *(_DWORD *)(a1 + 1096) = v22 + 1;
        v24 = *(_QWORD *)(a1 + 992);
        *(_DWORD *)(a1 + 1100) = v20;
        sub_89AC50((__int64)v42, v24 + 40LL * v21[1], v24 + 40 * v23);
        if ( (unsigned __int8)sub_89B840((__int64)(v21 + 2), (__int64)v42) )
        {
          sub_25A130((char *)v42);
          sub_B916A0(v28, v29);
        }
        else
        {
          sub_25A130((char *)v42);
        }
        sub_B76360((unsigned int **)(a1 + 1104), &v34);
      }
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v37);
      sub_182CBA0(v15, v39);
    }
    v13 = (__m128i *)((char *)v13 + 4);
    if ( v37 == (int *)v13 )
      break;
  }
LABEL_27:
  sub_B7E630(a1);
}

