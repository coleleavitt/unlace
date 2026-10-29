__int64 __fastcall sub_5C70(
        const char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        double a6,
        double a7)
{
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  const char *v9; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v7 = *((_QWORD *)a1 + 1);
  v8 = v7 - a4;
  if ( a3 == 0xFFFFFFFF || a3 < a2 )
    sub_58B0((__int64)"Wrong segment definition %a..%a", a6, a7);
  if ( v8 < 0 )
    return sub_5350((__int64)"Truncated input file, cannot load the segment at %a..%a");
  v9 = a1;
  if ( v8 >= a3 - a2 )
  {
    if ( v7 >= a4 )
      goto LABEL_6;
LABEL_11:
    sub_5BD0(a1, a2, a3);
  }
  a1 = "Truncated input file, loading partial data for the segment at %a..%a";
  v13 = a4;
  sub_5350((__int64)"Truncated input file, loading partial data for the segment at %a..%a");
  a4 = v13;
  a3 = v8 + a2;
  if ( v7 < v13 || *((_QWORD *)v9 + 1) < v7 )
    goto LABEL_11;
LABEL_6:
  v11 = a4 + *(_QWORD *)v9;
  if ( a5 )
    a4 = -1;
  return mem2base(v11, a2, a3, a4);
}

