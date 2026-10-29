__int64 __fastcall sub_8ABED0(__int64 a1, __int64 *a2)
{
  char **p_nptr; // rsi
  char *v6; // rdi
  int v7; // eax
  char *nptr; // [rsp+0h] [rbp-1048h] BYREF
  __int128 v9; // [rsp+8h] [rbp-1040h]
  char dest[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_8340A0(dest, 0x1000u);
  if ( (unsigned __int8)qdirname(dest)
    && !(*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, dest) )
  {
    if ( !under_debugger )
      interr(3190);
LABEL_16:
    BUG();
  }
  p_nptr = &nptr;
  nptr = nullptr;
  v9 = 0;
  if ( (unsigned __int8)qgetenv("LICMGR_POLL_INTERVAL_SECS") )
  {
    v6 = (char *)haystack;
    if ( (_QWORD)v9 )
      v6 = nptr;
    p_nptr = nullptr;
    v7 = strtol(v6, nullptr, 10);
    *(_DWORD *)(a1 + 496) = v7;
    if ( (unsigned int)(v7 - 1) > 0x76 )
    {
      if ( !under_debugger )
        interr(3149);
      goto LABEL_16;
    }
  }
  if ( !a2 )
    a2 = &qword_2CD7290;
  *(_QWORD *)(a1 + 32) = a2;
  j_j__qgethostname(a1 + 512, p_nptr);
  qatexit(sub_8B0DB0);
  if ( nptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(nptr);
  }
  return 1;
}
