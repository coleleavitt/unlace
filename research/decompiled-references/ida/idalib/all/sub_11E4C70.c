char *__fastcall sub_11E4C70(__int64 a1, char a2)
{
  const char *v3; // rbx
  int v4; // eax

  switch ( *(_DWORD *)(a1 + 3932) )
  {
    case 0:
      goto LABEL_2;
    case 1:
      v4 = *(_DWORD *)(a1 + 3936);
      if ( v4 == 2 )
      {
LABEL_2:
        j__strlen("osx");
        return "osx";
      }
      else
      {
        if ( !v4 || (v3 = "iossim", a2) )
          v3 = "ios";
LABEL_6:
        j__strlen(v3);
        return (char *)v3;
      }
    case 2:
      if ( !*(_DWORD *)(a1 + 3936) || (v3 = "tvossim", a2) )
        v3 = "tvos";
      goto LABEL_6;
    case 3:
      if ( !*(_DWORD *)(a1 + 3936) || (v3 = "watchossim", a2) )
        v3 = "watchos";
      goto LABEL_6;
    case 4:
      j__strlen("driverkit");
      return "driverkit";
    case 5:
      if ( !*(_DWORD *)(a1 + 3936) || (v3 = "xrossim", a2) )
        v3 = "xros";
      goto LABEL_6;
  }
}
