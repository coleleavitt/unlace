__int64 __fastcall sub_898EE0(__int64 a1, __int64 a2)
{
  __int64 v5; // rsi
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rax
  _QWORD *v11; // rdi
  __int64 *v12; // rdx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 409616);
  v6 = a2 >> *(_DWORD *)(a1 + 8);
  do
  {
    v7 = *(_DWORD *)(v5 + 24);
    if ( v7 != -1 && v7 >= v6 )
    {
      if ( *(_BYTE *)(v5 + 29) )
      {
        if ( !under_debugger )
          interr(1192);
        BUG();
      }
      v8 = v7 % 0xC7FF;
      v9 = (unsigned int)(v8 + 3);
      v10 = *(__int64 **)(a1 + 8 * v8 + 24);
      v11 = (_QWORD *)(a1 + 8 * v9);
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = (__int64 *)*v10;
          if ( v7 == *((_DWORD *)v10 + 6) )
            break;
          v11 = v10;
          if ( !v12 )
            goto LABEL_11;
          v10 = (__int64 *)*v10;
        }
        *v11 = v12;
        *v10 = 0;
      }
LABEL_11:
      *(_DWORD *)(v5 + 24) = -1;
      *(_BYTE *)(v5 + 28) = 0;
    }
    v5 = *(_QWORD *)(v5 + 16);
  }
  while ( *(_QWORD *)(a1 + 409616) != v5 );
  result = qchsize(*(unsigned int *)(a1 + 16), a2);
  if ( (_DWORD)result )
  {
    if ( a2 - qfilelength(*(unsigned int *)(a1 + 16)) < 0 )
      off_2C581C0(a1, "truncating file", 0);
    off_2C581B8(a1);
  }
  return result;
}

