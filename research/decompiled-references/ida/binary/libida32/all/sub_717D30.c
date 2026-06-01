__int64 __fastcall sub_717D30(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 result; // rax
  int v11; // eax
  int v12; // r9d
  char v13; // [rsp+0h] [rbp-28h]

  if ( a3 > 0x2A )
  {
    v9 = "unknown error";
LABEL_4:
    qstrncpy(a1, v9, a2);
    return a1;
  }
  else
  {
    v7 = (int)a3;
    v8 = a3 - 26;
    v9 = off_2B0E620[v7];
    switch ( (int)v8 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 16:
        if ( a4 > 0 )
        {
          *__errno_location() = a4;
          set_qerrno(1, v9);
          set_qerrno(1, v9);
        }
        v11 = qstrerror(0xFFFFFFFFLL, v9, v8, a4);
        qsnprintf(a1, a2, (int)"%s: %s", (int)v9, v11, v12, (char)v9);
        result = a1;
        break;
      case 8:
        qsnprintf(a1, a2, (int)"allocating %llu bytes: %s", a4, (int)v9, a6, v13);
        result = a1;
        break;
      case 9:
      case 13:
        qsnprintf(a1, a2, (int)"%s (page number: %lld)", (int)v9, a4, a6, v13);
        result = a1;
        break;
      case 12:
      case 15:
        qsnprintf(a1, a2, (int)"%s (%llu bytes)", (int)v9, a4, a6, v13);
        result = a1;
        break;
      default:
        goto LABEL_4;
    }
  }
  return result;
}

