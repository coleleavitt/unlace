/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408A60
// Address: 0x0000000000408A60

//----- (0000000000408A60) ----------------------------------------------------
__int64 __fastcall sub_408A60(__int64 a1)
{
  unsigned int v2; // w21
  unsigned int v4; // w22
  __int64 v5; // x1
  __int64 v6; // [xsp+38h] [xbp-18h] BYREF
  __int64 v7; // [xsp+40h] [xbp-10h]

  if ( !*(_BYTE *)(a1 + 912) )
    goto LABEL_2;
  v6 = a1 + 104;
  v7 = 272;
  v4 = *(_DWORD *)(a1 + 100);
  v2 = sub_408438(v4);
  if ( !v2 )
    return v2;
  if ( ptrace(PTRACE_SETREGSET, v4, 1, &v6) )
  {
    return 0;
  }
  else
  {
LABEL_2:
    v2 = *(unsigned __int8 *)(a1 + 913);
    if ( *(_BYTE *)(a1 + 913) )
    {
      v5 = *(unsigned int *)(a1 + 100);
      v6 = a1 + 384;
      v7 = 528;
      if ( ptrace(PTRACE_SETREGSET, v5, 2, &v6) )
        return 0;
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
// 408A60: could not find valid save-restore pair for x22
