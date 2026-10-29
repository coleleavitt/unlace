__int64 __fastcall sub_333280(
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
  unsigned int v10; // ebp
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 ash; // r12
  __int64 tinfo_tid; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v24; // rdx
  int v25; // r13d
  const char *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned __int64 v29; // r15
  unsigned int v30; // r13d
  unsigned int v31; // r14d
  __int64 v32; // rdx
  const char *v33; // rax
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rdx
  char v37; // [rsp+0h] [rbp-78h]
  char v38; // [rsp+Fh] [rbp-69h] BYREF
  __int64 v39; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+18h] [rbp-60h] BYREF
  __int64 v41; // [rsp+20h] [rbp-58h] BYREF
  char v42; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 != 58 && v9 != 25 )
  {
    v10 = 1;
    if ( sub_32FD50() )
      return v10;
    v11 = 0;
    v39 = 0;
    v38 = 0;
    v12 = sub_331180(0, 0, 0);
    if ( sub_1EC200(qword_8CD7E8) || (v11 = v12, !(unsigned __int8)is_enum(*((_QWORD *)&xmmword_8CC820 + 1), v12)) )
    {
      if ( !sub_1EC200(qword_8CD7E8)
        && (v11 = xmmword_8CC810, (unsigned __int8)sub_331AD0(&v40, xmmword_8CC810, v12, 0, 1)) )
      {
        v28 = sub_32F240(xmmword_8CC810, v12);
        v29 = v40;
        v30 = v28;
        v31 = dword_8BCDE0[8];
        v33 = (const char *)itext(1101, v12, v32);
        sub_1AC310(
          &v41,
          v33,
          v31,
          v29,
          v30,
          &v38,
          *(double *)a2.m128_u64,
          *(double *)a3.m128_u64,
          a4,
          a5,
          v34,
          v35,
          a8,
          a9);
        copy_tinfo_t(&v39, &v41, v36);
        clear_tinfo_t(&v41);
      }
      else
      {
        v25 = dword_8BCDE0[8];
        v26 = (const char *)itext(1101, v11, v24);
        sub_1AB560(&v41, v26, v25);
        copy_tinfo_t(&v39, &v41, v27);
        clear_tinfo_t(&v41);
      }
      v10 = 1;
      if ( !(_BYTE)v39 )
        goto LABEL_10;
      dword_8BCDE0[8] = get_tinfo_property(v39, 7);
    }
    ash = get_ash();
    tinfo_tid = get_tinfo_tid(&v39, 0);
    if ( !(unsigned __int8)getinf_flag(2, 2) && get_tinfo_property(v39, 291) && !*(_QWORD *)(ash + 280) )
      sub_169630(
        (int)"ICON ERROR\n"
             "AUTOHIDE NONE\n"
             "The target assembler doesn't support 'bitwise or' operation,\n"
             "bitfields will not be displayed properly",
        291,
        v15,
        v16,
        v17,
        v18,
        a2,
        a3,
        a4,
        a5,
        v19,
        v20,
        a8,
        a9,
        v37);
    v41 = tinfo_tid;
    v42 = v38;
    qword_8BC990 = (__int64)&v41;
    v10 = 1;
    if ( !sub_32FD50() )
      v10 = sub_331480(
              "Enum",
              (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_32E3E0,
              (__int64)&off_8BC980,
              0,
              0,
              a2,
              a3,
              a4,
              a5,
              v21,
              v22,
              a8,
              a9);
LABEL_10:
    clear_tinfo_t(&v39);
    return v10;
  }
  return sub_3AEB70();
}
