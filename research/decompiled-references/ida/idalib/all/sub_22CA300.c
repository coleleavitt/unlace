__int64 __fastcall sub_22CA300(int a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 result; // rax
  char *v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  _BYTE *v10; // rdi
  void *v11; // rax
  size_t v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-F0h] BYREF
  char *v14; // [rsp+10h] [rbp-E8h] BYREF
  __int16 v15; // [rsp+30h] [rbp-C8h]
  char v16[32]; // [rsp+40h] [rbp-B8h] BYREF
  __int16 v17; // [rsp+60h] [rbp-98h]
  char v18[32]; // [rsp+70h] [rbp-88h] BYREF
  __int16 v19; // [rsp+90h] [rbp-68h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  size_t n; // [rsp+A8h] [rbp-50h]
  _QWORD v22[2]; // [rsp+B0h] [rbp-48h] BYREF
  __int16 v23; // [rsp+C0h] [rbp-38h]

  if ( a1 <= 7 )
  {
    if ( (_DWORD)a3 == 37 )
      goto LABEL_9;
    result = 0;
    if ( (_DWORD)a3 != 38 )
      return result;
    v23 = 257;
    v19 = 257;
    v17 = 257;
    v14 = "x64";
    v15 = 259;
  }
  else
  {
    v23 = 257;
    v19 = 257;
    v17 = 257;
    switch ( a3 )
    {
      case 1LL:
      case 35LL:
        v7 = (char *)"arm";
        goto LABEL_22;
      case 3LL:
        v7 = "arm64";
        goto LABEL_22;
      case 37LL:
        HIBYTE(v15) = 1;
        v7 = "x86";
        goto LABEL_7;
      case 38LL:
        v7 = "x64";
LABEL_22:
        HIBYTE(v15) = 1;
LABEL_7:
        v14 = v7;
        LOBYTE(v15) = 3;
        break;
      default:
        v15 = 257;
        break;
    }
  }
  sub_228A3B0(a2, &v14, v16, v18, &src);
LABEL_9:
  v8 = *(_BYTE **)a2;
  v9 = *(_QWORD *)(a2 + 8);
  src = v22;
  sub_22C9310(&src, v8, (__int64)&v8[v9]);
  v10 = *a4;
  if ( src == v22 )
  {
    v12 = n;
    if ( n )
    {
      if ( n == 1 )
        *v10 = v22[0];
      else
        memcpy(v10, src, n);
      v12 = n;
      v10 = *a4;
    }
    a4[1] = (void *)v12;
    v10[v12] = 0;
    v10 = src;
    goto LABEL_13;
  }
  if ( v10 == (_BYTE *)(a4 + 2) )
  {
    v13 = v22[0];
    *a4 = src;
    *(__m128 *)(a4 + 1) = _mm_loadh_ps((const double *)&v13);
    goto LABEL_27;
  }
  v13 = v22[0];
  v11 = a4[2];
  *a4 = src;
  *(__m128 *)(a4 + 1) = _mm_loadh_ps((const double *)&v13);
  if ( !v10 )
  {
LABEL_27:
    v10 = v22;
    src = v22;
    goto LABEL_13;
  }
  src = v10;
  v22[0] = v11;
LABEL_13:
  n = 0;
  *v10 = 0;
  if ( src != v22 )
    operator delete(src);
  return 1;
}
