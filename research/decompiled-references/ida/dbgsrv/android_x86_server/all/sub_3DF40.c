/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DF40
// Address: 0x0003DF40

//----- (0003DF40) --------------------------------------------------------
const char *__cdecl sub_3DF40(__int64 a1)
{
  const char *result; // eax

  if ( (unsigned __int64)(a1 - 1) > 0x11 )
  {
    if ( a1 == 1179208773 )
    {
      return "NT_FILE";
    }
    else if ( a1 == 1397311305 )
    {
      return "NT_SIGINFO";
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    result = "NT_PRSTATUS";
    switch ( (int)a1 )
    {
      case 1:
        return result;
      case 2:
        result = "NT_FPREGSET";
        break;
      case 3:
        result = "NT_PRPSINFO";
        break;
      case 4:
        result = "NT_TASKSTRUCT";
        break;
      case 5:
      case 7:
      case 8:
      case 9:
      case 11:
      case 14:
      case 15:
        return nullptr;
      case 6:
        result = "NT_AUXV";
        break;
      case 10:
        result = "NT_PSTATUS";
        break;
      case 12:
        result = "NT_FPREGS";
        break;
      case 13:
        result = "NT_PSINFO";
        break;
      case 16:
        result = "NT_LWPSTATUS";
        break;
      case 17:
        result = "NT_LWPSINFO";
        break;
      case 18:
        result = "NT_WIN32PSTATUS";
        break;
    }
  }
  return result;
}
