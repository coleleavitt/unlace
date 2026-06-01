__int64 __fastcall get_dtype_by_size(__int64 a1, const char *a2)
{
  __int64 ph; // rbp
  __int64 v3; // rax
  __int64 result; // rax

  switch ( (int)a1 )
  {
    case 1:
      goto LABEL_5;
    case 2:
      result = 1;
      break;
    case 4:
      result = 2;
      break;
    case 6:
      result = 11;
      break;
    case 8:
      result = 7;
      break;
    case 16:
      result = 8;
      break;
    case 32:
      result = 16;
      break;
    case 64:
      result = 17;
      break;
    default:
      ph = get_ph(a1, a2);
      if ( (unsigned __int8)getinf(66) )
        v3 = (unsigned __int8)getinf(66);
      else
        v3 = *(_QWORD *)(ph + 120);
      if ( (unsigned int)a1 == v3 )
        result = 15;
      else
LABEL_5:
        result = 0;
      break;
  }
  return result;
}

