/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F8A0
// Address: 0x0043F8A0

//----- (0043F8A0) --------------------------------------------------------
int __cdecl sub_43F8A0(int a1, __int64 a2, __m128i *a3)
{
  __int32 *v4; // edx
  __int32 v5; // ecx
  const CHAR *v6; // eax
  __int32 v7; // ecx
  __int32 v8; // ecx

  if ( a2 )
  {
    if ( a2 - 1 < (unsigned __int64)*(unsigned int *)(a1 + 56) )
    {
      v4 = (__int32 *)(*(_DWORD *)(a1 + 52) + 104 * (a2 - 1));
      v5 = v4[1];
      a3[1].m128i_i32[2] = *v4;
      a3[1].m128i_i32[3] = v5;
      a3[2].m128i_i32[2] = v4[2];
      v6 = MultiByteStr;
      a3[2].m128i_i32[3] = 0;
      if ( v4[4] )
        v6 = (const CHAR *)v4[3];
      a3->m128i_i32[0] = (__int32)v6;
      a3[3].m128i_i32[0] = v4[6];
      a3[3].m128i_i32[1] = 0;
      a3[4].m128i_i32[2] = v4[7];
      a3[4].m128i_i32[3] = 0;
      v7 = v4[11];
      a3->m128i_i32[2] = v4[10];
      a3->m128i_i32[3] = v7;
      v8 = v4[13];
      a3[3].m128i_i32[2] = v4[12];
      a3[3].m128i_i32[3] = v8;
      return 0;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    sub_464890(a3, 0, 0x50u);
    a3->m128i_i32[0] = (__int32)pNodeName;
    return 0;
  }
}
