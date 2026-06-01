unsigned __int64 __fastcall sub_3DFC20(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r13
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v29; // rax
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 (__fastcall **v33)(); // [rsp+0h] [rbp-88h] BYREF
  _BYTE v34[28]; // [rsp+8h] [rbp-80h]
  __int128 v35; // [rsp+28h] [rbp-60h]
  __int128 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 && (unsigned int)(*(_DWORD *)(v9 + 60) - 1) <= 1 )
  {
    *(_DWORD *)(a1 + 40) = *(__int16 *)(a8 + 28);
    v12 = *(_QWORD *)(a8 + 40);
    if ( dword_4EEA08 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 112LL))(v12) )
    {
      if ( !under_debugger )
        sub_383060(0xCE97u, a3);
      BUG();
    }
    v16 = *(_BYTE *)(a9 + 2) & 1;
    if ( !v16 )
      v16 = callui(184, a2, &callui, v13, v14, v15, v33, *(_QWORD *)v34, *(_QWORD *)&v34[8], *(_QWORD *)&v34[16]) != 0;
    v17 = sub_3DF960(a1, v12, v9, a3, a4, a5, a6, v13, v14, v15);
    *(_QWORD *)(a1 + 88) = 0;
    v18 = v17;
    v21 = qalloc_or_throw(72, v12, v19, v20);
    v22 = *(_DWORD *)(v12 + 8);
    *(_QWORD *)v21 = off_4E90B0;
    *(_DWORD *)(v21 + 8) = v22;
    v23 = *(_QWORD *)(v12 + 12);
    v24 = _mm_loadu_si128((const __m128i *)(v12 + 56));
    *(_QWORD *)(v21 + 20) = *(_QWORD *)(v12 + 20);
    v25 = _mm_loadu_si128((const __m128i *)(v12 + 40));
    v26 = *(_QWORD *)(v12 + 28);
    *(_QWORD *)(v21 + 12) = v23;
    *(__m128i *)(v21 + 40) = v25;
    *(_QWORD *)(v21 + 28) = v26;
    *(__m128i *)(v21 + 56) = v24;
    v27 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v21;
    if ( v27 )
      qfree(v27);
    if ( (_BYTE)v16 )
    {
      v29 = *(_QWORD *)(a1 + 80);
      v33 = off_4E90B0;
      *(_QWORD *)&v34[4] = 3;
      *(_QWORD *)(a1 + 88) = v29;
      v30 = *(_DWORD *)(v12 + 20);
      *(_QWORD *)&v34[20] = 0x4900000000LL;
      LODWORD(v29) = *(_DWORD *)(v18 + 60);
      *(_QWORD *)&v34[12] = 0;
      v35 = -1;
      v36 = -1;
      if ( (unsigned int)(v29 - 1) <= 1 && v30 >= 0 && v30 < *(_DWORD *)(*(_QWORD *)(v18 + 64) + 64LL) )
      {
        v32 = *(_QWORD *)(v12 + 20);
        *(_DWORD *)v34 = 0;
        *(_QWORD *)&v34[12] = v32;
        sub_3D4D30(a1, (__int64)&v33, v18, NAN);
      }
      v31 = sub_3D4A00((_QWORD *)a1, a2, (__int64)&v33, v12);
      if ( v31 >= 0xFFFFFFFE )
        v31 = 0;
      *(_DWORD *)(a1 + 40) = v31;
    }
  }
  return v37 - __readfsqword(0x28u);
}
