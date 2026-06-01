__int64 __fastcall sub_78F220(_BYTE *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rax
  __int64 v5; // rdi
  int v6; // edi
  int v7; // ecx

  if ( !a2 )
    return -1;
  v4 = a1;
  if ( a3 == -1 )
  {
    a3 = *(unsigned __int16 *)a2;
    a2 += 2;
  }
  if ( a1 )
  {
    if ( a4 < 0 )
    {
      if ( !under_debugger )
        interr(1225);
      BUG();
    }
    v5 = 0;
    if ( !a4 )
      return v5;
    if ( a3 < (unsigned __int64)a4 )
    {
      if ( a3 )
      {
LABEL_9:
        v6 = 1 - (_DWORD)a2;
        do
        {
          *v4++ = *a2;
          v7 = v6 + (_DWORD)a2++;
        }
        while ( v7 < a3 );
        v5 = a3 - 1;
        if ( !*(v4 - 1) )
          return v5;
        v5 = a3;
      }
    }
    else
    {
      a3 = a4 - 1;
      if ( a4 != 1 )
        goto LABEL_9;
    }
    *v4 = 0;
    return v5;
  }
  return a3;
}

