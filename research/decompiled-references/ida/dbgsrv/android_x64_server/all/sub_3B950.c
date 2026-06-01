/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B950
// Address: 0x000000000003B950

//----- (000000000003B950) ----------------------------------------------------
unsigned __int64 __fastcall sub_3B950(unsigned __int64 a1)
{
  const char *v2; // rdi
  DIR *v3; // rax
  DIR *v4; // r14
  unsigned __int64 *v5; // r15
  int v6; // r13d
  struct dirent *v7; // rax
  const char *d_name; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v14; // [rsp+Ch] [rbp-5Ch]
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v16 = 0;
  sub_3BBA0((__int64)ptr, "/proc/%d/task", *(_DWORD *)(a1 + 1140));
  if ( ptr[1] )
    v2 = (const char *)ptr[0];
  else
    v2 = s1;
  v3 = opendir(v2);
  if ( v3 )
  {
    v4 = v3;
    v5 = (unsigned __int64 *)(a1 + 1040);
    v6 = 0;
    do
    {
      v14 = 0;
      while ( 1 )
      {
        v7 = readdir(v4);
        if ( !v7 )
          break;
        d_name = v7->d_name;
        v9 = strtoul(v7->d_name, nullptr, 10);
        if ( v9 )
        {
          v10 = v9;
          sub_9FDA0(a1, "DBG: %d found %s thread\n", v6, d_name);
          v11 = *v5;
          if ( !*v5 )
            goto LABEL_16;
          v12 = a1 + 1040;
          do
          {
            if ( *(_DWORD *)(v11 + 32) >= (int)v10 )
              v12 = v11;
            v11 = *(_QWORD *)(v11 + 8LL * (*(_DWORD *)(v11 + 32) < (int)v10));
          }
          while ( v11 );
          if ( (unsigned __int64 *)v12 == v5 || *(_DWORD *)(v12 + 32) > (int)v10 )
          {
LABEL_16:
            if ( v10 != *(_DWORD *)(a1 + 1140) )
              sub_3AAD0(a1, v10, 0);
            if ( (unsigned __int8)sub_3A650(a1, v10, -1) )
            {
              v14 = 1;
              sub_9FDA0(a1, "DBG: %d collected %s thread\n", v6, d_name);
            }
          }
        }
      }
      rewinddir(v4);
      ++v6;
      if ( v14 )
        v6 = 0;
    }
    while ( v6 < 2 );
    closedir(v4);
  }
  else
  {
    sub_390A0((int)"Could not open /proc/%d/task", *(unsigned int *)(a1 + 1140));
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v16 = 0;
  }
  return __readfsqword(0x28u);
}
