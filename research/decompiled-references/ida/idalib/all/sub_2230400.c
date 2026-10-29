_QWORD *__fastcall sub_2230400(_QWORD *a1, size_t a2, const void ***a3, unsigned __int16 a4)
{
  char v5; // r13
  __m128i si128; // xmm0
  bool v8; // zf
  unsigned __int8 v9; // cl
  size_t v10; // r15
  const void *v11; // rsi
  size_t v12; // r8
  __int64 v13; // rbp
  size_t v14; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // r13
  size_t v18; // r8
  __int64 v19; // rbp
  size_t v20; // [rsp+8h] [rbp-160h]
  void *ptr; // [rsp+10h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-150h]
  _BYTE v23[320]; // [rsp+28h] [rbp-140h] BYREF

  v5 = 4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( HIBYTE(a4) )
    v5 = a4;
  v8 = *((_BYTE *)a3 + 33) == 1;
  *(__m128i *)n = si128;
  ptr = v23;
  if ( v8 && (v9 = *((_BYTE *)a3 + 32), v9 <= 6u) && ((1LL << v9) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a3 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v10 = (size_t)a3[1];
        v11 = *a3;
        v12 = v10 + 33;
        break;
      case 1:
        v12 = 33;
        v10 = 0;
        v11 = nullptr;
        break;
      case 3:
        v11 = *a3;
        if ( *a3 )
        {
          v11 = *a3;
          v10 = strlen((const char *)*a3);
          v12 = v10 + 33;
        }
        else
        {
          v12 = 33;
          v10 = 0;
        }
        break;
      case 4:
        v10 = (size_t)(*a3)[1];
        v11 = **a3;
        v12 = v10 + 33;
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    sub_22538C0(a3, &ptr);
    v10 = n[0];
    v11 = ptr;
    v12 = n[0] + 33;
  }
  v13 = 1LL << v5;
  v14 = v12 + (1LL << v5) + a2 + 1;
  if ( a2 < v14 && (v20 = v12, v16 = malloc(v14), (v17 = v16) != nullptr) )
  {
    v16[3] = v10;
    v18 = v20;
    if ( v10 )
    {
      memcpy(v16 + 4, v11, v10);
      v18 = v20;
    }
    *((_BYTE *)v17 + v10 + 32) = 0;
    v19 = ((unsigned __int64)v17 + v18 + v13 - 1) & -v13;
    *(_BYTE *)(v19 + a2) = 0;
    *v17 = &off_2BEB168;
    v17[1] = v19;
    v17[2] = v19 + a2;
    *a1 = v17;
  }
  else
  {
    *a1 = 0;
  }
  if ( ptr != v23 )
    free(ptr);
  return a1;
}
