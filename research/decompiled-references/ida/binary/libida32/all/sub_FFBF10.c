unsigned __int64 __fastcall sub_FFBF10(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // eax

  v2 = a2 & 0x7FFFFFFF;
  if ( v2 < *(_DWORD *)(a1 + 476) || v2 >= *(_DWORD *)(a1 + 480) )
  {
    if ( !v2 )
      goto LABEL_13;
    if ( v2 < *(_DWORD *)(a1 + 312) )
    {
      v3 = sub_FF9690(a1, v2);
      v4 = v3 + 1;
    }
    else
    {
      if ( v2 < *(_DWORD *)(a1 + 316) )
        goto LABEL_13;
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464));
      v4 = v3 + 1;
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 472);
    v4 = v3 + 1;
  }
  if ( v4 <= 1 )
  {
LABEL_13:
    v5 = *(_QWORD *)(a1 + 184);
    goto LABEL_7;
  }
  if ( v3 < 0 )
    v5 = sub_FFBCE0(a1, (unsigned int)(-2 - v3), nullptr);
  else
    v5 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v3;
LABEL_7:
  v6 = *(_DWORD *)(v5 + 16);
  v7 = *(_DWORD *)(v5 + 12);
  if ( !v6 )
    v6 = v7;
  return __PAIR64__(v6, v7);
}

