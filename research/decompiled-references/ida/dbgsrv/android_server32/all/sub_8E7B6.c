/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E7B6
// Address: 0x0008E7B6

//----- (0008E7B6) --------------------------------------------------------
int __fastcall sub_8E7B6(int a1, int a2, unsigned int a3)
{
  int v3; // r6
  int v4; // r7
  int result; // r0
  unsigned int v6; // r1
  unsigned int v7; // r5
  int v8; // r1
  int v9; // r0
  __int64 v11; // [sp+Ch] [bp-8h]

  v3 = -102;
  if ( !a1 )
    return v3;
  v4 = *(_DWORD *)(a1 + 224);
  if ( !v4 )
    return v3;
  result = 0;
  v11 = *(_QWORD *)(v4 + 96);
  if ( !a2 )
    return *(_DWORD *)(v4 + 88) - v11;
  v6 = *(_DWORD *)(v4 + 88) - v11;
  if ( (unsigned __int64)*(unsigned int *)(v4 + 88) - v11 >= a3 )
    v6 = a3;
  if ( v6 )
  {
    v7 = v6;
    v8 = sub_8F128(
           v4 + 136,
           *(_DWORD *)(v4 + 180),
           *(_DWORD *)(v4 + 80) + v11,
           (unsigned __int64)(*(_QWORD *)(v4 + 80) + v11) >> 32,
           0);
    result = -1;
    if ( !v8 )
    {
      v9 = (*(int (__fastcall **)(_DWORD, _DWORD, int, unsigned int))(v4 + 140))(
             *(_DWORD *)(v4 + 164),
             *(_DWORD *)(v4 + 180),
             a2,
             v7);
      v3 = -1;
      if ( v9 == v7 )
        return v9;
      return v3;
    }
  }
  return result;
}
