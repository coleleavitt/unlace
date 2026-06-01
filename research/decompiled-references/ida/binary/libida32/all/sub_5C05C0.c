void __fastcall __noreturn sub_5C05C0(_BYTE *a1, __int64 *a2, __int16 a3, __int64 a4, int a5, int a6)
{
  int v6; // r13d
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r13
  char v11[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (a3 & 0xE000u) == 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
    callui(24, 10, 0, (int)&callui, a5, a6);
  }
  v6 = a3 & 0x2000;
  if ( a1 && *a1 )
  {
    if ( (a3 & 0x2000) == 0 )
    {
      set_file_ext(v11, 4096, a1, "gdl");
      goto LABEL_5;
    }
    set_file_ext(v11, 4096, a1, "dot");
  }
  else
  {
    qtmpnam(v11);
    if ( !v6 )
    {
LABEL_5:
      gen_gdl(a2, v11);
      goto LABEL_6;
    }
  }
  v9 = fopenWT(v11);
  v10 = v9;
  if ( !v9 )
    sub_375400();
  sub_5BEFB0(a2, v9);
  qfclose(v10);
LABEL_6:
  if ( a2 )
    (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  callui(24, 10, 0, (int)&callui, v7, v8);
}

