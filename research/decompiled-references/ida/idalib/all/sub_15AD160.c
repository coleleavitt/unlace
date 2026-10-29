__int64 __fastcall sub_15AD160(unsigned __int8 *a1, int a2, int a3, char **a4, _DWORD *a5)
{
  unsigned __int8 v5; // al
  char *v6; // rdx
  unsigned __int8 v7; // al

  v5 = *a1;
  if ( (*a1 & 0x18) != 0 )
  {
    v6 = "__thread";
    v7 = (v5 >> 3) & 3;
    if ( v7 != 1 )
    {
      v6 = "unspecified";
      if ( v7 )
      {
        v6 = "thread_local";
        if ( v7 != 2 )
          v6 = "_Thread_local";
      }
    }
    *a4 = v6;
    if ( v7 == a2 )
      *a5 = 97;
    else
      *a5 = 4033;
    return 1;
  }
  else
  {
    *((_DWORD *)a1 + 43) = a3;
    *a1 = (8 * (a2 & 3)) | v5 & 0xE7;
    return 0;
  }
}
