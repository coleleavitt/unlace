/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36220
// Address: 0x0000000000036220

//----- (0000000000036220) ----------------------------------------------------
__int64 __fastcall sub_36220(unsigned int *a1, _QWORD *a2)
{
  __pid_t v2; // ebx
  int v3; // ebp
  DIR *v4; // rax
  DIR *v5; // rbx
  struct dirent *v6; // rax
  int v7; // eax
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  unsigned __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-80h] BYREF
  char name[72]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v2 = getpid();
  v3 = ps_getpid(a1);
  if ( geteuid() )
  {
    if ( (int)sub_36370(v2, v2, &v12) < 0 )
      return 12;
    sub_364A0((__int64)name, 64, 64, (__int64)"/proc/%d/task", v3);
    v4 = opendir(name);
    if ( v4 )
    {
      v5 = v4;
      v6 = readdir(v4);
      if ( v6 )
      {
        while ( 1 )
        {
          if ( v6->d_name[0] != 46 )
          {
            v7 = atoi(v6->d_name);
            if ( v7 )
            {
              if ( (int)sub_36370(v3, v7, &v11) < 0 || v11 != v12 )
                break;
            }
          }
          v6 = readdir(v5);
          if ( !v6 )
            goto LABEL_10;
        }
        closedir(v5);
        return 12;
      }
LABEL_10:
      closedir(v5);
    }
  }
  v8 = malloc(0x10u);
  if ( !v8 )
    return 18;
  v9 = v8;
  *v8 = ps_getpid(a1);
  *((_QWORD *)v9 + 1) = a1;
  *a2 = v9;
  return 0;
}
