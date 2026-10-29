/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CD60
// Address: 0x0003CD60

//----- (0003CD60) --------------------------------------------------------
int __cdecl sub_3CD60(_DWORD *a1, int a2)
{
  int result; // eax
  unsigned int v3; // eax
  unsigned __int64 v4; // kr00_8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // esi

  result = 0;
  if ( *(_DWORD *)(a2 + 4) != 8 )
  {
    v3 = a1[4];
    v4 = *(_QWORD *)(a1[33] + 372) - *(_QWORD *)(a1[33] + 364);
    if ( a2 + 64 >= v3 && a2 + 64 < (a1[5] << 6) + v3 )
    {
      v5 = *(_QWORD *)(a2 + 88);
      if ( v5 < v4 )
      {
        HIDWORD(v5) = *(_DWORD *)(a2 + 92);
        if ( v5 >= *(_QWORD *)(a2 + 24) )
          v4 = *(_QWORD *)(a2 + 88);
      }
    }
    v6 = *(_QWORD *)(a2 + 24);
    result = 0;
    if ( v6 < v4 )
    {
      v7 = v4 - v6;
      if ( *(_QWORD *)(a2 + 32) < v4 - v6 )
        return *(_DWORD *)(a2 + 32);
      return v7;
    }
  }
  return result;
}
