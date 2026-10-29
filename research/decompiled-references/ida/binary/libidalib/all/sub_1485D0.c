__int64 __fastcall sub_1485D0(
        double a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  __int128 v13; // [rsp+8h] [rbp-70h]
  char v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( !sub_1483E0(a1, a2, a3, a4, a5, a6, a7, a8) )
    return -1;
  v12 = 0;
  v13 = 0;
  if ( !(unsigned __int8)get_idasgn_header_by_short_name() )
  {
    sub_92200(
      (__int64)"ICON ERROR\nAUTOHIDE NONE\nThe selected file is not a valid FLIRT signature file and cannot be used.\n",
      &v12);
    goto LABEL_11;
  }
  if ( (v14 & 1) != 0 )
  {
    sub_92200(
      (__int64)"ICON ERROR\n"
               "AUTOHIDE NONE\n"
               "The selected file is a startup FLIRT signature file and cannot be \n"
               "applied at this stage.\n",
      &v12);
LABEL_11:
    a10 = -1;
    goto LABEL_5;
  }
  plan_to_apply_idasgn();
LABEL_5:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  qfree();
  return a10;
}

