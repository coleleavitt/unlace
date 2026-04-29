unsigned __int64 __fastcall sub_22DC80(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rdx
  __int64 v3; // rax
  signed __int64 v4; // rbx
  __m128 v5; // xmm0
  bool v6; // cc
  __m128 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 816);
  v10 = __readfsqword(0x28u);
  v4 = a2;
  v5 = _mm_loadh_ps((const double *)(a1 + 816));
  v6 = v2 < a2;
  v9 = v3;
  if ( v2 <= a2 )
    a2 = v2;
  v8 = v5;
  if ( v6 )
    LODWORD(v2) = v4;
  if ( (unsigned __int8)sub_222B40((__int64)&v8, a2, v2) )
    sub_22B8B0((__int64)&v8, 0xFFFFFFFFFFFFFFFFLL, 0);
  *(_QWORD *)(a1 + 144) = v4;
  return v10 - __readfsqword(0x28u);
}
