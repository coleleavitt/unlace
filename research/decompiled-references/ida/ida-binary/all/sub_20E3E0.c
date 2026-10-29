__int64 __fastcall sub_20E3E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  const char *v4; // r8
  const char *v5; // rcx
  const char *v6; // rcx

  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 0:
    case 5:
    case 6:
      return 0;
    case 1:
      qstrncpy(a2, "Process start", a3);
      goto LABEL_3;
    case 2:
      qstrncpy(a2, "Process exit", a3);
      goto LABEL_3;
    case 3:
      if ( *(_QWORD *)(a1 + 32) <= 1u )
        qstrncpy(a2, "Thread start", a3);
      else
        qsnprintf(a2, a3, "Thread start: %s", *(const char **)(a1 + 24));
      goto LABEL_3;
    case 4:
      qstrncpy(a2, "Thread exit", a3);
      goto LABEL_3;
    case 7:
      v4 = &s1;
      if ( *(_QWORD *)(a1 + 48) )
        v4 = *(const char **)(a1 + 40);
      qsnprintf(a2, a3, "Exception %d occurred: %s", *(_DWORD *)(a1 + 24), v4);
      goto LABEL_3;
    case 8:
      v5 = &s1;
      if ( *(_QWORD *)(a1 + 32) )
        v5 = *(const char **)(a1 + 24);
      qsnprintf(a2, a3, "Library load: %s", v5);
      goto LABEL_3;
    case 9:
      v6 = &s1;
      if ( *(_QWORD *)(a1 + 32) )
        v6 = *(const char **)(a1 + 24);
      qsnprintf(a2, a3, "Library unload: %s", v6);
      goto LABEL_3;
    case 0xA:
      qstrncpy(a2, "Information", a3);
LABEL_3:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
