__int64 __fastcall ClpHashValue::index(ClpHashValue *this, double a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 0;
  if ( a2 != 0.0 )
  {
    LODWORD(result) = ClpHashValue::hash(this, a2);
    while ( 1 )
    {
      v3 = *((_QWORD *)this + 1) + 16LL * (int)result;
      result = *(unsigned int *)(v3 + 8);
      if ( (int)result < 0 )
        break;
      if ( a2 != *(double *)v3 )
      {
        result = *(unsigned int *)(v3 + 12);
        if ( (_DWORD)result != -1 )
          continue;
      }
      return result;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

