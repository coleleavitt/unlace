__int64 __fastcall sub_75E600(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 11 )
  {
    if ( *(_QWORD *)a1 == 0x5F746C7561666564LL && *(_DWORD *)(a1 + 7) == 2036689759 )
    {
      v4 = 0;
      goto LABEL_17;
    }
    return 0;
  }
  if ( a2 == 17 )
  {
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x6F6974616369746ELL | *(_QWORD *)a1 ^ 0x65687475615F6F6ELL)
      && *(_BYTE *)(a1 + 16) == 110 )
    {
      v4 = 1;
      goto LABEL_17;
    }
    if ( *(_QWORD *)(a1 + 8) ^ 0x6E65646E65706564LL | *(_QWORD *)a1 ^ 0x5F737365636F7270LL || *(_BYTE *)(a1 + 16) != 116 )
      return 0;
    v4 = 2;
  }
  else
  {
    if ( a2 != 19
      || *(_QWORD *)(a1 + 8) ^ 0x646E657065646E69LL | *(_QWORD *)a1 ^ 0x5F737365636F7270LL
      || *(_DWORD *)(a1 + 15) != 1953391972 )
    {
      return 0;
    }
    v4 = 3;
  }
LABEL_17:
  *a3 = v4;
  return 1;
}

