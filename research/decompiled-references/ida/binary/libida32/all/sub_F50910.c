void __fastcall sub_F50910(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const __m128i *a4,
        const void ***a5,
        __int64 a6)
{
  bool v9; // zf
  unsigned __int8 v10; // cl
  size_t v11; // r15
  void *v12; // rdi
  size_t v13; // rax
  unsigned int v14; // [rsp+4h] [rbp-104h]
  unsigned int v15; // [rsp+4h] [rbp-104h]
  const void *src; // [rsp+8h] [rbp-100h]
  __m128i v17; // [rsp+10h] [rbp-F8h] BYREF
  int v18; // [rsp+20h] [rbp-E8h]
  __int16 v19; // [rsp+24h] [rbp-E4h]
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  _BYTE v22[192]; // [rsp+48h] [rbp-C0h] BYREF

  v9 = *((_BYTE *)a5 + 33) == 1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v22;
  if ( v9 && (v10 = *((_BYTE *)a5 + 32), v10 <= 6u) && ((1LL << v10) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a5 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v11 = (size_t)a5[1];
        src = *a5;
        break;
      case 1:
        src = nullptr;
        v11 = 0;
        break;
      case 3:
        v11 = 0;
        src = *a5;
        if ( *a5 )
        {
          v15 = a6;
          v13 = j__strlen((const char *)*a5);
          a6 = v15;
          v11 = v13;
        }
        break;
      case 4:
        v11 = (size_t)(*a5)[1];
        src = **a5;
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v14 = a6;
    sub_222FB80(a5, &ptr);
    v11 = n[0];
    a6 = v14;
    src = ptr;
  }
  v18 = a6;
  v19 = 0;
  v17 = _mm_loadu_si128(a4);
  if ( a1 )
  {
    LOBYTE(v19) = v11 == 0;
    sub_F4E2A0(&v17, a1, a2, a3, (__int64)a5, a6);
    v12 = *(void **)(a3 + 32);
    if ( *(_QWORD *)(a3 + 24) - (_QWORD)v12 < v11 )
    {
      sub_22581D0(a3, src, v11);
    }
    else if ( v11 )
    {
      memcpy(v12, src, v11);
      *(_QWORD *)(a3 + 32) += v11;
    }
    sub_F521E0(&v17, a1, a3);
  }
  else
  {
    sub_971800(a3, "NULL TYPE");
  }
  if ( ptr != v22 )
    free(ptr);
}

