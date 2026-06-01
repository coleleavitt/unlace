__int64 __fastcall sub_3ECE40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  char v4; // al
  __int64 v6; // r15
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // [rsp+8h] [rbp-70h]
  unsigned __int8 v11[16]; // [rsp+10h] [rbp-68h] BYREF
  int v12; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+24h] [rbp-54h]
  _QWORD *v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  LODWORD(v2) = *(_DWORD *)(a2 + 32);
  v15 = __readfsqword(0x28u);
  if ( (_DWORD)v2 == 12 )
  {
    v9 = *(_QWORD *)(a1[100] + 8LL);
    if ( (unsigned __int8)getinf() )
      LODWORD(v2) = (unsigned __int8)getinf();
    else
      v2 = *(_QWORD *)(v9 + 120);
  }
  v3 = a1[104];
  *(_QWORD *)v11 = 1;
  *(_QWORD *)&v11[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(*(_DWORD *)(v3 + 464))).m128i_u64[0];
  if ( (unsigned __int8)has_insn_feature() )
  {
    sub_1D6450((__int64)a1, 60, nullptr, nullptr, v11);
  }
  else
  {
    v6 = a1[1];
    v7 = *(_QWORD *)(v6 + 144);
    v12 = 5;
    v10 = v7;
    v8 = (_QWORD *)j__qalloc_or_throw();
    *v8 = v6;
    v8[1] = v10;
    v14 = v8;
    v13 = v2;
    sub_1D6450((__int64)a1, 4, (unsigned __int8 *)&v12, nullptr, v11);
    sub_11CDA0((__int64)&v12);
  }
  v4 = *(_BYTE *)(a2 + 16);
  v12 = 1;
  LODWORD(v14) = 8;
  v13 = 4 * ((v4 & 0xF) != 4) + 4;
  sub_1D6450((__int64)a1, ((v4 & 0x30) == 32) + 63, v11, nullptr, (unsigned __int8 *)&v12);
  sub_11CDA0((__int64)&v12);
  sub_11CDA0((__int64)v11);
  return 0;
}
