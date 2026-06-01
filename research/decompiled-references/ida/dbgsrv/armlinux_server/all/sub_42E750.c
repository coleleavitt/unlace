/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E750
// Address: 0x000000000042E750

//----- (000000000042E750) ----------------------------------------------------
__int64 __fastcall sub_42E750(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // x19
  unsigned int v3; // w5
  int v4; // w4
  unsigned int v5; // w3
  __int64 v6; // x2
  __int64 v9; // x0

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *a2;
    v4 = 1;
    v5 = *(unsigned __int16 *)(v2 + 32);
    if ( v3 >= v5 )
      goto LABEL_5;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v2 + 16);
      if ( !v6 )
        break;
      while ( 1 )
      {
        v2 = v6;
        v4 = 1;
        v5 = *(unsigned __int16 *)(v6 + 32);
        if ( v3 < v5 )
          break;
LABEL_5:
        v6 = *(_QWORD *)(v2 + 24);
        v4 = 0;
        if ( !v6 )
          goto LABEL_6;
      }
    }
LABEL_6:
    if ( !v4 )
      goto LABEL_7;
  }
  else
  {
    v2 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 24) == v2 )
    return 0;
  v9 = sub_49F750(v2);
  v5 = *(unsigned __int16 *)(v9 + 32);
  v2 = v9;
  v3 = *a2;
LABEL_7:
  if ( v3 > v5 )
    return 0;
  else
    return v2;
}
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
