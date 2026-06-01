/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A000
// Address: 0x000000000008A000

//----- (000000000008A000) ----------------------------------------------------
unsigned __int64 __fastcall sub_8A000(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int i; // eax
  __int64 v6; // rax
  char v8[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  char v10[8]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+20h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  sub_89A90(a1, a2, a3, a4, a5);
  for ( i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        i == 94;
        i = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL) )
  {
    v10[0] = 1;
    v11 = 0;
    sub_89A90(a1, (__int64)v10, 1, a4, a5);
    *(_QWORD *)(a2 + 8) ^= v11;
  }
  if ( (unsigned __int16)i == 124 )
  {
    do
    {
      v8[0] = 1;
      v9 = 0;
      sub_89A90(a1, (__int64)v8, 1, a4, a5);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL) == 94 )
      {
        do
        {
          v10[0] = 1;
          v11 = 0;
          sub_89A90(a1, (__int64)v10, 1, a4, a5);
          v6 = v9 ^ v11;
          v9 ^= v11;
        }
        while ( *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL) == 94 );
      }
      else
      {
        v6 = v9;
      }
      *(_QWORD *)(a2 + 8) |= v6;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL) == 124 );
  }
  return __readfsqword(0x28u);
}
