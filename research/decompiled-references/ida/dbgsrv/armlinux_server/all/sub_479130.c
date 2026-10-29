/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479130
// Address: 0x0000000000479130

//----- (0000000000479130) ----------------------------------------------------
bool __fastcall sub_479130(__int64 a1)
{
  __int64 v1; // x1
  __int64 v4; // x21
  __int64 v5; // x19
  unsigned __int64 v6; // x22
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD); // x4
  int v8; // w0
  signed int v9; // w1
  _BOOL4 v10; // w2

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = v4 + 32 * v1 - 32;
  v6 = sub_4926B8();
  if ( *(_QWORD *)(v5 + 16) <= v6
    && (v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8)) != nullptr )
  {
    v8 = v7(*(unsigned __int8 *)(v4 + 24), *(_QWORD *)(v4 + 8), *(_QWORD *)v4, *(_QWORD *)(a1 + 16));
    if ( v8 == 2 )
    {
      *(_QWORD *)(a1 + 88) = "cancelled";
      v10 = 1;
      *(_DWORD *)(a1 + 96) = -15059582;
    }
    else if ( v8 == 1 )
    {
      *(_QWORD *)(a1 + 88) = "skip_iter";
      *(_DWORD *)(a1 + 96) = -21015;
      return 0;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 24);
      v10 = v9 >= 0;
      if ( !*(_QWORD *)(a1 + 8) )
        v10 = 0;
      if ( v10 )
      {
        *(_QWORD *)(v5 + 16) = sub_476FC0(v6, v9);
        return 0;
      }
      else
      {
        *(_QWORD *)(v5 + 16) = 0;
      }
    }
  }
  else
  {
    return 0;
  }
  return v10;
}
