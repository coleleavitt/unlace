/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B770
// Address: 0x000000010001B770

//----- (000000010001B770) ----------------------------------------------------
__int64 __fastcall sub_10001B770(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  natural_t v6[128]; // [xsp+0h] [xbp-230h] BYREF
  unsigned __int64 v7; // [xsp+200h] [xbp-30h]

  result = sub_10001B834(a1, *(_DWORD *)a2, v6);
  if ( (_DWORD)result )
  {
    v5 = *(unsigned __int8 *)(a2 + 13);
    *(_BYTE *)(a2 + 12) = v5;
    if ( (v7 & 1) == v5 )
    {
      return 1;
    }
    else
    {
      v7 = v7 & 0xFFFFFFFFFFFFFFFELL | v5;
      result = sub_100001994(a1, *(_DWORD *)a2);
      if ( result )
        return thread_set_state(*(_DWORD *)(result + 4), 15, v6, 0x82u) == 0;
    }
  }
  return result;
}
