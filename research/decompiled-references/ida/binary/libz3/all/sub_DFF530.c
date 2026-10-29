void (__fastcall ***__fastcall sub_DFF530(__int64 a1))(void *)
{
  void (__fastcall ***result)(void *); // rax
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned int v4; // eax
  __int64 v5; // rax
  __m128 v6; // xmm0
  __int64 v7; // rax
  void *ptr; // [rsp+0h] [rbp-40h]
  _BYTE v9[48]; // [rsp+10h] [rbp-30h] BYREF

  result = *(void (__fastcall ****)(void *))(a1 + 920);
  if ( !result )
  {
    v2 = sub_186B270(0x178u);
    *(_QWORD *)v2 = qword_1C7A350;
    sub_16511B0(v2 + 8);
    *(_QWORD *)(v2 + 56) = a1;
    *(_QWORD *)v2 = &off_1C758F0;
    sub_DFBCB0(a1);
    sub_16669D0(v2 + 64, *(_QWORD *)(a1 + 296));
    sub_DFBCB0(a1);
    sub_16744A0(v2 + 80, *(_QWORD *)(a1 + 296));
    sub_DFBCB0(a1);
    sub_1684300(v2 + 104, *(_QWORD *)(a1 + 296));
    sub_DFBCB0(a1);
    sub_15C5470(v2 + 120, *(_QWORD *)(a1 + 296));
    sub_DFBCB0(a1);
    v3 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(v2 + 184) = v3;
    sub_180C5A0(v9, "seq");
    v4 = sub_15DA4C0(v3 + 560, v9);
    v5 = sub_15D2690(v3, v4);
    *(__m128 *)(v2 + 192) = _mm_loadh_ps((const double *)(v5 + 88));
    LODWORD(v5) = *(_DWORD *)(v5 + 16);
    *(_QWORD *)(v2 + 264) = 0;
    v6 = _mm_loadh_ps((const double *)(v2 + 184));
    *(_DWORD *)(v2 + 208) = v5;
    *(_DWORD *)(v2 + 232) = v5;
    *(_DWORD *)(v2 + 256) = v5;
    v7 = *(_QWORD *)(v2 + 184);
    *(_QWORD *)(v2 + 280) = 0;
    *(_QWORD *)(v2 + 272) = v7;
    *(_QWORD *)(v2 + 288) = 0;
    *(_QWORD *)(v2 + 296) = 0;
    *(_QWORD *)(v2 + 304) = 0xFFFFFFFFLL;
    *(_QWORD *)(v2 + 312) = 0;
    *(__m128 *)(v2 + 216) = v6;
    *(__m128 *)(v2 + 240) = v6;
    sub_DFBCB0(a1);
    sub_15F01E0(v2 + 320, *(_QWORD *)(a1 + 296));
    sub_DFBCB0(a1);
    sub_1624F90(v2 + 344, *(_QWORD *)(a1 + 296));
    result = *(void (__fastcall ****)(void *))(a1 + 920);
    if ( (void (__fastcall ***)(void *))v2 != result )
    {
      if ( result )
      {
        ptr = *(void **)(a1 + 920);
        (**result)(ptr);
        sub_186B220(ptr);
      }
      *(_QWORD *)(a1 + 920) = v2;
      return (void (__fastcall ***)(void *))v2;
    }
  }
  return result;
}

