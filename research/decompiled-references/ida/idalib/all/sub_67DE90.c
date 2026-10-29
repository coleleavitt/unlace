unsigned __int64 __fastcall sub_67DE90(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rbx
  __int64 v3; // r15
  unsigned __int64 v5; // r12
  __int64 *v6; // rdi
  char *v7; // rbp
  int v9; // r8d
  int v10; // r9d
  char *s1; // [rsp+10h] [rbp-88h] BYREF
  __int128 v12; // [rsp+18h] [rbp-80h]
  char s2[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = qword_2CCB598;
  if ( v1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(__int64 **)(v3 + 1872);
      s1 = nullptr;
      v12 = 0;
      sub_52ED50(v6, (__int64)&s1, *(_QWORD *)v2);
      v7 = s1;
      if ( !(_QWORD)v12 || strncmp(s1, "baseclass_", 0xAu) )
        break;
      qsnprintf((unsigned int)s2, 32, (unsigned int)"%llx", *(_QWORD *)(v2 + 8), v9, v10);
      if ( !strcmp(v7 + 10, s2) )
        *(_DWORD *)(v2 + 28) |= 0x20u;
      if ( s1 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(s1);
      }
      ++v5;
      v2 += 32;
      if ( v5 >= *(unsigned int *)(a1 + 8) )
        return v14 - __readfsqword(0x28u);
    }
    if ( v7 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v7);
    }
  }
  return v14 - __readfsqword(0x28u);
}
