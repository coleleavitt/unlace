char __fastcall sub_147DEE0(__int64 a1)
{
  __int64 v2; // rax
  bool v3; // cc
  int v4; // eax
  __int64 *v5; // rdi
  __int64 *v6; // rdi
  int v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  _WORD v15[13]; // [rsp+Eh] [rbp-1Ah] BYREF

  LOWORD(v2) = *(_WORD *)(a1 + 32);
LABEL_2:
  v3 = (unsigned __int16)v2 <= 0x24u;
  if ( (_WORD)v2 == 36 )
  {
LABEL_10:
    if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
      goto LABEL_11;
    goto LABEL_9;
  }
  while ( v3 )
  {
    if ( (_WORD)v2 == 22 )
    {
      sub_146A990(a1);
      v15[0] = 23;
LABEL_29:
      sub_15680D0(a1, v15, 1, 0);
      LOWORD(v2) = *(_WORD *)(a1 + 32);
      goto LABEL_2;
    }
    if ( (unsigned __int16)v2 <= 0x16u )
    {
      if ( (_WORD)v2 == 1 )
        return v2;
      if ( (_WORD)v2 != 20 )
        goto LABEL_9;
      v7 = *(_DWORD *)(a1 + 16);
      ++*(_WORD *)(a1 + 90);
      v8 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v7;
      sub_14634E0(v8, (int *)(a1 + 16));
      v15[0] = 21;
      goto LABEL_29;
    }
    switch ( (_WORD)v2 )
    {
      case 0x19:
        return v2;
      case 0x21:
        goto LABEL_10;
      case 0x18:
        v4 = *(_DWORD *)(a1 + 16);
        ++*(_WORD *)(a1 + 92);
        v5 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = v4;
        sub_14634E0(v5, (int *)(a1 + 16));
        v15[0] = 25;
        sub_15680D0(a1, v15, 1, 0);
        LOWORD(v2) = *(_WORD *)(a1 + 32);
        if ( (_WORD)v2 != 24 && (_WORD)v2 != 66 && (_WORD)v2 != 150 )
        {
          if ( (_WORD)v2 == 63 )
            goto LABEL_21;
          return v2;
        }
        goto LABEL_2;
    }
LABEL_9:
    sub_1479170(a1);
    LOWORD(v2) = *(_WORD *)(a1 + 32);
    v3 = (unsigned __int16)v2 <= 0x24u;
    if ( (_WORD)v2 == 36 )
      goto LABEL_10;
  }
  if ( (_WORD)v2 == 157 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 1) == 0 )
      goto LABEL_9;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 2944);
    v2 = v10 >= *(unsigned int *)(v9 + 2912) ? sub_14180A0(v9, 1u) : *(_QWORD *)(v9 + 2904) + 24 * v10;
    if ( *(_WORD *)(v2 + 16) != 138 )
      goto LABEL_9;
    goto LABEL_41;
  }
  if ( (unsigned __int16)v2 > 0x9Du )
  {
    if ( (unsigned __int16)v2 < 0x1C8u || (unsigned __int16)v2 > 0x1CAu && (_WORD)v2 != 460 )
      goto LABEL_9;
    return v2;
  }
  if ( (_WORD)v2 == 73 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(v11 + 2944);
    if ( v12 >= *(unsigned int *)(v11 + 2912) )
      v13 = sub_14180A0(v11, 1u);
    else
      v13 = *(_QWORD *)(v11 + 2904) + 24 * v12;
    LOBYTE(v2) = sub_13D0E90(v13, 5);
    if ( !(_BYTE)v2 )
      goto LABEL_9;
LABEL_11:
    if ( !*(_BYTE *)(a1 + 2065) )
      goto LABEL_9;
    return v2;
  }
  if ( (_WORD)v2 == 138 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 1) == 0 )
      goto LABEL_9;
LABEL_41:
    if ( *(_BYTE *)(a1 + 2065) && !*(_QWORD *)(a1 + 2072) )
      goto LABEL_9;
    return v2;
  }
  if ( (_WORD)v2 != 63 )
    goto LABEL_9;
LABEL_21:
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  LOBYTE(v2) = sub_14634E0(v6, (int *)(a1 + 16));
  return v2;
}
