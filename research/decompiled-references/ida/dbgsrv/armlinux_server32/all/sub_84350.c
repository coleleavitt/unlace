/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84350
// Address: 0x00084350

//----- (00084350) --------------------------------------------------------
int __fastcall sub_84350(int result, int a2, int a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r6
  int v6; // r5
  int v7; // r1
  char v8; // r8
  char v9; // t1
  int v10; // r2
  int (__fastcall *v11)(int, int, int); // r3

  if ( a3 )
  {
    v3 = *(_DWORD *)(result + 256);
    v4 = result;
    v5 = a2 + a3 - 1;
    v6 = a2 - 1;
    do
    {
      v7 = v3;
      result = v4;
      v9 = *(_BYTE *)++v6;
      v8 = v9;
      if ( v3 == 255 )
      {
        v10 = *(_DWORD *)(v4 + 268);
        v11 = *(int (__fastcall **)(int, int, int))(v4 + 264);
        *(_BYTE *)(v4 + 255) = 0;
        result = v11(v4, 255, v10);
        v3 = 1;
        v7 = 0;
        ++*(_DWORD *)(v4 + 292);
      }
      else
      {
        ++v3;
      }
      *(_DWORD *)(v4 + 256) = v3;
      *(_BYTE *)(v4 + v7) = v8;
      *(_BYTE *)(v4 + 260) = v8;
    }
    while ( v6 != v5 );
  }
  return result;
}
