__int64 __fastcall sub_77E7F0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rbx
  char v10; // al
  char v12[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1008h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a3 )
    qdirname(v12);
  else
    qgetcwd(v12, 4096);
  v8 = qmakepath(a1, a2, (int)v12, a4, 0, v7, v12[0]);
  v9 = v8;
  if ( a5 )
    v10 = sub_77E5A0(a1, a2);
  else
    v10 = qfileexist(v8, a2);
  if ( !v10 )
    return 0;
  return v9;
}

