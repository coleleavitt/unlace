/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427080
// Address: 0x0000000000427080

//----- (0000000000427080) ----------------------------------------------------
__int64 __fastcall sub_427080(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // w7
  unsigned int v4; // w5
  __int64 v5; // x4
  bool v7; // cc
  int v8; // w2
  __int64 v9; // x0

  if ( a3 == 5 )
  {
LABEL_14:
    v3 = 4;
  }
  else
  {
    if ( a3 <= 5 )
      goto LABEL_9;
    if ( a3 == 12 )
    {
      v3 = 1879048189;
    }
    else if ( a3 <= 0xC )
    {
      if ( a3 != 6 )
        goto LABEL_7;
      if ( *(_DWORD *)(a1 + 480) == 7 )
        v3 = 4;
      else
        v3 = 9;
    }
    else if ( a3 == 13 )
    {
      v3 = 1879048190;
    }
    else
    {
      v3 = 1879048191;
      if ( a3 != 14 )
      {
        while ( 1 )
        {
LABEL_7:
          a1 = (unsigned __int8)under_debugger;
          if ( !under_debugger )
            sub_492270(20101);
          __break(0x3E8u);
LABEL_9:
          if ( a3 == 2 )
            break;
          if ( a3 <= 2 )
          {
            v3 = 11;
            if ( a3 == 1 )
              goto LABEL_15;
          }
          else
          {
            if ( a3 == 3 )
              goto LABEL_14;
            if ( a3 == 4 )
              break;
          }
        }
        v3 = 9;
      }
    }
  }
LABEL_15:
  v4 = 0;
  v5 = a1 + 32LL * (int)a3;
  if ( *(__int64 *)v5 <= 0 )
    return v4;
  if ( !*(_QWORD *)(v5 + 16) )
    return v4;
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  v4 = 1;
  *(_QWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 40) = 0;
  v7 = a3 - 4 > 1;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 32LL * (int)a3);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v5 + 16);
  v8 = *(_DWORD *)(v5 + 28);
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)(a2 + 44) = v8;
  if ( !v7 )
    return v4;
  if ( v3 == 11 )
  {
    v9 = *(unsigned __int16 *)(v5 + 24);
  }
  else if ( v3 == 4 )
  {
    v9 = *(unsigned __int16 *)(a1 + 120);
  }
  else
  {
    v9 = *(unsigned __int16 *)(a1 + 88);
  }
  *(_QWORD *)(a2 + 56) = v9;
  return 1;
}
// 52451C: using guessed type char under_debugger;
