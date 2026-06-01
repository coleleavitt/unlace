__int64 __fastcall sub_647A10(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  char *v8; // rax
  signed __int64 v9; // r15
  int v10; // r9d
  _BYTE v12[4104]; // [rsp+0h] [rbp-1048h] BYREF
  unsigned __int64 v13; // [rsp+1008h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( a4 && (unsigned __int8)qisabspath(a4) )
    return set_file_ext(a1, a2, a4, "til");
  qmakepath(a1, a2, (_DWORD)a3, a4, 0, a6);
  set_file_ext(a1, a2, a1, "til");
  if ( !(unsigned __int8)qfileexist(a1, a2) )
  {
    v8 = strrchr(a3, 47);
    if ( v8 )
    {
      v9 = v8 - a3;
      __memcpy_chk(v12, a3, v8 - a3, 4096);
      v12[v9] = 0;
      qmakepath(a1, a2, (unsigned int)v12, a4, 0, v10);
      set_file_ext(a1, a2, a1, "til");
    }
  }
  return a1;
}
