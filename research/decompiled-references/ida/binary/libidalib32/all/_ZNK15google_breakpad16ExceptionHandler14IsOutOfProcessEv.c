bool __fastcall google_breakpad::ExceptionHandler::IsOutOfProcess(google_breakpad::ExceptionHandler *this)
{
  return google_breakpad::scoped_ptr<google_breakpad::CrashGenerationClient>::get((char *)this + 24) != 0;
}

