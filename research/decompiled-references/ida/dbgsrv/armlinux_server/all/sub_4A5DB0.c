/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5DB0
// Address: 0x00000000004A5DB0

//----- (00000000004A5DB0) ----------------------------------------------------
size_t __fastcall sub_4A5DB0(size_t a1, int a2)
{
  size_t result; // x0
  __int64 v4; // x20
  __int64 v5; // x2
  size_t v6; // x23
  __int64 v7; // x2
  void (__fastcall *v8)(size_t, __int64, __int64); // x3
  __int64 v9; // x0
  __int64 v10; // x1
  char v11; // w21
  char s[32]; // [xsp+40h] [xbp+40h] BYREF

  sprintf(s, "%d", a2);
  result = strlen(s);
  if ( result )
  {
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 256);
    v6 = result;
    do
    {
      while ( 1 )
      {
        v10 = v5;
        result = a1;
        v11 = s[v4];
        if ( v5 != 255 )
          break;
        v8 = *(void (__fastcall **)(size_t, __int64, __int64))(a1 + 272);
        v7 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        ++v4;
        v8(a1, 255, v7);
        v9 = *(_QWORD *)(a1 + 320);
        v5 = 1;
        *(_QWORD *)(a1 + 256) = 1;
        result = v9 + 1;
        *(_QWORD *)(a1 + 320) = result;
        *(_BYTE *)a1 = v11;
        *(_BYTE *)(a1 + 264) = v11;
        if ( v6 == v4 )
          return result;
      }
      *(_QWORD *)(a1 + 256) = ++v5;
      *(_BYTE *)(a1 + v10) = v11;
      ++v4;
      *(_BYTE *)(a1 + 264) = v11;
    }
    while ( v6 != v4 );
  }
  return result;
}
