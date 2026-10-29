__int64 __fastcall sub_3C7500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rax
  _BYTE *v18; // rbp
  __int64 v19; // rcx
  const char *v20; // rsi
  __int64 v21; // rdx
  double v22; // xmm4_8
  double v23; // xmm5_8
  int alias_target; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 (*v33)(); // rax
  char v34; // [rsp+0h] [rbp-58h]
  const char *v35; // [rsp+8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+10h] [rbp-48h] BYREF
  __int128 v37; // [rsp+18h] [rbp-40h]
  unsigned __int64 v38; // [rsp+28h] [rbp-30h]

  v12 = *(_DWORD *)(a1 + 8);
  v38 = __readfsqword(0x28u);
  if ( v12 != 25 && v12 != 58 )
    return 0;
  v14 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v15 = sub_3ACC10(*(_QWORD *)a1, a2, a3, a4, *(double *)a5.m128_u64);
  if ( !v15 )
    return 0;
  v16 = *(_DWORD *)(v15 + 12);
  if ( !v16 )
    return 0;
  v17 = *(_QWORD *)(a1 + 208);
  if ( *(_BYTE *)(v17 + 31) == 12 )
  {
    v18 = *(_BYTE **)(v14 + 1000);
    if ( (v18[112] & 1) != 0 )
    {
      v19 = *(unsigned int *)(v17 + 24);
      v20 = (const char *)&v36;
      v36 = 0;
      v35 = nullptr;
      v37 = 0;
      if ( (unsigned __int8)get_tinfo_from_tlc(&v35, &v36, v18, v19) )
      {
        v20 = (const char *)&v35;
        if ( (unsigned __int8)sub_3A74B0(&v36, &v35, v21, 0.0, a6, a7, a8, v22, v23, a11, a12) )
        {
          v33 = *(__int64 (**)())(*(_QWORD *)v18 + 96LL);
          if ( v33 != sub_32B640 )
            ((void (__fastcall *)(_BYTE *, _QWORD, __int64 *, const char **))v33)(
              v18,
              *(unsigned int *)(*(_QWORD *)(a1 + 208) + 24LL),
              &v36,
              &v35);
          sub_3AC490((__int64 *)a1, 0, (__int64)&unk_5C2F25, (__m128)0LL, a6, a7, a8, v31, v32, a11, a12);
          clear_tinfo_t(&v35);
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree(v36, nullptr);
          }
          return 1;
        }
      }
      clear_tinfo_t(&v35);
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36, v20);
      }
    }
    return 0;
  }
  alias_target = get_alias_target(0, v16);
  if ( v16 == alias_target )
  {
    sub_3A9A00(v16, 0, *(double *)a5.m128_u64, a6, a7, a8, *(double *)v29.m128_u64, *(double *)v30.m128_u64, a11, a12);
  }
  else
  {
    if ( !alias_target )
      return 0;
    sub_169630(
      (int)"AUTOHIDE NONE\nSorry, cannot edit aliased type",
      v16,
      v25,
      v26,
      v27,
      v28,
      a5,
      a6,
      a7,
      a8,
      v29,
      v30,
      a11,
      a12,
      v34);
  }
  return 1;
}
