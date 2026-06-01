_QWORD *__fastcall sub_26E570(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _QWORD *result; // rax
  unsigned __int64 v6; // rdi

  result = (_QWORD *)a1;
  if ( *(int *)a5 >= 0 && *(int *)(a5 + 4) >= 0 && *(_QWORD *)(a5 + 16) )
  {
    v6 = *(_QWORD *)(a5 + 8);
    if ( !HIDWORD(v6) && !(a4 | a3) )
    {
      *result = 0;
      result[2] = a2;
      result[1] = (unsigned __int64)(unsigned int)(v6 + 1) << 32;
      return result;
    }
    goto LABEL_9;
  }
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a2 + 24) || a4 )
  {
LABEL_9:
    *result = -1;
    result[1] = 0;
    result[2] = 0;
    return result;
  }
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
