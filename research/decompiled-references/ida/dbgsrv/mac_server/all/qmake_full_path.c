/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmake_full_path
// Address: 0x000000010007C090

//----- (000000010007C090) ----------------------------------------------------
__int64 __fastcall qmake_full_path(unsigned __int64 a1, __int64 a2, char *a3)
{
  char *v4; // rax
  int v5; // eax
  const char *v7; // rsi
  int v8; // edx
  char v9[1032]; // [rsp+0h] [rbp-430h] BYREF

  v4 = realpath_DARWIN_EXTSN(a3, v9);
  if ( v4 )
    goto LABEL_7;
  v5 = (unsigned __int8)*a3;
  if ( v5 == 47 || v5 == 92 )
  {
    v4 = a3;
LABEL_7:
    qustrncpy(a1, v4, a2);
    return a1;
  }
  if ( getcwd(v9, 0x400u) )
  {
    qmakepath(v9, 1024, (__int64)v9, a3, 0);
    v4 = v9;
    goto LABEL_7;
  }
  v7 = (const char *)qerrstr(-1);
  sub_100033990("getcwd: %s", v7);
  return sub_10007C170((int)"getcwd: %s", (char)v7, v8);
}
// 10007C166: variable 'v8' is possibly undefined
