/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE9D0
// Address: 0x00000000000AE9D0

//----- (00000000000AE9D0) ----------------------------------------------------
__int64 __fastcall sub_AE9D0(__int64 a1)
{
  const char *v1; // rsi
  __int64 result; // rax
  __int128 v3; // xmm0
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 40) >= 2u )
  {
    sub_AEA60("certificate", *(const char **)(a1 + 32), 17);
    if ( *(_QWORD *)(a1 + 64) )
      v1 = *(const char **)(a1 + 56);
    else
      v1 = s1;
    sub_AEA60("private key", v1, 17);
  }
  result = (__int64)*(&xmmword_156A48 + 1);
  if ( (unsigned __int64)*(&xmmword_156A48 + 1) >= 2 )
  {
    v3 = *(_OWORD *)(a1 + 112);
    v4 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 112) = xmmword_156A48;
    *(_QWORD *)(a1 + 120) = result;
    result = xmmword_156A58;
    *(_QWORD *)(a1 + 128) = xmmword_156A58;
    *(_OWORD *)&xmmword_156A48 = v3;
    *(_QWORD *)&xmmword_156A58 = v4;
  }
  return result;
}
// 156A58: using guessed type __int128 xmmword_156A58;
