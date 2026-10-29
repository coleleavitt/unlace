__int64 __fastcall ZSTD_getDictID_fromDict(_DWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( a2 > 7 && *a1 == -332356553 )
    return (unsigned int)a1[1];
  return result;
}

