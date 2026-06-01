/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B540
// Address: 0x000000000041B540

//----- (000000000041B540) ----------------------------------------------------
unsigned __int64 __fastcall sub_41B540(
        __int64 a1,
        _BYTE *a2,
        unsigned int *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v12; // eax
  int v13; // ecx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  double v20; // xmm4_8
  double v21; // xmm5_8
  int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+8h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  if ( a2 )
    *a2 = 0;
  v12 = a3[1];
  v13 = v12 >> 16;
  if ( (_BYTE)v12 == 127 && v13 )
  {
    if ( (v12 & 0xFF00) == 0x500 && v13 == 3 )
    {
      v15 = *a3;
      ptrace(
        PTRACE_GETEVENTMSG,
        v15,
        0,
        &v24,
        *(double *)a4.m128_u64,
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        a8,
        a9,
        *(double *)a10.m128_u64,
        *(double *)a11.m128_u64);
      v22 = dword_4C56C8;
      v23 = v24;
      if ( dword_4C56C8 == -1 )
      {
        *(double *)a4.m128_u64 = sub_410F70(a4, a5, a6, a7, v20, v21, a10, a11, 16897, v15, v16, v17, v18, v19, v24);
        v22 = dword_4C56C8;
      }
      if ( v22 )
        ptrace(PTRACE_SETOPTIONS, v23, 0, 8);
      sub_41B160(a1, (unsigned int)v24, -1, 1, a4, a5, a6, a7, v20, v21, a10, a11);
      if ( !a2 )
        return v25 - __readfsqword(0x28u);
    }
    else if ( v13 != 128 || !a2 )
    {
      return v25 - __readfsqword(0x28u);
    }
    *a2 = 1;
  }
  return v25 - __readfsqword(0x28u);
}
// 41B622: variable 'v20' is possibly undefined
// 41B622: variable 'v21' is possibly undefined
// 41B622: variable 'v16' is possibly undefined
// 41B622: variable 'v17' is possibly undefined
// 41B622: variable 'v18' is possibly undefined
// 41B622: variable 'v19' is possibly undefined
// 4C56C8: using guessed type int dword_4C56C8;
