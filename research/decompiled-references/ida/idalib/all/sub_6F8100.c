__int64 __fastcall sub_6F8100(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  const char *v3; // r13
  char *v4; // rbx
  unsigned int v5; // edi
  char v6; // r13
  unsigned int v7; // edi
  char v8; // r13

  v2 = 0;
  if ( *(_QWORD *)(a2 + 8) > 1u )
  {
    v3 = *(const char **)a2;
    v4 = strstr(*(const char **)a2, "this");
    if ( v4 )
    {
      if ( strncmp(v3, "this", 4u) || (v4 = strstr(v3 + 4, "this")) != nullptr )
      {
        v2 = 0;
        do
        {
          v5 = *(v4 - 1);
          v6 = *(v4 - 1);
          if ( v5 > 0x7F || !isalnum(v5) && v6 != 95 && v6 != 36 )
          {
            v7 = v4[4];
            v8 = v4[4];
            if ( v7 > 0x7F || !isalnum(v7) && v8 != 95 && v8 != 36 )
            {
              v4[2] = 95;
              v2 = 1;
            }
          }
          v4 = strstr(v4 + 4, "this");
        }
        while ( v4 );
      }
    }
  }
  return v2;
}
