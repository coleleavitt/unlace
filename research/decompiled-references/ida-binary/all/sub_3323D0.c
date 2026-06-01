__int64 __fastcall sub_3323D0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rdx
  double v12; // xmm4_8
  double v13; // xmm5_8
  const char *v14; // rbp
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-48h] BYREF
  int v21; // [rsp+18h] [rbp-30h]
  unsigned __int64 v22; // [rsp+28h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  if ( sub_32FD50() )
    return 1;
  if ( !sub_1EC200(qword_8CD7E8) )
  {
    a10 = (unsigned int)sub_331180(0, 0, 0);
    if ( (unsigned __int8)is_off(*((_QWORD *)&xmmword_8CC820 + 1), a10) )
    {
      v21 = 0;
      v20[0] = -1;
LABEL_10:
      v19 = -1;
      goto LABEL_8;
    }
  }
  v14 = *(const char **)&dword_8BCDE0[4];
  v15 = itext(1104, a10, v11);
  v16 = (__int64 *)sub_3241A0(v15, v14);
  if ( !v16 )
    return 1;
  v17 = *v16;
  v21 = 0;
  v20[0] = -1;
  *(_QWORD *)&dword_8BCDE0[4] = v17;
  v18 = v16[6];
  if ( v18 == -1 )
    goto LABEL_10;
  v19 = 16 * sel2para(v18);
LABEL_8:
  v20[1] = v19;
  v20[2] = 0;
  return sub_331480(
           "Offset",
           (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_331B90,
           (__int64)v20,
           1,
           1u,
           a1,
           a2,
           a3,
           a4,
           v12,
           v13,
           a7,
           a8);
}
