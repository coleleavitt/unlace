__int64 __fastcall sub_CDC10(int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *v7; // rdi
  __int64 result; // rax
  int v9; // edx

  v7 = qword_2515B0;
  if ( !qword_2515B0 )
    return 0;
  if ( !dbg || (result = 0, (*(_BYTE *)(dbg + 34LL) & 0x20) == 0) )
  {
    *((_DWORD *)qword_2515B0 + 1) = a2;
    v7[2] = a3;
    *((_QWORD *)v7 + 2) = a4;
    v7[6] = a5;
    *((_QWORD *)v7 + 4) = a6;
    result = sub_CC780((__int64)v7, 27);
    v9 = -1;
    if ( (_DWORD)result == 1 )
      v9 = *(_DWORD *)qword_2515B0;
    *a1 = v9;
  }
  return result;
}

