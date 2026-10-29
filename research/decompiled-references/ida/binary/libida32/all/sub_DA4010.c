bool __fastcall sub_DA4010(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rax
  _WORD *v7; // rax

  v2 = *(_DWORD *)(a2 + 24);
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a2 + 32);
    if ( v3 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(v3 + 32) + 61LL) )
        goto LABEL_4;
      return 0;
    }
    return 1;
  }
  if ( v2 == 2 )
    return !*(_QWORD *)(a2 + 32);
  if ( v2 == 3 || !*(_QWORD *)(a2 + 40) && !*(_QWORD *)a2 )
    return 1;
  if ( (v2 & 0xFFFFFFFD) == 1 )
    return 1;
LABEL_4:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_CDA510(a2, a2) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 14 )
    return 1;
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == 1 )
  {
    v5 = *(__int64 **)(a2 + 32);
  }
  else
  {
    if ( (unsigned int)(v4 - 2) <= 1 )
      BUG();
    v5 = *(__int64 **)(*(_QWORD *)(a2 + 32) + 32LL);
  }
  v6 = *v5;
  return (v6 & 2) != 0
      && (v7 = (_WORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL)) != nullptr
      && (*v7 & 0x1FF) == 9
      && sub_CDA8F0((unsigned int *)a2) == 0;
}

