__int64 __fastcall sub_228DB00(std::_V2 *this)
{
  char *v2; // rax
  char *v3; // rbx
  size_t v4; // rbx
  std::_V2 *v5; // rdi
  unsigned int v6; // ebx
  size_t v7; // rax
  std::_V2 *v8; // rdi
  size_t v10; // rax
  void **v11; // [rsp+0h] [rbp-148h] BYREF
  __int16 v12; // [rsp+20h] [rbp-128h]
  char *v13; // [rsp+30h] [rbp-118h] BYREF
  __int16 v14; // [rsp+50h] [rbp-F8h]
  char *v15; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v16; // [rsp+80h] [rbp-C8h]
  _OWORD v17[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-98h]
  __int128 v19; // [rsp+C0h] [rbp-88h]
  __int64 v20; // [rsp+D0h] [rbp-78h]
  _OWORD v21[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+100h] [rbp-48h]
  __int128 v23; // [rsp+110h] [rbp-38h]
  __int64 v24; // [rsp+120h] [rbp-28h]

  *((_QWORD *)this + 1) = 0;
  v2 = getenv("PWD");
  v20 = 0;
  v18 = 0;
  v22 = 0;
  memset(v17, 0, sizeof(v17));
  v19 = 0;
  HIDWORD(v18) = 0xFFFF;
  memset(v21, 0, sizeof(v21));
  v23 = 0;
  v24 = 0;
  HIDWORD(v22) = 0xFFFF;
  if ( !v2 )
    goto LABEL_5;
  v3 = v2;
  v12 = 257;
  if ( *v2 )
  {
    v11 = (void **)v2;
    LOBYTE(v12) = 3;
  }
  if ( !(unsigned __int8)sub_2289C70(&v11) )
    goto LABEL_5;
  v14 = 257;
  if ( *v3 )
  {
    v13 = v3;
    LOBYTE(v14) = 3;
  }
  if ( !(unsigned int)sub_2288640((size_t *)&v13, (__int64)v17)
    && (v15 = ".", v16 = 259, !(unsigned int)sub_2288640((size_t *)&v15, (__int64)v21))
    && v20 == v24
    && (_QWORD)v19 == (_QWORD)v23 )
  {
    v10 = strlen(v3);
    sub_A1FE50(this, v3, &v3[v10]);
    std::_V2::system_category(this);
    return 0;
  }
  else
  {
LABEL_5:
    if ( *((_QWORD *)this + 1) != 4096 )
    {
      if ( *((_QWORD *)this + 1) <= 0x1000u && *((_QWORD *)this + 2) <= 0xFFFu )
        sub_2236E10((__int64)this, (char *)this + 24, 0x1000u, 1);
      *((_QWORD *)this + 1) = 4096;
    }
    v4 = 4096;
    while ( 1 )
    {
      v5 = *(std::_V2 **)this;
      if ( getcwd(*(char **)this, v4) )
      {
        v8 = *(std::_V2 **)this;
        *((_QWORD *)this + 1) = strlen(*(const char **)this);
        std::_V2::system_category(v8);
        return 0;
      }
      v6 = *__errno_location();
      if ( v6 != 12 )
        break;
      v7 = *((_QWORD *)this + 2);
      v4 = 2 * v7;
      if ( 2 * v7 != *((_QWORD *)this + 1) )
      {
        if ( 2 * v7 >= *((_QWORD *)this + 1) && v4 > v7 )
          sub_2236E10((__int64)this, (char *)this + 24, 2 * v7, 1);
        *((_QWORD *)this + 1) = v4;
      }
    }
    *((_QWORD *)this + 1) = 0;
    std::_V2::generic_category(v5);
    return v6;
  }
}
