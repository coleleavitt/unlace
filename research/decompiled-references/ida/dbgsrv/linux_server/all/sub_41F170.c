/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F170
// Address: 0x000000000041F170

//----- (000000000041F170) ----------------------------------------------------
__int64 __fastcall sub_41F170(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // r12
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbp
  __m128i v19; // xmm1
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  unsigned __int64 v22; // [rsp+0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  __int128 v25; // [rsp+18h] [rbp-60h]
  __int128 v26; // [rsp+28h] [rbp-50h]
  __int128 v27; // [rsp+38h] [rbp-40h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v9 = *(_QWORD *)(a1 + 960);
  v28 = __readfsqword(0x28u);
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v9,
      a1 + 968,
      *(unsigned __int8 *)(a1 + 969));
  v11 = *(_QWORD *)(a1 + 976);
  *(_BYTE *)(a1 + 969) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v11,
      a1 + 984,
      *(unsigned __int8 *)(a1 + 985));
  v12 = *(_QWORD *)(a1 + 992);
  *(_BYTE *)(a1 + 985) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  if ( v12 )
    *(double *)a2.m128_u64 = (*(double (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
                               a1,
                               4,
                               v12,
                               a1 + 1000,
                               *(unsigned __int8 *)(a1 + 1001));
  *(_BYTE *)(a1 + 1001) = 0;
  v13 = 0;
  v14 = a1 + 1216;
  *(_QWORD *)(a1 + 992) = 0;
  sub_4144C0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v15 = *(_QWORD *)(a1 + 1232);
  while ( v14 != v15 )
  {
    v16 = *(unsigned int *)(v15 + 40);
    v13 |= *(_DWORD *)(a1 + 1340) == (_DWORD)v16;
    v17 = ptrace(PTRACE_DETACH, v16, 0, 0);
    v15 = std::_Rb_tree_increment(v15);
    if ( v17 )
      return 0xFFFFFFFFLL;
  }
  if ( !v13 && ptrace(PTRACE_DETACH, *(unsigned int *)(a1 + 1340), 0, 0) )
    return 0xFFFFFFFFLL;
  v25 = 0;
  v23 = -1;
  v22 = 0xFFFFFFFFLL;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  sub_4787B0((__int64)&v22, 12);
  v19 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340));
  LOBYTE(v24) = 1;
  v23 = -1;
  v22 = _mm_shuffle_epi32(v19, 224).m128i_u64[0];
  if ( (v24 & 0xFFFFFFF00000000LL) != 0 )
  {
    v21 = *(_QWORD **)(a1 + 168);
    if ( v21 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
    {
      sub_41C280((_QWORD *)(a1 + 120), (__int64)&v22);
    }
    else
    {
      *v21 = 0xFFFFFFFFLL;
      v21[1] = -1;
      v21[2] = 0;
      sub_4788F0((__int64)v21, (__int64)&v22);
      *(_QWORD *)(a1 + 168) += 72LL;
    }
    *(_BYTE *)(a1 + 1412) = 0;
  }
  *(_BYTE *)(a1 + 1414) = 0;
  v20 = *(_QWORD **)(a1 + 1224);
  *(_BYTE *)(a1 + 1349) = 1;
  sub_40F6B0(v20);
  *(_QWORD *)(a1 + 1232) = v14;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1240) = v14;
  *(_QWORD *)(a1 + 1248) = 0;
  *(_DWORD *)(a1 + 1340) = -1;
  *(_BYTE *)(a1 + 1348) = 0;
  sub_478720((__int64)&v22);
  return 1;
}
// 41F257: variable 'a6' is possibly undefined
// 41F257: variable 'a7' is possibly undefined
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
