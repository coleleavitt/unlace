__int16 __fastcall sub_F5E9A0(_QWORD *a1)
{
  __int64 v1; // rax
  char v2; // dl
  int v3; // edx
  char v4; // dl
  __int16 result; // ax

  v1 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 16);
  if ( v2 == 30 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(v1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v2 = *(_BYTE *)(v1 + 16);
  }
  if ( v2 != 8 )
    return 0;
  v3 = *(_WORD *)(v1 + 18) >> 3;
  if ( v3 == 38 )
  {
    v4 = 0;
    goto LABEL_11;
  }
  if ( v3 != 89 )
  {
    if ( v3 == 39 )
    {
      v4 = 2;
      goto LABEL_11;
    }
    if ( v3 == 40 )
    {
      v4 = 3;
LABEL_11:
      *a1 = *(_QWORD *)(v1 + 40);
      LOBYTE(result) = v4;
      HIBYTE(result) = 1;
      return result;
    }
    return 0;
  }
  *a1 = *(_QWORD *)(v1 + 40);
  return 257;
}
