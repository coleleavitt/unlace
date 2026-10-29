__int64 __fastcall sub_B61B50(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int *v3; // rsi
  int v4; // eax

  result = a2 & 7;
  if ( (_DWORD)result == 7 )
  {
    v3 = (int *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    v4 = 3;
    if ( (unsigned int)*v3 <= 3 )
      v4 = *v3;
    result = (unsigned int)(v4 + 8);
  }
  if ( (_DWORD)result == 6 )
  {
LABEL_8:
    *a1 = 0;
    return result;
  }
  if ( (unsigned int)result <= 6 )
  {
    if ( (unsigned int)result < 3 )
      return result;
    goto LABEL_8;
  }
  if ( (_DWORD)result == 9 )
    *(_DWORD *)a1 = 0;
  return result;
}

