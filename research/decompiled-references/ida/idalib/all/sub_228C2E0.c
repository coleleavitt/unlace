__int64 __fastcall sub_228C2E0(size_t *a1, size_t *a2, bool *a3)
{
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v6; // [rsp+20h] [rbp-98h]
  __int128 v7; // [rsp+30h] [rbp-88h]
  __int64 v8; // [rsp+40h] [rbp-78h]
  _OWORD v9[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v10; // [rsp+70h] [rbp-48h]
  __int128 v11; // [rsp+80h] [rbp-38h]
  __int64 v12; // [rsp+90h] [rbp-28h]

  v6 = 0;
  v10 = 0;
  memset(v5, 0, sizeof(v5));
  v7 = 0;
  v8 = 0;
  HIDWORD(v6) = 0xFFFF;
  memset(v9, 0, sizeof(v9));
  v11 = 0;
  v12 = 0;
  HIDWORD(v10) = 0xFFFF;
  result = sub_2288640(a1, (__int64)v5);
  if ( !(_DWORD)result )
  {
    result = sub_2288640(a2, (__int64)v9);
    if ( !(_DWORD)result )
    {
      *a3 = (_QWORD)v7 == (_QWORD)v11 && v12 == v8;
      std::_V2::system_category((std::_V2 *)a2);
      return 0;
    }
  }
  return result;
}
