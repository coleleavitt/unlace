/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_debug_event_code
// Address: 0x0000000100066570

//----- (0000000100066570) ----------------------------------------------------
void __fastcall set_debug_event_code(__int64 a1, int a2)
{
  bool v2; // cc
  int v3; // w8
  int v4; // w9
  int v5; // w8
  int v6; // w8
  __int64 v8; // x19
  int v10; // w8

  if ( !a1 )
    return;
  if ( a2 > 6 )
  {
    if ( a2 <= 8 )
    {
      if ( a2 == 7 )
      {
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
          return;
        goto LABEL_28;
      }
    }
    else
    {
      if ( (unsigned int)(a2 - 9) < 2 )
        goto LABEL_11;
      if ( a2 != 11 )
        goto LABEL_25;
    }
LABEL_18:
    v2 = (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) > 0xB;
    v3 = 1 << *(_BYTE *)(a1 + 20);
    v4 = 2306;
LABEL_19:
    v6 = v3 & v4;
    if ( v2 || v6 == 0 )
      goto LABEL_28;
    goto LABEL_23;
  }
  if ( a2 <= 2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
        goto LABEL_25;
LABEL_14:
      v5 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( v5 != 4 && v5 != 2 )
      {
LABEL_28:
        v8 = a1;
        free_debug_event(a1);
        v10 = a2;
        goto LABEL_29;
      }
LABEL_23:
      *(_DWORD *)(a1 + 20) = a2;
      return;
    }
    goto LABEL_18;
  }
  switch ( a2 )
  {
    case 3:
LABEL_11:
      v2 = (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) > 0xA;
      v3 = 1 << *(_BYTE *)(a1 + 20);
      v4 = 1544;
      goto LABEL_19;
    case 4:
      goto LABEL_14;
    case 5:
      if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
        return;
      goto LABEL_28;
  }
LABEL_25:
  v8 = a1;
  free_debug_event(a1);
  v10 = a2;
  if ( !a2 )
    return;
LABEL_29:
  *(_DWORD *)(v8 + 20) = v10;
  if ( v10 > 7 )
  {
    if ( (unsigned int)(v10 - 9) < 2 || v10 == 11 || v10 == 8 )
      goto LABEL_37;
  }
  else
  {
    if ( v10 <= 4 )
    {
      if ( v10 != 1 && v10 != 3 )
        return;
LABEL_37:
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      return;
    }
    if ( v10 == 5 )
    {
      *(_QWORD *)(v8 + 24) = -1;
      *(_QWORD *)(v8 + 32) = -1;
    }
    else if ( v10 == 7 )
    {
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 48) = 0;
      *(_QWORD *)(v8 + 56) = 0;
    }
  }
}
// 100066624: conditional instruction was optimized away because w1.4==8
