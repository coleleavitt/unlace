/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AE290
// Address: 0x00000000004AE290

//----- (00000000004AE290) ----------------------------------------------------
__int64 __fastcall sub_4AE290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x20
  __int64 v8; // x2
  __int64 v9; // x2
  void (__fastcall *v10)(__int64, __int64, __int64); // x3
  __int64 v11; // x0
  __int64 v12; // x1
  char v13; // w21

  if ( *(_DWORD *)a3 != 49 )
    return def_4AD1E4(a1, a2, (unsigned int *)a3);
  result = *(_QWORD *)(a3 + 8);
  v5 = *(int *)(result + 16);
  v6 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)(result + 16) )
  {
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 256);
    do
    {
      while ( 1 )
      {
        v12 = v8;
        result = a1;
        v13 = *(_BYTE *)(v6 + v7);
        if ( v8 != 255 )
          break;
        v10 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v9 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        ++v7;
        v10(a1, 255, v9);
        v11 = *(_QWORD *)(a1 + 320);
        v8 = 1;
        *(_QWORD *)(a1 + 256) = 1;
        result = v11 + 1;
        *(_QWORD *)(a1 + 320) = result;
        *(_BYTE *)a1 = v13;
        *(_BYTE *)(a1 + 264) = v13;
        if ( v5 == v7 )
          return result;
      }
      *(_QWORD *)(a1 + 256) = ++v8;
      *(_BYTE *)(a1 + v12) = v13;
      ++v7;
      *(_BYTE *)(a1 + 264) = v13;
    }
    while ( v5 != v7 );
  }
  return result;
}
