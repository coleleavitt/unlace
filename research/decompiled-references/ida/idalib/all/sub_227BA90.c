__int64 __fastcall sub_227BA90(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  unsigned __int8 *v4; // rbp
  unsigned __int8 *v6; // r13
  __int64 v7; // rax
  _BYTE *v8; // rdx
  unsigned __int8 v9; // bl
  unsigned __int8 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // rdx
  char v21; // dl
  char *v22; // rax
  char *v23; // rax
  char v24; // dl
  char *v25; // rdx
  char v26; // al
  _BYTE *v27; // rax
  int v28; // r15d

  v4 = &a2[a3];
  if ( &a2[a3] != a2 )
  {
    v6 = a2;
    while ( 1 )
    {
      v9 = *v6;
      v10 = *(unsigned __int8 **)(a1 + 32);
      v11 = *(_QWORD *)(a1 + 24);
      if ( *v6 == 10 )
      {
        if ( v11 <= (unsigned __int64)v10 )
        {
          v17 = sub_227BA10(a1, 92);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v10 + 1;
          *v10 = 92;
          v17 = a1;
        }
        v18 = *(_BYTE **)(v17 + 32);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
        {
          sub_227BA10(v17, 110);
        }
        else
        {
          *(_QWORD *)(v17 + 32) = v18 + 1;
          *v18 = 110;
        }
        goto LABEL_7;
      }
      if ( (char)v9 <= 10 )
        break;
      if ( v9 == 34 )
      {
        if ( v11 <= (unsigned __int64)v10 )
        {
          v12 = sub_227BA10(a1, 92);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v10 + 1;
          *v10 = 92;
          v12 = a1;
        }
        v13 = *(_BYTE **)(v12 + 32);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
        {
          sub_227BA10(v12, 34);
          goto LABEL_7;
        }
        ++v6;
        *(_QWORD *)(v12 + 32) = v13 + 1;
        *v13 = 34;
        if ( v4 == v6 )
          return a1;
      }
      else
      {
        if ( v9 != 92 )
          goto LABEL_25;
        if ( v11 <= (unsigned __int64)v10 )
        {
          v7 = sub_227BA10(a1, 92);
          v8 = *(_BYTE **)(v7 + 32);
          if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
          {
LABEL_38:
            sub_227BA10(v7, 92);
            goto LABEL_7;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v10 + 1;
          *v10 = 92;
          v7 = a1;
          v8 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 24) )
            goto LABEL_38;
        }
        *(_QWORD *)(v7 + 32) = v8 + 1;
        *v8 = 92;
LABEL_7:
        if ( v4 == ++v6 )
          return a1;
      }
    }
    if ( v9 == 9 )
    {
      if ( v11 <= (unsigned __int64)v10 )
      {
        v15 = sub_227BA10(a1, 92);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v10 + 1;
        *v10 = 92;
        v15 = a1;
      }
      v16 = *(_BYTE **)(v15 + 32);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(v15 + 24) )
      {
        sub_227BA10(v15, 116);
      }
      else
      {
        *(_QWORD *)(v15 + 32) = v16 + 1;
        *v16 = 116;
      }
      goto LABEL_7;
    }
LABEL_25:
    if ( (unsigned __int8)(v9 - 32) > 0x5Eu )
    {
      if ( a4 )
      {
        if ( v11 <= (unsigned __int64)v10 )
        {
          v19 = sub_227BA10(a1, 92);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v10 + 1;
          *v10 = 92;
          v19 = a1;
        }
        v20 = *(_BYTE **)(v19 + 32);
        if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
        {
          sub_227BA10(v19, 120);
        }
        else
        {
          *(_QWORD *)(v19 + 32) = v20 + 1;
          *v20 = 120;
        }
        v21 = a0123456789abcd_3[v9 >> 4];
        v22 = *(char **)(a1 + 32);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, v21);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v22 + 1;
          *v22 = v21;
        }
        v23 = *(char **)(a1 + 32);
        v24 = a0123456789abcd_3[v9 & 0xF];
        if ( (unsigned __int64)v23 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, v24);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v23 + 1;
          *v23 = v24;
        }
        goto LABEL_7;
      }
      if ( v11 <= (unsigned __int64)v10 )
      {
        sub_227BA10(a1, 92);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v10 + 1;
        *v10 = 92;
      }
      v25 = *(char **)(a1 + 32);
      v26 = (v9 >> 6) + 48;
      if ( (unsigned __int64)v25 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, v26);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v25 + 1;
        *v25 = v26;
      }
      v27 = *(_BYTE **)(a1 + 32);
      v28 = (((int)v9 >> 3) & 7) + 48;
      if ( (unsigned __int64)v27 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, v28);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v27 + 1;
        *v27 = v28;
      }
      v10 = *(unsigned __int8 **)(a1 + 32);
      v9 = (v9 & 7) + 48;
      if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 24) )
      {
LABEL_52:
        sub_227BA10(a1, v9);
        goto LABEL_7;
      }
    }
    else if ( v11 <= (unsigned __int64)v10 )
    {
      goto LABEL_52;
    }
    *(_QWORD *)(a1 + 32) = v10 + 1;
    *v10 = v9;
    goto LABEL_7;
  }
  return a1;
}
