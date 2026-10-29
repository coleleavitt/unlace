__int64 __fastcall clang_VirtualFileOverlay_addFileMapping(__int64 a1, const char *a2, const char *a3)
{
  bool v4; // zf
  size_t v5; // rax
  size_t v6; // rax
  size_t v8; // r13
  size_t v9; // rax
  _BYTE v10[16]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE *v11; // [rsp+20h] [rbp-78h]
  __int64 v12; // [rsp+28h] [rbp-70h]
  _QWORD v13[4]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v14; // [rsp+60h] [rbp-38h]

  if ( a3 == nullptr || a2 == nullptr || !a1 )
    return 3;
  v4 = *a2 == 0;
  v14 = 257;
  if ( !v4 )
  {
    v13[0] = a2;
    LOBYTE(v14) = 3;
  }
  if ( !(unsigned __int8)sub_2636E80(v13, 0) )
    return 3;
  v4 = *a3 == 0;
  v14 = 257;
  if ( !v4 )
  {
    v13[0] = a3;
    LOBYTE(v14) = 3;
  }
  if ( !(unsigned __int8)sub_2636E80(v13, 0) )
    return 3;
  v5 = strlen(a2);
  sub_2632580(v10, a2, v5, 0);
  v6 = strlen(a2);
  sub_26327A0(v13, a2, v6);
  while ( !(unsigned __int8)sub_2632AE0(v10, v13) )
  {
    if ( v12 == 1 )
    {
      if ( *v11 == 46 )
        return 3;
    }
    else if ( v12 == 2 && *(_WORD *)v11 == 11822 )
    {
      return 3;
    }
    sub_26327C0(v10);
  }
  v8 = strlen(a3);
  v9 = strlen(a2);
  sub_2606520(a1, a2, v9, a3, v8);
  return 0;
}

