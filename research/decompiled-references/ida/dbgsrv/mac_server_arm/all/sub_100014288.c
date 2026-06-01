/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014288
// Address: 0x0000000100014288

//----- (0000000100014288) ----------------------------------------------------
bool __fastcall sub_100014288(__int64 a1, __int64 a2, off_t a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v9; // x20
  off_t v10; // x25
  unsigned __int64 v13; // x26
  unsigned __int64 v14; // x8
  _QWORD *v15; // x1
  _QWORD *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  unsigned __int64 v25; // x24
  __int64 v26; // x27
  size_t v27; // x0
  __int64 v28; // x19
  const char *v29; // [xsp+18h] [xbp-78h]
  __int64 v30; // [xsp+28h] [xbp-68h] BYREF
  int v31; // [xsp+30h] [xbp-60h]

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
  if ( (v10 & 0x8000000000000000LL) == 0 && ((a5 - v10) & 0x8000000000000000LL) == 0 )
  {
    if ( v9 <= 0x1555555555555555LL && a5 - v10 >= 12 * v9 )
      goto LABEL_11;
    v13 = (a5 - v10) / 0xCuLL;
  }
  v29 = ". Do you want to continue with the new value?";
  v9 = v13;
  if ( (unsigned int)sub_10001A44C() != 1 )
    sub_10001A4B8(0);
LABEL_11:
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 >= v9 )
  {
    if ( v14 != v9 )
    {
      v31 = 0;
      v30 = 0;
      sub_10001B0DC((_QWORD **)a1, v9, (unsigned __int64)&v30);
    }
  }
  else
  {
    v15 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v15 = qvector_reserve((_QWORD *)a1, v15, v9, 0xCu);
      *(_QWORD *)a1 = v15;
      v14 = *(_QWORD *)(a1 + 8);
    }
    bzero((char *)v15 + 12 * v14, 12 * (v9 - v14));
    *(_QWORD *)(a1 + 8) = v9;
  }
  if ( (a7 & 1) == 0 )
    return qlread(a2, *(void **)a1, 12 * v9) == 12 * v9;
  v17 = *(_QWORD **)a1;
  sub_10001A65C();
  v25 = 0;
  while ( v9 > v25 && (callui(27) & 1) == 0 )
  {
    if ( v9 - v25 >= 0xAAA )
      v26 = 2730;
    else
      v26 = v9 - v25;
    v27 = qlread(a2, v17, 12 * v26);
    v17 = (_QWORD *)((char *)v17 + 12 * v26);
    v25 += v26;
    if ( v27 != 12 * v26 )
    {
      v28 = 0;
      goto LABEL_31;
    }
  }
  v28 = 1;
LABEL_31:
  ((void (__fastcall *)(int, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char *, va_list, va_list, __int64))callui)(
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
// 1000144C0: variable 'v18' is possibly undefined
// 1000144C0: variable 'v19' is possibly undefined
// 1000144C0: variable 'v20' is possibly undefined
// 1000144C0: variable 'v21' is possibly undefined
// 1000144C0: variable 'v22' is possibly undefined
// 1000144C0: variable 'v23' is possibly undefined
// 1000144C0: variable 'v24' is possibly undefined
// 1000144C0: variable 'v29' is possibly undefined
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
