std::string *__fastcall google_breakpad::UTF16ToUTF8(std::string *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int16 *v4; // rax
  _WORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v10; // [rsp+28h] [rbp-98h] BYREF
  __int64 v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[8]; // [rsp+38h] [rbp-88h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-80h] BYREF
  __int64 v14; // [rsp+60h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-58h] BYREF
  char v16; // [rsp+76h] [rbp-4Ah] BYREF
  char v17; // [rsp+77h] [rbp-49h] BYREF
  __int64 v18; // [rsp+78h] [rbp-48h]
  unsigned __int64 v20; // [rsp+88h] [rbp-38h]
  unsigned __int64 v21; // [rsp+90h] [rbp-30h]
  __int64 v22; // [rsp+98h] [rbp-28h]
  __int64 v23; // [rsp+A0h] [rbp-20h]
  int v24; // [rsp+ACh] [rbp-14h]

  if ( (unsigned __int8)std::vector<unsigned short>::empty(a2) )
  {
    std::string::string(a1);
  }
  else
  {
    v14 = std::vector<unsigned short>::operator[](a2, 0);
    std::vector<unsigned short>::vector(v13);
    if ( a3 )
    {
      v24 = 0;
      v3 = std::vector<unsigned short>::size(a2);
      std::vector<unsigned short>::resize(v13, v3);
      v23 = std::vector<unsigned short>::operator[](v13, 0);
      v10 = std::vector<unsigned short>::begin(a2);
      while ( 1 )
      {
        v15 = std::vector<unsigned short>::end(a2);
        if ( !(unsigned __int8)__gnu_cxx::operator!=<unsigned short const*,std::vector<unsigned short>>(&v10, &v15) )
          break;
        v4 = (unsigned __int16 *)__gnu_cxx::__normal_iterator<unsigned short const*,std::vector<unsigned short>>::operator*(&v10);
        v5 = (_WORD *)(2LL * v24 + v23);
        *v5 = sub_1BC029(*v4);
        __gnu_cxx::__normal_iterator<unsigned short const*,std::vector<unsigned short>>::operator++(&v10);
        ++v24;
      }
      v14 = std::vector<unsigned short>::operator[](v13, 0);
    }
    v6 = v14;
    v22 = v6 + 2 * std::vector<unsigned short>::size(a2);
    v21 = 4 * std::vector<unsigned short>::size(a2);
    v7 = operator new[](v21);
    google_breakpad::scoped_array<unsigned char>::scoped_array(v12, v7);
    v11 = google_breakpad::scoped_array<unsigned char>::get(v12);
    v20 = v11 + v21;
    if ( (unsigned int)google_breakpad::ConvertUTF16toUTF8(&v14, v22, &v11, v11 + v21, 0) )
    {
      std::allocator<char>::allocator();
      std::string::string(a1, &unk_1DA2A8, &v17);
    }
    else
    {
      v18 = google_breakpad::scoped_array<unsigned char>::get(v12);
      std::allocator<char>::allocator();
      std::string::string(a1, v18, &v16);
    }
    std::allocator<char>::~allocator();
    google_breakpad::scoped_array<unsigned char>::~scoped_array(v12);
    std::vector<unsigned short>::~vector(v13);
  }
  return a1;
}

