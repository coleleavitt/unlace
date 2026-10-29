/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5250
// Address: 0x00000000004A5250

//----- (00000000004A5250) ----------------------------------------------------
__int64 __fastcall sub_4A5250(__int64 result, char *a2, __int64 a3)
{
  __int64 v3; // x19
  char *v4; // x20
  char *v5; // x22
  __int64 v6; // x3
  __int64 v7; // x2
  void (__fastcall *v8)(__int64, __int64, __int64); // x3
  __int64 v9; // x0
  __int64 v10; // x1
  char v11; // w21

  if ( a3 )
  {
    v3 = result;
    v4 = a2;
    v5 = &a2[a3];
    v6 = *(_QWORD *)(result + 256);
    do
    {
      while ( 1 )
      {
        v10 = v6;
        result = v3;
        v11 = *v4;
        if ( v6 != 255 )
          break;
        v8 = *(void (__fastcall **)(__int64, __int64, __int64))(v3 + 272);
        v7 = *(_QWORD *)(v3 + 280);
        *(_BYTE *)(v3 + 255) = 0;
        ++v4;
        v8(v3, 255, v7);
        v9 = *(_QWORD *)(v3 + 320);
        v6 = 1;
        *(_QWORD *)(v3 + 256) = 1;
        result = v9 + 1;
        *(_QWORD *)(v3 + 320) = result;
        *(_BYTE *)v3 = v11;
        *(_BYTE *)(v3 + 264) = v11;
        if ( v4 == v5 )
          return result;
      }
      *(_QWORD *)(v3 + 256) = ++v6;
      *(_BYTE *)(v3 + v10) = v11;
      ++v4;
      *(_BYTE *)(v3 + 264) = v11;
    }
    while ( v4 != v5 );
  }
  return result;
}
