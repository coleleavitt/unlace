unsigned __int64 __fastcall sub_31E00(__int64 a1, char **a2)
{
  unsigned int v2; // edx
  size_t v3; // rax
  __int64 v4; // r13
  size_t v5; // rax
  __int64 v6; // rbx
  size_t v7; // rdx
  const char *v8; // r15
  __int64 v9; // rax
  _BYTE v11[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  v12[0] = __readfsqword(0x28u);
  v3 = sub_28E10(v11, (unsigned __int64)v12, v2) - v11;
  if ( v3 )
    sub_30190(a2, v11, v3);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = sub_28E10(v11, (unsigned __int64)v12, v4) - v11;
  if ( v5 )
    sub_30190(a2, v11, v5);
  v6 = 0;
  if ( v4 )
  {
    do
    {
      v8 = s1;
      v9 = *(_QWORD *)(a1 + 16) + 24 * v6;
      if ( *(_QWORD *)(v9 + 8) )
        v8 = *(const char **)v9;
      if ( v8 )
      {
        v7 = strlen(v8) + 1;
      }
      else
      {
        v7 = 1;
        v8 = "";
      }
      ++v6;
      sub_30190(a2, v8, v7);
    }
    while ( v4 != v6 );
  }
  return v12[0] - __readfsqword(0x28u);
}

