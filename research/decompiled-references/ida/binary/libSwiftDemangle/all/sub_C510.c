unsigned __int64 __fastcall sub_C510(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // rax

  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = result;
  if ( !result || (v7 = result + 24, result + 24 > a1[2]) )
  {
    v8 = 2LL * a1[4];
    if ( v8 < 0x20 )
      v8 = 32;
    a1[4] = v8;
    v9 = v8 + 8;
    v10 = malloc(v8 + 8);
    v11 = a1[3];
    a1[3] = v10;
    *v10 = v11;
    result = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v10 + v9;
    v7 = result + 24;
  }
  a1[1] = v7;
  *(_WORD *)(result + 16) = a2;
  *(_BYTE *)(result + 18) = 1;
  *(_QWORD *)result = a3;
  *(_QWORD *)(result + 8) = a4;
  return result;
}

