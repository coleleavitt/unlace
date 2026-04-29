__int64 __fastcall sub_3ECE40(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  char v6; // al
  __int64 v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // [rsp+8h] [rbp-70h]
  unsigned __int8 v13[16]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  LODWORD(v3) = *(_DWORD *)(a2 + 32);
  v16 = __readfsqword(0x28u);
  if ( (_DWORD)v3 == 12 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
    if ( (unsigned __int8)getinf(66) )
      LODWORD(v3) = (unsigned __int8)getinf(66);
    else
      v3 = *(_QWORD *)(v11 + 120);
  }
  v4 = *(_QWORD *)(a1 + 832);
  v5 = *(unsigned __int16 *)(a1 + 48);
  *(_QWORD *)v13 = 1;
  *(_QWORD *)&v13[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(*(_DWORD *)(v4 + 464))).m128i_u64[0];
  if ( (unsigned __int8)has_insn_feature(v5, 2) )
  {
    sub_1D6450(a1, 60, nullptr, nullptr, v13);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v8 + 144);
    v14 = -4294967291LL;
    v15 = nullptr;
    v12 = v9;
    v10 = (_QWORD *)j__qalloc_or_throw(16);
    *v10 = v8;
    v10[1] = v12;
    v15 = v10;
    HIDWORD(v14) = v3;
    sub_1D6450(a1, 4, (unsigned __int8 *)&v14, nullptr, v13);
    sub_11CDA0((__int64)&v14);
  }
  v6 = *(_BYTE *)(a2 + 16);
  LODWORD(v14) = 1;
  LODWORD(v15) = 8;
  HIDWORD(v14) = 4 * ((v6 & 0xF) != 4) + 4;
  sub_1D6450(a1, ((v6 & 0x30) == 32) + 63, v13, nullptr, (unsigned __int8 *)&v14);
  sub_11CDA0((__int64)&v14);
  sub_11CDA0((__int64)v13);
  return 0;
}
