unsigned __int64 __fastcall sub_65FDE0(__int64 a1)
{
  int v1; // edx
  unsigned int *v2; // rbx
  __int64 v3; // r15
  unsigned __int64 v5; // r12
  __int64 *v6; // rdi
  char *v7; // rbp
  int v9; // r8d
  int v10; // r9d
  char v11; // [rsp+0h] [rbp-98h]
  char *s1; // [rsp+10h] [rbp-88h] BYREF
  __int128 v13; // [rsp+18h] [rbp-80h]
  char s2[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 4);
  v15 = __readfsqword(0x28u);
  v2 = *(unsigned int **)(a1 + 8);
  v3 = qword_2CA1698;
  if ( v1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(__int64 **)(v3 + 1680);
      s1 = nullptr;
      v13 = 0;
      sub_516900(v6, (__int64)&s1, *v2);
      v7 = s1;
      if ( !(_QWORD)v13 || strncmp(s1, "baseclass_", 0xAu) )
        break;
      qsnprintf((int)s2, 32, (int)"%llx", v2[1], v9, v10, v11);
      if ( !strcmp(v7 + 10, s2) )
        v2[4] |= 0x20u;
      if ( s1 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(s1);
      }
      ++v5;
      v2 += 5;
      if ( v5 >= *(unsigned int *)(a1 + 4) )
        return v15 - __readfsqword(0x28u);
    }
    if ( v7 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v7);
    }
  }
  return v15 - __readfsqword(0x28u);
}

