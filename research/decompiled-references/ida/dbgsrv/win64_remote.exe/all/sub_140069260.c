/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140069260
// Address: 0x0000000140069260

//----- (0000000140069260) ----------------------------------------------------
void __fastcall sub_140069260(__int64 *a1, __int64 *a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d

  v3 = a3 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 4;
        if ( v6 )
        {
          if ( v6 == 8 )
          {
            if ( a1 != a2 )
              *(_OWORD *)a1 = *(_OWORD *)a2;
            sub_14006A3B0(a1);
          }
        }
        else
        {
          *a1 = sub_14006A390(*a2);
        }
      }
      else
      {
        *(_DWORD *)a1 = _byteswap_ulong(*(_DWORD *)a2);
      }
    }
    else
    {
      *(_WORD *)a1 = __ROR2__(*(_WORD *)a2, 8);
    }
  }
  else
  {
    *(_BYTE *)a1 = *(_BYTE *)a2;
  }
}
