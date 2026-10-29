unsigned __int64 __fastcall sub_1E85500(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128 a6,
        double a7,
        double a8,
        __m128i a9,
        __m128 a10)
{
  unsigned int *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  unsigned int *v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // edx
  _QWORD v26[7]; // [rsp+0h] [rbp-38h] BYREF

  v10 = sub_1E85170((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v14 = *(_QWORD *)v10;
  if ( (*(_BYTE *)(a2 + 720) & 1) != 0 )
    return 0;
  v15 = v10;
  if ( ((**(_DWORD **)a2 >> 12) & 0x7F) == 0x45 )
    return 0;
  v16 = *(_DWORD *)(a2 + 96);
  v17 = (unsigned int)(v16 - 24);
  if ( (unsigned int)v17 > 1 && v16 != 3 )
    sub_181E1D0(a1, a2);
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    sub_186C8D0((__int64)a1, a2, a3, v17, v11, v12, v13);
  v26[0] = *(_QWORD *)v15;
  v26[1] = v15 + 2;
  v18 = sub_F6E530((__int64)v26);
  if ( v18 )
  {
    v23 = *(_QWORD *)(v19 + 8);
    v24 = 0;
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 32);
    sub_16C57E0((int)a1, v18, v24);
  }
  return sub_1E61050(a1, v14, (__int64)v15, v20, v21, v22);
}
