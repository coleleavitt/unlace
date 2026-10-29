unsigned __int64 __fastcall sub_9DA50(char a1, double a2, double a3)
{
  const char *v3; // rsi
  void *v4; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v3 = "None";
  v6 = __readfsqword(0x28u);
  v4 = &unk_251D80;
  if ( a1 )
    v4 = &unk_251F20;
  if ( *((_QWORD *)v4 + 39) )
  {
    v3 = *((const char **)v4 + 38);
    if ( !v3 || !*v3 )
      v3 = "None";
  }
  sub_8F810(
    (__int64)"BUTTON YES NONE\n"
             "BUTTON NO NONE\n"
             "BUTTON CANCEL Ok\n"
             "Trace information\n"
             "Trace description:  | %A\n"
             "Path on disk:       | %A\n"
             "Number of elements: | %u\n",
    a2,
    a3,
    (_DWORD)v3);
  return v6 - __readfsqword(0x28u);
}

