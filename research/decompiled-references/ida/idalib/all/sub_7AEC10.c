unsigned __int64 __fastcall sub_7AEC10(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  const char *v7; // rax
  bool v8; // di
  __int64 v10; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v7 = (const char *)sub_738270((__int64)&v10, 1024, a1, a2, a5, a6);
  v8 = a1 == 41;
  if ( a1 == 38 || a1 == 41 )
  {
    if ( qword_2CD46D8 )
    {
      qword_2CD46D8(v8, a2);
      return v11 - __readfsqword(0x28u);
    }
LABEL_8:
    sub_733E40((__int64)"\nBTREE ERROR MESSAGE: %s\n", v7);
    sub_83F230();
    qexit(1);
  }
  if ( !qword_2CD46D0 )
    goto LABEL_8;
  qword_2CD46D0(v7);
  return v11 - __readfsqword(0x28u);
}
