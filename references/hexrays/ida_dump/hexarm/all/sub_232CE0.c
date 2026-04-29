unsigned __int64 __fastcall sub_232CE0(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 func; // rax
  __m128 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 1496);
  v6 = a3 - a2[4];
  v12 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 24) + 24LL) != 8 )
    v6 = (int)v6;
  func = get_func(*a2);
  delete_frame_members(func, v6, v6 + a4);
  v11 = *(_QWORD *)(a1 + 816);
  v10 = _mm_loadh_ps((const double *)&v11);
  if ( (unsigned __int8)sub_227B00((__int64)&v10, a3, a4) )
    sub_230870((__int64)&v10, 0xFFFFFFFFFFFFFFFFLL, 0);
  return v12 - __readfsqword(0x28u);
}
