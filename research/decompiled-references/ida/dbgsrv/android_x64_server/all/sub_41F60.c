/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F60
// Address: 0x0000000000041F60

//----- (0000000000041F60) ----------------------------------------------------
unsigned __int64 __fastcall sub_41F60(
        __int64 a1,
        __int64 a2,
        char a3,
        const char *a4,
        const char *a5,
        int a6,
        const char *a7)
{
  char *v10; // rbp
  const char *i; // rax
  void *ptr[3]; // [rsp+20h] [rbp-1058h] BYREF
  const char *v14; // [rsp+38h] [rbp-1040h] BYREF
  char s[4096]; // [rsp+40h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1040h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_146DF0;
  *(_OWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1048) = 0;
  sub_37F60(a1 + 1056, a4);
  sub_37F60(a1 + 1080, a5);
  sub_37F60(a1 + 1104, a7);
  *(_DWORD *)(a1 + 1128) = a6;
  *(_BYTE *)(a1 + 8) = 0;
  v10 = ";";
  if ( a3 )
    v10 = ":";
  qstrncpy(s, a2, 4096);
  for ( i = qstrtok(s, v10, &v14); i; i = qstrtok(nullptr, v10, &v14) )
  {
    sub_37F60((__int64)ptr, i);
    sub_4AA20(a1 + 1032, ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
  }
  return __readfsqword(0x28u);
}
// 146DF0: using guessed type __int64 (__fastcall *off_146DF0[2])();
