__int64 __fastcall sub_8C9140(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  int v4; // edx
  _QWORD *v6; // rax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( *(_BYTE *)(a1 + 26) == 1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 26) > 1u )
  {
    v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_4;
  }
  v6 = *(_QWORD **)(a1 + 40);
  v1 = 0;
  if ( !v6 )
  {
LABEL_4:
    v2 = *(_QWORD *)v1;
    v3 = *(unsigned __int8 *)(*(_QWORD *)v1 + 16LL);
    if ( (_BYTE)v3 == 33 )
      goto LABEL_5;
    goto LABEL_12;
  }
  v1 = *v6 & 0xFFFFFFFFFFFFFFF0LL;
  v2 = *(_QWORD *)v1;
  v3 = *(unsigned __int8 *)(*(_QWORD *)v1 + 16LL);
  if ( (_BYTE)v3 == 33 )
    goto LABEL_5;
LABEL_12:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v2 = sub_B0D320(v2);
    if ( !v2 )
    {
      v2 = *(_QWORD *)v1;
      v3 = *(unsigned __int8 *)(*(_QWORD *)v1 + 16LL);
      goto LABEL_15;
    }
LABEL_5:
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v2 + 16) - 34 > 1 )
      v2 = sub_B0D320(v2);
    while ( 1 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFF0LL);
      v4 = *(unsigned __int8 *)(v2 + 16);
      if ( (unsigned int)(v4 - 34) > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
          return 0;
        v8 = sub_B0D320(v2);
        v2 = v8;
        if ( !v8 )
          return 0;
        LOBYTE(v4) = *(_BYTE *)(v8 + 16);
      }
      if ( (_BYTE)v4 == 35 )
        return sub_B07AF0(v2);
    }
  }
LABEL_15:
  if ( (unsigned int)(v3 - 34) > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      return 0;
    v2 = sub_B0D320(v2);
    if ( !v2 )
      return 0;
  }
  do
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(unsigned __int8 *)(v2 + 16);
    if ( (unsigned int)(v7 - 34) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
        return 0;
      v9 = sub_B0D320(v2);
      v2 = v9;
      if ( !v9 )
        return 0;
      LOBYTE(v7) = *(_BYTE *)(v9 + 16);
    }
  }
  while ( (_BYTE)v7 != 35 );
  return sub_B07AF0(v2);
}

