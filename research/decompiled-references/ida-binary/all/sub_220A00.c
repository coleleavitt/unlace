unsigned __int64 __fastcall sub_220A00(signed int *a1, unsigned __int64 *a2, const char *a3, __int64 a4)
{
  unsigned __int64 that; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rdx
  char *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // [rsp+0h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+8h] [rbp-1C0h]
  __int64 v20; // [rsp+18h] [rbp-1B0h]
  __int128 v21; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-198h]
  __int64 v23; // [rsp+38h] [rbp-190h]
  __int64 v24; // [rsp+40h] [rbp-188h]
  char v25; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v26[8]; // [rsp+188h] [rbp-40h] BYREF

  v26[0] = __readfsqword(0x28u);
  if ( (dword_8CB69C & 1) != 0 )
  {
    v18 = 0;
    v19 = 0;
    v22 = -1;
    that = prev_that(a4, a3, sub_20A790, 0);
    v9 = v26;
    v23 = 0;
    v10 = &v25;
    v24 = 0;
    v21 = -1;
    do
    {
      v11 = 0;
      v12 = nullptr;
      v13 = 0;
      *(_WORD *)v10 = 0;
      v10 += 40;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *((_QWORD *)v10 - 2) = 0;
    }
    while ( v26 != (_QWORD *)v10 );
    while ( that != -1 )
    {
      if ( that < *a2 )
        break;
      if ( that >= a2[1] )
        break;
      v12 = (const char *)that;
      if ( (int)((__int64 (__fastcall *)(__int128 *, unsigned __int64, _QWORD *, __int64, __int64, __int64, double, __int64, _QWORD, _QWORD, __int64))decode_insn)(
                  &v21,
                  that,
                  v9,
                  v11,
                  v13,
                  v8,
                  0.0,
                  v18,
                  v19,
                  *((_QWORD *)&v19 + 1),
                  v20) > 0 )
      {
        if ( (unsigned __int8)is_call_insn(&v21) )
          break;
      }
      v14 = v19;
      v15 = v18;
      if ( *((_QWORD *)&v19 + 1) < (unsigned __int64)(v19 + 1) )
      {
        v18 = qvector_reserve(&v18, v18, v19 + 1, 8);
        v15 = v18;
        v14 = v19;
      }
      *(_QWORD *)(v15 + 8 * v14) = that;
      v12 = a3;
      *(_QWORD *)&v19 = v19 + 1;
      that = prev_that(that, a3, sub_20A790, 0);
    }
    v16 = (unsigned int)(v19 - 1);
    v17 = 8 * v16;
    if ( (int)v16 >= 0 )
    {
      do
      {
        v12 = (const char *)a1;
        sub_2207E0((__m128i *)qword_8CBAA0, a1, *(_QWORD *)(v18 + v17), 2);
        LODWORD(v16) = v16 - 1;
        v17 -= 8;
      }
      while ( (_DWORD)v16 != -1 );
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v12, v9, 0.0);
    }
  }
  return v26[0] - __readfsqword(0x28u);
}
