// Alternative name is '_ZN15google_breakpad16ExceptionHandlerD2Ev'
void __fastcall google_breakpad::ExceptionHandler::~ExceptionHandler(google_breakpad::ExceptionHandler *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  google_breakpad::ExceptionHandler *v3; // rbx
  google_breakpad::ExceptionHandler *v4; // rdi
  google_breakpad::ExceptionHandler *v5; // rbx
  __int64 v7; // [rsp+18h] [rbp-28h] BYREF
  google_breakpad::ExceptionHandler *v8; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-18h] BYREF

  pthread_mutex_lock(&mutex);
  v8 = this;
  v1 = std::vector<google_breakpad::ExceptionHandler *>::end(qword_256320);
  v2 = std::vector<google_breakpad::ExceptionHandler *>::begin(qword_256320);
  v7 = std::find<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,google_breakpad::ExceptionHandler *>(
         v2,
         v1,
         &v8);
  v3 = qword_256320;
  __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler * const*,std::vector<google_breakpad::ExceptionHandler *>>::__normal_iterator<google_breakpad::ExceptionHandler **>(
    v9,
    &v7);
  std::vector<google_breakpad::ExceptionHandler *>::erase(v3, v9[0]);
  v4 = qword_256320;
  if ( (unsigned __int8)std::vector<google_breakpad::ExceptionHandler *>::empty(qword_256320) )
  {
    v5 = qword_256320;
    if ( qword_256320 )
    {
      std::vector<google_breakpad::ExceptionHandler *>::~vector(qword_256320);
      v4 = v5;
      operator delete(v5, 0x18u);
    }
    qword_256320 = nullptr;
    sub_1A4CBD();
    google_breakpad::ExceptionHandler::RestoreHandlersLocked(v4);
  }
  pthread_mutex_unlock(&mutex);
  std::list<google_breakpad::AppMemory>::~list((char *)this + 152);
  std::list<google_breakpad::MappingEntry>::~list((char *)this + 136);
  google_breakpad::MinidumpDescriptor::~MinidumpDescriptor((google_breakpad::ExceptionHandler *)((char *)this + 32));
  google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::~scoped_ptr((char *)this + 24);
}

