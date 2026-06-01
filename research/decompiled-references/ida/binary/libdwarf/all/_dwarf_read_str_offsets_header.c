__int64 __fastcall dwarf_read_str_offsets_header(
        double *a1,
        __int64 a2,
        double *a3,
        __int16 *a4,
        _WORD *a5,
        __int16 *a6,
        _WORD *a7,
        _QWORD *a8,
        double *a9,
        _QWORD *a10)
{
  __int64 v15; // rdi
  double v16; // rdx
  int dwarf_five_hdr; // eax
  _WORD *v18; // r10
  __int16 v19; // ax
  double v21; // rdx
  double v22; // [rsp+18h] [rbp-80h]
  __int16 v23; // [rsp+38h] [rbp-60h] BYREF
  __int16 v24; // [rsp+3Ah] [rbp-5Eh] BYREF
  __int16 v25; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int16 v26; // [rsp+3Eh] [rbp-5Ah] BYREF
  double v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  double v29[9]; // [rsp+50h] [rbp-48h] BYREF

  v15 = *((_QWORD *)a1 + 1);
  *(_QWORD *)&v29[1] = __readfsqword(0x28u);
  v24 = 0;
  v16 = a1[4];
  v27 = 0.0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v29[0] = 0.0;
  if ( !a2 || !*(_DWORD *)(a2 + 464) )
  {
    v22 = v16;
    dwarf_five_hdr = _dwarf_trial_read_dwarf_five_hdr(
                       v15,
                       *((_QWORD *)a1 + 7),
                       SLODWORD(v16),
                       (int)&v28,
                       (int)v29,
                       (int)&v27,
                       (__int64)&v23,
                       (__int64)&v24,
                       (__int64)&v25,
                       (__int64)&v26,
                       (__int64)a10);
    v18 = a7;
    if ( dwarf_five_hdr )
    {
      v21 = v22;
      if ( dwarf_five_hdr == 1 && a10 )
      {
        dwarf_dealloc_error(v15, *a10);
        v18 = a7;
        v21 = v22;
        *a10 = 0;
      }
      v27 = v21;
      v29[0] = v21;
      v28 = 0;
      v23 = 4;
      v24 = 0;
      v25 = 4;
      v26 = 0;
    }
    if ( a3 )
      *a3 = v27;
    if ( a4 )
      *a4 = v23;
    if ( a5 )
      *a5 = v24;
    if ( a6 )
      *a6 = v25;
    if ( v18 )
      *v18 = v26;
    if ( a2 )
    {
      v19 = v25;
      *(_DWORD *)(a2 + 464) = 1;
      *(_WORD *)(a2 + 504) = v19;
      *(__m128 *)(a2 + 472) = _mm_loadh_ps((const double *)&v28);
      *(__m128 *)(a2 + 488) = _mm_loadh_ps(v29);
    }
    if ( a8 )
      *a8 = v28;
    if ( a9 )
      *a9 = v29[0];
  }
  return 0;
}

