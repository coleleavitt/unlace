char *__fastcall sub_22A9C70(_DWORD *a1)
{
  __int64 v1; // r13
  _DWORD *v2; // rbp
  __int64 v4; // r12
  _DWORD *v5; // rbp
  void *v6[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v7[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( *a1 == 32 )
  {
    v4 = (__int64)(a1 + 6);
    v5 = a1 + 8;
    sub_22A8B90(v6, "e");
    if ( a1 + 8 == (_DWORD *)sub_22A98A0((__int64)(a1 + 6), (__int64)v6) )
    {
      if ( v6[0] != v7 )
        operator delete(v6[0]);
      sub_22A8B90(v6, (char *)"d");
      if ( v5 == (_DWORD *)sub_22A98A0(v4, (__int64)v6) )
      {
        if ( v6[0] != v7 )
          operator delete(v6[0]);
        sub_22A8B90(v6, "f");
        if ( v5 == (_DWORD *)sub_22A98A0(v4, (__int64)v6) )
        {
          if ( v6[0] != v7 )
            operator delete(v6[0]);
          j__strlen("ilp32");
          return "ilp32";
        }
        else
        {
          if ( v6[0] != v7 )
            operator delete(v6[0]);
          j__strlen("ilp32f");
          return (char *)"ilp32f";
        }
      }
      else
      {
        if ( v6[0] != v7 )
          operator delete(v6[0]);
        j__strlen("ilp32d");
        return (char *)"ilp32d";
      }
    }
    else
    {
      if ( v6[0] != v7 )
        operator delete(v6[0]);
      j__strlen("ilp32e");
      return "ilp32e";
    }
  }
  else
  {
    v1 = (__int64)(a1 + 6);
    v2 = a1 + 8;
    v6[0] = v7;
    sub_22A8AD0(v6, "e", (__int64)"");
    if ( a1 + 8 == (_DWORD *)sub_22A98A0((__int64)(a1 + 6), (__int64)v6) )
    {
      if ( v6[0] != v7 )
        operator delete(v6[0]);
      sub_22A8B90(v6, (char *)"d");
      if ( v2 == (_DWORD *)sub_22A98A0(v1, (__int64)v6) )
      {
        if ( v6[0] != v7 )
          operator delete(v6[0]);
        sub_22A8B90(v6, "f");
        if ( v2 == (_DWORD *)sub_22A98A0(v1, (__int64)v6) )
        {
          if ( v6[0] != v7 )
            operator delete(v6[0]);
          j__strlen("lp64");
          return (char *)"lp64";
        }
        else
        {
          if ( v6[0] != v7 )
            operator delete(v6[0]);
          j__strlen("lp64f");
          return (char *)"lp64f";
        }
      }
      else
      {
        if ( v6[0] != v7 )
          operator delete(v6[0]);
        j__strlen("lp64d");
        return (char *)"lp64d";
      }
    }
    else
    {
      if ( v6[0] != v7 )
        operator delete(v6[0]);
      j__strlen("lp64e");
      return "lp64e";
    }
  }
}
