/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D400
// Address: 0x0003D400

//----- (0003D400) --------------------------------------------------------
unsigned int __cdecl sub_3D400(int a1, unsigned int *a2)
{
  unsigned int result; // eax
  int v3; // edx
  unsigned __int64 v4; // kr00_8
  unsigned __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // [esp+14h] [ebp-18h]

  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20100);
    BUG();
  }
  result = 0;
  if ( *a2 <= 6 )
  {
    v3 = 90;
    if ( _bittest(&v3, *a2) )
    {
      v4 = *(_QWORD *)(*(_DWORD *)(a1 + 32) + 372) - *(_QWORD *)(*(_DWORD *)(a1 + 32) + 364);
      LODWORD(v5) = a2[2];
      result = 0;
      if ( *((_QWORD *)a2 + 1) < v4 )
      {
        v6 = *(_DWORD *)(a1 + 16);
        if ( (int)a2 - v6 < -55 )
        {
          HIDWORD(v5) = a2[3];
        }
        else
        {
          v7 = -1227133513 * (((int)a2 - v6) >> 3) + 1;
          HIDWORD(v5) = a2[3];
          if ( v7 < *(_DWORD *)(a1 + 20) )
          {
            v10 = *(_DWORD *)(v6 + 56 * v7 + 8);
            v8 = *(_DWORD *)(v6 + 56 * v7 + 12);
            if ( __PAIR64__(v8, v10) >= v5 )
              v4 = __PAIR64__(v8, v10);
          }
        }
        v9 = v4 - v5;
        if ( *((_QWORD *)a2 + 4) < v4 - v5 )
          return a2[8];
        return v9;
      }
    }
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
