_DWORD *__fastcall sub_66F80(__int64 a1)
{
  __int64 v1; // r12
  _DWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  char *v7; // rdi
  char *v8; // rcx
  char *v9; // rdx

  v1 = 0;
  result = (_DWORD *)*(unsigned int *)(a1 + 376);
  if ( (int)result > 0 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 64);
      v5 = *(unsigned int *)(*(_QWORD *)(a1 + 368) + 4 * v1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
      {
        if ( !under_debugger )
          sub_37E160(52719);
        BUG();
      }
      v6 = *(_QWORD **)(*(_QWORD *)(v4 + 528) + 8 * v5);
      result = (_DWORD *)*(unsigned int *)(a1 + 72);
      v7 = (char *)v6[43];
      v8 = (char *)v6[44];
      v9 = &v7[4 * (_QWORD)v8];
      if ( v7 != v9 )
      {
        while ( (_DWORD)result != *(_DWORD *)v7 )
        {
          v7 += 4;
          if ( v9 == v7 )
            goto LABEL_9;
        }
        if ( v9 != v7 )
        {
          memmove(v7, v7 + 4, v9 - v7 - 4);
          result = (_DWORD *)v6[44];
          v8 = (char *)result - 1;
          v6[44] = (char *)result - 1;
        }
      }
LABEL_9:
      if ( !v8 )
      {
        result = (_DWORD *)v6[8];
        *result |= 0x400u;
      }
      ++v1;
    }
    while ( *(_DWORD *)(a1 + 376) > (int)v1 );
  }
  *(_QWORD *)(a1 + 376) = 0;
  return result;
}
