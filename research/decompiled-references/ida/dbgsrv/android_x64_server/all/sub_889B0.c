/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_889B0
// Address: 0x00000000000889B0

//----- (00000000000889B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_889B0(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  char v7[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_887D0(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    while ( 1 )
    {
      v7[0] = 1;
      v8 = 0;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
      if ( v5 != 45 )
        break;
      sub_887D0(a1, (__int64)v7, 1, a4, a5);
      *(_QWORD *)(a2 + 8) -= v8;
    }
    if ( (unsigned __int16)v5 != 43 )
      break;
    sub_887D0(a1, (__int64)v7, 1, a4, a5);
    *(_QWORD *)(a2 + 8) += v8;
  }
  return __readfsqword(0x28u);
}
