__int64 __fastcall google_breakpad::ExceptionHandler::RegisterAppMemory(
        google_breakpad::ExceptionHandler *this,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  void *v7; // [rsp+10h] [rbp-40h] BYREF
  google_breakpad::ExceptionHandler *v8; // [rsp+18h] [rbp-38h]
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-18h] BYREF

  v8 = this;
  v7 = a2;
  v3 = std::list<google_breakpad::AppMemory>::end((char *)this + 152);
  v4 = std::list<google_breakpad::AppMemory>::begin((char *)this + 152);
  v10 = std::find<std::_List_iterator<google_breakpad::AppMemory>,void *>(v4, v3, &v7);
  v11[0] = std::list<google_breakpad::AppMemory>::end((char *)v8 + 152);
  result = std::_List_iterator<google_breakpad::AppMemory>::operator!=(&v10, v11);
  if ( !(_BYTE)result )
  {
    v9[0] = v7;
    v9[1] = a3;
    return std::list<google_breakpad::AppMemory>::push_back((char *)v8 + 152, v9);
  }
  return result;
}

