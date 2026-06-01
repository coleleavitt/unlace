// Alternative name is '_ZN13CoinModelHashC2ERKS_'
void __fastcall CoinModelHash::CoinModelHash(CoinModelHash *this, unsigned __int64 **a2)
{
  int v2; // eax
  int v3; // edx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ebx
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 *v9; // r12
  unsigned __int64 *v10; // r13
  int v11; // ebx
  _BYTE *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  _BYTE *v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  unsigned __int64 *v22; // r12
  int v23; // ebp
  unsigned __int64 v24; // rbp
  void *v25; // rax
  void *v26; // rcx
  unsigned __int64 *v27; // rdx
  char *v28; // rcx
  char *v29; // rdx
  char v30; // r10
  int v31; // [rsp+0h] [rbp-4Ch]

  v2 = *((_DWORD *)a2 + 4);
  v3 = *((_DWORD *)a2 + 6);
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = v2;
  v4 = *((int *)a2 + 5);
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 5) = v4;
  if ( (_DWORD)v4 )
  {
    if ( v4 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v5 = operator new[](8 * v4);
      *(_QWORD *)this = v5;
      v6 = *((_DWORD *)this + 5);
      v31 = v6;
      if ( v6 > 0 )
      {
        v7 = (_QWORD *)v5;
        v8 = **a2;
        v9 = *a2 + 1;
        v10 = &v9[v6 - 1];
        if ( !v8 )
          goto LABEL_31;
LABEL_5:
        v11 = strlen((const char *)v8);
        v12 = malloc(v11 + 1);
        if ( v11 && (_BYTE *)v8 != v12 )
        {
          v13 = v11 >> 3;
          if ( v11 >> 3 <= 0 )
          {
            v21 = v12;
          }
          else
          {
            if ( ((unsigned __int64)v12 >= v8 + 16 || v8 >= (unsigned __int64)(v12 + 16)) && v13 > 1 )
            {
              v14 = 0;
              v15 = 0;
              do
              {
                ++v15;
                *(__m128i *)&v12[v14] = _mm_loadu_si128((const __m128i *)(v8 + v14));
                v14 += 16;
              }
              while ( v15 < v13 >> 1 );
              v16 = 8LL * (v13 & 0xFFFFFFFE);
              v17 = (_BYTE *)(v8 + v16);
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
              v28 = (char *)v8;
              v29 = v12;
              do
              {
                v30 = *v28;
                v29 += 8;
                v28 += 8;
                *(v29 - 8) = v30;
                *(v29 - 7) = *(v28 - 7);
                *(v29 - 6) = *(v28 - 6);
                *(v29 - 5) = *(v28 - 5);
                *(v29 - 4) = *(v28 - 4);
                *(v29 - 3) = *(v28 - 3);
                *(v29 - 2) = *(v28 - 2);
                *(v29 - 1) = *(v28 - 1);
              }
              while ( &v12[8 * v19 + 8] != v29 );
            }
            v20 = 8LL * (int)v19 + 8;
            v8 += v20;
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
              v21[6] = *(_BYTE *)(v8 + 6);
LABEL_22:
              v21[5] = *(_BYTE *)(v8 + 5);
LABEL_23:
              v21[4] = *(_BYTE *)(v8 + 4);
LABEL_24:
              v21[3] = *(_BYTE *)(v8 + 3);
LABEL_25:
              v21[2] = *(_BYTE *)(v8 + 2);
LABEL_26:
              v21[1] = *(_BYTE *)(v8 + 1);
LABEL_27:
              *v21 = *(_BYTE *)v8;
              break;
            default:
              break;
          }
        }
        v12[v11] = 0;
        while ( 1 )
        {
          *v7++ = v12;
          v27 = v9;
          if ( v9 == v10 )
            break;
          v8 = *v9++;
          if ( *v27 )
            goto LABEL_5;
LABEL_31:
          v12 = nullptr;
        }
      }
      v22 = a2[1];
      v23 = 4 * v31;
      if ( !v22 )
      {
        v26 = nullptr;
        goto LABEL_20;
      }
      if ( (unsigned __int64)v23 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v24 = 8LL * v23;
        v25 = (void *)operator new[](v24);
        v26 = memcpy(v25, v22, v24);
LABEL_20:
        *((_QWORD *)this + 1) = v26;
        return;
      }
    }
    __cxa_throw_bad_array_new_length();
  }
}

