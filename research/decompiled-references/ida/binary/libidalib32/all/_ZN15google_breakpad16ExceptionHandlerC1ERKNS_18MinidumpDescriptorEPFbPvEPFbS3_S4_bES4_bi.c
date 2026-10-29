// Alternative name is '_ZN15google_breakpad16ExceptionHandlerC2ERKNS_18MinidumpDescriptorEPFbPvEPFbS3_S4_bES4_bi'
int __fastcall google_breakpad::ExceptionHandler::ExceptionHandler(
        google_breakpad::ExceptionHandler *this,
        const google_breakpad::MinidumpDescriptor *a2,
        bool (*a3)(void *),
        bool (*a4)(const google_breakpad::MinidumpDescriptor *, void *, bool),
        void *a5,
        char a6,
        google_breakpad::CrashGenerationClient *a7)
{
  __int64 v7; // rax
  google_breakpad::ExceptionHandler *v9; // rdi
  google_breakpad::ExceptionHandler *v13; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)this = a3;
  *((_QWORD *)this + 1) = a4;
  *((_QWORD *)this + 2) = a5;
  google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::scoped_ptr((char *)this + 24, 0);
  google_breakpad::MinidumpDescriptor::MinidumpDescriptor((google_breakpad::ExceptionHandler *)((char *)this + 32), a2);
  *((_QWORD *)this + 15) = 0;
  *((_DWORD *)this + 32) = -1;
  *((_DWORD *)this + 33) = -1;
  std::list<google_breakpad::MappingEntry>::list((char *)this + 136);
  std::list<google_breakpad::AppMemory>::list((char *)this + 152);
  if ( (int)a7 >= 0 )
  {
    v7 = google_breakpad::CrashGenerationClient::TryCreate(
           (google_breakpad::CrashGenerationClient *)(unsigned int)a7,
           (int)a2);
    google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::reset((char *)this + 24, v7);
  }
  if ( (unsigned __int8)google_breakpad::ExceptionHandler::IsOutOfProcess(this) != 1
    && (unsigned __int8)google_breakpad::MinidumpDescriptor::IsFD((google_breakpad::ExceptionHandler *)((char *)this + 32)) != 1
    && (unsigned __int8)google_breakpad::MinidumpDescriptor::IsMicrodumpOnConsole((google_breakpad::ExceptionHandler *)((char *)this + 32)) != 1 )
  {
    google_breakpad::MinidumpDescriptor::UpdatePath((google_breakpad::ExceptionHandler *)((char *)this + 32));
  }
  pthread_mutex_lock(&mutex);
  v9 = (google_breakpad::ExceptionHandler *)&unk_256380;
  memset(&unk_256380, 0, 0x630u);
  if ( !qword_256320 )
  {
    v9 = (google_breakpad::ExceptionHandler *)operator new(0x18u);
    std::vector<google_breakpad::ExceptionHandler *>::vector(v9);
    qword_256320 = v9;
  }
  if ( a6 )
  {
    sub_1A4BD9();
    google_breakpad::ExceptionHandler::InstallHandlersLocked(v9);
  }
  v13 = this;
  std::vector<google_breakpad::ExceptionHandler *>::push_back(qword_256320, &v13);
  return pthread_mutex_unlock(&mutex);
}

