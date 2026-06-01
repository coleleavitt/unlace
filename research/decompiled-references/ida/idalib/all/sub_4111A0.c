__int64 __fastcall sub_4111A0(
        __int64 *a1,
        __int64 a2,
        void *a3,
        char a4,
        __int8 a5,
        double a6,
        __m128 a7,
        __int64 a8,
        int a9,
        void *a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int64 a23)
{
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // r14
  __int64 v29; // r9
  __int64 v30; // rsi
  __int8 v33; // [rsp+1Fh] [rbp-49h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  sub_4110C0((__int64)a1, a2, (__int64)a3, a4, a5, a6, a7);
  v25 = sub_3BDD60(a1, a2);
  v26 = sub_3BDD60(a1, (__int64)a3);
  v27 = *a1;
  v34 = v25;
  v28 = v26;
  v33 = a5;
  if ( a4 )
  {
    sub_7BE7C0(&v34, v27, v26, &v33, 1, 100);
    v29 = 68;
  }
  else
  {
    sub_7BE7C0(&v34, v27, v26, &v33, 1, 120);
    v29 = 88;
  }
  v30 = *a1;
  v34 = v28;
  v33 = a5;
  sub_7BE7C0(&v34, v30, v25, &v33, 1, v29);
  if ( !sub_3BD540((__int64)a1, (__int64)a3) )
    return v35 - __readfsqword(0x28u);
  sub_3CFE40(a1, a3);
  if ( (sub_3BE900(a1, (unsigned __int64)a3, 4) & 0x600) == 0x200 )
    sub_3C2650(a1, (unsigned __int64)a3);
  return sub_4D9890((int)a1, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
}
