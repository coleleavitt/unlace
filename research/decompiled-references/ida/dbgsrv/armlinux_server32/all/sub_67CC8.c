/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67CC8
// Address: 0x00067CC8

//----- (00067CC8) --------------------------------------------------------
bool __fastcall sub_67CC8(int a1)
{
  int v1; // r3
  _BOOL4 v2; // r3
  int v4; // r8
  int v6; // r4
  unsigned __int64 v7; // r0
  unsigned __int64 v8; // r6
  __int64 v9; // kr00_8
  int v10; // r0
  signed int v11; // r2
  __int64 v12; // r0

  v1 = *(_DWORD *)(a1 + 20);
  if ( !v1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  v6 = v4 + 24 * v1 - 24;
  LODWORD(v7) = sub_78F48();
  v8 = v7;
  if ( v7 < *(_QWORD *)(v6 + 8) )
    return 0;
  v9 = *(_QWORD *)(a1 + 4);
  if ( !(_DWORD)v9 )
    return 0;
  v10 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v9)(
          *(unsigned __int8 *)(v4 + 16),
          *(_DWORD *)(v4 + 4),
          *(_DWORD *)v4,
          HIDWORD(v9));
  if ( v10 == 2 )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 44) = "cancelled";
    *(_DWORD *)(a1 + 48) = -15059582;
  }
  else if ( v10 == 1 )
  {
    v2 = 0;
    *(_DWORD *)(a1 + 44) = "skip_iter";
    *(_DWORD *)(a1 + 48) = -21015;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 12);
    v2 = v11 >= 0;
    if ( !*(_DWORD *)(a1 + 4) )
      v2 = 0;
    if ( v2 )
    {
      LODWORD(v12) = sub_66608(v8, HIDWORD(v8), v11);
      v2 = 0;
      *(_QWORD *)(v6 + 8) = v12;
    }
    else
    {
      *(_QWORD *)(v6 + 8) = 0;
    }
  }
  return v2;
}
// 67CF0: variable 'v7' is possibly undefined
// 67D64: variable 'v12' is possibly undefined
