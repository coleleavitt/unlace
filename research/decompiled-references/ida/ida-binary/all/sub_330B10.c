__int64 __fastcall sub_330B10(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 ph; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  int v15; // ebp
  __int64 v16; // rdi
  __int64 v17; // rbx
  char v19; // [rsp+0h] [rbp-438h]
  __int16 v20; // [rsp+Eh] [rbp-42Ah] BYREF
  _BYTE v21[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v22; // [rsp+418h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  ph = get_ph(a1, a2);
  sub_32E8C0(
    ph,
    (__int64)v21,
    1018,
    "\n<~A~pply to all segments:C>>\n\nThis value will be used when the\nregister value is not known.\n\n\n",
    *(double *)a3.m128_u64);
  v20 = 0;
  if ( (unsigned int)sub_1697D0(
                       (int)v21,
                       (__int64)&word_8CEC28,
                       (__int64)&dword_8BCDE0[2],
                       (__int64)&v20,
                       v11,
                       v12,
                       a3,
                       a4,
                       a5,
                       a6,
                       v13,
                       v14,
                       a9,
                       a10,
                       v19) )
  {
    v15 = *(_DWORD *)(ph + 68) + (unsigned __int16)word_8CEC28;
    if ( *(_DWORD *)(ph + 80) <= v15 )
      ++v15;
    v16 = 0;
    v17 = *(_QWORD *)&dword_8BCDE0[2];
    if ( !v20 )
      v16 = getseg(xmmword_8CC810);
    set_default_sreg_value(v16, (unsigned int)v15, v17);
  }
  return 1;
}
