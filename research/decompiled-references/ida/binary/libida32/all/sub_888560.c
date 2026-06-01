__int64 __fastcall sub_888560(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbp
  int v4; // eax
  char dest[4104]; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v6; // [rsp+1028h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = a2;
  sub_810CE0(dest, 0x1000u);
  if ( (unsigned __int8)qdirname(dest)
    && !(*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, dest) )
  {
    if ( !under_debugger )
      interr(3190);
LABEL_12:
    BUG();
  }
  if ( (unsigned __int8)qgetenv("LICMGR_POLL_INTERVAL_SECS") )
  {
    v4 = strtol(haystack, nullptr, 10);
    *(_DWORD *)(a1 + 496) = v4;
    if ( (unsigned int)(v4 - 1) > 0x76 )
    {
      if ( !under_debugger )
        interr(3149);
      goto LABEL_12;
    }
  }
  if ( !a2 )
    v2 = &qword_2CAD370;
  *(_QWORD *)(a1 + 32) = v2;
  j_j__qgethostname(a1 + 512);
  qatexit(sub_88D430);
  return 1;
}

