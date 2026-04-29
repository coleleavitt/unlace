__int64 __fastcall sub_1C9210(char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 tinfo_size; // rax
  __int64 v5; // rcx
  char v6; // al
  char v7; // [rsp+Fh] [rbp-69h]
  __int64 v8; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v9[11]; // [rsp+20h] [rbp-58h] BYREF

  v9[3] = __readfsqword(0x28u);
  v9[0] = 0;
  v9[1] = 0;
  v2 = sub_1C5030(a1, (__int64)v9);
  if ( (_BYTE)v2 && (tinfo_size = get_tinfo_size(), (unsigned __int64)(tinfo_size - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    sub_1C9130((__int64)v9, (unsigned int)tinfo_size, tinfo_size - 1, v5);
    v6 = a1[1];
    v8 = 0;
    v7 = v6;
    copy_tinfo_t();
    sub_11D150((__int64)a1, a2, nullptr, &v8, v9);
    clear_tinfo_t();
    a1[1] = v7;
  }
  else
  {
    v2 = 0;
  }
  cleanup_argloc();
  return v2;
}
