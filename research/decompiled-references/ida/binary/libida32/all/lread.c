unsigned __int64 __fastcall lread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _BYTE *v7; // r15
  int *v8; // rax
  int *v9; // r14
  __int64 v10; // rbx
  unsigned __int64 result; // rax

  v7 = *(_BYTE **)(qword_2CA1698 + 1504);
  sub_626610(v7, a2, a3, a4, a5, a6);
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = qlread(a1, a2, a3);
  if ( v10 != a3 || (result = (unsigned int)*v9, (_DWORD)result) )
  {
    if ( !v7[11] )
    {
      qlseek(a1, 0, 1);
      sub_375500();
    }
    v7[11] = 1;
    if ( v10 < 0 )
      v10 = 0;
    return (unsigned __int64)memset((void *)(a2 + v10), 0, a3 - v10);
  }
  return result;
}

