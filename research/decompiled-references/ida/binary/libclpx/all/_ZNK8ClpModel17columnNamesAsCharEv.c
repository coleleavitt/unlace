__int64 __fastcall ClpModel::columnNamesAsChar(ClpModel *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  char *v9; // r14
  int v10; // ebx
  char *v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  char *v16; // rcx
  char *v17; // rdx
  signed int v18; // edi
  __int64 v19; // rcx
  char *v20; // rcx
  char *v21; // rsi
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rsi
  unsigned int v25; // esi
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  char *v29; // rcx
  char *v30; // rdx
  __int64 v31; // rcx
  char *v32; // rdi
  char *v33; // rcx
  char *v34; // r14
  int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // r14
  char *v38; // rax
  __int64 v39; // r8
  int v40; // r14d
  __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rdx
  char *v44; // rcx
  char *v45; // rdx
  __int64 v46; // rcx
  char *v47; // r9
  char *v48; // rcx
  bool v49; // cc
  char *v51; // rcx
  char *v52; // rdx
  char v53; // si
  __int64 v54; // [rsp+8h] [rbp-60h]
  int v55; // [rsp+10h] [rbp-58h]
  char **v56; // [rsp+10h] [rbp-58h]
  int v57; // [rsp+1Ch] [rbp-4Ch]
  char s[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( !*((_DWORD *)this + 82) )
    return 0;
  v2 = *((int *)this + 27);
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = operator new[](8 * v2);
  v4 = *((_QWORD *)this + 49);
  v5 = *((_DWORD *)this + 27);
  v6 = (*((_QWORD *)this + 50) - v4) >> 3;
  if ( v5 < (int)v6 )
    LODWORD(v6) = *((_DWORD *)this + 27);
  if ( (_DWORD)v6 )
  {
    v7 = 0;
    v57 = v6;
    v54 = (unsigned int)(v6 - 1) + 1LL;
    while ( (unsigned int)std::string::compare((std::string *)(v4 + 8LL * (int)v7), "") )
    {
      v8 = *((_QWORD *)this + 49);
      v9 = *(char **)(v8 + 8LL * (int)v7);
      if ( v9 )
      {
        v10 = strlen(*(const char **)(v8 + 8LL * (int)v7));
        v11 = (char *)malloc(v10 + 1);
        if ( v10 && v9 != v11 )
        {
          v12 = v10 >> 3;
          if ( v10 >> 3 <= 0 )
          {
            v20 = v11;
          }
          else
          {
            if ( (v9 >= v11 + 16 || v11 >= v9 + 16) && v12 > 1 )
            {
              v13 = 0;
              v14 = 0;
              do
              {
                ++v14;
                *(__m128i *)&v11[v13] = _mm_loadu_si128((const __m128i *)&v9[v13]);
                v13 += 16;
              }
              while ( v14 < v12 >> 1 );
              v15 = 8LL * (v12 & 0xFFFFFFFE);
              v16 = &v9[v15];
              v17 = &v11[v15];
              if ( v12 != (v12 & 0xFFFFFFFE) )
              {
                *v17 = *v16;
                v17[1] = v16[1];
                v17[2] = v16[2];
                v17[3] = v16[3];
                v17[4] = v16[4];
                v17[5] = v16[5];
                v17[6] = v16[6];
                v17[7] = v16[7];
              }
              v18 = v12 - 1;
            }
            else
            {
              v18 = v12 - 1;
              v51 = v11;
              v52 = v9;
              do
              {
                v53 = *v52;
                v52 += 8;
                v51 += 8;
                *(v51 - 8) = v53;
                *(v51 - 7) = *(v52 - 7);
                *(v51 - 6) = *(v52 - 6);
                *(v51 - 5) = *(v52 - 5);
                *(v51 - 4) = *(v52 - 4);
                *(v51 - 3) = *(v52 - 3);
                *(v51 - 2) = *(v52 - 2);
                *(v51 - 1) = *(v52 - 1);
              }
              while ( v52 != &v9[8 * v18 + 8] );
            }
            v19 = 8LL * v18 + 8;
            v9 += v19;
            v20 = &v11[v19];
          }
          switch ( v10 % 8 )
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
              v20[6] = v9[6];
LABEL_22:
              v20[5] = v9[5];
LABEL_23:
              v20[4] = v9[4];
LABEL_24:
              v20[3] = v9[3];
LABEL_25:
              v20[2] = v9[2];
LABEL_26:
              v20[1] = v9[1];
LABEL_27:
              *v20 = *v9;
              break;
            default:
              break;
          }
        }
LABEL_28:
        v11[v10] = 0;
        goto LABEL_29;
      }
      v11 = nullptr;
LABEL_29:
      *(_QWORD *)(v3 + 8 * v7++) = v11;
      if ( v7 == v54 )
      {
        LODWORD(v6) = v57;
        v5 = *((_DWORD *)this + 27);
        goto LABEL_52;
      }
      v4 = *((_QWORD *)this + 49);
    }
    sprintf(s, "C%7.7d", v7);
    v21 = s;
    do
    {
      v22 = *(_DWORD *)v21;
      v21 += 4;
      v23 = ~v22 & (v22 - 16843009) & 0x80808080;
    }
    while ( !v23 );
    if ( (~v22 & (v22 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v23) = (~v22 & (v22 - 16843009) & 0x80808080) >> 16;
      v21 += 2;
    }
    v24 = &v21[-__CFADD__((_BYTE)v23, (_BYTE)v23) - 3] - s;
    v10 = v24;
    v55 = v24;
    v11 = (char *)malloc((int)v24 + 1);
    if ( !(_DWORD)v24 )
      goto LABEL_28;
    v25 = (int)v24 >> 3;
    if ( v55 >> 3 <= 0 )
    {
      v33 = v11;
      v32 = s;
LABEL_43:
      switch ( v10 % 8 )
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
          v33[6] = v32[6];
LABEL_45:
          v33[5] = v32[5];
LABEL_46:
          v33[4] = v32[4];
LABEL_47:
          v33[3] = v32[3];
LABEL_48:
          v33[2] = v32[2];
LABEL_49:
          v33[1] = v32[1];
LABEL_50:
          *v33 = *v32;
          break;
        default:
          goto LABEL_28;
      }
      goto LABEL_28;
    }
    if ( v25 == 1 )
    {
      v30 = v11;
      v29 = s;
    }
    else
    {
      v26 = 0;
      v27 = 0;
      do
      {
        ++v27;
        *(__m128i *)&v11[v26] = _mm_load_si128((const __m128i *)&s[v26]);
        v26 += 16;
      }
      while ( v27 < v25 >> 1 );
      v28 = 8LL * (v25 & 0xFFFFFFFE);
      v29 = &s[v28];
      v30 = &v11[v28];
      if ( v25 == (v25 & 0xFFFFFFFE) )
        goto LABEL_42;
    }
    *v30 = *v29;
    v30[1] = v29[1];
    v30[2] = v29[2];
    v30[3] = v29[3];
    v30[4] = v29[4];
    v30[5] = v29[5];
    v30[6] = v29[6];
    v30[7] = v29[7];
LABEL_42:
    v31 = 8LL * (int)(v25 - 1) + 8;
    v32 = &s[v31];
    v33 = &v11[v31];
    goto LABEL_43;
  }
LABEL_52:
  if ( v5 > (unsigned int)v6 )
  {
    while ( 1 )
    {
      v34 = s;
      sprintf(s, "C%7.7d", v6);
      do
      {
        v35 = *(_DWORD *)v34;
        v34 += 4;
        v36 = ~v35 & (v35 - 16843009) & 0x80808080;
      }
      while ( !v36 );
      v56 = (char **)(v3 + 8LL * (unsigned int)v6);
      if ( (~v35 & (v35 - 16843009) & 0x8080) == 0 )
      {
        LOBYTE(v36) = (~v35 & (v35 - 16843009) & 0x80808080) >> 16;
        v34 += 2;
      }
      v37 = &v34[-__CFADD__((_BYTE)v36, (_BYTE)v36) - 3] - s;
      v38 = (char *)malloc((int)v37 + 1);
      v39 = (int)v37;
      if ( !(_DWORD)v37 )
        goto LABEL_73;
      v40 = (int)v37 >> 3;
      if ( v40 > 0 )
        break;
      v48 = v38;
      v47 = s;
LABEL_65:
      switch ( (int)v39 % 8 )
      {
        case 1:
          goto LABEL_72;
        case 2:
          goto LABEL_71;
        case 3:
          goto LABEL_70;
        case 4:
          goto LABEL_69;
        case 5:
          goto LABEL_68;
        case 6:
          goto LABEL_67;
        case 7:
          v48[6] = v47[6];
LABEL_67:
          v48[5] = v47[5];
LABEL_68:
          v48[4] = v47[4];
LABEL_69:
          v48[3] = v47[3];
LABEL_70:
          v48[2] = v47[2];
LABEL_71:
          v48[1] = v47[1];
LABEL_72:
          *v48 = *v47;
          break;
        default:
          break;
      }
LABEL_73:
      LODWORD(v6) = v6 + 1;
      v49 = *((_DWORD *)this + 27) <= (unsigned int)v6;
      v38[v39] = 0;
      *v56 = v38;
      if ( v49 )
        return v3;
    }
    if ( v40 == 1 )
    {
      v45 = v38;
      v44 = s;
    }
    else
    {
      v41 = 0;
      v42 = 0;
      do
      {
        ++v42;
        *(__m128i *)&v38[v41] = _mm_load_si128((const __m128i *)&s[v41]);
        v41 += 16;
      }
      while ( v42 < (unsigned int)v40 >> 1 );
      v43 = 8LL * (v40 & 0xFFFFFFFE);
      v44 = &s[v43];
      v45 = &v38[v43];
      if ( v40 == (v40 & 0xFFFFFFFE) )
        goto LABEL_64;
    }
    *v45 = *v44;
    v45[1] = v44[1];
    v45[2] = v44[2];
    v45[3] = v44[3];
    v45[4] = v44[4];
    v45[5] = v44[5];
    v45[6] = v44[6];
    v45[7] = v44[7];
LABEL_64:
    v46 = 8LL * (v40 - 1) + 8;
    v47 = &s[v46];
    v48 = &v38[v46];
    goto LABEL_65;
  }
  return v3;
}

