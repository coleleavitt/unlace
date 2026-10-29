__int64 __fastcall sub_285290(char *src, __int64 a2, char *a3, int *a4)
{
  char *v5; // r12
  char *v6; // rbx
  char v7; // al
  char v8; // dl
  unsigned int v9; // edx
  unsigned __int64 *v10; // rax
  int v11; // eax
  unsigned int v13; // edx
  char **v14; // rax
  char *v15; // rax
  char v16; // dl
  char *v17; // rsi
  int *v18; // [rsp+8h] [rbp-30h]

  v5 = &src[a2 - 1];
  v6 = src;
LABEL_3:
  while ( 1 )
  {
    v7 = *a3;
    if ( !*a3 )
      break;
    while ( 1 )
    {
      if ( v6 >= v5 )
LABEL_15:
        sub_285110(src, (__int64)v6);
      if ( v7 != 37 )
        goto LABEL_2;
      v8 = a3[1];
      if ( v8 == 115 )
      {
        v13 = *a4;
        if ( (unsigned int)*a4 > 0x2F )
        {
          v14 = *((char ***)a4 + 1);
          *((_QWORD *)a4 + 1) = v14 + 1;
        }
        else
        {
          v14 = (char **)(*((_QWORD *)a4 + 2) + v13);
          *a4 = v13 + 8;
        }
        v15 = *v14;
        v16 = *v15;
        if ( *v15 )
        {
          v17 = &v15[v5 - v6];
          while ( 1 )
          {
            ++v15;
            *v6++ = v16;
            v16 = *v15;
            if ( !*v15 )
              break;
            if ( v15 == v17 )
              goto LABEL_15;
          }
        }
        a3 += 2;
        goto LABEL_3;
      }
      if ( v8 != 122 )
        break;
      if ( a3[2] != 117 )
        goto LABEL_2;
      v9 = *a4;
      if ( (unsigned int)*a4 > 0x2F )
      {
        v10 = *((unsigned __int64 **)a4 + 1);
        *((_QWORD *)a4 + 1) = v10 + 1;
      }
      else
      {
        v10 = (unsigned __int64 *)(*((_QWORD *)a4 + 2) + v9);
        *a4 = v9 + 8;
      }
      v18 = a4;
      v11 = sub_2851E0(v6, v5 - v6, *v10);
      if ( v11 <= 0 )
        goto LABEL_15;
      a3 += 3;
      a4 = v18;
      v6 += v11;
      v7 = *a3;
      if ( !*a3 )
        goto LABEL_14;
    }
    a3 += v8 == 37;
LABEL_2:
    *v6 = v7;
    ++a3;
    ++v6;
  }
LABEL_14:
  *v6 = 0;
  return v6 - src;
}

