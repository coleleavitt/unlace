/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA8A0
// Address: 0x00000000000EA8A0

//----- (00000000000EA8A0) ----------------------------------------------------
__int64 __fastcall sub_EA8A0(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v5; // x0
  __int64 v6; // x8
  unsigned __int64 v7; // x10
  _BYTE *v8; // x0
  _BYTE *v9; // x0
  size_t v10; // x1
  _BYTE *v11; // x20
  __int64 result; // x0

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    v5 = *(_QWORD *)(a1 + 16);
    if ( *(_BYTE *)(v5 + 9) )
    {
      if ( *(_BYTE *)(v5 + 9) != 2 || ((**(__int64 (__fastcall ***)(__int64, __int64))v5)(v5, a2) & 1) == 0 )
      {
        v6 = *(_QWORD *)(a2 + 8);
        v7 = *(_QWORD *)(a2 + 16);
        if ( v6 + 1 >= v7 )
        {
          v9 = *(_BYTE **)a2;
          if ( 2 * v7 >= v6 + 1 )
            v10 = 2 * v7;
          else
            v10 = v6 + 1;
          *(_QWORD *)(a2 + 16) = v10;
          v8 = realloc(v9, v10);
          v6 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v8;
        }
        else
        {
          v8 = *(_BYTE **)a2;
        }
        v8[v6] = 32;
        ++*(_QWORD *)(a2 + 8);
      }
    }
  }
  v11 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 24LL))(v11, a2);
  if ( v11[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, a2);
  return result;
}
