unsigned __int64 __fastcall sub_3D9BA0(
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
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 (__fastcall **v31)(); // [rsp+0h] [rbp-88h] BYREF
  _BYTE v32[28]; // [rsp+8h] [rbp-80h]
  __int128 v33; // [rsp+28h] [rbp-60h]
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 && (unsigned int)(*(_DWORD *)(v9 + 60) - 1) <= 1 )
  {
    *(_DWORD *)(a1 + 40) = *(__int16 *)(a8 + 28);
    v12 = *(_QWORD *)(a8 + 40);
    if ( dword_4C1968 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 112LL))(v12) )
    {
      if ( !under_debugger )
        sub_37CFE0(0xCE97u, a2, a3);
      BUG();
    }
    v16 = *(_BYTE *)(a9 + 2) & 1;
    if ( !v16 )
      v16 = callui(184, a2, &callui, v13, v14, v15, v31, *(_QWORD *)v32, *(_QWORD *)&v32[8], *(_QWORD *)&v32[16]) != 0;
    v17 = sub_3D98E0(a1, v12, v9, a3, a4, a5, a6, v13, v14, v15);
    *(_QWORD *)(a1 + 88) = 0;
    v18 = v17;
    v19 = qalloc_or_throw(72);
    v20 = *(_DWORD *)(v12 + 8);
    *(_QWORD *)v19 = off_4BCA30;
    *(_DWORD *)(v19 + 8) = v20;
    v21 = *(_QWORD *)(v12 + 12);
    v22 = _mm_loadu_si128((const __m128i *)(v12 + 56));
    *(_QWORD *)(v19 + 20) = *(_QWORD *)(v12 + 20);
    v23 = _mm_loadu_si128((const __m128i *)(v12 + 40));
    v24 = *(_QWORD *)(v12 + 28);
    *(_QWORD *)(v19 + 12) = v21;
    *(__m128i *)(v19 + 40) = v23;
    *(_QWORD *)(v19 + 28) = v24;
    *(__m128i *)(v19 + 56) = v22;
    v25 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v19;
    if ( v25 )
      qfree(v25);
    if ( (_BYTE)v16 )
    {
      v27 = *(_QWORD *)(a1 + 80);
      v31 = off_4BCA30;
      *(_QWORD *)&v32[4] = 3;
      *(_QWORD *)(a1 + 88) = v27;
      v28 = *(_DWORD *)(v12 + 20);
      *(_QWORD *)&v32[20] = 0x4900000000LL;
      LODWORD(v27) = *(_DWORD *)(v18 + 60);
      *(_QWORD *)&v32[12] = 0;
      v33 = -1;
      v34 = -1;
      if ( (unsigned int)(v27 - 1) <= 1 && v28 >= 0 && v28 < *(_DWORD *)(*(_QWORD *)(v18 + 64) + 64LL) )
      {
        v30 = *(_QWORD *)(v12 + 20);
        *(_DWORD *)v32 = 0;
        *(_QWORD *)&v32[12] = v30;
        sub_3CECB0(a1, (__int64)&v31, v18, NAN);
      }
      v29 = sub_3CE980((_QWORD *)a1, a2, (__int64)&v31, v12);
      if ( v29 >= 0xFFFFFFFE )
        v29 = 0;
      *(_DWORD *)(a1 + 40) = v29;
    }
  }
  return v35 - __readfsqword(0x28u);
}
