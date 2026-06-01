char *__fastcall sub_966B80(char *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  char *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  char *result; // rax

  v4 = (a2 - a1) >> 6;
  v5 = (a2 - a1) >> 4;
  if ( v4 <= 0 )
  {
LABEL_13:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return a2;
LABEL_28:
        result = a2;
        if ( *(_QWORD *)a1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112) + 48LL * *(unsigned int *)(*(_QWORD *)a1 + 48LL))
                         + 16LL * (unsigned int)a4) == HIDWORD(a4) )
            return a1;
        }
        return result;
      }
      if ( *(_QWORD *)a1 )
      {
        result = a1;
        if ( HIDWORD(a4) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112)
                                                  + 48LL * *(unsigned int *)(*(_QWORD *)a1 + 48LL))
                                      + 16LL * (unsigned int)a4) )
          return result;
      }
      a1 += 16;
    }
    if ( *(_QWORD *)a1 )
    {
      result = a1;
      if ( HIDWORD(a4) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112) + 48LL * *(unsigned int *)(*(_QWORD *)a1 + 48LL))
                                    + 16LL * (unsigned int)a4) )
        return result;
    }
    a1 += 16;
    goto LABEL_28;
  }
  v6 = &a1[64 * v4];
  while ( 1 )
  {
    if ( *(_QWORD *)a1
      && HIDWORD(a4) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112) + 48LL * *(unsigned int *)(*(_QWORD *)a1 + 48LL))
                                  + 16LL * (unsigned int)a4) )
    {
      return a1;
    }
    v7 = *((_QWORD *)a1 + 2);
    if ( v7
      && HIDWORD(a4) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112) + 48LL * *(unsigned int *)(v7 + 48))
                                  + 16LL * (unsigned int)a4) )
    {
      return a1 + 16;
    }
    v8 = *((_QWORD *)a1 + 4);
    if ( v8
      && HIDWORD(a4) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112) + 48LL * *(unsigned int *)(v8 + 48))
                                  + 16LL * (unsigned int)a4) )
    {
      return a1 + 32;
    }
    v9 = *((_QWORD *)a1 + 6);
    if ( v9 )
    {
      if ( HIDWORD(a4) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 112) + 48LL * *(unsigned int *)(v9 + 48))
                                    + 16LL * (unsigned int)a4) )
        return a1 + 48;
    }
    a1 += 64;
    if ( v6 == a1 )
    {
      v5 = (a2 - a1) >> 4;
      goto LABEL_13;
    }
  }
}

