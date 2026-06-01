/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DCD0
// Address: 0x0003DCD0

//----- (0003DCD0) --------------------------------------------------------
const char *__cdecl sub_3DCD0(__int64 a1)
{
  const char *result; // eax

  if ( a1 > 767 )
  {
    if ( __PAIR64__((unsigned int)__CFADD__((_DWORD)a1, -768) + HIDWORD(a1) - 1, (int)a1 - 768) <= 0xC )
    {
      switch ( (int)a1 )
      {
        case 768:
          result = (char *)&qword_13ACD8 - 367647;
          break;
        case 769:
          result = (char *)&qword_13ACD8 - 367629;
          break;
        case 770:
          result = (char *)&qword_13ACD8 - 367615;
          break;
        case 771:
          result = (const char *)(&qword_13ACD8 - 45950);
          break;
        case 772:
          result = (const char *)(&qword_13ACD8 - 45948);
          break;
        case 773:
          result = (char *)&qword_13ACD8 - 367571;
          break;
        case 774:
          result = (char *)&qword_13ACD8 - 367556;
          break;
        case 775:
          result = (char *)&qword_13ACD8 - 367537;
          break;
        case 776:
          result = (char *)&qword_13ACD8 - 367517;
          break;
        case 777:
          result = (char *)&qword_13ACD8 - 367505;
          break;
        case 778:
          result = (const char *)(&qword_13ACD8 - 45936);
          break;
        case 779:
          result = (char *)&qword_13ACD8 - 367470;
          break;
        case 780:
          result = (const char *)(&qword_13ACD8 - 45932);
          break;
      }
      return result;
    }
    if ( __PAIR64__((unsigned int)__CFADD__((_DWORD)a1, -1024) + HIDWORD(a1) - 1, (int)a1 - 1024) <= 5 )
    {
      switch ( (int)a1 )
      {
        case 1024:
          result = (char *)&qword_13ACD8 - 367442;
          break;
        case 1025:
          result = (char *)&qword_13ACD8 - 367431;
          break;
        case 1026:
          result = (char *)&qword_13ACD8 - 367420;
          break;
        case 1027:
          result = (char *)&qword_13ACD8 - 367404;
          break;
        case 1028:
          return nullptr;
        case 1029:
          result = (char *)&qword_13ACD8 - 367388;
          break;
      }
      return result;
    }
    if ( a1 == 1189489535 )
      return "NT_PRXFPREG";
    return nullptr;
  }
  if ( a1 > 511 )
  {
    switch ( a1 )
    {
      case 512LL:
        return "NT_386_TLS";
      case 513LL:
        return "NT_386_IOPERM";
      case 514LL:
        return "NT_X86_XSTATE";
    }
    return nullptr;
  }
  if ( (unsigned __int64)(a1 - 256) > 0xF )
    return nullptr;
  switch ( (int)a1 )
  {
    case 256:
      result = "NT_PPC_VMX";
      break;
    case 257:
      return nullptr;
    case 258:
      result = "NT_PPC_VSX";
      break;
    case 259:
      result = "NT_PPC_TAR";
      break;
    case 260:
      result = "NT_PPC_PPR";
      break;
    case 261:
      result = "NT_PPC_DSCR";
      break;
    case 262:
      result = "NT_PPC_EBB";
      break;
    case 263:
      result = "NT_PPC_PMU";
      break;
    case 264:
      result = "NT_PPC_TM_CGPR";
      break;
    case 265:
      result = "NT_PPC_TM_CFPR";
      break;
    case 266:
      result = "NT_PPC_TM_CVMX";
      break;
    case 267:
      result = "NT_PPC_TM_CVSX";
      break;
    case 268:
      result = "NT_PPC_TM_SPR";
      break;
    case 269:
      result = "NT_PPC_TM_CTAR";
      break;
    case 270:
      result = "NT_PPC_TM_CPPR";
      break;
    case 271:
      result = "NT_PPC_TM_CDSCR";
      break;
  }
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
