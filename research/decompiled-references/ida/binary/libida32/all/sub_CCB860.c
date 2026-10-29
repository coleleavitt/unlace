unsigned __int64 __fastcall sub_CCB860(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rdx

  v1 = a1[1];
  if ( v1 )
    return v1 & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v4 )
    {
      v5 = *(_BYTE *)(v4 + 28) & 0x7F;
      if ( (unsigned int)(v5 - 26) <= 0x1A )
        return *(_QWORD *)(v4 + 48);
      if ( (unsigned int)(v5 - 58) <= 9 )
      {
        v1 = *(_QWORD *)(v4 + 48);
        return v1 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
    v6 = a1[4];
    return *(_QWORD *)(*(_QWORD *)v6 + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
  }
  v6 = a1[4];
  if ( *((_BYTE *)a1 + 60) != 1 && v6 )
    return *(_QWORD *)(*(_QWORD *)v6 + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
  return *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFFCLL) + 8);
}

