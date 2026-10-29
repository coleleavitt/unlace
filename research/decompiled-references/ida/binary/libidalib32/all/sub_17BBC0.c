__int64 __fastcall sub_17BBC0(__int64 *a1, unsigned int *a2, const char *a3, _QWORD *a4, _QWORD *a5)
{
  char *v8; // rax
  char *v9; // rbx
  char v10; // al
  __int64 result; // rax

  *a5 = 0;
  v8 = strchr(a3, 64);
  if ( !v8 )
    return 0;
  v9 = v8;
  while ( 1 )
  {
    if ( a3 == v9 || (v10 = *(v9 - 1), v10 == 32) || v10 == 10 )
    {
      result = sub_17BA60(a1, a2, (__int64)v9, a5);
      if ( (_BYTE)result )
        break;
    }
    v9 = strchr(v9 + 1, 64);
    if ( !v9 )
      return 0;
  }
  *a4 = v9 - a3;
  return result;
}

