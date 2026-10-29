void __fastcall desktop_json_seeker_t__::vfunc_0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  const char *v5; // r15

  v2 = *a2;
  v3 = *a2 + 16 * a2[1];
  if ( v3 != *a2 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v2 != 2 )
        goto LABEL_3;
      v4 = *(_QWORD *)(v2 + 8);
      if ( !*(_QWORD *)(v4 + 8) )
        goto LABEL_3;
      v5 = *(const char **)v4;
      if ( !strcmp(*(const char **)v4, "Structures") || !strcmp(v5, "Enums") )
      {
        v2 += 16;
        *(_BYTE *)(a1 + 8) = 1;
        if ( v2 == v3 )
          return;
      }
      else
      {
        if ( !strcmp(v5, "Local Types") )
          *(_BYTE *)(a1 + 9) = 1;
LABEL_3:
        v2 += 16;
        if ( v2 == v3 )
          return;
      }
    }
  }
}
