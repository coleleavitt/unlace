__int64 __fastcall sub_10C5420(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r13
  _BYTE *v7; // rax
  signed __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12[15]; // [rsp+0h] [rbp-78h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 == 2 )
  {
    v10 = *(_QWORD *)(v3 + 40);
    if ( !v10 )
      return 0;
    v11 = v3 + 32;
    do
    {
      while ( *(int *)(v10 + 32) > 1 )
      {
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_18;
      }
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v10 );
LABEL_18:
    v1 = 0;
    if ( v3 + 32 == v11 )
      return v1;
    if ( *(int *)(v11 + 32) > 2 )
      return 0;
  }
  else if ( v2 == 8 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 )
    {
      v5 = v3 + 32;
      do
      {
        while ( *(int *)(v4 + 32) > 7 )
        {
          v5 = v4;
          v4 = *(_QWORD *)(v4 + 16);
          if ( !v4 )
            goto LABEL_8;
        }
        v4 = *(_QWORD *)(v4 + 24);
      }
      while ( v4 );
LABEL_8:
      v1 = 0;
      if ( v3 + 32 == v5 || *(int *)(v5 + 32) > 8 )
        return v1;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  LODWORD(v12[0]) = 1;
  v6 = *(_QWORD *)(sub_10BCAF0(v3 + 24, (int *)v12) + 40);
  LOBYTE(v1) = *(_DWORD *)(v6 + 48) == 26 || (unsigned int)(*(_DWORD *)(v6 + 48) - 41) <= 1;
  if ( (_BYTE)v1 )
  {
    sub_FA3370((__int64)v12, ***(_QWORD ***)(a1 + 8), 0, 344);
    v7 = (_BYTE *)sub_2293740(v6 + 16);
    sub_AC84E0(v12, v7, v8);
    sub_AC6300((__int64)v12);
    return v1;
  }
  return (unsigned int)sub_10C3A50(a1);
}

