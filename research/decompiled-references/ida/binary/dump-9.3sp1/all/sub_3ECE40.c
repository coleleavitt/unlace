__int64 __fastcall sub_3ECE40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // al
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // [rsp+8h] [rbp-70h]
  unsigned __int8 v12[16]; // [rsp+10h] [rbp-68h] BYREF
  int v13; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+24h] [rbp-54h]
  _QWORD *v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  LODWORD(v2) = *(_DWORD *)(a2 + 32);
  v16 = __readfsqword(0x28u);
  if ( (_DWORD)v2 == 12 )
  {
    v10 = *(_QWORD *)(a1[100] + 8LL);
    if ( (unsigned __int8)getinf() )
      LODWORD(v2) = (unsigned __int8)getinf();
    else
      v2 = *(_QWORD *)(v10 + 120);
  }
  v3 = a1[104];
  *(_QWORD *)v12 = 1;
  *(_QWORD *)&v12[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(*(_DWORD *)(v3 + 464))).m128i_u64[0];
  if ( (unsigned __int8)has_insn_feature() )
  {
    sub_1D6450((__int64)a1, 60, nullptr, nullptr, v12);
  }
  else
  {
    v7 = a1[1];
    v8 = *(_QWORD *)(v7 + 144);
    v13 = 5;
    v11 = v8;
    v9 = (_QWORD *)j__qalloc_or_throw(16, 2, v8, v4);
    *v9 = v7;
    v9[1] = v11;
    v15 = v9;
    v14 = v2;
    sub_1D6450((__int64)a1, 4, (unsigned __int8 *)&v13, nullptr, v12);
    sub_11CDA0((__int64)&v13);
  }
  v5 = *(_BYTE *)(a2 + 16);
  v13 = 1;
  LODWORD(v15) = 8;
  v14 = 4 * ((v5 & 0xF) != 4) + 4;
  sub_1D6450((__int64)a1, (unsigned int)((v5 & 0x30) == 32) + 63, v12, nullptr, (unsigned __int8 *)&v13);
  sub_11CDA0((__int64)&v13);
  sub_11CDA0((__int64)v12);
  return 0;
}
