__int64 __fastcall sub_124E540(char a1, int a2)
{
  char *v2; // r13
  char *v3; // r12
  __int64 v4; // rdx
  unsigned int v5; // r14d
  __int64 v6; // rax
  void *v8; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-1D0h]
  _BYTE v10[16]; // [rsp+30h] [rbp-1C8h] BYREF
  char *v11; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-1B0h]
  char *v13; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v14[6]; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-170h] BYREF
  int v16; // [rsp+90h] [rbp-168h]
  void *v17; // [rsp+98h] [rbp-160h] BYREF
  _BYTE v18[16]; // [rsp+A8h] [rbp-150h] BYREF
  _QWORD v19[4]; // [rsp+B8h] [rbp-140h] BYREF
  char v20; // [rsp+D8h] [rbp-120h]
  __int64 v21; // [rsp+190h] [rbp-68h]
  __int16 v22; // [rsp+198h] [rbp-60h]
  __int128 v23; // [rsp+1A0h] [rbp-58h]
  __int128 v24; // [rsp+1B0h] [rbp-48h]

  v10[0] = a1;
  v10[1] = 0;
  v8 = v10;
  v9 = 1;
  std::ios_base::ios_base((std::ios_base *)v19);
  v23 = 0;
  v24 = 0;
  v19[0] = (char *)&`vtable for'std::ios + 16;
  v22 = 0;
  v2 = (char *)`VTT for'std::istringstream[1];
  v3 = (char *)`VTT for'std::istringstream[2];
  v21 = 0;
  v4 = *((_QWORD *)v2 - 3);
  v11 = v2;
  *(char **)((char *)&v11 + v4) = v3;
  v12 = 0;
  std::ios::init((char *)&v11 + *((_QWORD *)v2 - 3), 0);
  memset(v14, 0, sizeof(v14));
  v11 = (char *)&`vtable for'std::istringstream + 24;
  v19[0] = (char *)&`vtable for'std::istringstream + 64;
  v13 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::locale((std::locale *)&v15);
  v16 = 0;
  v13 = (char *)&`vtable for'std::stringbuf + 16;
  v17 = v18;
  sub_124E480(&v17, v8, (__int64)v8 + v9);
  v16 = 8;
  std::stringbuf::_M_sync(&v13, v17, 0, 0);
  std::ios::init(v19, &v13);
  if ( v8 != v10 )
    operator delete(v8);
  if ( a2 == 8 )
  {
    *(_DWORD *)((char *)v14 + *((_QWORD *)v11 - 3)) = *(_DWORD *)((_BYTE *)v14 + *((_QWORD *)v11 - 3)) & 0xFFFFFFB5
                                                    | 0x40;
  }
  else if ( a2 == 16 )
  {
    *(_DWORD *)((char *)v14 + *((_QWORD *)v11 - 3)) = *(_DWORD *)((_BYTE *)v14 + *((_QWORD *)v11 - 3)) & 0xFFFFFFB5 | 8;
  }
  std::istream::_M_extract<long>(&v11, &v8);
  if ( (v20 & 5) != 0 )
    v5 = -1;
  else
    v5 = (unsigned int)v8;
  v11 = (char *)&`vtable for'std::istringstream + 24;
  v19[0] = (char *)&`vtable for'std::istringstream + 64;
  v13 = (char *)&`vtable for'std::stringbuf + 16;
  if ( v17 != v18 )
    operator delete(v17);
  v13 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v15);
  v6 = *((_QWORD *)v2 - 3);
  v11 = v2;
  *(char **)((char *)&v11 + v6) = v3;
  v12 = 0;
  v19[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v19);
  return v5;
}
