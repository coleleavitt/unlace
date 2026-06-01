__int64 *__fastcall std::optional<unsigned long long>::swap[abi:v15006](__int64 *result, __int64 *a2)
{
  __int64 v2; // x8

  if ( (*((_BYTE *)result + 8) != 0) != (*((_BYTE *)a2 + 8) != 0) )
  {
    if ( *((_BYTE *)result + 8) )
    {
      *a2 = *result;
      *((_BYTE *)a2 + 8) = 1;
      if ( *((_BYTE *)result + 8) )
        *((_BYTE *)result + 8) = 0;
    }
    else
    {
      *result = *a2;
      *((_BYTE *)result + 8) = 1;
      if ( *((_BYTE *)a2 + 8) )
        *((_BYTE *)a2 + 8) = 0;
    }
  }
  else if ( *((_BYTE *)result + 8) )
  {
    v2 = *result;
    *result = *a2;
    *a2 = v2;
  }
  return result;
}
