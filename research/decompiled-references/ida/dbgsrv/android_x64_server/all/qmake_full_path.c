/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmake_full_path
// Address: 0x00000000000C1450

//----- (00000000000C1450) ----------------------------------------------------
unsigned __int64 __fastcall qmake_full_path(unsigned __int64 a1, __int64 a2, const char *a3)
{
  char *v4; // rbx
  const char *v6; // rax
  char v7[4096]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v8; // [rsp+1000h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  v4 = realpath(a3, v7);
  if ( !v4 )
  {
    if ( *a3 == 47 || *a3 == 92 )
    {
      v4 = (char *)a3;
    }
    else
    {
      v4 = v7;
      if ( !getcwd(v7, 0x1000u) )
      {
        v6 = (const char *)qerrstr(0xFFFFFFFFLL);
        sub_3A5C0("getcwd: %s", v6);
      }
      qmakepath(v7, 4096, v7, a3, 0);
    }
  }
  qustrncpy(a1, (__int64)v4, a2);
  return a1;
}
