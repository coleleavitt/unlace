/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000124C8
// Address: 0x00000001000124C8

//----- (00000001000124C8) ----------------------------------------------------
bool __fastcall sub_1000124C8(_QWORD **a1, __int64 a2, off_t a3, char *a4, __int64 a5, __int64 a6, char a7)
{
  char *v9; // x19
  off_t v10; // x25
  char *v13; // x26
  char *v14; // x9
  _QWORD *v15; // x8
  char *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  unsigned __int64 v25; // x24
  size_t v26; // x21
  size_t v27; // x0
  __int64 v28; // x19
  const char *v29; // [xsp+18h] [xbp-58h]
  char v30; // [xsp+27h] [xbp-49h] BYREF

  if ( !a4 )
    return 1;
  v9 = a4;
  v10 = a3;
  if ( a3 != -1 )
  {
    qlseek(a2, a3, 0);
    if ( a5 != -1 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v10 = qlseek(a2, 0, 1);
  if ( a5 == -1 )
LABEL_4:
    a5 = qlsize(a2);
LABEL_5:
  v13 = nullptr;
  if ( v10 < 0 || a5 - v10 < 0 || (v13 = (char *)(a5 - v10), a5 - v10 < (unsigned __int64)v9) )
  {
    v29 = ". Do you want to continue with the new value?";
    v9 = v13;
    if ( (unsigned int)sub_10001BF64() != 1 )
      sub_10001BFD4(0);
  }
  v14 = (char *)a1[1];
  if ( v14 >= v9 )
  {
    if ( v14 != v9 )
    {
      v30 = 0;
      sub_10001B764(a1, (unsigned __int64)v9, &v30);
    }
  }
  else
  {
    v15 = *a1;
    if ( a1[2] < (_QWORD *)v9 )
    {
      v15 = qvector_reserve(a1, *a1, (unsigned __int64)v9, 1u);
      *a1 = v15;
      v14 = (char *)a1[1];
    }
    bzero(&v14[(_QWORD)v15], v9 - v14);
    a1[1] = v9;
  }
  v17 = (char *)*a1;
  if ( (a7 & 1) == 0 )
    return qlread(a2, v17, (size_t)v9) == (_QWORD)v9;
  sub_10001C180();
  v25 = 0;
  while ( 1 )
  {
    v26 = (size_t)&v9[-v25];
    if ( (unsigned __int64)v9 <= v25 || (callui(27) & 1) != 0 )
      break;
    if ( v26 >= 0x8000 )
      v26 = 0x8000;
    v27 = qlread(a2, v17, v26);
    v17 += v26;
    v25 += v26;
    if ( v27 != v26 )
    {
      v28 = 0;
      goto LABEL_28;
    }
  }
  v28 = 1;
LABEL_28:
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char *, va_list, va_list, __int64))callui)(
    24,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    (char *)0xA,
    nullptr,
    (va_list)&callui,
    (__int64)v29);
  return v28;
}
// 1000126BC: variable 'v18' is possibly undefined
// 1000126BC: variable 'v19' is possibly undefined
// 1000126BC: variable 'v20' is possibly undefined
// 1000126BC: variable 'v21' is possibly undefined
// 1000126BC: variable 'v22' is possibly undefined
// 1000126BC: variable 'v23' is possibly undefined
// 1000126BC: variable 'v24' is possibly undefined
// 1000126BC: variable 'v29' is possibly undefined
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
