__int64 __fastcall sub_7CB930(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi

  v2 = *(_QWORD *)(a1 + 1720);
  if ( !v2 )
    return 0;
  v3 = *a2;
  if ( (unsigned int)v3 >= *(_DWORD *)(v2 - 4) )
    return 0;
  v4 = *(_QWORD *)(v2 + 8 * v3);
  if ( v4 )
  {
    v6 = (char *)(v4 + 88);
    if ( *(int *)(v4 + 88) >> 8 == -1 )
      return 1;
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 2400);
      v8 = (unsigned int)*v6;
      if ( v7 )
      {
        if ( (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
        {
          v9 = *(_QWORD *)(v7 + 8 * v8);
          if ( v9 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 424LL))(v9, v4) )
              break;
          }
        }
      }
      v6 = *((char **)v6 + 1);
      if ( !v6 )
        return 1;
    }
  }
  return 0;
}

