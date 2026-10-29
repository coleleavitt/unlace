__int64 __fastcall sub_228B020(_QWORD **a1, unsigned int a2)
{
  unsigned int v2; // r12d
  bool v4; // zf
  unsigned __int8 v5; // cl
  const char *v6; // r14
  const char *v7; // r13
  __int128 v8; // rdi
  __int64 v9; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  const char *v16[4]; // [rsp+0h] [rbp-198h] BYREF
  __int16 v17; // [rsp+20h] [rbp-178h]
  void *ptr; // [rsp+30h] [rbp-168h] BYREF
  __m128i si128; // [rsp+38h] [rbp-160h]
  _BYTE v20[136]; // [rsp+48h] [rbp-150h] BYREF
  void *v21; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+D8h] [rbp-C0h]
  _BYTE v23[176]; // [rsp+E8h] [rbp-B0h] BYREF

  v4 = *((_BYTE *)a1 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v20;
  if ( v4 && (v5 = *((_BYTE *)a1 + 32), v5 <= 6u) && ((1LL << v5) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a1 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v6 = (const char *)a1[1];
        v7 = (const char *)*a1;
        break;
      case 1:
        v6 = nullptr;
        v7 = nullptr;
        break;
      case 3:
        v7 = (const char *)*a1;
        v6 = nullptr;
        if ( *a1 )
          v6 = (const char *)j__strlen((const char *)*a1);
        break;
      case 4:
        v7 = (const char *)**a1;
        v6 = (const char *)(*a1)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0((const char **)a1, (__int64)&ptr);
    v6 = (const char *)si128.m128i_i64[0];
    v7 = (const char *)ptr;
  }
  *(_QWORD *)&v8 = v7;
  *((_QWORD *)&v8 + 1) = v6;
  sub_2289AE0(v8, a2);
  LOBYTE(v2) = v9 != 0;
  if ( a2 > 1 )
  {
    v16[0] = v7;
    v17 = 261;
    v16[1] = v6;
    v22 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v21 = v23;
    v11 = (unsigned __int8 *)sub_116C3C0(v16, (__int64)&v21);
    v13 = sub_2289A60(v11, v12, a2);
    v15 = v14;
    if ( v21 != v23 )
      free(v21);
    LOBYTE(v13) = v15 != 0;
    v2 &= (unsigned int)v13;
  }
  if ( ptr != v20 )
    free(ptr);
  return v2;
}
