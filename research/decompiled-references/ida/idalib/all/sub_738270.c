__int64 __fastcall sub_738270(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  const char *v7; // rsi
  __int64 result; // rax
  int v9; // eax
  int v10; // r9d

  if ( a3 > 0x2A )
  {
    v7 = "unknown error";
LABEL_4:
    qstrncpy(a1, v7, a2);
    return a1;
  }
  else
  {
    v7 = off_2B385C0[a3];
    switch ( a3 )
    {
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x2Au:
        if ( a4 > 0 )
        {
          *__errno_location() = a4;
          set_qerrno(1);
          set_qerrno(1);
        }
        v9 = qstrerror(0xFFFFFFFFLL);
        qsnprintf(a1, a2, (unsigned int)"%s: %s", (_DWORD)v7, v9, v10);
        result = a1;
        break;
      case 0x22u:
        qsnprintf(a1, a2, (unsigned int)"allocating %llu bytes: %s", a4, (_DWORD)v7, a6);
        result = a1;
        break;
      case 0x23u:
      case 0x27u:
        qsnprintf(a1, a2, (unsigned int)"%s (page number: %lld)", (_DWORD)v7, a4, a6);
        result = a1;
        break;
      case 0x26u:
      case 0x29u:
        qsnprintf(a1, a2, (unsigned int)"%s (%llu bytes)", (_DWORD)v7, a4, a6);
        result = a1;
        break;
      default:
        goto LABEL_4;
    }
  }
  return result;
}
