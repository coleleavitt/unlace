unsigned __int64 __fastcall sub_CC8800(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  int v3; // edx
  __int64 v5; // rdx

  v1 = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v2 = v1 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v2 )
    {
      v3 = *(_BYTE *)(v2 + 28) & 0x7F;
      if ( (unsigned int)(v3 - 26) <= 0x1A )
        return *(_QWORD *)(v2 + 48);
      if ( (unsigned int)(v3 - 58) <= 9 )
        return *(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    }
    v5 = a1[4];
    return *(_QWORD *)(*(_QWORD *)v5 + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
  }
  v5 = a1[4];
  if ( *((_BYTE *)a1 + 60) != 1 && v5 )
    return *(_QWORD *)(*(_QWORD *)v5 + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
  return *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCLL) + 8);
}

