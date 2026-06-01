__int64 __fastcall sub_332D90(
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
  int v9; // eax
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 eah; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  char aflags; // al
  __int64 v23; // r12
  __int64 v24; // rbp
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rax
  double v28; // xmm4_8
  double v29; // xmm5_8
  int v30; // [rsp+0h] [rbp-138h] BYREF
  char v31[256]; // [rsp+8h] [rbp-130h] BYREF
  __int64 v32; // [rsp+108h] [rbp-30h] BYREF
  __int64 v33; // [rsp+110h] [rbp-28h]
  unsigned __int64 v34; // [rsp+118h] [rbp-20h]

  v9 = *(_DWORD *)(a1 + 8);
  v34 = __readfsqword(0x28u);
  if ( v9 == 25 || v9 == 58 )
    return sub_3AE9A0(a1);
  if ( sub_32FD50() )
    return 1;
  if ( sub_1EC200(qword_8CD7E8) )
    return sub_393FC0(a1);
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v11 = sub_331180(0, 0, 0);
  if ( sub_1EC200(qword_8CD7E8) || !(unsigned __int8)is_stroff(*((_QWORD *)&xmmword_8CC820 + 1), v11) )
  {
    v12 = xmmword_8CC810;
    sub_331AD0(&v32, xmmword_8CC810, v11, 0, 0);
    v33 = 0;
    *(_QWORD *)&dword_8BCDE0[6] = 0;
    eah = get_eah(&v32, v12, v13);
    v19 = v33 + v32;
    v20 = *(_DWORD *)(eah + 24) == 8;
    v21 = (int)v33 + (int)v32;
    if ( v20 )
      v21 = v33 + v32;
    if ( v21 < 0 )
    {
      sub_169630(
        (int)"ICON ERROR\n"
             "AUTOHIDE NONE\n"
             "The resulting structure offset (%lld=%lld+%lld) is negative. Negative structure offsets are not supported",
        v19,
        v32,
        v33,
        v15,
        v16,
        a2,
        a3,
        a4,
        a5,
        v17,
        v18,
        a8,
        a9,
        v30);
      return 0;
    }
    aflags = get_aflags(xmmword_8CC810);
    v23 = v33;
    v24 = v32;
    v25 = aflags;
    v27 = itext(1100, v19, v26);
    v30 = sub_1AD830(v27, -1, v24, v23, v25 < 0, v31);
    if ( !v30 )
      return 1;
  }
  qword_8BC9B0 = (__int64)&v30;
  if ( sub_32FD50() )
    return 1;
  return sub_331480(
           "Struct offset",
           (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
           (__int64)&off_8BC9A0,
           0,
           0,
           a2,
           a3,
           a4,
           a5,
           v28,
           v29,
           a8,
           a9);
}
