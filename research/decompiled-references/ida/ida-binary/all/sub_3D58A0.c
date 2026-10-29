unsigned __int64 __fastcall sub_3D58A0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // [rsp-8h] [rbp-48h]
  __int64 v20; // [rsp+8h] [rbp-38h] BYREF
  __int128 v21; // [rsp+10h] [rbp-30h]
  unsigned __int64 v22; // [rsp+20h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  aCWindows[0] = 0;
  if ( !(unsigned __int8)read_config("idagui.cfg", 1, &off_873E40, 56, sub_3D5730, 0, 0) )
    sub_169630(
      (int)"Errors while processing %s.",
      (__int64)"idagui.cfg",
      v8,
      v19,
      v9,
      v10,
      a1,
      a2,
      a3,
      a4,
      v11,
      v12,
      a7,
      a8,
      v20);
  if ( !aCWindows[0] )
    sub_303570((__int64)aCWindows, 4097);
  v20 = 0;
  v21 = 0;
  reg_read_strlist(&v20, "History64");
  if ( dword_8BCE24 < (unsigned __int64)v21 )
    reg_update_strlist("History64", 0, dword_8BCE24, 0, 0);
  register_cfgopts(&off_873E40, 56, 0, 0);
  v13 = v20;
  if ( v20 )
  {
    v14 = v21;
    if ( (_QWORD)v21 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, (const char *)&word_38);
          v13 = v20;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v13, (const char *)&word_38);
  }
  return v22 - __readfsqword(0x28u);
}
