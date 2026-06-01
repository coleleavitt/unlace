/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A454
// Address: 0x0008A454

//----- (0008A454) --------------------------------------------------------
int __fastcall sub_8A454(int result, int a2, _DWORD *a3)
{
  __int64 v3; // kr00_8
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r1
  char v8; // r8
  char v9; // t1
  int v10; // r2
  int (__fastcall *v11)(int, int, int); // r3

  if ( *a3 != 49 )
    return sub_86C84(result, a2, (int)a3);
  v3 = *(_QWORD *)(a3[2] + 4);
  if ( HIDWORD(v3) )
  {
    v4 = *(_DWORD *)(result + 256);
    v5 = result;
    v6 = v3 - 1;
    do
    {
      v7 = v4;
      result = v5;
      v9 = *(_BYTE *)++v6;
      v8 = v9;
      if ( v4 == 255 )
      {
        v10 = *(_DWORD *)(v5 + 268);
        v11 = *(int (__fastcall **)(int, int, int))(v5 + 264);
        *(_BYTE *)(v5 + 255) = 0;
        result = v11(v5, 255, v10);
        v4 = 1;
        v7 = 0;
        ++*(_DWORD *)(v5 + 292);
      }
      else
      {
        ++v4;
      }
      *(_DWORD *)(v5 + 256) = v4;
      *(_BYTE *)(v5 + v7) = v8;
      *(_BYTE *)(v5 + 260) = v8;
    }
    while ( v6 != HIDWORD(v3) + (_DWORD)v3 - 1 );
  }
  return result;
}
