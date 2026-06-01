__int64 __fastcall sub_5FB5D0(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  int v4; // edi
  unsigned __int8 v5; // r14
  unsigned __int8 *v7; // rbx
  unsigned int v8; // r13d
  __int64 result; // rax
  int v10; // r15d

  v4 = *a2;
  v5 = *a1;
  if ( !(_BYTE)v4 )
    return v5 == 0;
  v7 = a2 + 1;
  v8 = a3;
  while ( (_BYTE)v4 != 42 )
  {
    if ( (_BYTE)v4 == 63 )
    {
      if ( !v5 )
        return 0;
    }
    else if ( a3 )
    {
      if ( v5 != (_BYTE)v4 )
        return 0;
    }
    else
    {
      v10 = toupper(v4);
      if ( toupper(v5) != v10 )
        return 0;
    }
    v5 = *++a1;
LABEL_7:
    v4 = *v7++;
    if ( !(_BYTE)v4 )
      return v5 == 0;
  }
  if ( !v5 )
    goto LABEL_7;
  while ( 1 )
  {
    result = sub_5FB5D0(a1, v7, v8);
    if ( (_DWORD)result )
      return result;
    v5 = *++a1;
    if ( !v5 )
      goto LABEL_7;
  }
}
