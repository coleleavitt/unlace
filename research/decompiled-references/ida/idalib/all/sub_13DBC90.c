__int64 __fastcall sub_13DBC90(unsigned int a1, __int64 *a2, __int64 a3, __m128i a4, double a5)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // r14
  const char *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int8 *v11; // r13
  unsigned __int8 *v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int v15; // [rsp+Ch] [rbp-12Ch]
  char v16; // [rsp+1Fh] [rbp-119h] BYREF
  _DWORD v17[4]; // [rsp+20h] [rbp-118h] BYREF
  __int16 v18; // [rsp+30h] [rbp-108h]
  _QWORD v19[8]; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr; // [rsp+80h] [rbp-B8h]
  _BYTE v21[72]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+D8h] [rbp-60h]

  v6 = sub_A80750((__int64)a2, a1);
  if ( !(_DWORD)v6 )
    return a1;
  v8 = HIDWORD(v6);
  v16 = 0;
  v9 = sub_10202B0(a2, v6, &v16);
  if ( v16 )
    return a1;
  v11 = (unsigned __int8 *)&v9[v8];
  v12 = sub_13D06F0((unsigned __int64)v9, v10, v8);
  if ( !v12 || v11 == v12 )
    return a1;
  sub_13D1080((__int64)v19, a1 - v8, a3, v13, (__int64)v12, v13 + v14, 1);
  v21[66] = 1;
  while ( 1 )
  {
    sub_13DB5F0(v19, (__int64)v17, a4, a5);
    if ( (unsigned __int64)v11 < v22 )
      break;
    if ( v18 == 1 )
      goto LABEL_14;
  }
  if ( (unsigned __int64)v11 >= v22 - v17[1] )
  {
    result = v17[0];
    goto LABEL_12;
  }
LABEL_14:
  result = a1;
LABEL_12:
  v19[0] = &off_2C449F0;
  if ( ptr != v21 )
  {
    v15 = result;
    free(ptr);
    return v15;
  }
  return result;
}
