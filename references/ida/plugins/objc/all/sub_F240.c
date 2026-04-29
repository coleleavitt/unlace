__int64 __fastcall sub_F240(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __m128 v4; // xmm0
  _QWORD v6[4]; // [rsp+0h] [rbp-48h] BYREF
  __m128 v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 120);
  v9 = __readfsqword(0x28u);
  v6[0] = &off_3C688;
  v6[1] = 10;
  v4 = _mm_loadh_ps((const double *)(a1 + 112));
  v8 = v3;
  v6[2] = 0;
  v6[3] = -1;
  v7 = v4;
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, v6, a2);
}
