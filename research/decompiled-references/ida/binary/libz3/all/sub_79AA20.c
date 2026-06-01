__int64 __fastcall sub_79AA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(); // rax
  __int64 result; // rax

  if ( *(int *)(a2 + 88) >> 8 == -1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 2400);
  v6 = (char *)(a2 + 88);
  do
  {
    v7 = (unsigned int)*v6;
    if ( !v5 )
      break;
    while ( (unsigned int)v7 < *(_DWORD *)(v5 - 4) )
    {
      v8 = *(_QWORD *)(v5 + 8 * v7);
      if ( v8 )
      {
        v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 456LL);
        if ( v9 != sub_79EFC0 )
        {
          result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v9)(v8, a2, a3);
          if ( (_BYTE)result )
            return result;
        }
      }
      v6 = *((char **)v6 + 1);
      if ( v6 )
      {
        v5 = *(_QWORD *)(a1 + 2400);
        v7 = (unsigned int)*v6;
        if ( v5 )
          continue;
      }
      return 0;
    }
    v6 = *((char **)v6 + 1);
  }
  while ( v6 );
  return 0;
}

