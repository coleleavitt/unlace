__int64 __fastcall sub_B1ACE0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 30 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x5F746C7561666564LL | *(_QWORD *)(a1 + 8) ^ 0x5F73736572646461LL)
      && *(_QWORD *)(a1 + 16) == 0x696D697263736964LL
      && *(_DWORD *)(a1 + 24) == 1769234798 )
    {
      v3 = 0;
      if ( *(_WORD *)(a1 + 28) == 28271 )
        goto LABEL_18;
    }
    return 0;
  }
  if ( a2 == 25 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x65726464615F6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x72637369645F7373LL)
      && *(_QWORD *)(a1 + 16) == 0x6F6974616E696D69LL )
    {
      v3 = 1;
      if ( *(_BYTE *)(a1 + 24) == 110 )
        goto LABEL_18;
    }
    return 0;
  }
  if ( a2 != 22
    || *(_QWORD *)a1 ^ 0x5F73736572646461LL | *(_QWORD *)(a1 + 8) ^ 0x696D697263736964LL
    || *(_DWORD *)(a1 + 16) != 1769234798
    || *(_WORD *)(a1 + 20) != 28271 )
  {
    return 0;
  }
  v3 = 2;
LABEL_18:
  *a3 = v3;
  return 1;
}
