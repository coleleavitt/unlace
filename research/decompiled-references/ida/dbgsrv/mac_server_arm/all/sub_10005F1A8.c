/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F1A8
// Address: 0x000000010005F1A8

//----- (000000010005F1A8) ----------------------------------------------------
__int64 __fastcall sub_10005F1A8(__int64 a1)
{
  __int64 v1; // x8
  __int64 v3; // x22
  __int64 v4; // x21
  unsigned __int64 v5; // x0
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // x8
  unsigned __int64 v7; // x20
  int v8; // w0
  unsigned __int64 v10; // x8
  unsigned int v11; // w1

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v3 + 32 * v1;
  v5 = qtime64();
  if ( v5 < *(_QWORD *)(v4 - 16) )
    return 0;
  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
  if ( !v6 )
    return 0;
  v7 = v5;
  v8 = v6(*(unsigned __int8 *)(v3 + 24), *(_QWORD *)(v3 + 8), *(_QWORD *)v3, *(_QWORD *)(a1 + 16));
  if ( v8 == 2 )
  {
    *(_QWORD *)(a1 + 88) = "cancelled";
    *(_DWORD *)(a1 + 96) = -15059582;
    return 1;
  }
  else if ( v8 == 1 )
  {
    *(_QWORD *)(a1 + 88) = "skip_iter";
    *(_DWORD *)(a1 + 96) = -21015;
    return 0;
  }
  else
  {
    v10 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v11 = *(_DWORD *)(a1 + 24);
      if ( (v11 & 0x80000000) == 0 )
        v10 = sub_10005E28C(v7, v11);
    }
    *(_QWORD *)(v4 - 16) = v10;
    return 0;
  }
}
