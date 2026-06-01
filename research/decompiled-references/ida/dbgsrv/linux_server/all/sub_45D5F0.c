/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D5F0
// Address: 0x000000000045D5F0

//----- (000000000045D5F0) ----------------------------------------------------
__int64 __fastcall sub_45D5F0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int16 v20; // ax
  __off64_t v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  int v28; // eax
  __int64 v29; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  int v36; // esi
  __int16 v37; // di
  __int16 v38; // dx
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v45[9]; // [rsp+10h] [rbp-48h] BYREF

  v45[1] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 600) = 0;
  v44 = 0;
  sub_47F740(a2, 0, 0);
  if ( sub_47F6E0(a2, (void *)(a1 + 32), 28, v16, v17) != 28 )
    return 0;
  v20 = *(_WORD *)(a1 + 32);
  if ( v20 == 17744 )
    goto LABEL_6;
  if ( v20 != 23126 )
  {
    if ( v20 == 23117 || v20 == 19802 )
    {
      if ( sub_47F6E0(a2, v45, 8, v18, v19) == 8 && v45[0] == 0x6B6E694C696E55LL )
        *(_BYTE *)(a1 + 600) = 1;
      sub_47F740(a2, 60, 0);
      if ( sub_47F6E0(a2, &v44, 4, v33, v34) != 4 )
        return 0;
    }
LABEL_6:
    v21 = v44;
    *(_QWORD *)(a1 + 592) = v44;
    sub_47F740(a2, v21, 0);
    *(_QWORD *)(a1 + 320) = 0;
    *(_QWORD *)(a1 + 576) = 0;
    memset(
      (void *)((a1 + 328) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((_DWORD)a1 + 320 - (((_DWORD)a1 + 328) & 0xFFFFFFF8) + 264) >> 3));
    sub_47F740(a2, *(_QWORD *)(a1 + 592), 0);
    if ( sub_47F6E0(a2, (void *)(a1 + 320), 264, v22, v23) - 93 <= 0xAB )
    {
      v28 = *(_DWORD *)(a1 + 320);
      if ( v28 == (_DWORD)&loc_455042 || v28 == 17744 || v28 == 19536 )
      {
        if ( (unsigned __int8)sub_45D240(
                                (__m128i *)(a1 + 72),
                                (const __m128i *)(a1 + 320),
                                a3,
                                a4,
                                v24,
                                v25,
                                a5,
                                a6,
                                a7,
                                a8,
                                v26,
                                v27,
                                a11,
                                a12) )
        {
          if ( *(_WORD *)(a1 + 96) == 523 )
            v29 = *(_QWORD *)(a1 + 120);
          else
            v29 = *(unsigned int *)(a1 + 124);
          *(_QWORD *)(a1 + 584) = v29;
          return 1;
        }
      }
    }
    return 0;
  }
  sub_47F740(a2, v44, 0);
  if ( sub_47F6E0(a2, (void *)(a1 + 32), 40, v31, v32) == 40 )
  {
    *(_QWORD *)(a1 + 312) = 0;
    memset(
      (void *)((a1 + 80) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 80) & 0xFFFFFFF8) + 320) >> 3));
    v35 = *(unsigned __int16 *)(a1 + 34);
    v36 = *(unsigned __int16 *)(a1 + 38);
    v37 = *(unsigned __int8 *)(a1 + 37);
    *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
    v38 = v35;
    v39 = *(_QWORD *)(a1 + 40);
    v40 = v35 | (*(unsigned __int8 *)(a1 + 36) << 16);
    v41 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 76) = v40;
    v42 = *(_DWORD *)(a1 + 44) + 40 - v36;
    if ( v38 == 512 || v38 == -31132 || v38 == -21916 )
    {
      *(_QWORD *)(a1 + 112) = v39;
      *(_WORD *)(a1 + 96) = 523;
      *(_DWORD *)(a1 + 156) = v42;
      *(_QWORD *)(a1 + 120) = v41;
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v41;
      v41 = (unsigned int)v41;
      *(_WORD *)(a1 + 96) = 267;
      *(_QWORD *)(a1 + 112) = v39;
      *(_DWORD *)(a1 + 156) = v42;
    }
    v43 = *(_QWORD *)(a1 + 56);
    *(_WORD *)(a1 + 164) = v37;
    *(_QWORD *)(a1 + 584) = v41;
    *(_QWORD *)(a1 + 232) = v43;
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 128) = 0x100000001LL;
    *(_QWORD *)(a1 + 592) = v44;
    return 1;
  }
  return 0;
}
// 45D645: variable 'v16' is possibly undefined
// 45D645: variable 'v17' is possibly undefined
// 45D6E9: variable 'v22' is possibly undefined
// 45D6E9: variable 'v23' is possibly undefined
// 45D72E: variable 'v24' is possibly undefined
// 45D72E: variable 'v25' is possibly undefined
// 45D72E: variable 'v26' is possibly undefined
// 45D72E: variable 'v27' is possibly undefined
// 45D771: variable 'v31' is possibly undefined
// 45D771: variable 'v32' is possibly undefined
// 45D7B5: variable 'v18' is possibly undefined
// 45D7B5: variable 'v19' is possibly undefined
// 45D7E0: variable 'v33' is possibly undefined
// 45D7E0: variable 'v34' is possibly undefined
