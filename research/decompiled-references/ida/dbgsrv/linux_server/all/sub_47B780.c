/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B780
// Address: 0x000000000047B780

//----- (000000000047B780) ----------------------------------------------------
__int64 __fastcall sub_47B780(unsigned __int64 *a1, const __m128i *a2, int a3, char a4)
{
  __int16 v5; // r13
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // rcx
  int v10; // r14d
  int v11; // eax
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  _WORD v13[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v14[18]; // [rsp+14h] [rbp-44h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a4 )
  {
    v12 = _mm_loadu_si128(a2);
    v5 = v12.m128i_i16[7];
    sub_47B4C0((__int64)&qword_4A27D0, (__int64)&v12, &v12, v12.m128i_i16[7] < 0);
    if ( v5 < 0 && v12.m128i_i16[7] )
      v12.m128i_i16[7] += 0x8000;
    sub_47AD20((__int64)&v12, v13);
  }
  else
  {
    sub_47AD20((__int64)a2, v13);
  }
  v6 = v13[1];
  *a1 = 0;
  v7 = v6 - 16382;
  if ( v6 - 16382 <= 0 )
    return 1;
  if ( v7 <= a3 )
  {
    if ( v7 > 16 )
    {
      v10 = ((_BYTE)v6 + 2) & 0xF;
      sub_47AAE0((__int64)v13, v10);
      v8 = *(unsigned __int16 *)v14;
      v11 = v7 - v10;
      do
      {
        v11 -= 16;
        *(_QWORD *)v14 = *(_QWORD *)&v14[2];
        *(_QWORD *)&v14[8] = *(_QWORD *)&v14[10];
        v8 = *(unsigned __int16 *)v14 | (v8 << 16);
        *(_WORD *)&v14[16] = 0;
      }
      while ( v11 > 0 );
    }
    else
    {
      sub_47AAE0((__int64)v13, v7);
      v8 = *(unsigned __int16 *)v14;
    }
    if ( !v13[0] )
      goto LABEL_11;
    if ( a3 != 64 )
    {
      v8 = -(__int64)v8;
LABEL_11:
      *a1 = v8;
      return 1;
    }
  }
  return 5;
}
// 4A27D0: using guessed type __int64 qword_4A27D0;
