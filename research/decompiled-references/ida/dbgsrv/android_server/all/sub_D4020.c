/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4020
// Address: 0x00000000000D4020

//----- (00000000000D4020) ----------------------------------------------------
unsigned __int64 __fastcall sub_D4020(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x20
  unsigned __int64 result; // x0
  unsigned int v6; // w21

  if ( !a1 )
    return 4294967194LL;
  v3 = *(_QWORD *)(a1 + 320);
  if ( !v3 )
    return 4294967194LL;
  result = *(unsigned int *)(v3 + 144) - *(_QWORD *)(v3 + 152);
  if ( a2 )
  {
    if ( result >= a3 )
      v6 = a3;
    else
      v6 = *(_DWORD *)(v3 + 144) - *(_DWORD *)(v3 + 152);
    if ( v6 )
    {
      if ( sub_D4FC4(v3 + 200) )
      {
        return 0xFFFFFFFFLL;
      }
      else if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v3 + 208))(
                  *(_QWORD *)(v3 + 256),
                  *(_QWORD *)(v3 + 288),
                  a2,
                  v6) == v6 )
      {
        return v6;
      }
      else
      {
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
