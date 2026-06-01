unsigned __int64 __fastcall sub_FA80(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int16 v5; // cx
  __int64 v6; // rcx
  __int16 v7; // dx
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // r13
  unsigned int v11; // edx
  bool v12; // bl
  __int64 v13; // rdx
  unsigned __int64 v14; // rax

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    return sub_CD20((_QWORD *)a1, 32, 0);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = (unsigned int)(v1 - 1);
  v4 = *(_QWORD *)(v2 + 8 * v3);
  v5 = *(_WORD *)(v4 + 16);
  if ( v5 != 221 )
    goto LABEL_14;
  *(_DWORD *)(a1 + 96) = v3;
  v6 = v4;
  if ( !v4 )
  {
    if ( v1 == 1 )
      return sub_CD20((_QWORD *)a1, 32, 0);
    v11 = v1 - 2;
    v4 = *(_QWORD *)(v2 + 8LL * v11);
    LODWORD(v3) = v11;
    v5 = *(_WORD *)(v4 + 16);
LABEL_14:
    if ( v5 == 170 )
    {
      *(_DWORD *)(a1 + 96) = v3;
      goto LABEL_16;
    }
    if ( v5 == 98 )
    {
      v13 = v4;
      v12 = 1;
      v4 = 0;
LABEL_18:
      *(_DWORD *)(a1 + 96) = v3;
      goto LABEL_19;
    }
    return sub_CD20((_QWORD *)a1, 32, 0);
  }
  v7 = *(_WORD *)(v4 + 16);
  if ( (unsigned __int16)v7 > 0xAAu )
  {
    while ( v7 == 221 )
    {
      v8 = *(_BYTE *)(v6 + 18);
      if ( v8 > 4u )
      {
        if ( v8 != 5 || !*(_DWORD *)(v6 + 8) )
        {
LABEL_24:
          v7 = 3;
          goto LABEL_9;
        }
        v6 = *(_QWORD *)v6;
      }
      else if ( v8 <= 2u )
      {
        goto LABEL_24;
      }
      v6 = *(_QWORD *)v6;
      v7 = *(_WORD *)(v6 + 16);
      if ( (unsigned __int16)v7 <= 0xAAu )
        goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  if ( (unsigned __int16)v7 <= 0xA8u )
    return 0;
LABEL_16:
  v12 = v4 == 0;
  if ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    v13 = *(_QWORD *)(v2 + 8 * v3);
    if ( *(_WORD *)(v13 + 16) == 98 )
      goto LABEL_18;
  }
  v13 = 0;
LABEL_19:
  v14 = sub_CD20((_QWORD *)a1, 32, v13);
  v9 = v14;
  if ( !v14 || v12 )
    return v9;
  sub_C080(v14, v4, (_QWORD *)a1);
  return v9;
}

