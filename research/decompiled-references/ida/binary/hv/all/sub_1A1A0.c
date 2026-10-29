unsigned __int64 __fastcall sub_1A1A0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  int v7; // r8d
  const char *v8; // rcx
  char v10[40]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v3 = a2[1];
  v11 = __readfsqword(0x28u);
  v4 = *a2;
  v5 = *a2 + 80 * v3;
  if ( v5 != *a2 )
  {
    do
    {
      sub_93660(v4 + 24, v10, 33);
      if ( a3 == -1 )
      {
        v7 = *(_DWORD *)(v4 + 64);
      }
      else
      {
        v7 = *(_DWORD *)(v4 + 60);
        if ( !v7 )
          v7 = a3;
      }
      v8 = haystack;
      if ( *(_QWORD *)(v4 + 8) )
        v8 = *(const char **)v4;
      sub_19CE0(a1, (__int64)"ok %s %s#%d\n", v10, v8, v7);
      v4 += 80;
    }
    while ( v4 != v5 );
  }
  return v11 - __readfsqword(0x28u);
}

