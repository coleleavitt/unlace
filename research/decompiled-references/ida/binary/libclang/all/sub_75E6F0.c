__int64 __fastcall sub_75E6F0(_QWORD *a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 30 )
  {
    if ( !(a1[1] ^ 0x5F73736572646461LL | *a1 ^ 0x5F746C7561666564LL)
      && !(*(_QWORD *)((char *)a1 + 22) ^ 0x6E6F6974616E696DLL | *(_QWORD *)((char *)a1 + 14) ^ 0x6972637369645F73LL) )
    {
      v4 = 0;
      goto LABEL_9;
    }
    return 0;
  }
  if ( a2 == 25 )
  {
    if ( !(a1[1] ^ 0x72637369645F7373LL | *a1 ^ 0x65726464615F6F6ELL) )
    {
      v4 = 1;
      if ( !(*(_QWORD *)((char *)a1 + 17) ^ 0x6E6F6974616E696DLL | *(_QWORD *)((char *)a1 + 9) ^ 0x6972637369645F73LL) )
        goto LABEL_9;
    }
    return 0;
  }
  if ( a2 != 22
    || a1[1] ^ 0x696D697263736964LL | *a1 ^ 0x5F73736572646461LL
    || *(_QWORD *)((char *)a1 + 14) != 0x6E6F6974616E696DLL )
  {
    return 0;
  }
  v4 = 2;
LABEL_9:
  *a3 = v4;
  return 1;
}

