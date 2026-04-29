unsigned __int64 __fastcall sub_3F1D20(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // r12
  unsigned int v9; // ecx
  unsigned __int8 v10; // dl
  signed int v11; // r15d
  __int64 v12; // rdi
  int dtype_size; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  signed int v17; // r14d
  __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned int v20; // r12d
  int v21; // eax
  __int64 v22; // r13
  unsigned __int8 v23; // dl
  __int64 v24; // rdi
  int v25; // eax
  __int64 v27; // [rsp-8h] [rbp-98h]
  int v28; // [rsp+14h] [rbp-7Ch]
  __int64 v29; // [rsp+18h] [rbp-78h]
  int v30; // [rsp+28h] [rbp-68h]
  int v31; // [rsp+2Ch] [rbp-64h]
  unsigned __int8 v32[16]; // [rsp+30h] [rbp-60h] BYREF
  _QWORD v33[3]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 832);
  v6 = *(_QWORD *)(v5 + 4464);
  if ( !v6 )
    goto LABEL_20;
  v7 = a1;
  v8 = a2;
  v9 = *(_DWORD *)(*(_QWORD *)(v5 + 4456) + 4 * v6 - 4);
  *(_QWORD *)(v5 + 4464) = v6 - 1;
  v10 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v10 = 7;
  v11 = v9;
  sub_3E9CF0(a1, 0, v10, v9);
  v12 = 2;
  v29 = a3;
  if ( *(_DWORD *)(*(_QWORD *)(v7 + 832) + 80LL) == 8 )
    v12 = 7;
  dtype_size = get_dtype_size(v12);
  a1 = v7;
  sub_1D2710(v7, 4u, dtype_size, v11, 0x3BEA45E214ADDC55LL, a3, 0);
  v14 = *(_QWORD *)(v7 + 832);
  a2 = v27;
  v15 = *(_QWORD *)(v14 + 4464);
  if ( !v15 )
LABEL_20:
    sub_3E6800(a4, a1, a2);
  v16 = 31;
  v17 = *(_DWORD *)(*(_QWORD *)(v14 + 4456) + 4 * v15 - 4);
  *(_QWORD *)v32 = 1;
  *(_QWORD *)(v14 + 4464) = v15 - 1;
  v18 = *(_QWORD *)(v7 + 832);
  v33[0] = 0xFFFFFFFF00000000LL;
  v19 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 80));
  LODWORD(v18) = *(_DWORD *)(v18 + 472);
  v33[1] = 0;
  v31 = v18;
  LODWORD(v18) = v8;
  v20 = 7;
  v28 = v18;
  *(_QWORD *)&v32[4] = _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v17)).m128i_u64[0];
  do
  {
    while ( 1 )
    {
      v21 = v28;
      if ( _bittest(&v21, v20) )
        break;
      --v20;
      v31 += 4;
      v16 -= 4;
      if ( v20 == -1 )
        goto LABEL_19;
    }
    v22 = v16;
    v30 = v31 + 4;
    do
    {
      v23 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 832) + 80LL) == 8 )
        v23 = 7;
      sub_1D2C40(v7, 0, v23, v31, v17, 0);
      if ( (_DWORD)v22 )
      {
        sub_11CFD0((__int64)v33, *(_QWORD *)(v7 + 832), v22, 1, *(_QWORD *)(v7 + 40), 0);
        sub_1D2850(v7, 22, v32, (unsigned __int8 *)v33, v32);
      }
      v24 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 832) + 80LL) == 8 )
        v24 = 7;
      v25 = get_dtype_size(v24);
      sub_1D2710(v7, 0x13u, v25, v29, v17, v29, 0);
      --v22;
      ++v31;
    }
    while ( v31 != v30 );
    --v20;
    v16 -= 4;
  }
  while ( v20 != -1 );
LABEL_19:
  sub_119360((__int64)v33);
  sub_119360((__int64)v32);
  return v34 - __readfsqword(0x28u);
}
