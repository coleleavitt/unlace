/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4481E0
// Address: 0x00000000004481E0

//----- (00000000004481E0) ----------------------------------------------------
__int64 __fastcall sub_4481E0(__int64 a1, __int64 *a2)
{
  int v4; // w0
  int v5; // w20
  __int64 v6; // x19
  int v7; // w0
  bool v8; // zf
  _BYTE v10[152]; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v11; // [xsp+D8h] [xbp-8h]

  v4 = *(_DWORD *)(a1 + 48) - 1;
  *(_DWORD *)(a1 + 48) = v4;
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 52);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = sub_43E578(v5);
        v5 = *(_DWORD *)(v6 + 48);
        if ( *(_DWORD *)(v6 + 88) != -1 )
        {
          *(_DWORD *)(a1 + 48) += 32;
          sub_448768((__int64)v10, 0, 1u);
          sub_448088((__int64)v10, *(_DWORD *)(v6 + 88), a2);
          sub_44A7D8((__int64)v10);
          v7 = *(_DWORD *)(a1 + 48) - 32;
          *(_DWORD *)(a1 + 48) = v7;
          if ( v7 )
            break;
        }
        if ( !v5 )
        {
          v5 = *(_DWORD *)(a1 + 48);
          goto LABEL_7;
        }
      }
    }
    else
    {
LABEL_7:
      if ( a1 )
        v8 = v5 == 0;
      else
        v8 = 0;
      if ( v8 )
      {
        sub_440380(a1, *(__int64 **)(a1 + 16));
        j_j__free_0((void *)a1);
      }
    }
  }
  return v11 ^ _stack_chk_guard;
}
