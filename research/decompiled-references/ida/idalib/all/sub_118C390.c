__int64 __fastcall sub_118C390(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  const char **v7; // rax
  const char *v8; // rbx
  size_t v9; // rax
  __int64 result; // rax

  v4 = (const char *)(sub_10DCD30(a2, 0x88Eu) == 0 ? 2920 : 2902);
  v5 = sub_10DCD30(a2, 0x12u);
  if ( v5 )
    v4 = (const char *)*(unsigned int *)(*(_QWORD *)v5 + 40LL);
  v6 = sub_10DCD30(a2, 0x3D6u);
  if ( v6 )
  {
    v7 = *(const char ***)(v6 + 48);
    v8 = *v7;
    if ( !*v7 )
      goto LABEL_8;
    v9 = j__strlen(*v7);
    switch ( v9 )
    {
      case 6uLL:
        goto LABEL_8;
      case 0xAuLL:
        if ( *(_QWORD *)v8 == 0x645F636974617473LL && *((_WORD *)v8 + 4) == 26466 )
          goto LABEL_20;
        goto LABEL_8;
      case 3uLL:
        if ( *(_WORD *)v8 == 27748 && v8[2] == 108 )
          goto LABEL_26;
LABEL_8:
        if ( sub_10DCD30(a2, 0x88Eu) )
          sub_10DC5D0(a3, (__int64)"-D_DEBUG");
        v4 = "--dependent-lib=libcmt";
        sub_10DC5D0(a3, (__int64)"-D_MT");
        sub_10DC5D0(a3, (__int64)"-flto-visibility-public-std");
        goto LABEL_11;
    }
    if ( v9 != 7 || *(_DWORD *)v8 != 1600941156 || *((_WORD *)v8 + 2) != 25188 || v8[6] != 103 )
      goto LABEL_8;
LABEL_22:
    v4 = "--dependent-lib=msvcrtd";
    sub_10DC5D0(a3, (__int64)"-D_DEBUG");
    sub_10DC5D0(a3, (__int64)"-D_MT");
    sub_10DC5D0(a3, (__int64)"-D_DLL");
    goto LABEL_11;
  }
  if ( (_DWORD)v4 != 2344 )
  {
    if ( (unsigned int)v4 > 0x928 )
    {
      if ( (_DWORD)v4 == 2902 )
      {
LABEL_20:
        v4 = "--dependent-lib=libcmtd";
        sub_10DC5D0(a3, (__int64)"-D_DEBUG");
        sub_10DC5D0(a3, (__int64)"-D_MT");
        sub_10DC5D0(a3, (__int64)"-flto-visibility-public-std");
        goto LABEL_11;
      }
      if ( (_DWORD)v4 != 2920 )
        goto LABEL_30;
      goto LABEL_8;
    }
    if ( (_DWORD)v4 != 2331 )
      goto LABEL_30;
    goto LABEL_22;
  }
LABEL_26:
  if ( sub_10DCD30(a2, 0x88Eu) )
    sub_10DC5D0(a3, (__int64)"-D_DEBUG");
  v4 = "--dependent-lib=msvcrt";
  sub_10DC5D0(a3, (__int64)"-D_MT");
  sub_10DC5D0(a3, (__int64)"-D_DLL");
LABEL_11:
  if ( sub_10DCD30(a2, 0x3D5u) )
  {
    result = sub_10DC5D0(a3, (__int64)"-D_VC_NODEFAULTLIB");
    goto LABEL_13;
  }
LABEL_30:
  sub_10DC5D0(a3, (__int64)v4);
  result = sub_10DC5D0(a3, (__int64)"--dependent-lib=oldnames");
LABEL_13:
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 52) == 36 )
    return sub_10DC5D0(a3, (__int64)"--dependent-lib=softintrin");
  return result;
}
