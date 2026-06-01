__int64 __fastcall sub_2218E30(unsigned __int8 **a1, char *a2, unsigned int **a3, unsigned __int64 a4, int a5)
{
  unsigned __int8 *v6; // r9
  unsigned int *v7; // rbp
  unsigned int *v9; // rbx
  unsigned __int16 v10; // dx
  unsigned int v11; // r8d
  int v13; // r8d
  int v14; // r10d
  char v15; // r11
  unsigned int v16; // eax
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  unsigned __int8 *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int8 *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // r10d
  unsigned int v30; // r10d
  int v31; // eax
  int v33; // [rsp+Ch] [rbp-3Ch]
  __int64 v34; // [rsp+10h] [rbp-38h]

  v6 = *a1;
  v7 = *a3;
  if ( a2 > (char *)*a1 )
  {
    v9 = *a3;
    v33 = 0;
    while ( 1 )
    {
      v7 = v9;
      v10 = byte_26F8360[*v6];
      v34 = v10;
      if ( v10 >= a2 - (char *)v6 )
        break;
      if ( a4 <= (unsigned __int64)v9 )
      {
        v11 = 2;
        goto LABEL_6;
      }
      if ( !(unsigned __int8)sub_2218260(v6, (unsigned int)v10 + 1) )
      {
        if ( !a5 )
        {
          v11 = 3;
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      switch ( v15 )
      {
        case 0:
          v28 = 0;
          goto LABEL_20;
        case 1:
          v25 = v6;
          v26 = 0;
          goto LABEL_19;
        case 2:
          v23 = 0;
          goto LABEL_18;
        case 3:
          v20 = v6;
          v21 = 0;
          goto LABEL_17;
        case 4:
          v18 = 0;
          goto LABEL_16;
        case 5:
          v31 = v14;
          v14 = *++v6;
          v18 = v31 << 6;
LABEL_16:
          v19 = v14 + v18;
          v14 = v6[1];
          v20 = v6 + 1;
          v21 = v19 << 6;
LABEL_17:
          v22 = v14 + v21;
          v14 = v20[1];
          v6 = v20 + 1;
          v23 = v22 << 6;
LABEL_18:
          v24 = v14 + v23;
          v14 = v6[1];
          v25 = v6 + 1;
          v26 = v24 << 6;
LABEL_19:
          v6 = v25 + 1;
          v27 = v26 + v14;
          v14 = v25[1];
          v28 = v27 << 6;
LABEL_20:
          ++v6;
          v29 = v28 + v14;
          break;
        default:
          v29 = 0;
          break;
      }
      v30 = v29 - dword_26F8330[v13];
      if ( v30 > 0x10FFFF )
      {
        v7 = v9 + 1;
        *v9 = 65533;
        v33 = 3;
      }
      else if ( v30 - 55296 > 0x7FF )
      {
        v7 = v9 + 1;
        *v9 = v30;
      }
      else
      {
        if ( !a5 )
        {
          v11 = 3;
          v6 += ~v34;
          goto LABEL_6;
        }
        v7 = v9 + 1;
        *v9 = 65533;
      }
LABEL_12:
      v9 = v7;
      if ( a2 <= (char *)v6 )
      {
        v11 = v33;
        goto LABEL_6;
      }
    }
    if ( !a5 )
    {
      v11 = 1;
      goto LABEL_6;
    }
LABEL_11:
    v7 = v9 + 1;
    v16 = sub_2218330((char *)v6, a2);
    *v9 = 65533;
    v33 = 3;
    v6 = (unsigned __int8 *)(v16 + v17);
    goto LABEL_12;
  }
  v11 = 0;
LABEL_6:
  *a1 = v6;
  *a3 = v7;
  return v11;
}
