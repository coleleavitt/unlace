__int64 __fastcall sub_3E2200(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  int v4; // r9d
  int v5; // r9d
  char v6; // al
  __int64 v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rax
  int v11; // r9d
  __int64 v12; // rbp
  __int64 v13; // [rsp+8h] [rbp-70h]
  _BYTE v14[12]; // [rsp+10h] [rbp-68h] BYREF
  int v15; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+24h] [rbp-54h]
  _QWORD *v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  LODWORD(v2) = *(_DWORD *)(a2 + 32);
  v18 = __readfsqword(0x28u);
  if ( (_DWORD)v2 == 12 )
  {
    v12 = *(_QWORD *)(a1[100] + 8LL);
    if ( (unsigned __int8)getinf() )
      LODWORD(v2) = (unsigned __int8)getinf();
    else
      v2 = *(_QWORD *)(v12 + 120);
  }
  v3 = a1[104];
  *(_QWORD *)v14 = 1;
  *(_QWORD *)&v14[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(*(_DWORD *)(v3 + 464))).m128i_u64[0];
  if ( (unsigned __int8)has_insn_feature() )
  {
    sub_1D38D0((_DWORD)a1, 60, 0, 0, (unsigned int)v14, v4);
  }
  else
  {
    v8 = a1[1];
    v9 = *(_QWORD *)(v8 + 144);
    v15 = 5;
    v13 = v9;
    v10 = (_QWORD *)j__qalloc_or_throw();
    *v10 = v8;
    v10[1] = v13;
    v17 = v10;
    v16 = v2;
    sub_1D38D0((_DWORD)a1, 4, (unsigned int)&v15, 0, (unsigned int)v14, v11);
    sub_11A960((__int64)&v15);
  }
  v6 = *(_BYTE *)(a2 + 16);
  v15 = 1;
  LODWORD(v17) = 8;
  v16 = 4 * ((v6 & 0xF) != 4) + 4;
  sub_1D38D0((_DWORD)a1, ((v6 & 0x30) == 32) + 63, (unsigned int)v14, 0, (unsigned int)&v15, v5);
  sub_11A960((__int64)&v15);
  sub_11A960((__int64)v14);
  return 0;
}
