_BYTE *__fastcall sub_1450C50(void **a1)
{
  char *v2; // rcx
  char *v3; // rdx
  char v4; // al
  char *v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // r8d
  char v8; // si
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char *v11; // rax
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdi
  char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE *result; // rax
  size_t v22; // rbx

  v2 = (char *)*a1;
  v3 = (char *)a1[1];
  v4 = *(_BYTE *)*a1;
  switch ( v4 )
  {
    case 'U':
    case 'L':
      goto LABEL_14;
    case 'u':
      if ( v2[1] == 56 )
      {
        v22 = (size_t)(v3 - 2);
        v3 = nullptr;
        if ( v22 )
        {
          v3 = (char *)((_BYTE *)memmove(*a1, v2 + 2, v22) + v22 - (_BYTE *)*a1);
          v2 = (char *)*a1;
        }
        goto LABEL_15;
      }
LABEL_14:
      if ( --v3 )
      {
        memmove(*a1, v2 + 1, (size_t)v3);
        v2 = (char *)*a1;
        v3 = (char *)a1[1] - 1;
        a1[1] = v3;
        v12 = *v2;
LABEL_16:
        if ( v12 != 82 )
          break;
LABEL_17:
        if ( v2[2] == 40 )
        {
          v17 = 2;
          v16 = -1;
          v15 = 2;
        }
        else
        {
          LODWORD(v13) = 0;
          do
          {
            v14 = (unsigned int)(v13 + 3);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( v2[v14] != 40 );
          v15 = v13 + 2;
          v16 = ~v13;
          v17 = v13 + 2;
        }
        v18 = nullptr;
        if ( v3 != (char *)v17 )
        {
          v18 = (char *)(&v3[(_QWORD)memmove(v2, &v2[v15], (size_t)&v3[-v17]) - v17] - (char *)*a1);
          v2 = (char *)*a1;
        }
        a1[1] = &v18[v16];
        goto LABEL_26;
      }
LABEL_15:
      a1[1] = v3;
      v12 = *v2;
      goto LABEL_16;
    case 'R':
      goto LABEL_17;
  }
  v5 = v3 - 1;
  if ( v5 != (_BYTE *)&dword_0 + 1 )
  {
    v6 = 1;
    v7 = 1;
    while ( 1 )
    {
      v8 = v2[v6];
      v9 = v7;
      v10 = v6 + 1;
      ++v7;
      v11 = &v2[v9];
      if ( v8 == 92 && (unsigned __int64)v5 > v10 )
      {
        v8 = v2[v10];
        if ( v8 != 92 && v8 != 34 )
        {
          *v11 = 92;
          goto LABEL_8;
        }
        v10 = v6 + 2;
      }
      *v11 = v8;
      if ( v5 == (char *)v10 )
      {
        v2 = (char *)*a1;
        v5 = (char *)v7;
        v19 = (__int64)a1[1] - 1;
        goto LABEL_25;
      }
LABEL_8:
      v2 = (char *)*a1;
      v6 = v10;
    }
  }
  v19 = 1;
LABEL_25:
  v20 = (__int64)&v5[(_QWORD)v2 + 1];
  *(_BYTE *)(v20 - 1) = v2[v19];
  v2 = (char *)*a1;
  a1[1] = (void *)(v20 - (_QWORD)*a1);
LABEL_26:
  *v2 = 32;
  result = a1[1];
  result[(_QWORD)*a1 - 1] = 10;
  return result;
}
