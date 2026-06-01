/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412DB0
// Address: 0x0000000000412DB0

//----- (0000000000412DB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_412DB0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  double v19; // xmm0_8
  __int64 v20; // rax
  void *v21; // rsi
  void *v22; // rax
  __int64 (__fastcall **v23)(); // [rsp+0h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-30h]
  unsigned int v25; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v23 = &off_4C2108;
  v24 = a2;
  v25 = a3;
  if ( !(unsigned int)sub_45A8A0((__int64 (__fastcall ***)(_QWORD, __int64))&v23) )
  {
    if ( (_BYTE)a3 == 127 )
    {
      v20 = a1[161];
      v21 = (void *)a1[160];
      if ( a1[162] < (unsigned __int64)(v20 + 1) )
      {
        v22 = sub_481540((__int64)(a1 + 160), v21, v20 + 1, 4u);
        a1[160] = v22;
        v21 = v22;
        v20 = a1[161];
      }
      *((_DWORD *)v21 + v20) = a2;
      ++a1[161];
    }
    else if ( __OFSUB__((a3 & 0x7F) + 1, 1) || (a3 & 0x7F) == 0 )
    {
      v19 = sub_410EA0(
              (int)"  %d: failed to store pending status %x, killing unknown thread\n",
              a2,
              a3,
              v13,
              v14,
              v15,
              a4,
              a5,
              a6,
              a7,
              v16,
              v17,
              a10,
              a11,
              (char)v23);
      ptrace(PTRACE_KILL, a2, 0, 0, v19);
    }
  }
  return v26 - __readfsqword(0x28u);
}
// 412E2D: variable 'v13' is possibly undefined
// 412E2D: variable 'v14' is possibly undefined
// 412E2D: variable 'v15' is possibly undefined
// 412E2D: variable 'v16' is possibly undefined
// 412E2D: variable 'v17' is possibly undefined
// 4C2108: using guessed type __int64 (__fastcall *off_4C2108)();
