__int64 __fastcall get_dtype_flag(unsigned __int8 a1, const char *a2)
{
  __int64 result; // rax
  __int64 ph; // rbx
  __int64 v4; // rax

  switch ( a1 )
  {
    case 1u:
      result = 268436480;
      break;
    case 2u:
      result = 536871936;
      break;
    case 3u:
      result = 2147484672LL;
      break;
    case 4u:
      result = 2415920128LL;
      break;
    case 5u:
      result = 1073742848;
      break;
    case 6u:
      result = 2684355584LL;
      break;
    case 7u:
      result = 805307392;
      break;
    case 8u:
      result = 1879049216;
      break;
    case 0xFu:
      ph = get_ph(a1, a2);
      if ( (unsigned __int8)getinf(66) )
        LODWORD(v4) = (unsigned __int8)getinf(66);
      else
        v4 = *(_QWORD *)(ph + 120);
      if ( (_DWORD)v4 == 8 )
      {
        result = 2415920128LL;
      }
      else if ( (int)v4 == *(_QWORD *)(ph + 120) )
      {
        result = 1073742848;
      }
      else
      {
        result = 1024;
      }
      break;
    case 0x10u:
      result = 3758097408LL;
      break;
    default:
      result = 1024;
      break;
  }
  return result;
}

