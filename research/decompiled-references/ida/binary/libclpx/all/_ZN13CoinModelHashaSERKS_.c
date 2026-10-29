__int64 __fastcall CoinModelHash::operator=(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r12
  int v5; // ebp
  void *v6; // rdi
  void *v7; // rdi
  int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // esi
  _QWORD *v12; // r12
  unsigned __int64 *v13; // rbp
  unsigned __int64 v14; // r14
  int v15; // r13d
  _BYTE *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  _BYTE *v22; // rdx
  unsigned int v23; // esi
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  const void *v26; // r12
  int v27; // ebp
  void *v28; // rax
  void *v29; // rcx
  unsigned __int64 *v31; // rdx
  _BYTE *v32; // rcx
  char *v33; // rdx
  char v34; // di
  unsigned __int64 *v35; // [rsp+0h] [rbp-48h]
  int v36; // [rsp+Ch] [rbp-3Ch]

  if ( (_DWORD *)a1 != a2 )
  {
    if ( *(int *)(a1 + 20) > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        ++v5;
        v6 = *(void **)(*(_QWORD *)a1 + v4);
        v4 += 8;
        free(v6);
      }
      while ( *(_DWORD *)(a1 + 20) > v5 );
    }
    if ( *(_QWORD *)a1 )
      operator delete[](*(void **)a1);
    v7 = *(void **)(a1 + 8);
    if ( v7 )
      operator delete[](v7);
    v8 = a2[6];
    *(_DWORD *)(a1 + 16) = a2[4];
    v9 = (int)a2[5];
    *(_DWORD *)(a1 + 24) = v8;
    *(_DWORD *)(a1 + 20) = v9;
    if ( !(_DWORD)v9 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      return a1;
    }
    if ( v9 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v10 = operator new[](8 * v9);
      v11 = *(_DWORD *)(a1 + 20);
      *(_QWORD *)a1 = v10;
      v36 = v11;
      if ( v11 > 0 )
      {
        v12 = (_QWORD *)v10;
        v13 = (unsigned __int64 *)(*(_QWORD *)a2 + 8LL);
        v14 = **(_QWORD **)a2;
        v35 = &v13[v11 - 1];
        if ( !v14 )
          goto LABEL_41;
LABEL_13:
        v15 = strlen((const char *)v14);
        v16 = malloc(v15 + 1);
        if ( v15 && (_BYTE *)v14 != v16 )
        {
          v17 = v15 >> 3;
          if ( v15 >> 3 <= 0 )
          {
            v25 = v16;
          }
          else
          {
            if ( ((unsigned __int64)v16 >= v14 + 16 || v14 >= (unsigned __int64)(v16 + 16)) && v17 > 1 )
            {
              v18 = 0;
              v19 = 0;
              do
              {
                ++v19;
                *(__m128i *)&v16[v18] = _mm_loadu_si128((const __m128i *)(v14 + v18));
                v18 += 16;
              }
              while ( v19 < v17 >> 1 );
              v20 = 8LL * (v17 & 0xFFFFFFFE);
              v21 = (_BYTE *)(v14 + v20);
              v22 = &v16[v20];
              if ( v17 != (v17 & 0xFFFFFFFE) )
              {
                *v22 = *v21;
                v22[1] = v21[1];
                v22[2] = v21[2];
                v22[3] = v21[3];
                v22[4] = v21[4];
                v22[5] = v21[5];
                v22[6] = v21[6];
                v22[7] = v21[7];
              }
              v23 = v17 - 1;
            }
            else
            {
              v23 = v17 - 1;
              v32 = v16;
              v33 = (char *)v14;
              do
              {
                v34 = *v33;
                v33 += 8;
                v32 += 8;
                *(v32 - 8) = v34;
                *(v32 - 7) = *(v33 - 7);
                *(v32 - 6) = *(v33 - 6);
                *(v32 - 5) = *(v33 - 5);
                *(v32 - 4) = *(v33 - 4);
                *(v32 - 3) = *(v33 - 3);
                *(v32 - 2) = *(v33 - 2);
                *(v32 - 1) = *(v33 - 1);
              }
              while ( (char *)(v14 + 8LL * v23 + 8) != v33 );
            }
            v24 = 8LL * (int)v23 + 8;
            v14 += v24;
            v25 = &v16[v24];
          }
          switch ( v15 % 8 )
          {
            case 1:
              goto LABEL_37;
            case 2:
              goto LABEL_36;
            case 3:
              goto LABEL_35;
            case 4:
              goto LABEL_34;
            case 5:
              goto LABEL_33;
            case 6:
              goto LABEL_32;
            case 7:
              v25[6] = *(_BYTE *)(v14 + 6);
LABEL_32:
              v25[5] = *(_BYTE *)(v14 + 5);
LABEL_33:
              v25[4] = *(_BYTE *)(v14 + 4);
LABEL_34:
              v25[3] = *(_BYTE *)(v14 + 3);
LABEL_35:
              v25[2] = *(_BYTE *)(v14 + 2);
LABEL_36:
              v25[1] = *(_BYTE *)(v14 + 1);
LABEL_37:
              *v25 = *(_BYTE *)v14;
              break;
            default:
              break;
          }
        }
        v16[v15] = 0;
        while ( 1 )
        {
          *v12++ = v16;
          v31 = v13;
          if ( v13 == v35 )
            break;
          v14 = *v13++;
          if ( *v31 )
            goto LABEL_13;
LABEL_41:
          v16 = nullptr;
        }
      }
      v26 = *((const void **)a2 + 1);
      v27 = 4 * v36;
      if ( !v26 )
      {
        v29 = nullptr;
        goto LABEL_28;
      }
      if ( (unsigned __int64)v27 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v28 = (void *)operator new[](8LL * v27);
        v29 = memcpy(v28, v26, 8LL * v27);
LABEL_28:
        *(_QWORD *)(a1 + 8) = v29;
        return a1;
      }
    }
    __cxa_throw_bad_array_new_length();
  }
  return a1;
}

