bool __fastcall sub_1115700(_DWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _BOOL4 v4; // eax

  if ( (unsigned int)(a1[8] - 3) > 1 || a1[10] || a1[11] )
    return 0;
  v1 = sub_2293970(a1);
  if ( v2 != 3 )
    return 0;
  v4 = *(_WORD *)v1 != 27749 || *(_BYTE *)(v1 + 2) != 102;
  return !v4;
}

