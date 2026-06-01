__int64 __fastcall appsgn_chooser_t__::vfunc_10(
        double a1,
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
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v20; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+8h] [rbp-70h]
  _BYTE v22[56]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v11 = sub_381290();
  if ( !v11 )
    return -1;
  v20 = 0;
  v12 = v11;
  v21 = 0;
  if ( !(unsigned __int8)get_idasgn_header_by_short_name(v22, &v20, v11) )
  {
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\nThe selected file is not a valid FLIRT signature file and cannot be used.\n",
      (__int64)&v20,
      v13,
      v14,
      v15,
      v16,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v17,
      v18,
      a7,
      a8,
      v20);
    goto LABEL_11;
  }
  if ( (v22[16] & 1) != 0 )
  {
    sub_169630(
      (int)"ICON ERROR\n"
           "AUTOHIDE NONE\n"
           "The selected file is a startup FLIRT signature file and cannot be \n"
           "applied at this stage.\n",
      (__int64)&v20,
      v13,
      v14,
      v15,
      v16,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v17,
      v18,
      a7,
      a8,
      v20);
LABEL_11:
    a10 = -1;
    goto LABEL_5;
  }
  plan_to_apply_idasgn(v12);
LABEL_5:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, (const char *)&v20);
  }
  qfree(v12, (const char *)&v20);
  return a10;
}
