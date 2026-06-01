__int64 __fastcall sub_68FE40(_QWORD *a1, void (*a2)(const char *, ...), __int64 a3, const char *a4, int a5)
{
  unsigned int argloc; // ebp
  unsigned int v9; // eax
  _QWORD v10[2]; // [rsp+0h] [rbp-458h] BYREF
  char v11[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+418h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v10[0] = 0;
  v10[1] = 0;
  argloc = extract_argloc(v10, a3, 0);
  if ( (_BYTE)argloc )
  {
    v9 = sub_54C1C0(a1);
    print_argloc(v11, 1024, v10, v9, 2);
  }
  else
  {
    qstrncpy(v11, "failed_to_read_argloc", 1024);
  }
  a2("//\t%*cargloc %s: ", a5, 32, a4);
  a2("<%s>\n", v11);
  cleanup_argloc(v10);
  return argloc;
}

