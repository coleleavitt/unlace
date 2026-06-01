__int64 __fastcall google_breakpad::UContextReader::GetInstructionPointer(
        google_breakpad::UContextReader *this,
        const ucontext *a2)
{
  return *((_QWORD *)this + 21);
}

