__int64 __fastcall sub_228FE30(__int64 *a1, _QWORD *a2, const char *a3)
{
  char v3; // al
  int v4; // r14d
  _BYTE *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  const char *v11[4]; // [rsp+0h] [rbp-98h] BYREF
  __int16 v12; // [rsp+20h] [rbp-78h]
  size_t v13[4]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v14; // [rsp+50h] [rbp-48h]

  v3 = *((_BYTE *)a1 + 32);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v11[0] = "-%%%%%%";
      v12 = 259;
    }
    else
    {
      if ( *((_BYTE *)a1 + 33) == 1 )
      {
        a3 = (const char *)a1[1];
        a1 = (__int64 *)*a1;
      }
      else
      {
        v3 = 2;
      }
      v11[0] = (const char *)a1;
      v11[1] = a3;
      v11[2] = "-%%%%%%";
      LOBYTE(v12) = v3;
      HIBYTE(v12) = 3;
    }
  }
  else
  {
    v12 = 256;
  }
  v4 = 128;
  while ( 1 )
  {
    sub_228F6F0(v11, (__int64)a2, 1);
    v5 = (_BYTE *)*a2;
    v14 = 257;
    if ( *v5 )
    {
      v13[0] = (size_t)v5;
      LOBYTE(v14) = 3;
    }
    v6 = sub_228BC10(v13, 0, 0x1F8u);
    v8 = v7;
    if ( !v6 )
      break;
    v9 = std::_V2::generic_category((std::_V2 *)v13);
    if ( v6 != 17 || v8 != v9 )
      return v6;
    if ( !--v4 )
      return 17;
  }
  std::_V2::system_category((std::_V2 *)v13);
  return v6;
}
