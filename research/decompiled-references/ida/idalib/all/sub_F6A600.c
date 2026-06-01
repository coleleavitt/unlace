__int16 __fastcall sub_F6A600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 i; // rdi
  __int64 v6; // rax
  char v7; // dl
  __int16 result; // ax

  for ( i = a1 & 0xFFFFFFFFFFFFFFF0LL; ; i = *(_QWORD *)(v6 + 48) )
  {
    v6 = sub_F6A440(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
    if ( !v6 )
      break;
    a3 = *(_WORD *)(v6 + 18) >> 3;
    switch ( (_DWORD)a3 )
    {
      case '&':
        v7 = 0;
LABEL_9:
        LOBYTE(result) = v7;
        HIBYTE(result) = 1;
        return result;
      case 'Y':
        v7 = 1;
        goto LABEL_9;
      case '\'':
        v7 = 2;
        goto LABEL_9;
      case '(':
        v7 = 3;
        goto LABEL_9;
    }
  }
  return 0;
}
