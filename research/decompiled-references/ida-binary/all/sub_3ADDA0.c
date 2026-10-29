__int64 __fastcall sub_3ADDA0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // r9d
  __int64 v15; // r13
  double v16; // xmm0_8
  __int64 v17; // rdi
  double v18; // xmm0_8
  __int64 v19; // rdx
  int v20; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  double v24; // xmm0_8
  __int64 v25; // [rsp+0h] [rbp-198h] BYREF
  __int128 v26; // [rsp+8h] [rbp-190h]
  __int64 v27; // [rsp+20h] [rbp-178h] BYREF
  __int64 v28; // [rsp+28h] [rbp-170h]
  _QWORD v29[34]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v30; // [rsp+150h] [rbp-48h]
  unsigned __int64 v31; // [rsp+158h] [rbp-40h]

  v11 = *(_QWORD *)(a2 + 208);
  v31 = __readfsqword(0x28u);
  v12 = *(_BYTE *)(v11 + 31) & 0xEF;
  if ( (*(_BYTE *)(v11 + 31) & 0xEF) == 0xD )
  {
    v13 = *(_QWORD *)(v11 + 232) >> 3;
    if ( *(_QWORD *)(v11 + 232) == -1 )
      v13 = 0;
  }
  else
  {
    if ( *(_BYTE *)(v11 + 31) != 45 )
      return 0;
    v13 = *(_QWORD *)(v11 + 288);
    if ( v13 == -1 )
      v13 = 0;
  }
  v25 = 0;
  v26 = 0;
  sub_4BEFD0(&v27, 1766, v12, 0);
  sub_3AD7B0((__int64)v29, (__int64)&v27, v11 + 8, v13);
  if ( (unsigned int)callui(203, 0, (unsigned int)v29, (unsigned int)&v25, (unsigned int)&callui, v14) == 1 )
  {
    v15 = v30;
    if ( (*(_BYTE *)(v11 + 31) & 0xEF) == 0xD && v30 != -1 )
      v15 = 8 * v30;
    v29[0] = &ask_offset_dialog_t___vtable;
    v16 = forms::dialog_desc_t__::vfunc_0(v29, nullptr);
    if ( v27 )
    {
      v28 = 0;
      v16 = qfree(v27, nullptr, v16);
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      v16 = qfree(v25, nullptr, v16);
    }
    v17 = *(_QWORD *)(a1 + 1000);
    v29[0] = -2;
    v18 = (*(double (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64, double))(*(_QWORD *)v17 + 104LL))(
            v17,
            v29,
            v11 + 8,
            0xFFFFFFFFLL,
            v15,
            v16);
    v19 = v29[0];
    LODWORD(v29[0]) = v20;
    v29[1] = v19;
    sub_3ACC30(a1, (__int64)v29, 3u, v18, a4, a5, a6, v21, v22, a9, a10);
  }
  else
  {
    v29[0] = &ask_offset_dialog_t___vtable;
    v24 = forms::dialog_desc_t__::vfunc_0(v29, nullptr);
    if ( v27 )
    {
      v28 = 0;
      v24 = qfree(v27, nullptr, v24);
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, nullptr, v24);
    }
  }
  return 1;
}
