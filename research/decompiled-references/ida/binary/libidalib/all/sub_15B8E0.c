__int64 __fastcall sub_15B8E0(__int64 *a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  _OWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdi

  v2 = a1[1];
  if ( (int)v2 <= 0 )
    return 0;
  v3 = *a1;
  v4 = *a1 + 24LL * (unsigned int)(v2 - 1) + 24;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_OWORD **)v3;
      v6 = v3;
      v7 = *(_QWORD *)v3 + 16LL * *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)v3 != v7 )
        break;
LABEL_6:
      v3 += 24;
      if ( v3 == v4 )
        return 0;
    }
    while ( *v5 - *a2 != 0 )
    {
      if ( (_OWORD *)v7 == ++v5 )
        goto LABEL_6;
    }
    if ( v5 != (_OWORD *)v7 )
      return v6;
    v3 += 24;
    if ( v3 == v4 )
      return 0;
  }
}

