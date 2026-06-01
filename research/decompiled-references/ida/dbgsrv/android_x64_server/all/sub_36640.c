/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36640
// Address: 0x0000000000036640

//----- (0000000000036640) ----------------------------------------------------
__int64 __fastcall sub_36640(_DWORD *a1, unsigned int (__fastcall *a2)(_DWORD *, __int64), __int64 a3)
{
  unsigned int v4; // r13d
  DIR *v5; // rax
  DIR *v6; // rbx
  struct dirent *v7; // rax
  struct dirent *v8; // r14
  const char *d_name; // r14
  _DWORD v11[2]; // [rsp+8h] [rbp-60h] BYREF
  char name[32]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  v4 = 0;
  sub_364A0((__int64)name, 32, 32, (__int64)"/proc/%d/task/", *a1);
  v5 = opendir(name);
  if ( v5 )
  {
    v6 = v5;
    v11[0] = *a1;
    v7 = readdir(v5);
    if ( v7 )
    {
      v8 = v7;
      while ( 1 )
      {
        d_name = v8->d_name;
        if ( strcmp(d_name, ".") )
        {
          if ( strcmp(d_name, "..") )
          {
            v11[1] = atoi(d_name);
            if ( a2(v11, a3) )
              break;
          }
        }
        v8 = readdir(v6);
        if ( !v8 )
        {
          v4 = 0;
          goto LABEL_11;
        }
      }
      v4 = 15;
    }
LABEL_11:
    closedir(v6);
  }
  else
  {
    return 13;
  }
  return v4;
}
