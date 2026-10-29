__int64 __fastcall sub_10B6980(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 (__fastcall *v3)(__int64, const char *, size_t); // r12
  unsigned __int8 v4; // cl
  size_t v5; // rdx
  const char *v6; // rsi
  __int64 v7; // rbp
  const char *v9; // rax
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  __m128i si128; // [rsp+18h] [rbp-130h]
  _BYTE v12[288]; // [rsp+28h] [rbp-120h] BYREF

  v2 = *(_BYTE *)(a2 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  ptr = v12;
  v3 = *(__int64 (__fastcall **)(__int64, const char *, size_t))(*(_QWORD *)a1 + 16LL);
  if ( v2 && (v4 = *(_BYTE *)(a2 + 32), v4 <= 6u) && ((1LL << v4) & 0x7A) != 0 )
  {
    switch ( *(_BYTE *)(a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v5 = *(_QWORD *)(a2 + 8);
        v6 = *(const char **)a2;
        break;
      case 1:
        v5 = 0;
        v6 = nullptr;
        break;
      case 3:
        v6 = *(const char **)a2;
        v5 = 0;
        if ( v6 )
          v5 = j__strlen(v6);
        break;
      case 4:
        v9 = *(const char **)a2;
        v6 = **(const char ***)a2;
        v5 = *((_QWORD *)v9 + 1);
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_222FB80(a2, &ptr);
    v5 = si128.m128i_i64[0];
    v6 = (const char *)ptr;
  }
  v7 = v3(a1, v6, v5);
  if ( ptr != v12 )
    free(ptr);
  return v7;
}

