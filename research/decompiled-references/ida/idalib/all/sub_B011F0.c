__int64 __fastcall sub_B011F0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  _BYTE v12[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v12[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 == 1 )
  {
    sub_995540(a2, "[[clang::objc_method_family");
    sub_AFB8E0(a2, v12);
    v6 = sub_995540(a2, "\"");
    switch ( *(_DWORD *)(a1 + 40) )
    {
      case 0:
LABEL_16:
        v7 = "none";
        break;
      case 1:
LABEL_14:
        v7 = "alloc";
        break;
      case 2:
LABEL_10:
        v7 = "copy";
        break;
      case 3:
LABEL_18:
        v7 = "init";
        break;
      case 4:
LABEL_17:
        v7 = "mutableCopy";
        break;
      case 5:
LABEL_15:
        v7 = "new";
        break;
      default:
        return sub_B01490();
    }
    v8 = sub_995540(v6, v7);
    sub_995540(v8, "\"");
    if ( !v12[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else if ( v4 )
  {
    if ( v4 == 2 )
    {
      sub_995540(a2, "[[clang::objc_method_family");
      sub_AFB8E0(a2, v12);
      v6 = sub_995540(a2, "\"");
      switch ( *(_DWORD *)(a1 + 40) )
      {
        case 0:
          goto LABEL_16;
        case 1:
          goto LABEL_14;
        case 2:
          goto LABEL_10;
        case 3:
          goto LABEL_18;
        case 4:
          goto LABEL_17;
        case 5:
          goto LABEL_15;
        default:
          return sub_B01490();
      }
    }
    return sub_B01490();
  }
  else
  {
    sub_995540(a2, "__attribute__((objc_method_family");
    sub_AFB8E0(a2, v12);
    v5 = sub_995540(a2, "\"");
    switch ( *(_DWORD *)(a1 + 40) )
    {
      case 0:
        v10 = "none";
        break;
      case 1:
        v10 = "alloc";
        break;
      case 2:
        v10 = "copy";
        break;
      case 3:
        v10 = "init";
        break;
      case 4:
        v10 = "mutableCopy";
        break;
      case 5:
        v10 = "new";
        break;
      default:
        return sub_B01490();
    }
    v11 = sub_995540(v5, v10);
    sub_995540(v11, "\"");
    if ( !v12[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
