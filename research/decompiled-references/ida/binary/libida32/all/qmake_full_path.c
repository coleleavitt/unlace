__int64 __fastcall qmake_full_path(__int64 a1, __int64 a2, char *a3)
{
  char *v4; // rbx
  int v6; // r9d
  char v7[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v8; // [rsp+1008h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v4 = (char *)__realpath_chk();
  if ( !v4 )
  {
    v4 = a3;
    if ( !(unsigned __int8)qisabspath(a3) )
    {
      v4 = v7;
      qgetcwd(v7, 4096);
      qmakepath((int)v7, 4096, (int)v7, (int)a3, 0, v6, v7[0]);
    }
  }
  qustrncpy(a1, v4, a2);
  return a1;
}

