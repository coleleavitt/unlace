void __fastcall std::string::swap(std::string *this, std::string *a2)
{
  std::string::_Rep *v2; // rax
  std::string::_Rep *v3; // rax
  std::string::_Rep *v4; // rax
  std::string::_Rep *v5; // rax
  char v6; // bl
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  std::string *v18; // [rsp+0h] [rbp-40h]
  std::string *v19; // [rsp+8h] [rbp-38h]
  __int64 v20; // [rsp+10h] [rbp-30h] BYREF
  _BYTE v21[12]; // [rsp+18h] [rbp-28h] BYREF
  char v22; // [rsp+24h] [rbp-1Ch] BYREF
  char v23; // [rsp+25h] [rbp-1Bh] BYREF
  char v24; // [rsp+26h] [rbp-1Ah] BYREF
  char v25; // [rsp+27h] [rbp-19h] BYREF
  char *v26; // [rsp+28h] [rbp-18h]

  v2 = (std::string::_Rep *)std::string::_M_rep(this);
  if ( (unsigned __int8)std::string::_Rep::_M_is_leaked(v2) )
  {
    v3 = (std::string::_Rep *)std::string::_M_rep(this);
    std::string::_Rep::_M_set_sharable(v3);
  }
  v4 = (std::string::_Rep *)std::string::_M_rep(a2);
  if ( (unsigned __int8)std::string::_Rep::_M_is_leaked(v4) )
  {
    v5 = (std::string::_Rep *)std::string::_M_rep(a2);
    std::string::_Rep::_M_set_sharable(v5);
  }
  std::string::get_allocator((std::string *)&v22);
  std::string::get_allocator((std::string *)&v23);
  v6 = std::operator==<char>(&v23, &v22);
  std::allocator<char>::~allocator();
  std::allocator<char>::~allocator();
  if ( v6 )
  {
    v26 = (char *)std::string::_M_data(this);
    v7 = (char *)std::string::_M_data(a2);
    std::string::_M_data(this, v7);
    std::string::_M_data(a2, v26);
  }
  else
  {
    std::string::get_allocator((std::string *)&v24);
    v8 = std::string::_M_iend(this);
    v9 = std::string::_M_ibegin(this);
    std::string::string<__gnu_cxx::__normal_iterator<char *,std::string>>(v21, v9, v8, &v24);
    std::allocator<char>::~allocator();
    std::string::get_allocator((std::string *)&v25);
    v10 = std::string::_M_iend(a2);
    v11 = std::string::_M_ibegin(a2);
    std::string::string<__gnu_cxx::__normal_iterator<char *,std::string>>(&v20, v11, v10, &v25);
    std::allocator<char>::~allocator();
    ((void (__fastcall *)(std::string *, __int64 *, __int64 *, __int64, __int64, __int64, std::string *, std::string *))std::string::operator=)(
      this,
      &v20,
      &v20,
      v12,
      v13,
      v14,
      a2,
      this);
    ((void (__fastcall *)(std::string *, _BYTE *, _BYTE *, __int64, __int64, __int64, std::string *, std::string *, __int64))std::string::operator=)(
      v18,
      v21,
      v21,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    std::string::~string((std::string *)&v20);
    std::string::~string((std::string *)v21);
  }
}

