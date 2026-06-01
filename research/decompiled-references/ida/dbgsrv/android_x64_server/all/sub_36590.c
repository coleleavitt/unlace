/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36590
// Address: 0x0000000000036590

//----- (0000000000036590) ----------------------------------------------------
__int64 __fastcall sub_36590(_DWORD *a1)
{
  __int64 result; // rax
  DIR *v2; // rax
  DIR *v3; // rbx
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  char name[40]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  result = ps_pglobal_lookup(0, nullptr, off_154000, &v4);
  if ( !(_DWORD)result )
  {
    sub_364A0((__int64)name, 32, 32, (__int64)"/proc/%d/task/", *a1);
    v2 = opendir(name);
    if ( v2 )
    {
      v3 = v2;
      while ( readdir(v3) )
        ;
      closedir(v3);
    }
    return 10;
  }
  return result;
}
// 154000: using guessed type char *off_154000;
