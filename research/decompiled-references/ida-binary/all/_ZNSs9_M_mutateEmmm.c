unsigned __int8 __fastcall std::string::_M_mutate(std::string *this, const char *a2, __int64 a3, __int64 a4)
{
  std::string::_Rep *v4; // rax
  unsigned __int64 v6; // rax
  char *v7; // rbx
  std::string *v8; // rax
  char *v9; // rbx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rax
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rax
  std::string::_Rep *v15; // rax
  char v19; // [rsp+2Fh] [rbp-31h] BYREF
  std::string::_Rep *v20; // [rsp+30h] [rbp-30h]
  char *v21; // [rsp+38h] [rbp-28h]
  unsigned __int64 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+48h] [rbp-18h]

  v23 = std::string::size(this);
  v22 = v23 + a4 - a3;
  v21 = (char *)(v23 - (_QWORD)a2 - a3);
  if ( v22 > std::string::capacity(this)
    || (v4 = (std::string::_Rep *)std::string::_M_rep(this), std::string::_Rep::_M_is_shared(v4)) )
  {
    std::string::get_allocator((std::string *)&v19, (__int64)this);
    v6 = std::string::capacity(this);
    v20 = std::string::_Rep::_S_create(v22, v6, (__int64)&v19);
    if ( a2 )
    {
      v7 = (char *)std::string::_M_data(this);
      v8 = (std::string *)std::string::_Rep::_M_refdata(v20);
      std::string::_M_copy(v8, v7, a2);
    }
    if ( v21 )
    {
      v9 = (char *)&a2[a3 + std::string::_M_data(this)];
      v10 = std::string::_Rep::_M_refdata(v20);
      std::string::_M_copy((std::string *)&a2[a4 + v10], v9, v21);
    }
    v11 = (volatile signed __int32 *)std::string::_M_rep(this);
    std::string::_Rep::_M_dispose(v11, (__int64)&v19);
    v12 = (char *)std::string::_Rep::_M_refdata(v20);
    std::string::_M_data(this, v12);
    std::allocator<char>::~allocator(&v19);
  }
  else if ( v21 && a3 != a4 )
  {
    v13 = (char *)&a2[a3 + std::string::_M_data(this)];
    v14 = std::string::_M_data(this);
    std::string::_M_move((std::string *)&a2[a4 + v14], v13, v21);
  }
  v15 = (std::string::_Rep *)std::string::_M_rep(this);
  return std::string::_Rep::_M_set_length_and_sharable(v15, v22);
}
