__int64 __fastcall sub_80DFC0(unsigned __int64 *a1, const __m128i *a2, int a3, char a4)
{
  __int16 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // rcx
  int v14; // r14d
  int v15; // eax
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  _WORD v17[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v18[18]; // [rsp+14h] [rbp-44h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a4 )
  {
    v16 = _mm_loadu_si128(a2);
    v5 = v16.m128i_i16[7];
    eadd(&unk_2399930, &v16, &v16, (unsigned int)v16.m128i_i16[7] >> 31);
    if ( v5 < 0 && v16.m128i_i16[7] )
      v16.m128i_i16[7] += 0x8000;
    emovi(&v16, v17);
  }
  else
  {
    emovi(a2, v17);
  }
  v10 = v17[1];
  *a1 = 0;
  v11 = v10 - 16382;
  if ( v10 - 16382 <= 0 )
    return 1;
  if ( v11 <= a3 )
  {
    if ( v11 > 16 )
    {
      v14 = ((_BYTE)v10 + 2) & 0xF;
      eshift(v17, ((_BYTE)v10 + 2) & 0xF, v6, v7, v8, v9);
      v12 = *(unsigned __int16 *)v18;
      v15 = v11 - v14;
      do
      {
        v15 -= 16;
        *(_QWORD *)v18 = *(_QWORD *)&v18[2];
        *(_QWORD *)&v18[8] = *(_QWORD *)&v18[10];
        v12 = *(unsigned __int16 *)v18 | (v12 << 16);
        *(_WORD *)&v18[16] = 0;
      }
      while ( v15 > 0 );
    }
    else
    {
      eshift(v17, (unsigned int)v11, v6, v7, v8, v9);
      v12 = *(unsigned __int16 *)v18;
    }
    if ( !v17[0] )
      goto LABEL_11;
    if ( a3 != 64 )
    {
      v12 = -(__int64)v12;
LABEL_11:
      *a1 = v12;
      return 1;
    }
  }
  return 5;
}

