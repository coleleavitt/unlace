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
  _BYTE v12[8]; // [rsp+10h] [rbp-30h] BYREF
  _BYTE v13[12]; // [rsp+18h] [rbp-28h] BYREF
  char v14; // [rsp+24h] [rbp-1Ch] BYREF
  char v15; // [rsp+25h] [rbp-1Bh] BYREF
  char v16; // [rsp+26h] [rbp-1Ah] BYREF
  char v17; // [rsp+27h] [rbp-19h] BYREF
  char *v18; // [rsp+28h] [rbp-18h]

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
  std::string::get_allocator((std::string *)&v14, (__int64)a2);
  std::string::get_allocator((std::string *)&v15, (__int64)this);
  v6 = sub_59090D();
  std::allocator<char>::~allocator(&v15);
  std::allocator<char>::~allocator(&v14);
  if ( v6 )
  {
    v18 = (char *)std::string::_M_data(this);
    v7 = (char *)std::string::_M_data(a2);
    std::string::_M_data(this, v7);
    std::string::_M_data(a2, v18);
  }
  else
  {
    std::string::get_allocator((std::string *)&v16, (__int64)a2);
    v8 = std::string::_M_iend(this);
    v9 = std::string::_M_ibegin(this);
    std::string::string<__gnu_cxx::__normal_iterator<char *,std::string>>(v13, v9, v8, &v16);
    std::allocator<char>::~allocator(&v16);
    std::string::get_allocator((std::string *)&v17, (__int64)this);
    v10 = std::string::_M_iend(a2);
    v11 = std::string::_M_ibegin(a2);
    std::string::string<__gnu_cxx::__normal_iterator<char *,std::string>>(v12, v11, v10, &v17);
    std::allocator<char>::~allocator(&v17);
    std::string::operator=(this, (const std::string *)v12);
    std::string::operator=(a2, (const std::string *)v13);
    std::string::~string((std::string *)v12);
    std::string::~string((std::string *)v13);
  }
}
