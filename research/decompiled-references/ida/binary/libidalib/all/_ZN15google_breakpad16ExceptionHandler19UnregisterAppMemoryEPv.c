__int64 __fastcall google_breakpad::ExceptionHandler::UnregisterAppMemory(
        google_breakpad::ExceptionHandler *this,
        void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  char *v5; // rbx
  void *v6; // [rsp+0h] [rbp-40h] BYREF
  google_breakpad::ExceptionHandler *v7; // [rsp+8h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-28h] BYREF
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-18h] BYREF

  v7 = this;
  v6 = a2;
  v2 = std::list<google_breakpad::AppMemory>::end((char *)this + 152);
  v3 = std::list<google_breakpad::AppMemory>::begin((char *)this + 152);
  v8 = std::find<std::_List_iterator<google_breakpad::AppMemory>,void *>(v3, v2, &v6);
  v9 = std::list<google_breakpad::AppMemory>::end((char *)v7 + 152);
  result = std::_List_iterator<google_breakpad::AppMemory>::operator!=(&v8, &v9);
  if ( (_BYTE)result )
  {
    v5 = (char *)v7 + 152;
    std::_List_const_iterator<google_breakpad::AppMemory>::_List_const_iterator(v10, &v8);
    return std::list<google_breakpad::AppMemory>::erase(v5, v10[0]);
  }
  return result;
}

