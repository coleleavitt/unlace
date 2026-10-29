/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C9200
// Address: 0x080C9200

//----- (080C9200) --------------------------------------------------------
int __usercall sub_80C9200@<eax>(_DWORD *a1@<eax>, const __m128i *a2@<edx>, int a3@<ecx>, char a4)
{
  __int16 v5; // di
  int v6; // ebp
  int v7; // ebp
  unsigned __int64 v8; // rcx
  int result; // eax
  int v10; // ebp
  __m128i v11; // xmm0
  __m128i v13; // [esp+Eh] [ebp-46h] BYREF
  _WORD v14[2]; // [esp+1Eh] [ebp-36h] BYREF
  __m128i v15; // [esp+22h] [ebp-32h] BYREF
  __int16 v16; // [esp+32h] [ebp-22h]
  unsigned int v17; // [esp+34h] [ebp-20h]

  v17 = __readgsdword(0x14u);
  if ( a4 )
  {
    v13 = _mm_loadu_si128(a2);
    v5 = v13.m128i_i16[7];
    sub_80C8F00((int)dword_80F13BC, (int)&v13, &v13, v13.m128i_i16[7] < 0);
    if ( v5 < 0 && v13.m128i_i16[7] )
      v13.m128i_i16[7] += 0x8000;
    sub_80C8760((int)&v13, v14);
  }
  else
  {
    sub_80C8760((int)a2, v14);
  }
  v6 = v14[1];
  *a1 = 0;
  a1[1] = 0;
  v7 = v6 - 16382;
  if ( v7 <= 0 )
    goto LABEL_12;
  if ( v7 <= a3 )
  {
    if ( v7 > 16 )
    {
      sub_80C8520((int)v14, v7 & 0xF);
      v8 = v15.m128i_u16[0];
      v10 = v7 - (v7 & 0xF);
      do
      {
        v11 = _mm_loadu_si128((const __m128i *)&v15.m128i_i16[1]);
        v16 = 0;
        v10 -= 16;
        v15 = v11;
        v8 = (unsigned int)_mm_extract_epi16(v11, 0) | (v8 << 16);
      }
      while ( v10 > 0 );
    }
    else
    {
      sub_80C8520((int)v14, v7);
      v8 = v15.m128i_u16[0];
    }
    if ( !v14[0] )
      goto LABEL_11;
    if ( a3 != 64 )
    {
      v8 = -(__int64)v8;
LABEL_11:
      *(_QWORD *)a1 = v8;
LABEL_12:
      result = 1;
      goto LABEL_13;
    }
  }
  result = 5;
LABEL_13:
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80F13BC: using guessed type int dword_80F13BC[3];
