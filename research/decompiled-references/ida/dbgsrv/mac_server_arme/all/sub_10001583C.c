/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001583C
// Address: 0x000000010001583C

//----- (000000010001583C) ----------------------------------------------------
bool __fastcall sub_10001583C(__int64 a1, __int64 a2, off_t a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v9; // x20
  off_t v10; // x25
  unsigned __int64 v13; // x26
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x8
  _QWORD *v16; // x1
  _QWORD *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  unsigned __int64 v26; // x24
  __int64 v27; // x26
  size_t v28; // x0
  __int64 v29; // x19
  const char *v30; // [xsp+18h] [xbp-68h]
  __int128 v31; // [xsp+28h] [xbp-58h] BYREF

  if ( !a4 )
    return 1;
  v9 = a4;
  v10 = a3;
  if ( a3 == -1 )
  {
    v10 = qlseek(a2, 0, 1);
    if ( a5 != -1 )
      goto LABEL_5;
    goto LABEL_4;
  }
  qlseek(a2, a3, 0);
  if ( a5 == -1 )
LABEL_4:
    a5 = qlsize(a2);
LABEL_5:
  v13 = 0;
  if ( (v10 & 0x8000000000000000LL) == 0 )
  {
    v14 = a5 - v10;
    if ( ((a5 - v10) & 0x8000000000000000LL) == 0 )
    {
      if ( !(v9 >> 60) && v14 >= 16 * v9 )
        goto LABEL_11;
      v13 = v14 >> 4;
    }
  }
  v30 = ". Do you want to continue with the new value?";
  v9 = v13;
  if ( (unsigned int)sub_10001BF64() != 1 )
    sub_10001BFD4(0);
LABEL_11:
  v15 = *(_QWORD *)(a1 + 8);
  if ( v15 >= v9 )
  {
    if ( v15 != v9 )
    {
      v31 = 0u;
      sub_10001CDA0((_QWORD **)a1, v9, &v31);
    }
  }
  else
  {
    v16 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v16 = qvector_reserve((_QWORD *)a1, v16, v9, 0x10u);
      *(_QWORD *)a1 = v16;
      v15 = *(_QWORD *)(a1 + 8);
    }
    bzero(&v16[2 * v15], 16 * (v9 - v15));
    *(_QWORD *)(a1 + 8) = v9;
  }
  if ( (a7 & 1) == 0 )
    return qlread(a2, *(void **)a1, 16 * v9) == 16 * v9;
  v18 = *(_QWORD **)a1;
  sub_10001C180();
  v26 = 0;
  while ( v9 > v26 && (callui(27) & 1) == 0 )
  {
    if ( v9 - v26 >= 0x800 )
      v27 = 2048;
    else
      v27 = v9 - v26;
    v28 = qlread(a2, v18, 16 * v27);
    v18 += 2 * v27;
    v26 += v27;
    if ( v28 != 16 * v27 )
    {
      v29 = 0;
      goto LABEL_31;
    }
  }
  v29 = 1;
LABEL_31:
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char *, va_list, va_list, __int64))callui)(
    24,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    (char *)0xA,
    nullptr,
    (va_list)&callui,
    (__int64)v30);
  return v29;
}
// 100015A44: variable 'v19' is possibly undefined
// 100015A44: variable 'v20' is possibly undefined
// 100015A44: variable 'v21' is possibly undefined
// 100015A44: variable 'v22' is possibly undefined
// 100015A44: variable 'v23' is possibly undefined
// 100015A44: variable 'v24' is possibly undefined
// 100015A44: variable 'v25' is possibly undefined
// 100015A44: variable 'v30' is possibly undefined
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
