unsigned __int8 *__fastcall sub_B412E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int8 *v4; // r10
  char *v5; // r9
  __int16 v6; // ax
  char *v7; // r11
  __int64 v8; // rsi
  int i; // r13d
  char v10; // al
  unsigned __int8 *v11; // r9
  unsigned __int8 *v12; // r11
  int v13; // edx
  unsigned __int8 *result; // rax
  char *v15; // r8
  char v16; // al
  unsigned __int8 *v17; // r8
  unsigned __int8 *v18; // r10
  __int64 v19; // r11
  char v20; // al

  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(unsigned __int8 **)(a1 + 48);
  v5 = (char *)(v3 + 2);
  if ( v4 != (unsigned __int8 *)(v3 + 2) )
  {
    v6 = *(_WORD *)&byte_2411740[2 * *(unsigned __int8 *)(v3 + 2)];
    if ( (v6 & 7) == 0 )
    {
LABEL_10:
      if ( (v6 & 0x68) != 0 )
      {
        v15 = v5;
        do
        {
          if ( v4 == (unsigned __int8 *)++v15 )
          {
            v7 = v5;
            i = (_DWORD)v4 - (_DWORD)v5;
            v8 = v4 - (unsigned __int8 *)v5;
            goto LABEL_7;
          }
        }
        while ( (byte_2411740[2 * (unsigned __int8)*v15] & 0x68) != 0 );
        i = (_DWORD)v15 - (_DWORD)v5;
        v16 = sub_B3EAC0(v5, v15 - v5);
        v13 = *(_DWORD *)(a1 + 56) + v3 - *(_DWORD *)(a1 + 24);
        if ( v16 )
          goto LABEL_17;
        v11 = v17;
        goto LABEL_8;
      }
      v20 = sub_B3EAC0(v5, 0);
      v13 = *(_DWORD *)(a1 + 56) + v3 - *(_DWORD *)(a1 + 24);
      if ( v20 )
      {
        v17 = v11;
        for ( i = 0; v18 != v17; ++v17 )
        {
LABEL_17:
          if ( (*(_BYTE *)(v19 + 2LL * *v17) & 7) == 0 )
            break;
        }
        goto LABEL_18;
      }
LABEL_8:
      *(_DWORD *)a2 = v13;
      result = &v11[-v3];
      *(_DWORD *)(a2 + 4) = 2;
      *(_DWORD *)(a2 + 12) = (_DWORD)v11 - v3;
      *(_QWORD *)(a1 + 40) = v11;
      *(_QWORD *)(a2 + 16) = v3;
      *(_DWORD *)(a2 + 8) = (_DWORD)v11 - v3;
      return result;
    }
    while ( v4 != (unsigned __int8 *)++v5 )
    {
      v6 = *(_WORD *)&byte_2411740[2 * (unsigned __int8)*v5];
      if ( (v6 & 7) == 0 )
        goto LABEL_10;
    }
  }
  v7 = v5;
  v8 = 0;
  i = 0;
LABEL_7:
  v10 = sub_B3EAC0(v7, v8);
  v13 = *(_DWORD *)(a1 + 56) + v3 - *(_DWORD *)(a1 + 24);
  if ( !v10 )
    goto LABEL_8;
  v17 = v11;
  v11 = v12;
LABEL_18:
  *(_DWORD *)a2 = v13;
  *(_DWORD *)(a2 + 4) = 17;
  *(_DWORD *)(a2 + 12) = (_DWORD)v17 - v3;
  *(_QWORD *)(a1 + 40) = v17;
  *(_QWORD *)(a2 + 16) = v11;
  *(_DWORD *)(a2 + 8) = i;
  result = *(unsigned __int8 **)(a1 + 40);
  if ( result != *(unsigned __int8 **)(a1 + 48) && *result == 62 )
    *(_BYTE *)(a1 + 62) = 5;
  return result;
}
