/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482FB0
// Address: 0x0000000000482FB0

//----- (0000000000482FB0) ----------------------------------------------------
void __fastcall sub_482FB0(__int64 a1, unsigned int a2)
{
  int v4; // w0
  int v7; // w0

  if ( !a1 )
    return;
  if ( a2 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
      return;
    goto LABEL_8;
  }
  if ( a2 <= 5 )
  {
    if ( a2 != 2 )
    {
      if ( a2 <= 2 )
      {
        if ( a2 != 1 )
          goto LABEL_30;
        goto LABEL_23;
      }
      if ( a2 == 3 )
      {
LABEL_36:
        v7 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v7 - 9) > 1 && v7 != 3 )
        {
LABEL_30:
          sub_482ED0(a1);
          if ( !a2 )
            return;
          goto LABEL_9;
        }
LABEL_19:
        *(_DWORD *)(a1 + 20) = a2;
        return;
      }
    }
    if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
      goto LABEL_30;
    goto LABEL_19;
  }
  if ( a2 > 0xA )
  {
    if ( a2 != 11 )
      goto LABEL_30;
LABEL_23:
    v4 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
    if ( v4 != 1 && v4 != 11 && v4 != 8 )
      goto LABEL_30;
    goto LABEL_19;
  }
  if ( a2 >= 9 )
    goto LABEL_36;
  if ( a2 != 7 )
  {
    if ( a2 != 8 )
      goto LABEL_30;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7 )
    return;
LABEL_8:
  sub_482ED0(a1);
LABEL_9:
  *(_DWORD *)(a1 + 20) = a2;
  if ( a2 == 5 )
  {
    *(_QWORD *)(a1 + 24) = -1;
    *(_QWORD *)(a1 + 32) = -1;
  }
  else if ( a2 <= 5 )
  {
    if ( a2 == 1 || a2 == 3 )
      goto LABEL_14;
  }
  else if ( a2 == 7 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  else if ( a2 >= 7 && a2 <= 0xB )
  {
LABEL_14:
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
}
// 483048: conditional instruction was optimized away because w1.4==4
