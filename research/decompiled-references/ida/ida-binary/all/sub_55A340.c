unsigned __int64 __fastcall sub_55A340(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  double v18; // xmm0_8
  __int64 v21; // [rsp+8h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+10h] [rbp-C0h]
  __int64 v23; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+30h] [rbp-A0h]
  __int16 v25; // [rsp+40h] [rbp-90h]
  char v26; // [rsp+42h] [rbp-8Eh]
  char v27; // [rsp+48h] [rbp-88h]
  __int64 v28; // [rsp+50h] [rbp-80h]
  __int128 v29; // [rsp+58h] [rbp-78h]
  __int64 v30; // [rsp+68h] [rbp-68h]
  __int128 v31; // [rsp+70h] [rbp-60h]
  __int128 v32; // [rsp+88h] [rbp-48h] BYREF
  __int64 v33; // [rsp+98h] [rbp-38h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v25 = 0;
  v23 = 0;
  v26 = 1;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v24 = 0;
  v29 = 0;
  v31 = 0;
  sub_5521F0(a1 + 264, (__int64)&v23);
  v33 = 0;
  v32 = 0;
  sub_5574C0(a1, &v23, (int *)&v32, 0.0, a6, a7, a8, v13, v14, a11, a12);
  v15 = *(_QWORD *)(a2 + 200);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 192);
    v17 = 0;
    while ( *(_DWORD *)v16 != (_DWORD)a3 || *(_WORD *)(v16 + 4) != WORD2(a3) )
    {
      ++v17;
      v16 += 152;
      if ( v17 == v15 )
        goto LABEL_16;
    }
    v22 = 0;
    v21 = 0;
    v21 = qvector_reserve(&v21, 0, 1, 8);
    *(_QWORD *)(v21 + 8 * v22) = v17;
    *(_QWORD *)&v22 = v22 + 1;
  }
  else
  {
LABEL_16:
    v21 = 0;
    v22 = 0;
  }
  v18 = callui(203, 2, a1, a4, (unsigned int)&v21, (unsigned int)&callui);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    v18 = qfree(v21, (_BYTE *)&dword_0 + 2, v18);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    v18 = qfree(v30, (_BYTE *)&dword_0 + 2, v18);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    v18 = qfree(v28, (_BYTE *)&dword_0 + 2, v18);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, (_BYTE *)&dword_0 + 2, v18);
  }
  return v34 - __readfsqword(0x28u);
}
