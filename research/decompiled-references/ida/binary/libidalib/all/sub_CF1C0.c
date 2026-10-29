__int64 __fastcall sub_CF1C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v7; // rdi
  __int64 result; // rax

  v7 = qword_252758;
  if ( !qword_252758 )
    return 0;
  if ( !dbg || (result = 0, (*(_BYTE *)(dbg + 34LL) & 0x20) == 0) )
  {
    *((_QWORD *)qword_252758 + 1) = a2;
    v7[2] = a3;
    v7[3] = a4;
    *((_DWORD *)v7 + 8) = a5;
    v7[5] = a6;
    result = sub_CDCF0((__int64)v7, 27);
    if ( (_DWORD)result == 1 )
      *a1 = *(_QWORD *)qword_252758;
    else
      *a1 = -1;
  }
  return result;
}

