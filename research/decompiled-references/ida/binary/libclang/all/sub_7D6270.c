unsigned __int64 __fastcall sub_7D6270(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v11; // rbp
  __int64 v13; // rdx
  _BOOL8 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 result; // rax

  v11 = a6;
  if ( a6 )
    v11 = sub_AFFF00(a1, a6);
  v13 = a1[274];
  v14 = a8 != 0;
  v15 = 8 * v14 + 48;
  a1[284] += v15;
  result = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v15 + result && v13 )
  {
    a1[274] = v15 + result;
  }
  else
  {
    result = sub_7CF9B0((__int64)(a1 + 274), v15, 3);
    v14 = a8 != 0;
  }
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 24) = a5;
  *(_QWORD *)(result + 8) = (4 * v14) | a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(result + 32) = v11;
  *(_QWORD *)(result + 16) = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  *(_DWORD *)(result + 40) = a7;
  if ( a8 )
    *(_QWORD *)(result + 48) = a8;
  return result;
}

