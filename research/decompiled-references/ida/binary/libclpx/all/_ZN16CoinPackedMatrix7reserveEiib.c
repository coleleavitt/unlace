void __fastcall CoinPackedMatrix::reserve(CoinPackedMatrix *this, int a2, int a3, char a4)
{
  unsigned __int64 v4; // r12
  void *v7; // r13
  void *v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  char *v15; // rbx
  char *v16; // r13
  __int64 v17; // rax
  int v18; // edx
  int v19; // edx
  __int64 v20; // r10
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 v23; // r11
  __int64 v24; // rbp
  __int64 v25; // rcx
  int v26; // edx
  bool v27; // r15
  char *v28; // rsi
  char *v29; // rdi
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // r8
  __m128i v33; // xmm0
  __int64 v34; // r8
  __int64 v35; // rcx
  char *v36; // r8
  char *v37; // rcx
  char *v38; // rsi
  char *v39; // rdi
  __int64 v40; // r10
  __int64 v41; // xmm0_8
  __int64 v42; // r10
  char *v43; // rcx
  char *v44; // r9
  int v45; // eax
  __int64 v46; // r8
  _DWORD *v47; // rsi
  int v48; // edx
  __int64 v49; // rcx
  _OWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // ebx
  _DWORD *v54; // rsi
  _OWORD *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // [rsp+0h] [rbp-48h]
  __int64 v58; // [rsp+0h] [rbp-48h]
  __int64 v59; // [rsp+8h] [rbp-40h]

  v4 = a3;
  if ( *((_DWORD *)this + 19) >= a2 )
    goto LABEL_12;
  *((_DWORD *)this + 19) = a2;
  v7 = *((void **)this + 7);
  v8 = *((void **)this + 6);
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_86;
  v57 = 4LL * a2;
  *((_QWORD *)this + 7) = operator new[](v57);
  if ( (unsigned __int64)(a2 + 1) > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_86;
  v9 = (_DWORD *)operator new[](v57 + 4);
  v10 = *((unsigned int *)this + 16);
  *((_QWORD *)this + 6) = v9;
  *v9 = 0;
  if ( (int)v10 > 0 )
  {
    CoinMemcpyN<int>(v7, v10, *((_QWORD *)this + 7));
    CoinMemcpyN<int>(v8, (unsigned int)(*((_DWORD *)this + 16) + 1), *((_QWORD *)this + 6));
    if ( a4 )
      goto LABEL_6;
  }
  else if ( a4 )
  {
LABEL_6:
    v11 = *((_DWORD *)this + 19);
    v12 = *((int *)this + 16);
    v13 = *((_DWORD *)this + 19);
    v14 = v11 - v12;
    if ( v11 != (_DWORD)v12 )
    {
      v46 = *((_QWORD *)this + 6);
      v47 = (_DWORD *)(*((_QWORD *)this + 7) + 4 * v12);
      v48 = v14 / 8;
      v49 = (unsigned int)(v14 % 8);
      if ( v48 <= 0 )
      {
        switch ( v49 )
        {
          case 1LL:
            goto LABEL_69;
          case 2LL:
            goto LABEL_68;
          case 3LL:
            goto LABEL_67;
          case 4LL:
            goto LABEL_66;
          case 5LL:
            goto LABEL_65;
          case 6LL:
            goto LABEL_64;
          case 7LL:
LABEL_63:
            v47[6] = 0;
LABEL_64:
            v47[5] = 0;
LABEL_65:
            v47[4] = 0;
LABEL_66:
            v47[3] = 0;
LABEL_67:
            v47[2] = 0;
LABEL_68:
            v47[1] = 0;
LABEL_69:
            *v47 = 0;
            goto LABEL_70;
          default:
LABEL_84:
            v13 = v11;
            goto LABEL_7;
        }
      }
      v50 = (_OWORD *)(*((_QWORD *)this + 7) + 4 * v12);
      v51 = (unsigned int)(v48 - 1);
      do
      {
        *v50 = 0;
        v50 += 2;
        *(v50 - 1) = 0;
      }
      while ( &v47[8 * v51 + 8] != (_DWORD *)v50 );
      v47 += 8 * (int)v51 + 8;
      switch ( v49 )
      {
        case 1LL:
          goto LABEL_69;
        case 2LL:
          goto LABEL_68;
        case 3LL:
          goto LABEL_67;
        case 4LL:
          goto LABEL_66;
        case 5LL:
          goto LABEL_65;
        case 6LL:
          goto LABEL_64;
        case 7LL:
          goto LABEL_63;
        default:
          break;
      }
LABEL_70:
      v52 = *((int *)this + 16);
      v13 = *((_DWORD *)this + 19);
      v53 = v13 - v52;
      v54 = (_DWORD *)(v46 + 4 * v52 + 4);
      if ( v13 != (_DWORD)v52 )
      {
        if ( v53 / 8 > 0 )
        {
          v55 = (_OWORD *)(v46 + 4 * v52 + 4);
          v56 = (unsigned int)(v53 / 8 - 1);
          do
          {
            *v55 = 0;
            v55 += 2;
            *(v55 - 1) = 0;
          }
          while ( v55 != (_OWORD *)&v54[8 * v56 + 8] );
          v54 += 8 * (int)v56 + 8;
        }
        switch ( v53 % 8 )
        {
          case 1:
            goto LABEL_82;
          case 2:
            goto LABEL_81;
          case 3:
            goto LABEL_80;
          case 4:
            goto LABEL_79;
          case 5:
            goto LABEL_78;
          case 6:
            goto LABEL_77;
          case 7:
            v54[6] = 0;
LABEL_77:
            v54[5] = 0;
LABEL_78:
            v54[4] = 0;
LABEL_79:
            v54[3] = 0;
LABEL_80:
            v54[2] = 0;
LABEL_81:
            v54[1] = 0;
LABEL_82:
            *v54 = 0;
            v13 = *((_DWORD *)this + 19);
            break;
          default:
            v11 = *((_DWORD *)this + 19);
            goto LABEL_84;
        }
      }
    }
LABEL_7:
    *((_DWORD *)this + 16) = v13;
  }
  if ( v7 )
    operator delete[](v7);
  if ( v8 )
    operator delete[](v8);
LABEL_12:
  if ( *((_DWORD *)this + 20) >= (int)v4 )
    return;
  *((_DWORD *)this + 20) = v4;
  v15 = *((char **)this + 5);
  v16 = *((char **)this + 4);
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
LABEL_86:
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 5) = operator new[](4 * v4);
  v17 = operator new[](8 * v4);
  v18 = *((_DWORD *)this + 16);
  *((_QWORD *)this + 4) = v17;
  v19 = v18 - 1;
  if ( v19 >= 0 )
  {
    v20 = v19;
    v21 = *((_QWORD *)this + 5);
    v22 = *((_QWORD *)this + 6);
    v23 = v19 - 1LL;
    v24 = *((_QWORD *)this + 7);
    v58 = v23 - (unsigned int)v19;
    while ( 1 )
    {
      v25 = *(int *)(v22 + 4 * v20);
      v26 = *(_DWORD *)(v24 + 4 * v20);
      v27 = v26 == 0;
      v28 = (char *)(v21 + 4 * v25);
      v29 = &v15[4 * v25];
      if ( v28 != v29 && v26 )
      {
        v30 = v26 >> 3;
        if ( v26 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v29 >= v21 + 4 * v25 + 32 || v28 >= &v15[4 * v25 + 32]) && v30 > 1 )
          {
            v31 = 0;
            v32 = v30 - 1;
            do
            {
              v33 = _mm_loadu_si128((const __m128i *)&v29[v31 + 16]);
              *(__m128i *)&v28[v31] = _mm_loadu_si128((const __m128i *)&v29[v31]);
              *(__m128i *)&v28[v31 + 16] = v33;
              v31 += 32;
            }
            while ( v31 != 32 * (v32 + 1) );
          }
          else
          {
            v43 = (char *)(v21 + 4 * v25);
            v44 = v29;
            v59 = v17;
            v32 = v30 - 1;
            do
            {
              v45 = *(_DWORD *)v44;
              v43 += 32;
              v44 += 32;
              *((_DWORD *)v43 - 8) = v45;
              *((_DWORD *)v43 - 7) = *((_DWORD *)v44 - 7);
              *((_DWORD *)v43 - 6) = *((_DWORD *)v44 - 6);
              *((_DWORD *)v43 - 5) = *((_DWORD *)v44 - 5);
              *((_DWORD *)v43 - 4) = *((_DWORD *)v44 - 4);
              *((_DWORD *)v43 - 3) = *((_DWORD *)v44 - 3);
              *((_DWORD *)v43 - 2) = *((_DWORD *)v44 - 2);
              *((_DWORD *)v43 - 1) = *((_DWORD *)v44 - 1);
            }
            while ( &v28[32 * v32 + 32] != v43 );
            v17 = v59;
          }
          v34 = 32 * ((int)v32 + 1LL);
          v29 += v34;
          v28 += v34;
        }
        switch ( v26 % 8 )
        {
          case 1:
            goto LABEL_38;
          case 2:
            goto LABEL_37;
          case 3:
            goto LABEL_36;
          case 4:
            goto LABEL_35;
          case 5:
            goto LABEL_34;
          case 6:
            goto LABEL_33;
          case 7:
            *((_DWORD *)v28 + 6) = *((_DWORD *)v29 + 6);
LABEL_33:
            *((_DWORD *)v28 + 5) = *((_DWORD *)v29 + 5);
LABEL_34:
            *((_DWORD *)v28 + 4) = *((_DWORD *)v29 + 4);
LABEL_35:
            *((_DWORD *)v28 + 3) = *((_DWORD *)v29 + 3);
LABEL_36:
            *((_DWORD *)v28 + 2) = *((_DWORD *)v29 + 2);
LABEL_37:
            *((_DWORD *)v28 + 1) = *((_DWORD *)v29 + 1);
LABEL_38:
            *(_DWORD *)v28 = *(_DWORD *)v29;
            break;
          default:
            break;
        }
        v26 = *(_DWORD *)(v24 + 4 * v20);
        v25 = *(int *)(v22 + 4 * v20);
        v27 = v26 == 0;
      }
      v35 = 8 * v25;
      v36 = (char *)(v17 + v35);
      v37 = &v16[v35];
      if ( v36 != v37 && !v27 )
      {
        if ( v26 >> 3 > 0 )
        {
          v38 = v36;
          v39 = v37;
          v40 = (unsigned int)((v26 >> 3) - 1);
          do
          {
            v41 = *(_QWORD *)v39;
            v38 += 64;
            v39 += 64;
            *((_QWORD *)v38 - 8) = v41;
            *((_QWORD *)v38 - 7) = *((_QWORD *)v39 - 7);
            *((_QWORD *)v38 - 6) = *((_QWORD *)v39 - 6);
            *((_QWORD *)v38 - 5) = *((_QWORD *)v39 - 5);
            *((_QWORD *)v38 - 4) = *((_QWORD *)v39 - 4);
            *((_QWORD *)v38 - 3) = *((_QWORD *)v39 - 3);
            *((_QWORD *)v38 - 2) = *((_QWORD *)v39 - 2);
            *((_QWORD *)v38 - 1) = *((_QWORD *)v39 - 1);
          }
          while ( v38 != &v36[64 * v40 + 64] );
          v42 = ((int)v40 + 1LL) << 6;
          v37 += v42;
          v36 += v42;
        }
        switch ( v26 % 8 )
        {
          case 1:
            goto LABEL_53;
          case 2:
            goto LABEL_52;
          case 3:
            goto LABEL_51;
          case 4:
            goto LABEL_50;
          case 5:
            goto LABEL_49;
          case 6:
            goto LABEL_48;
          case 7:
            *((_QWORD *)v36 + 6) = *((_QWORD *)v37 + 6);
LABEL_48:
            *((_QWORD *)v36 + 5) = *((_QWORD *)v37 + 5);
LABEL_49:
            *((_QWORD *)v36 + 4) = *((_QWORD *)v37 + 4);
LABEL_50:
            *((_QWORD *)v36 + 3) = *((_QWORD *)v37 + 3);
LABEL_51:
            *((_QWORD *)v36 + 2) = *((_QWORD *)v37 + 2);
LABEL_52:
            *((_QWORD *)v36 + 1) = *((_QWORD *)v37 + 1);
LABEL_53:
            *(_QWORD *)v36 = *(_QWORD *)v37;
            break;
          default:
            break;
        }
      }
      v20 = v23;
      if ( v23 == v58 )
        break;
      --v23;
    }
  }
  if ( v15 )
    operator delete[](v15);
  if ( v16 )
    operator delete[](v16);
}

