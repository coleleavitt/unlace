/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BA18
// Address: 0x000000000040BA18

//----- (000000000040BA18) ----------------------------------------------------
bool __fastcall sub_40BA18(__int64 a1, unsigned int a2)
{
  _BOOL4 v3; // w1
  __int64 v5; // x0
  _BYTE *v6; // [xsp+38h] [xbp-128h] BYREF
  __int64 v7; // [xsp+40h] [xbp-120h]
  _BYTE v8[240]; // [xsp+48h] [xbp-118h] BYREF
  __int64 v9; // [xsp+138h] [xbp-28h]
  __int64 v10; // [xsp+148h] [xbp-18h]

  v6 = v8;
  v7 = 272;
  v3 = sub_408438(a2);
  if ( v3 )
  {
    v5 = ptrace(PTRACE_GETREGSET, a2, 1, &v6);
    v3 = 0;
    if ( !v5 )
    {
      v6 = v8;
      v7 = 272;
      v10 = v9;
      v3 = sub_408438(a2);
      if ( v3 )
        return ptrace(PTRACE_SETREGSET, a2, 1, &v6) == 0;
    }
  }
  return v3;
}
