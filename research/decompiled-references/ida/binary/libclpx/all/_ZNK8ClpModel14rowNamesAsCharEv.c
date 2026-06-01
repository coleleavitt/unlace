__int64 __fastcall ClpModel::rowNamesAsChar(ClpModel *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  char *v10; // r14
  int v11; // ebx
  char *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rdx
  signed int v19; // edi
  __int64 v20; // rcx
  char *v21; // rcx
  char *v22; // rsi
  int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // esi
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  char *v30; // rcx
  char *v31; // rdx
  __int64 v32; // rcx
  char *v33; // rdi
  char *v34; // rcx
  int v35; // r14d
  char *v36; // rax
  __int64 v37; // r8
  int v38; // r14d
  __int64 v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  char *v42; // rcx
  char *v43; // rdx
  __int64 v44; // rcx
  char *v45; // r9
  char *v46; // rcx
  char **v47; // rbx
  char *v48; // rax
  char *v50; // rcx
  char *v51; // rdx
  char v52; // si
  __int64 v53; // [rsp+8h] [rbp-60h]
  int v54; // [rsp+10h] [rbp-58h]
  int v55; // [rsp+1Ch] [rbp-4Ch]
  char s[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( !*((_DWORD *)this + 82) )
    return 0;
  v2 = *((_DWORD *)this + 26) + 1;
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = operator new[](8 * v2);
  v4 = *((_QWORD *)this + 46);
  v5 = v3;
  v6 = *((int *)this + 26);
  v7 = (*((_QWORD *)this + 47) - v4) >> 3;
  if ( (int)v6 < (int)v7 )
    LODWORD(v7) = *((_DWORD *)this + 26);
  if ( (_DWORD)v7 )
  {
    v8 = 0;
    v55 = v7;
    v53 = (unsigned int)(v7 - 1) + 1LL;
    while ( (unsigned int)std::string::compare((std::string *)(v4 + 8LL * (int)v8), "") )
    {
      v9 = *((_QWORD *)this + 46);
      v10 = *(char **)(v9 + 8LL * (int)v8);
      if ( v10 )
      {
        v11 = strlen(*(const char **)(v9 + 8LL * (int)v8));
        v12 = (char *)malloc(v11 + 1);
        if ( v11 && v10 != v12 )
        {
          v13 = v11 >> 3;
          if ( v11 >> 3 <= 0 )
          {
            v21 = v12;
          }
          else
          {
            if ( (v10 >= v12 + 16 || v12 >= v10 + 16) && v13 > 1 )
            {
              v14 = 0;
              v15 = 0;
              do
              {
                ++v15;
                *(__m128i *)&v12[v14] = _mm_loadu_si128((const __m128i *)&v10[v14]);
                v14 += 16;
              }
              while ( v15 < v13 >> 1 );
              v16 = 8LL * (v13 & 0xFFFFFFFE);
              v17 = &v10[v16];
              v18 = &v12[v16];
              if ( v13 != (v13 & 0xFFFFFFFE) )
              {
                *v18 = *v17;
                v18[1] = v17[1];
                v18[2] = v17[2];
                v18[3] = v17[3];
                v18[4] = v17[4];
                v18[5] = v17[5];
                v18[6] = v17[6];
                v18[7] = v17[7];
              }
              v19 = v13 - 1;
            }
            else
            {
              v19 = v13 - 1;
              v50 = v12;
              v51 = v10;
              do
              {
                v52 = *v51;
                v51 += 8;
                v50 += 8;
                *(v50 - 8) = v52;
                *(v50 - 7) = *(v51 - 7);
                *(v50 - 6) = *(v51 - 6);
                *(v50 - 5) = *(v51 - 5);
                *(v50 - 4) = *(v51 - 4);
                *(v50 - 3) = *(v51 - 3);
                *(v50 - 2) = *(v51 - 2);
                *(v50 - 1) = *(v51 - 1);
              }
              while ( v51 != &v10[8 * v19 + 8] );
            }
            v20 = 8LL * v19 + 8;
            v10 += v20;
            v21 = &v12[v20];
          }
          switch ( v11 % 8 )
          {
            case 1:
              goto LABEL_27;
            case 2:
              goto LABEL_26;
            case 3:
              goto LABEL_25;
            case 4:
              goto LABEL_24;
            case 5:
              goto LABEL_23;
            case 6:
              goto LABEL_22;
            case 7:
              v21[6] = v10[6];
LABEL_22:
              v21[5] = v10[5];
LABEL_23:
              v21[4] = v10[4];
LABEL_24:
              v21[3] = v10[3];
LABEL_25:
              v21[2] = v10[2];
LABEL_26:
              v21[1] = v10[1];
LABEL_27:
              *v21 = *v10;
              break;
            default:
              break;
          }
        }
LABEL_28:
        v12[v11] = 0;
        goto LABEL_29;
      }
      v12 = nullptr;
LABEL_29:
      *(_QWORD *)(v5 + 8 * v8++) = v12;
      if ( v53 == v8 )
      {
        v6 = *((int *)this + 26);
        LODWORD(v7) = v55;
        goto LABEL_52;
      }
      v4 = *((_QWORD *)this + 46);
    }
    sprintf(s, "R%7.7d", v8);
    v22 = s;
    do
    {
      v23 = *(_DWORD *)v22;
      v22 += 4;
      v24 = ~v23 & (v23 - 16843009) & 0x80808080;
    }
    while ( !v24 );
    if ( (~v23 & (v23 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v24) = (~v23 & (v23 - 16843009) & 0x80808080) >> 16;
      v22 += 2;
    }
    v25 = &v22[-__CFADD__((_BYTE)v24, (_BYTE)v24) - 3] - s;
    v11 = v25;
    v54 = v25;
    v12 = (char *)malloc((int)v25 + 1);
    if ( !(_DWORD)v25 )
      goto LABEL_28;
    v26 = (int)v25 >> 3;
    if ( v54 >> 3 <= 0 )
    {
      v34 = v12;
      v33 = s;
LABEL_43:
      switch ( v11 % 8 )
      {
        case 1:
          goto LABEL_50;
        case 2:
          goto LABEL_49;
        case 3:
          goto LABEL_48;
        case 4:
          goto LABEL_47;
        case 5:
          goto LABEL_46;
        case 6:
          goto LABEL_45;
        case 7:
          v34[6] = v33[6];
LABEL_45:
          v34[5] = v33[5];
LABEL_46:
          v34[4] = v33[4];
LABEL_47:
          v34[3] = v33[3];
LABEL_48:
          v34[2] = v33[2];
LABEL_49:
          v34[1] = v33[1];
LABEL_50:
          *v34 = *v33;
          break;
        default:
          goto LABEL_28;
      }
      goto LABEL_28;
    }
    if ( v26 == 1 )
    {
      v31 = v12;
      v30 = s;
    }
    else
    {
      v27 = 0;
      v28 = 0;
      do
      {
        ++v28;
        *(__m128i *)&v12[v27] = _mm_load_si128((const __m128i *)&s[v27]);
        v27 += 16;
      }
      while ( v28 < v26 >> 1 );
      v29 = 8LL * (v26 & 0xFFFFFFFE);
      v30 = &s[v29];
      v31 = &v12[v29];
      if ( v26 == (v26 & 0xFFFFFFFE) )
        goto LABEL_42;
    }
    *v31 = *v30;
    v31[1] = v30[1];
    v31[2] = v30[2];
    v31[3] = v30[3];
    v31[4] = v30[4];
    v31[5] = v30[5];
    v31[6] = v30[6];
    v31[7] = v30[7];
LABEL_42:
    v32 = 8LL * (int)(v26 - 1) + 8;
    v33 = &s[v32];
    v34 = &v12[v32];
    goto LABEL_43;
  }
LABEL_52:
  if ( (unsigned int)v7 < (unsigned int)v6 )
  {
    while ( 1 )
    {
      sprintf(s, "R%7.7d", v7);
      v35 = strlen(s);
      v36 = (char *)malloc(v35 + 1);
      v37 = v35;
      if ( v35 )
        break;
LABEL_69:
      v36[v37] = 0;
      *(_QWORD *)(v5 + 8LL * (unsigned int)v7) = v36;
      LODWORD(v7) = v7 + 1;
      v6 = *((int *)this + 26);
      if ( (unsigned int)v6 <= (unsigned int)v7 )
        goto LABEL_70;
    }
    v38 = v35 >> 3;
    if ( v38 <= 0 )
    {
      v46 = v36;
      v45 = s;
LABEL_61:
      switch ( (int)v37 % 8 )
      {
        case 1:
          goto LABEL_68;
        case 2:
          goto LABEL_67;
        case 3:
          goto LABEL_66;
        case 4:
          goto LABEL_65;
        case 5:
          goto LABEL_64;
        case 6:
          goto LABEL_63;
        case 7:
          v46[6] = v45[6];
LABEL_63:
          v46[5] = v45[5];
LABEL_64:
          v46[4] = v45[4];
LABEL_65:
          v46[3] = v45[3];
LABEL_66:
          v46[2] = v45[2];
LABEL_67:
          v46[1] = v45[1];
LABEL_68:
          *v46 = *v45;
          break;
        default:
          goto LABEL_69;
      }
      goto LABEL_69;
    }
    if ( v38 == 1 )
    {
      v43 = v36;
      v42 = s;
    }
    else
    {
      v39 = 0;
      v40 = 0;
      do
      {
        ++v40;
        *(__m128i *)&v36[v39] = _mm_load_si128((const __m128i *)&s[v39]);
        v39 += 16;
      }
      while ( v40 < (unsigned int)v38 >> 1 );
      v41 = 8LL * (v38 & 0xFFFFFFFE);
      v42 = &s[v41];
      v43 = &v36[v41];
      if ( v38 == (v38 & 0xFFFFFFFE) )
        goto LABEL_60;
    }
    *v43 = *v42;
    v43[1] = v42[1];
    v43[2] = v42[2];
    v43[3] = v42[3];
    v43[4] = v42[4];
    v43[5] = v42[5];
    v43[6] = v42[6];
    v43[7] = v42[7];
LABEL_60:
    v44 = 8LL * (v38 - 1) + 8;
    v45 = &s[v44];
    v46 = &v36[v44];
    goto LABEL_61;
  }
LABEL_70:
  v47 = (char **)(v5 + 8 * v6);
  v48 = (char *)malloc(7u);
  if ( v48 != "OBJROW" )
  {
    *(_DWORD *)v48 = 1380598351;
    *((_WORD *)v48 + 2) = 22351;
  }
  v48[6] = 0;
  *v47 = v48;
  return v5;
}

