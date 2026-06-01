void __fastcall CoinWarmStartBasis::assignBasisStatus(CoinWarmStartBasis *this, int a2, int a3, char **a4, char **a5)
{
  int v9; // ebx
  int v10; // edx
  char *v11; // rax
  int v12; // edx
  int v13; // ebp
  char *v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v18; // r9
  char *v19; // r10
  char *v20; // r9
  signed int v21; // ecx
  __int64 v22; // rdx
  int v23; // ebx
  char *v24; // rdx
  char *v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 v29; // rax
  char *v30; // rdi
  char *v31; // rax
  signed int v32; // esi
  __int64 v33; // rax
  char *v34; // rdi
  char *v35; // rdi
  char *v36; // rdx
  char v37; // r9
  char *v38; // rdi
  char *v39; // rax
  char v40; // r9
  char **v41; // [rsp+0h] [rbp-48h]
  char **v42; // [rsp+0h] [rbp-48h]
  char **v43; // [rsp+0h] [rbp-48h]
  char **v44; // [rsp+8h] [rbp-40h]

  v9 = (a3 + 15) >> 4;
  v10 = v9 + ((a2 + 15) >> 4);
  if ( v10 )
  {
    v11 = *((char **)this + 3);
    if ( *((_DWORD *)this + 4) < v10 )
    {
      if ( v11 )
      {
        v44 = a5;
        operator delete[](*((void **)this + 3));
        a5 = v44;
        v10 = v9 + ((a2 + 15) >> 4);
      }
      v12 = v10 + 10;
      v41 = a5;
      *((_DWORD *)this + 4) = v12;
      v11 = (char *)operator new[](4 * v12);
      a5 = v41;
      *((_QWORD *)this + 3) = v11;
    }
    v13 = 4 * ((a2 + 15) >> 4);
    v14 = *a4;
    if ( v13 && v14 != v11 )
    {
      v15 = v13 >> 3;
      if ( v13 >> 3 > 0 )
      {
        if ( (v14 >= v11 + 16 || v11 >= v14 + 16) && v15 > 1 )
        {
          v16 = 0;
          v17 = 0;
          do
          {
            ++v17;
            *(__m128i *)&v11[v16] = _mm_loadu_si128((const __m128i *)&v14[v16]);
            v16 += 16;
          }
          while ( v17 < v15 >> 1 );
          v18 = 8LL * (v15 & 0xFFFFFFFE);
          v19 = &v14[v18];
          v20 = &v11[v18];
          if ( v15 != (v15 & 0xFFFFFFFE) )
          {
            *v20 = *v19;
            v20[1] = v19[1];
            v20[2] = v19[2];
            v20[3] = v19[3];
            v20[4] = v19[4];
            v20[5] = v19[5];
            v20[6] = v19[6];
            v20[7] = v19[7];
          }
          v21 = v15 - 1;
        }
        else
        {
          v21 = v15 - 1;
          v35 = v11;
          v36 = *a4;
          do
          {
            v37 = *v36;
            v36 += 8;
            v35 += 8;
            *(v35 - 8) = v37;
            *(v35 - 7) = *(v36 - 7);
            *(v35 - 6) = *(v36 - 6);
            *(v35 - 5) = *(v36 - 5);
            *(v35 - 4) = *(v36 - 4);
            *(v35 - 3) = *(v36 - 3);
            *(v35 - 2) = *(v36 - 2);
            *(v35 - 1) = *(v36 - 1);
          }
          while ( &v14[8 * v21 + 8] != v36 );
        }
        v22 = 8LL * v21 + 8;
        v14 += v22;
        v11 += v22;
      }
      switch ( v13 % 8 )
      {
        case 1:
          goto LABEL_24;
        case 2:
          goto LABEL_23;
        case 3:
          goto LABEL_22;
        case 4:
          goto LABEL_21;
        case 5:
          goto LABEL_20;
        case 6:
          goto LABEL_19;
        case 7:
          v11[6] = v14[6];
LABEL_19:
          v11[5] = v14[5];
LABEL_20:
          v11[4] = v14[4];
LABEL_21:
          v11[3] = v14[3];
LABEL_22:
          v11[2] = v14[2];
LABEL_23:
          v11[1] = v14[1];
LABEL_24:
          *v11 = *v14;
          break;
        default:
          break;
      }
      v11 = *((char **)this + 3);
    }
    v23 = 4 * v9;
    v24 = &v11[v13];
    *((_QWORD *)this + 4) = v24;
    v25 = *a5;
    if ( v23 && v24 != v25 )
    {
      v26 = v23 >> 3;
      if ( v23 >> 3 > 0 )
      {
        if ( (v24 >= v25 + 16 || v25 >= &v11[v13 + 16]) && v26 > 1 )
        {
          v27 = 0;
          v28 = 0;
          do
          {
            ++v28;
            *(__m128i *)&v24[v27] = _mm_loadu_si128((const __m128i *)&v25[v27]);
            v27 += 16;
          }
          while ( v26 >> 1 > v28 );
          v29 = 8LL * (v26 & 0xFFFFFFFE);
          v30 = &v25[v29];
          v31 = &v24[v29];
          if ( v26 != (v26 & 0xFFFFFFFE) )
          {
            *v31 = *v30;
            v31[1] = v30[1];
            v31[2] = v30[2];
            v31[3] = v30[3];
            v31[4] = v30[4];
            v31[5] = v30[5];
            v31[6] = v30[6];
            v31[7] = v30[7];
          }
          v32 = v26 - 1;
        }
        else
        {
          v32 = v26 - 1;
          v38 = &v11[v13];
          v39 = *a5;
          do
          {
            v40 = *v39;
            v39 += 8;
            v38 += 8;
            *(v38 - 8) = v40;
            *(v38 - 7) = *(v39 - 7);
            *(v38 - 6) = *(v39 - 6);
            *(v38 - 5) = *(v39 - 5);
            *(v38 - 4) = *(v39 - 4);
            *(v38 - 3) = *(v39 - 3);
            *(v38 - 2) = *(v39 - 2);
            *(v38 - 1) = *(v39 - 1);
          }
          while ( v39 != &v25[8 * v32 + 8] );
        }
        v33 = 8LL * v32 + 8;
        v25 += v33;
        v24 += v33;
      }
      switch ( v23 % 8 )
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
          v24[6] = v25[6];
LABEL_45:
          v24[5] = v25[5];
LABEL_46:
          v24[4] = v25[4];
LABEL_47:
          v24[3] = v25[3];
LABEL_48:
          v24[2] = v25[2];
LABEL_49:
          v24[1] = v25[1];
LABEL_50:
          *v24 = *v25;
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 4) = 0;
  }
  v34 = *a4;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  if ( v34 )
  {
    v42 = a5;
    operator delete[](v34);
    a5 = v42;
  }
  if ( *a5 )
  {
    v43 = a5;
    operator delete[](*a5);
    a5 = v43;
  }
  *a4 = nullptr;
  *a5 = nullptr;
}

