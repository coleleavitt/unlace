/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413AC0
// Address: 0x0000000000413AC0

//----- (0000000000413AC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_413AC0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  bool v11; // zf
  __int64 v12; // rax
  const char *v13; // rdi
  const char *v15; // rcx
  _UNKNOWN **v16; // [rsp+0h] [rbp-38h] BYREF
  int v17; // [rsp+8h] [rbp-30h]
  __int64 v18; // [rsp+10h] [rbp-28h]
  _QWORD *v19; // [rsp+18h] [rbp-20h]
  __int64 v20; // [rsp+20h] [rbp-18h]
  unsigned __int64 v21; // [rsp+28h] [rbp-10h]

  v11 = *a3 == -1;
  v21 = __readfsqword(0x28u);
  v12 = a3[3];
  if ( v11 )
  {
    v15 = s1;
    if ( v12 )
      v15 = (const char *)a3[2];
    return sub_4563D0(a1, "Can't import symbols from %s: no imagebase\n", v15);
  }
  else
  {
    v18 = a1;
    v13 = s1;
    v17 = 49;
    v16 = &off_4C2148;
    v19 = a3;
    v20 = a2;
    if ( v12 )
      v13 = (const char *)a3[2];
    sub_42BC30(v13, &v16, 0, a4, a5, a6, a7, a8, a9, a10, a11);
    return v21 - __readfsqword(0x28u);
  }
}
// 4C2148: using guessed type _UNKNOWN *off_4C2148;
