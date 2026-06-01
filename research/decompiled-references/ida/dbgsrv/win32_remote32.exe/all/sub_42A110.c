/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A110
// Address: 0x0042A110

//----- (0042A110) --------------------------------------------------------
int __userpurge sub_42A110@<eax>(__m128i a1@<xmm0>, _DWORD *a2)
{
  int v3; // ecx
  int v4; // edi
  const char *v5; // eax

  if ( a2[29] != 1 )
    return sub_45CC20(47);
  v3 = *(_DWORD *)(a2[24] + 8);
  if ( !v3 )
    return sub_45CC20(1586);
  v4 = *(_DWORD *)(*(_DWORD *)(a2[14] + 40) + 4 * v3);
  if ( sub_40B580((const char **)(v4 + 16), (int)(a2 + 4)) )
    return sub_45CC20(1586);
  v5 = MultiByteStr;
  if ( *(_DWORD *)(v4 + 20) )
    v5 = *(const char **)(v4 + 16);
  return sub_42C8D0((int)a2, a1, v5);
}
