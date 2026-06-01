_QWORD *__fastcall sub_17134B0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __m128i a5, double a6)
{
  size_t v8; // rax
  size_t v10; // rdx
  char *v11; // r12
  size_t v12; // rbp
  char v13; // [rsp+3h] [rbp-55h] BYREF
  unsigned __int64 v14; // [rsp+4h] [rbp-54h]
  unsigned int v15; // [rsp+Ch] [rbp-4Ch]
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF

  LOBYTE(v15) = 1;
  v14 = sub_B74790(a2);
  if ( !(_DWORD)v14 || !HIDWORD(v14) )
  {
    v13 = 1;
LABEL_4:
    *a1 = a1 + 2;
    v8 = j__strlen(&byte_22F0C30);
    sub_1700210(a1, &byte_22F0C30, (__int64)(&byte_22F0C30 + v8));
    return a1;
  }
  v13 = 0;
  v11 = (char *)sub_13DD220(v14, v15, a3, a4, &v13, a5, a6);
  v12 = v10;
  if ( v13 || !v10 )
    goto LABEL_4;
  if ( j__strlen("=") == v10 )
  {
    if ( !memcmp(v11, "=", v12) )
      goto LABEL_4;
  }
  else if ( !v11 )
  {
    v18[0] = 0;
    v16 = v18;
    v17 = 0;
LABEL_17:
    std::__throw_out_of_range_fmt("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", 0, 0);
  }
  v16 = v18;
  sub_1700210(&v16, v11, (__int64)&v11[v12]);
  if ( !v17 )
    goto LABEL_17;
  if ( *(_BYTE *)v16 == 61 )
    sub_C05100((__int64)a1, " ", (__int64)&v16);
  else
    sub_C05100((__int64)a1, " = ", (__int64)&v16);
  if ( v16 != v18 )
    operator delete(v16);
  return a1;
}
