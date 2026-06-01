size_t __fastcall get_root_filename(char *s, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[517]; // [rsp+0h] [rbp-1028h] BYREF

  v4[513] = __readfsqword(0x28u);
  if ( sub_630CA0(qword_2CCB598, 97, v4, 4096) < 0 )
    return -1;
  v2 = qbasename(v4);
  qstrncpy(s, v2, a2);
  return strlen(s);
}
