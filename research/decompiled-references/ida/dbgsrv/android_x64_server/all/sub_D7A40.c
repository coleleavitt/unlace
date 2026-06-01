/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7A40
// Address: 0x00000000000D7A40

//----- (00000000000D7A40) ----------------------------------------------------
char *__fastcall sub_D7A40(char **a1)
{
  char *v1; // rbp
  char *v2; // r15
  char *v3; // rbx
  char v4; // al
  int v5; // eax
  char *v6; // rbx
  char *v7; // rbp
  __int64 v8; // rcx
  char **v9; // rax
  _QWORD *v10; // rdx
  int v11; // r15d
  char *v12; // rax
  char v13; // dl
  char *v14; // rbp
  __int64 v15; // rax
  char *v16; // rcx
  __int64 v17; // rsi
  char **v18; // rax
  char *v19; // rax
  char *v20; // r15
  char *v21; // rbx
  char **v22; // r12
  signed __int64 v23; // rbx
  char *v24; // r13
  char *v25; // rax
  char *v26; // rcx
  __int64 v28; // [rsp+0h] [rbp-38h]

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 == v2 || *v1 != 83 )
    return nullptr;
  v3 = v1 + 1;
  *a1 = v1 + 1;
  if ( v2 == v1 + 1 )
    v4 = 0;
  else
    v4 = *v3;
  if ( !islower(v4) )
  {
    if ( v3 == v2 || *v3 != 95 )
    {
      if ( v2 != v3 )
      {
        v13 = *v3;
        if ( *v3 >= 48 && (v13 < 58 || (unsigned __int8)(v13 - 65) <= 0x19u) )
        {
          v14 = v1 + 2;
          v15 = 0;
          while ( 1 )
          {
            v16 = v14;
            v17 = -48;
            if ( v13 >= 58 )
            {
              v17 = -55;
              if ( (unsigned __int8)(v13 - 65) > 0x19u )
                break;
            }
            v15 = v17 + v13 + 36 * v15;
            *a1 = v14;
            if ( v2 != v14 )
            {
              v13 = *v14++;
              if ( v13 > 47 )
                continue;
            }
            goto LABEL_47;
          }
          v16 = v14 - 1;
LABEL_47:
          if ( v16 != v2 && *v16 == 95 )
          {
            *a1 = v16 + 1;
            v26 = a1[37];
            if ( v15 + 1 < (unsigned __int64)((a1[38] - v26) >> 3) )
              return *(char **)&v26[8 * v15 + 8];
          }
        }
      }
    }
    else
    {
      *a1 = v1 + 2;
      v12 = a1[37];
      if ( v12 != a1[38] )
        return *(char **)v12;
    }
    return nullptr;
  }
  if ( v2 == v3 )
    return nullptr;
  v5 = *v3;
  v6 = nullptr;
  switch ( v5 )
  {
    case 'a':
      *a1 = v1 + 2;
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      if ( (unsigned __int64)(v8 + 16) < 0xFF0 )
      {
        v10 = v7 + 8;
      }
      else
      {
        v9 = (char **)operator new[](0x1000u);
        *v9 = v7;
        v9[1] = nullptr;
        a1[604] = (char *)v9;
        v8 = 0;
        v10 = v9 + 1;
        v7 = (char *)v9;
      }
      v11 = 0;
      goto LABEL_30;
    case 'b':
      *a1 = v1 + 2;
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      v11 = 1;
      if ( (unsigned __int64)(v8 + 16) < 0xFF0 )
        goto LABEL_27;
      goto LABEL_29;
    case 'd':
      *a1 = v1 + 2;
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      v11 = 5;
      if ( (unsigned __int64)(v8 + 16) >= 0xFF0 )
        goto LABEL_29;
      goto LABEL_27;
    case 'i':
      *a1 = v1 + 2;
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      v11 = 3;
      if ( (unsigned __int64)(v8 + 16) >= 0xFF0 )
        goto LABEL_29;
      goto LABEL_27;
    case 'o':
      *a1 = v1 + 2;
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      v11 = 4;
      if ( (unsigned __int64)(v8 + 16) >= 0xFF0 )
        goto LABEL_29;
      goto LABEL_27;
    case 's':
      *a1 = v1 + 2;
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      v11 = 2;
      if ( (unsigned __int64)(v8 + 16) < 0xFF0 )
      {
LABEL_27:
        v10 = v7 + 8;
      }
      else
      {
LABEL_29:
        v18 = (char **)operator new[](0x1000u);
        *v18 = v7;
        v18[1] = nullptr;
        a1[604] = (char *)v18;
        v8 = 0;
        v10 = v18 + 1;
        v7 = (char *)v18;
      }
LABEL_30:
      *v10 = v8 + 16;
      v6 = &v7[v8 + 16];
      *(_DWORD *)&v7[v8 + 24] = 16843044;
      *(_QWORD *)v6 = off_152C38;
      *(_DWORD *)&v7[v8 + 28] = v11;
      v19 = (char *)sub_D8C70((__int64)a1, v6);
      if ( v19 != v6 )
      {
        v20 = v19;
        v21 = a1[38];
        if ( v21 == a1[39] )
        {
          v22 = (char **)a1[37];
          v23 = v21 - (char *)v22;
          v28 = v23 >> 2;
          if ( a1 + 40 == v22 )
          {
            v25 = (char *)malloc(2 * v23);
            v24 = v25;
            if ( v23 )
              memmove(v25, v22, v23);
            a1[37] = v24;
          }
          else
          {
            v24 = (char *)realloc(v22, 2 * v23);
            a1[37] = v24;
          }
          v21 = &v24[8 * (v23 >> 3)];
          a1[38] = v21;
          a1[39] = &v24[8 * v28];
        }
        a1[38] = v21 + 8;
        *(_QWORD *)v21 = v20;
        v6 = v20;
      }
      break;
    default:
      return v6;
  }
  return v6;
}
// 152C38: using guessed type __int64 (__fastcall *off_152C38[7])();
