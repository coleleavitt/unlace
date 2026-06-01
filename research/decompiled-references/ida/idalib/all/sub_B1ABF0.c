__int64 __fastcall sub_B1ABF0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 11 )
  {
    if ( *(_QWORD *)a1 == 0x5F746C7561666564LL && *(_WORD *)(a1 + 8) == 25963 )
    {
      v4 = 0;
      if ( *(_BYTE *)(a1 + 10) == 121 )
        goto LABEL_9;
    }
    return 0;
  }
  if ( a2 == 17 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x65687475615F6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x6F6974616369746ELL) )
    {
      v4 = 1;
      if ( *(_BYTE *)(a1 + 16) == 110 )
        goto LABEL_9;
    }
    if ( !(*(_QWORD *)a1 ^ 0x5F737365636F7270LL | *(_QWORD *)(a1 + 8) ^ 0x6E65646E65706564LL) )
    {
      v4 = 2;
      if ( *(_BYTE *)(a1 + 16) == 116 )
        goto LABEL_9;
    }
    return 0;
  }
  if ( a2 != 19
    || *(_QWORD *)a1 ^ 0x5F737365636F7270LL | *(_QWORD *)(a1 + 8) ^ 0x646E657065646E69LL
    || *(_WORD *)(a1 + 16) != 28261
    || *(_BYTE *)(a1 + 18) != 116 )
  {
    return 0;
  }
  v4 = 3;
LABEL_9:
  *a3 = v4;
  return 1;
}
