__int64 __fastcall google_breakpad::LinuxDumper::SetCrashInfoFromSigInfo(
        google_breakpad::LinuxDumper *this,
        const siginfo_t *a2)
{
  google_breakpad::LinuxDumper::set_crash_address(this, (unsigned __int64)a2->_sifields._sigfault.si_addr);
  google_breakpad::LinuxDumper::set_crash_signal(this, a2->si_signo);
  return google_breakpad::LinuxDumper::set_crash_signal_code(this, a2->si_code);
}

