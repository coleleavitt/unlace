/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95970
// Address: 0x0000000000095970

//----- (0000000000095970) ----------------------------------------------------
__int64 __fastcall sub_95970(__int64 a1, __int64 *a2)
{
  __int64 *v2; // x20
  __int64 result; // x0
  int v5; // w8
  __int64 v6; // x9
  int v7; // w10
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x27
  __int64 v11; // x28
  const char *v12; // x0
  _QWORD *v13; // x8
  const char *v14; // x0

  v2 = (__int64 *)(a1 + 256);
  result = sub_95D28(a1 + 256, a2);
  v5 = *(_DWORD *)(a1 + 264);
  if ( v5 >= 1 )
  {
    v6 = *v2;
    v7 = 0;
    while ( *(_DWORD *)(*(_QWORD *)v6 + 8LL) )
    {
      ++v7;
      v6 += 24;
      if ( v7 >= v5 )
        return result;
    }
    if ( v6 && *(_DWORD *)(*(_QWORD *)v6 + 16LL) && (int)*(_QWORD *)(a1 + 112) >= 1 )
    {
      v8 = 0;
      v9 = (unsigned int)*(_QWORD *)(a1 + 112);
      do
      {
        v10 = *(_QWORD *)(a1 + 104);
        v11 = *(_QWORD *)(v10 + v8 + 24);
        if ( v11 )
          v12 = *(const char **)(v10 + v8 + 16);
        else
          v12 = &byte_F154B;
        result = strcmp(v12, ".debug_info");
        v13 = (_QWORD *)(a1 + 152);
        if ( !(_DWORD)result
          || (!v11 ? (v14 = &byte_F154B) : (v14 = *(const char **)(v10 + v8 + 16)),
              result = strcmp(v14, ".debug_types"),
              v13 = (_QWORD *)(a1 + 160),
              !(_DWORD)result) )
        {
          *v13 = *(_QWORD *)(v10 + v8 + 48);
        }
        --v9;
        v8 += 120;
      }
      while ( v9 );
    }
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
