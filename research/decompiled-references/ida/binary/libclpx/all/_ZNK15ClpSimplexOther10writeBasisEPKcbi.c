__int64 __fastcall ClpSimplexOther::writeBasis(ClpSimplexOther *this, const char *a2, char a3, int a4)
{
  int v5; // r13d
  FILE *v7; // r12
  char *v8; // rax
  const char *v9; // rdx
  int v10; // r8d
  unsigned int v11; // ebp
  __int64 i; // rbx
  __int64 v14; // r15
  __int64 v15; // rdi
  char v16; // al
  int v17; // r11d
  unsigned int v18; // eax
  char v19; // si
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // si
  const char *v23; // rcx
  const char *v25; // rdx
  __int64 v26; // r8
  const char *v27; // rdx
  const char *v28; // r8
  int v29; // [rsp+14h] [rbp-64h]
  char *locale; // [rsp+18h] [rbp-60h]
  char v31[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  if ( a4 >= 0 )
  {
    v5 = a4;
    if ( a4 <= 2 )
    {
      if ( !a3 )
        v5 = 0;
    }
    else
    {
      v5 = 2 * (a3 != 0);
    }
  }
  v7 = fopen(a2, "w");
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = setlocale(6, nullptr);
  locale = strdup(v8);
  setlocale(6, "C");
  v9 = *((const char **)this + 86);
  if ( *v9 )
  {
    fprintf(v7, "NAME          %s       ", v9);
    if ( v5 != 2 )
      goto LABEL_7;
  }
  else
  {
    fwrite("NAME          BLANK      ", 1u, 0x19u, v7);
    if ( v5 != 2 )
    {
LABEL_7:
      if ( a3 )
        fwrite("VALUES", 1u, 6u, v7);
      goto LABEL_9;
    }
  }
  fwrite("FREEIEEE", 1u, 8u, v7);
LABEL_9:
  fputc(10, v7);
  v10 = *((_DWORD *)this + 27);
  if ( v10 > 0 )
  {
    v29 = v5;
    v11 = 0;
    for ( i = 0; (int)i < v10; ++i )
    {
      v15 = *((_QWORD *)this + 33);
      v16 = *(_BYTE *)(v15 + i) & 7;
      if ( v16 == 1 )
      {
        v17 = *((_DWORD *)this + 26);
        if ( (int)v11 < v17 )
        {
          v18 = v11 + v10;
          v19 = *(_BYTE *)(v15 + (int)(v11 + v10)) & 7;
          if ( v19 != 1 )
          {
            if ( *((_DWORD *)this + 82) )
            {
LABEL_49:
              v23 = *(const char **)(*((_QWORD *)this + 49) + 8 * i);
LABEL_50:
              v27 = "XU";
              v28 = *(const char **)(*((_QWORD *)this + 46) + 8LL * (int)v11);
              if ( v19 != 2 )
                v27 = "XL";
              ++v11;
              fprintf(v7, " %s %-8s       %s", v27, v23, v28);
            }
            else
            {
LABEL_42:
              v25 = "XU";
              v26 = v11;
              if ( (*(_BYTE *)(v15 + (int)v18) & 7) != 2 )
                v25 = "XL";
              ++v11;
              fprintf(v7, " %s C%7.7d     R%7.7d", v25, (unsigned int)i, v26);
            }
            if ( !a3 )
              goto LABEL_17;
            v14 = 8 * i;
            goto LABEL_16;
          }
          v20 = (int)(v11 + 1);
          v21 = v20 + v17 - 1 - v11;
          while ( 1 )
          {
            v11 = v20;
            if ( v20 == v21 )
              break;
            v22 = *(_BYTE *)(v15 + v10 + v20++);
            v19 = v22 & 7;
            if ( v19 != 1 )
            {
              if ( !*((_DWORD *)this + 82) )
                goto LABEL_40;
              goto LABEL_49;
            }
          }
        }
        if ( *((_DWORD *)this + 82) )
        {
          v14 = 8 * i;
          v23 = *(const char **)(*((_QWORD *)this + 49) + 8 * i);
          if ( v11 != v17 )
          {
            v19 = *(_BYTE *)(v15 + (int)(v11 + v10)) & 7;
            goto LABEL_50;
          }
          fprintf(v7, " BS %-8s       ", v23);
          if ( !a3 )
            goto LABEL_17;
          goto LABEL_15;
        }
LABEL_40:
        if ( v11 != v17 )
        {
          v18 = v11 + v10;
          goto LABEL_42;
        }
        fprintf(v7, " BS C%7.7d", (unsigned int)i, (unsigned int)i);
      }
      else
      {
        if ( v16 != 2 )
        {
          if ( (*(_BYTE *)(v15 + i) & 3) != 0 || !a3 )
            continue;
          v14 = 8 * i;
          if ( *((_DWORD *)this + 82) )
            fprintf(v7, " BS %s", *(const char **)(*((_QWORD *)this + 49) + 8 * i));
          else
            fprintf(v7, " BS C%7.7d", i);
LABEL_15:
          fwrite("      _dummy_", 1u, 0xDu, v7);
          goto LABEL_16;
        }
        if ( *((_DWORD *)this + 82) )
          fprintf(v7, " UL %s", *(const char **)(*((_QWORD *)this + 49) + 8 * i));
        else
          fprintf(v7, " UL C%7.7d", (unsigned int)i, (unsigned int)i);
      }
      if ( !a3 )
        goto LABEL_17;
      v14 = 8 * i;
      fwrite("      _dummy_", 1u, 0xDu, v7);
LABEL_16:
      CoinConvertDouble(0, v29, *(double *)(*((_QWORD *)this + 15) + v14), v31);
      fprintf(v7, "     %s", v31);
LABEL_17:
      fputc(10, v7);
      v10 = *((_DWORD *)this + 27);
    }
  }
  fwrite("ENDATA\n", 1u, 7u, v7);
  fclose(v7);
  setlocale(6, locale);
  free(locale);
  return 0;
}

