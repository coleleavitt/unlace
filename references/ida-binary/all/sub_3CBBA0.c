__int64 __fastcall sub_3CBBA0(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v12; // r12
  unsigned __int8 v13; // r14
  double v14; // xmm0_8
  __int64 v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-98h] BYREF
  __int128 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-70h] BYREF
  __int128 v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  __int128 v32; // [rsp+48h] [rbp-50h]
  char v33; // [rsp+58h] [rbp-40h]
  unsigned __int64 v34; // [rsp+68h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( !*a1 )
    return 0;
  v9 = a1[26];
  if ( *(_BYTE *)(v9 + 31) != 12 )
    return 0;
  v12 = *(_QWORD *)(*a1 + 1000);
  result = 0;
  if ( (*(_BYTE *)(v12 + 112) & 1) != 0 )
  {
    v13 = (unsigned int)reg_int_op("ShowArglocs", 0, 0, 0) == 0;
    reg_int_op("ShowArglocs", 1, v13, 0);
    v14 = 0.0;
    v33 = 16;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v26 = 0;
    v30 = 0;
    v32 = 0;
    v15 = *(_QWORD *)(v9 + 8);
    v25 = 0;
    if ( (unsigned __int8)get_tinfo_details(v15, 12, &v25) )
    {
      v18 = v33 & 0xF0;
      if ( (v33 & 0xF0) == 0xC0 )
        v18 = HIDWORD(v27);
      v13 |= (unsigned int)(v18 - 208) <= 0x2F;
    }
    *(_BYTE *)(v12 + 59) = v13;
    sub_3AC490(a1, 0, (__int64)&unk_5C2F25, (__m128)0LL, a3, a4, a5, v16, v17, a8, a9);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      v14 = qfree(v31, nullptr);
    }
    cleanup_argloc(&v29);
    clear_tinfo_t(&v28);
    v19 = v25;
    if ( v25 )
    {
      v20 = v26;
      if ( (_QWORD)v26 )
      {
        v21 = 0;
        do
        {
          v22 = (_QWORD *)(v19 + 80 * v21);
          clear_tinfo_t(v22 + 8);
          v23 = v22[5];
          if ( v23 )
          {
            v22[6] = 0;
            v14 = qfree(v23, nullptr, v14);
          }
          v24 = v22[2];
          if ( v24 )
          {
            v22[3] = 0;
            v14 = qfree(v24, nullptr, v14);
          }
          ++v21;
          cleanup_argloc(v22);
          v19 = v25;
        }
        while ( v20 != v21 );
      }
      *(_QWORD *)&v26 = 0;
      qfree(v19, nullptr, v14);
    }
    return 1;
  }
  return result;
}
