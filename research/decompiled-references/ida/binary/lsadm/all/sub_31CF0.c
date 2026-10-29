unsigned __int64 __fastcall sub_31CF0(__int64 a1, char **a2)
{
  __int64 v2; // r14
  size_t v4; // rax
  __int64 v5; // rbx
  size_t v6; // rdx
  __int64 v7; // r15
  size_t v8; // rax
  const char *v9; // rsi
  _BYTE v11[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v12[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v12[0] = __readfsqword(0x28u);
  v4 = sub_28E10(v11, (unsigned __int64)v12, v2) - v11;
  if ( v4 )
    sub_30190(a2, v11, v4);
  v5 = 0;
  if ( v2 )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 16) + 32 * v5;
      v8 = sub_28E10(v11, (unsigned __int64)v12, *(_DWORD *)v7) - v11;
      if ( v8 )
        sub_30190(a2, v11, v8);
      v9 = s1;
      if ( *(_QWORD *)(v7 + 16) )
        v9 = *(const char **)(v7 + 8);
      if ( v9 )
      {
        v6 = strlen(v9) + 1;
      }
      else
      {
        v6 = 1;
        v9 = "";
      }
      ++v5;
      sub_30190(a2, v9, v6);
    }
    while ( v2 != v5 );
  }
  return v12[0] - __readfsqword(0x28u);
}

