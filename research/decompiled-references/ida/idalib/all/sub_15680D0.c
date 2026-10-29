__int64 __fastcall sub_15680D0(__int64 a1, _WORD *a2, _WORD *a3, char a4)
{
  _WORD *v4; // r15
  int v5; // r11d
  __int64 v8; // rbx
  char v9; // al
  unsigned __int16 v10; // cx
  char v12; // cl
  int v13; // eax
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  int v16; // [rsp+10h] [rbp-58h]
  int v17; // [rsp+14h] [rbp-54h]
  int v18; // [rsp+18h] [rbp-50h]
  int v19; // [rsp+1Ch] [rbp-4Ch]
  int v20; // [rsp+1Ch] [rbp-4Ch]
  int v21; // [rsp+1Ch] [rbp-4Ch]
  int v22; // [rsp+1Ch] [rbp-4Ch]
  int v23; // [rsp+1Ch] [rbp-4Ch]
  int v24; // [rsp+1Ch] [rbp-4Ch]
  __int16 v25[29]; // [rsp+2Eh] [rbp-3Ah] BYREF

  v4 = a3;
  v5 = (int)a3;
  v17 = a4 & 5;
  v18 = a4 & 1;
  v16 = a4 & 4;
  v8 = (__int64)&a2[(_DWORD)a3 - 1 + 1];
  v9 = 1;
  while ( 1 )
  {
    v10 = *(_WORD *)(a1 + 32);
    if ( v5 )
      break;
LABEL_7:
    if ( v4 == (_WORD *)((char *)&dword_0 + 1) && *a2 == 1 )
    {
      LODWORD(a3) = v17;
      if ( !v17 )
      {
        if ( v10 != 1 )
        {
          do
            sub_149F520(a1, 0);
          while ( *(_WORD *)(a1 + 32) != 1 );
        }
        goto LABEL_19;
      }
    }
    if ( v10 == 61 )
    {
      v15 = *(__int64 **)(a1 + 8);
      v20 = v5;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v15, (int *)(a1 + 16));
      v12 = v17;
      v25[0] = 62;
      goto LABEL_47;
    }
    if ( v10 > 0x3Du )
    {
      if ( v10 > 0x1C3u )
      {
        if ( v10 >= 0x1C8u && (v10 <= 0x1CAu || v10 == 460) )
        {
LABEL_37:
          LODWORD(a3) = 0;
          return (unsigned int)a3;
        }
        goto LABEL_39;
      }
      if ( v10 >= 0x1C2u )
      {
        v21 = v5;
        if ( *(_BYTE *)(a1 + 2152) )
          goto LABEL_37;
        goto LABEL_31;
      }
      if ( v10 == 63 )
      {
        if ( v18 )
        {
          LODWORD(a3) = 0;
          return (unsigned int)a3;
        }
LABEL_39:
        v22 = v5;
        sub_149F520(a1, 0);
        v5 = v22;
        v9 = 0;
      }
      else
      {
        if ( v10 <= 0x1BEu )
          goto LABEL_39;
        v21 = v5;
        if ( *(_BYTE *)(a1 + 2154) )
          goto LABEL_37;
LABEL_31:
        v13 = *(_DWORD *)(a1 + 20);
        v14 = *(__int64 **)(a1 + 8);
        if ( !v13 )
          v13 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = v13;
        sub_14634E0(v14, (int *)(a1 + 16));
        v5 = v21;
        v9 = 0;
      }
    }
    else if ( v10 == 21 )
    {
      v23 = v5;
      LOBYTE(a3) = v9 | (*(_WORD *)(a1 + 90) == 0);
      if ( !(_BYTE)a3 )
        return (unsigned int)a3;
      sub_14789E0(a1);
      v5 = v23;
      v9 = 0;
    }
    else if ( v10 <= 0x15u )
    {
      if ( v10 == 3 )
      {
        LODWORD(a3) = 0;
        if ( !v16 )
        {
          sub_1566D30(a1);
          LODWORD(a3) = 0;
        }
        return (unsigned int)a3;
      }
      if ( v10 != 20 )
      {
        if ( v10 == 1 )
          goto LABEL_37;
        goto LABEL_39;
      }
      v20 = v5;
      sub_14789E0(a1);
      if ( v16 )
        v12 = 4;
      else
        v12 = 0;
      v25[0] = 21;
LABEL_47:
      sub_1566E40(a1, v25, 1, v12);
      v5 = v20;
      v9 = 0;
    }
    else if ( v10 == 23 )
    {
      v24 = v5;
      LOBYTE(a3) = v9 | (*(_WORD *)(a1 + 88) == 0);
      if ( !(_BYTE)a3 )
        return (unsigned int)a3;
      sub_146A990(a1);
      v5 = v24;
      v9 = 0;
    }
    else
    {
      if ( v10 < 0x17u )
      {
        v20 = v5;
        sub_146A990(a1);
        if ( v16 )
          v12 = 4;
        else
          v12 = 0;
        v25[0] = 23;
        goto LABEL_47;
      }
      if ( v10 == 24 )
      {
        v20 = v5;
        sub_1478A90(a1);
        if ( v16 )
        {
          v12 = 4;
          v25[0] = 25;
        }
        else
        {
          v25[0] = 25;
          v12 = 0;
        }
        goto LABEL_47;
      }
      if ( v10 != 25 )
        goto LABEL_39;
      v19 = v5;
      LOBYTE(a3) = v9 | (*(_WORD *)(a1 + 92) == 0);
      if ( !(_BYTE)a3 )
        return (unsigned int)a3;
      sub_1478A90(a1);
      v5 = v19;
      v9 = 0;
    }
  }
  if ( *a2 != v10 )
  {
    a3 = a2 + 1;
    while ( a3 != (_WORD *)v8 )
    {
      if ( *a3++ == v10 )
        goto LABEL_18;
    }
    goto LABEL_7;
  }
LABEL_18:
  if ( (a4 & 2) != 0 )
  {
LABEL_19:
    LODWORD(a3) = 1;
    return (unsigned int)a3;
  }
  sub_149F520(a1, 0);
  LODWORD(a3) = 1;
  return (unsigned int)a3;
}
