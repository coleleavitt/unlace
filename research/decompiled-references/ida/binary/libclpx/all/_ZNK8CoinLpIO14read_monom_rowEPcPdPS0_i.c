__int64 __fastcall CoinLpIO::read_monom_row(CoinLpIO *this, char *a2, double *a3, char **a4, int a5)
{
  __int64 v7; // rbx
  int is_sense; // r12d
  char v10; // al
  char *v11; // rdx
  __int64 v12; // rbx
  double *v13; // r14
  char *v14; // r15
  double v15; // xmm1_8
  char **v16; // rbp
  int v17; // ebx
  __int64 v18; // r13
  char *v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  char *v24; // rsi
  char *v25; // rdx
  __int64 v26; // rcx
  char *v27; // rcx
  char *v28; // rcx
  int v29; // edx
  unsigned int v30; // eax
  char *p_dest; // rcx
  int v32; // edx
  unsigned int v33; // eax
  double v34; // [rsp+0h] [rbp-848h]
  char *nptr; // [rsp+8h] [rbp-840h]
  char dest; // [rsp+10h] [rbp-838h] BYREF
  _BYTE v37[1023]; // [rsp+11h] [rbp-837h] BYREF
  char v38[1080]; // [rsp+410h] [rbp-438h] BYREF

  v7 = a5;
  strcpy(&dest, a2);
  is_sense = CoinLpIO::is_sense(this, &dest);
  if ( is_sense < 0 )
  {
    v10 = dest;
    if ( dest == 43 )
    {
      p_dest = &dest;
      do
      {
        v32 = *(_DWORD *)p_dest;
        p_dest += 4;
        v33 = ~v32 & (v32 - 16843009) & 0x80808080;
      }
      while ( !v33 );
      if ( (~v32 & (v32 - 16843009) & 0x8080) == 0 )
        LOBYTE(v33) = (~v32 & (v32 - 16843009) & 0x80808080) >> 16;
      v34 = 1.0;
      if ( (~v32 & (v32 - 16843009) & 0x8080) == 0 )
        p_dest += 2;
      v11 = v37;
      if ( &p_dest[-__CFADD__((_BYTE)v33, (_BYTE)v33) - 3] - &dest != 1 )
      {
LABEL_6:
        v12 = v7;
        nptr = v11;
        v13 = &a3[v12];
        v14 = v38;
        if ( (unsigned int)CoinLpIO::first_is_number(this, v11) )
        {
          *v13 = strtod(nptr, nullptr);
          CoinLpIO::fscanfLpIO(this, v38);
          v15 = v34 * *v13;
        }
        else
        {
          strcpy(v38, nptr);
          v15 = v34;
        }
        *v13 = v15;
        v16 = &a4[v12];
        v17 = strlen(v38);
        v18 = v17;
        v19 = (char *)malloc(v17 + 1);
        if ( !v17 )
        {
LABEL_32:
          v19[v18] = 0;
          *v16 = v19;
          return (unsigned int)is_sense;
        }
        v20 = v17 >> 3;
        if ( v20 <= 0 )
        {
          v27 = v19;
LABEL_16:
          switch ( (int)v18 % 8 )
          {
            case 1:
              goto LABEL_31;
            case 2:
              goto LABEL_30;
            case 3:
              goto LABEL_29;
            case 4:
              goto LABEL_28;
            case 5:
              goto LABEL_27;
            case 6:
              goto LABEL_26;
            case 7:
              v27[6] = v14[6];
LABEL_26:
              v27[5] = v14[5];
LABEL_27:
              v27[4] = v14[4];
LABEL_28:
              v27[3] = v14[3];
LABEL_29:
              v27[2] = v14[2];
LABEL_30:
              v27[1] = v14[1];
LABEL_31:
              *v27 = *v14;
              break;
            default:
              goto LABEL_32;
          }
          goto LABEL_32;
        }
        if ( v20 == 1 )
        {
          v25 = v19;
          v24 = v38;
        }
        else
        {
          v21 = 0;
          v22 = 0;
          do
          {
            ++v22;
            *(__m128i *)&v19[v21] = _mm_load_si128((const __m128i *)&v38[v21]);
            v21 += 16;
          }
          while ( v22 < (unsigned int)v20 >> 1 );
          v23 = 8LL * (v20 & 0xFFFFFFFE);
          v24 = &v38[v23];
          v25 = &v19[v23];
          if ( v20 == (v20 & 0xFFFFFFFE) )
            goto LABEL_15;
        }
        *v25 = *v24;
        v25[1] = v24[1];
        v25[2] = v24[2];
        v25[3] = v24[3];
        v25[4] = v24[4];
        v25[5] = v24[5];
        v25[6] = v24[6];
        v25[7] = v24[7];
LABEL_15:
        v26 = 8LL * (v20 - 1) + 8;
        v14 = &v38[v26];
        v27 = &v19[v26];
        goto LABEL_16;
      }
      CoinLpIO::fscanfLpIO(this, &dest);
      v10 = dest;
    }
    if ( v10 == 45 )
    {
      v28 = &dest;
      do
      {
        v29 = *(_DWORD *)v28;
        v28 += 4;
        v30 = ~v29 & (v29 - 16843009) & 0x80808080;
      }
      while ( !v30 );
      if ( (~v29 & (v29 - 16843009) & 0x8080) == 0 )
        LOBYTE(v30) = (~v29 & (v29 - 16843009) & 0x80808080) >> 16;
      v34 = -1.0;
      if ( (~v29 & (v29 - 16843009) & 0x8080) == 0 )
        v28 += 2;
      v11 = v37;
      if ( &v28[-__CFADD__((_BYTE)v30, (_BYTE)v30) - 3] - &dest == 1 )
      {
        CoinLpIO::fscanfLpIO(this, &dest);
        v11 = &dest;
      }
    }
    else
    {
      v11 = &dest;
      v34 = 1.0;
    }
    goto LABEL_6;
  }
  return (unsigned int)is_sense;
}

