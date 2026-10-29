void __fastcall sub_209E260(__int64 a1, char ***a2, int a3, __int64 a4, char a5)
{
  bool v9; // zf
  unsigned __int8 v10; // cl
  char *v11; // r13
  size_t v12; // r12
  _BYTE *v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  _BYTE *v16; // rax
  _BYTE *v17; // rdi
  size_t v18; // r12
  const void *v19; // rsi
  unsigned __int64 v20; // rdx
  char *v21; // rsi
  size_t v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-160h]
  __int64 v27; // [rsp+8h] [rbp-160h]
  void *ptr; // [rsp+10h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-150h]
  _BYTE v30[320]; // [rsp+28h] [rbp-140h] BYREF

  v9 = *((_BYTE *)a2 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v30;
  if ( v9 && (v10 = *((_BYTE *)a2 + 32), v10 <= 6u) && ((1LL << v10) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v12 = (size_t)a2[1];
        v11 = (char *)*a2;
        goto LABEL_37;
      case 1:
        v14 = 127;
        v12 = 0;
        v11 = nullptr;
        goto LABEL_5;
      case 3:
        v11 = (char *)*a2;
        if ( !*a2 )
        {
          v14 = 127;
          v12 = 0;
          goto LABEL_5;
        }
        v27 = a4;
        v22 = strlen((const char *)*a2);
        a4 = v27;
        v12 = v22;
LABEL_37:
        v13 = v30;
        break;
      case 4:
        v11 = **a2;
        v12 = (size_t)(*a2)[1];
        goto LABEL_37;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v26 = a4;
    sub_22538C0(a2, &ptr);
    v11 = (char *)ptr;
    v12 = n[0];
    a4 = v26;
    v13 = ptr;
  }
  v14 = *v11;
  if ( *v11 == 1 )
  {
    if ( v12 )
    {
      v18 = v12 - 1;
      v19 = v11 + 1;
      if ( v18 <= *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 32) )
      {
        if ( v18 )
        {
          memcpy(*(void **)(a1 + 32), v19, v18);
          *(_QWORD *)(a1 + 32) += v18;
          v13 = ptr;
        }
      }
      else
      {
        sub_227BF10(a1, v19, v18);
        v13 = ptr;
      }
    }
  }
  else
  {
LABEL_5:
    v15 = *(unsigned int *)(a4 + 24);
    if ( (unsigned int)(v15 - 3) <= 1 && v14 == 63 )
      a5 = 0;
    if ( a3 == 1 )
    {
      switch ( v15 )
      {
        case 0LL:
          goto LABEL_32;
        case 1LL:
        case 3LL:
          v20 = 2;
          v21 = ".L";
          goto LABEL_43;
        case 2LL:
        case 4LL:
          v20 = 1;
          v21 = (char *)"L";
          goto LABEL_43;
        case 5LL:
          v20 = 2;
          v21 = "L#";
          goto LABEL_43;
        case 6LL:
          v20 = 1;
          v21 = "$";
          goto LABEL_43;
        case 7LL:
          v20 = 3;
          v21 = "L..";
LABEL_43:
          v23 = *(_QWORD *)(a1 + 32);
          if ( v20 > *(_QWORD *)(a1 + 24) - v23 )
            goto LABEL_31;
          v24 = 0;
          do
          {
            v25 = v24++;
            *(_BYTE *)(v23 + v25) = v21[v25];
          }
          while ( v24 < (unsigned int)v20 );
          v16 = *(_BYTE **)(a1 + 24);
          v17 = (_BYTE *)(v20 + *(_QWORD *)(a1 + 32));
          *(_QWORD *)(a1 + 32) = v17;
          break;
        default:
          *(_QWORD *)&dword_0 = v15;
          BUG();
      }
    }
    else
    {
      v16 = *(_BYTE **)(a1 + 24);
      v17 = *(_BYTE **)(a1 + 32);
      if ( a3 == 2 && (_DWORD)v15 == 2 )
      {
        if ( v16 == v17 )
        {
          v20 = 1;
          v21 = (char *)"l";
LABEL_31:
          sub_227BF10(a1, v21, v20);
LABEL_32:
          v17 = *(_BYTE **)(a1 + 32);
          v16 = *(_BYTE **)(a1 + 24);
        }
        else
        {
          *v17 = 108;
          v17 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL);
          v16 = *(_BYTE **)(a1 + 24);
          *(_QWORD *)(a1 + 32) = v17;
        }
      }
    }
    if ( a5 )
    {
      if ( v17 >= v16 )
      {
        sub_227BA10(a1, (unsigned int)a5);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v17 + 1;
        *v17 = a5;
      }
      v16 = *(_BYTE **)(a1 + 24);
      v17 = *(_BYTE **)(a1 + 32);
    }
    if ( v12 > v16 - v17 )
    {
      sub_227BF10(a1, v11, v12);
    }
    else if ( v12 )
    {
      memcpy(v17, v11, v12);
      *(_QWORD *)(a1 + 32) += v12;
    }
    v13 = ptr;
  }
  if ( v13 != v30 )
    free(v13);
}
