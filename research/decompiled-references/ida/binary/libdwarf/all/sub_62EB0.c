unsigned __int64 __fastcall sub_62EB0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 30320) )
  {
    result = ZSTD_decompressContinue();
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      *a2 += result;
      *(_DWORD *)(a1 + 30236) = 2;
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 29996) != 7 )
    {
      result = ZSTD_decompressContinue();
      if ( result > 0xFFFFFFFFFFFFFF88LL )
        return result;
      if ( !result )
      {
        *(_DWORD *)(a1 + 30236) = 2;
        return result;
      }
LABEL_10:
      v3 = *(_QWORD *)(a1 + 30288) + result;
      *(_DWORD *)(a1 + 30236) = 4;
      *(_QWORD *)(a1 + 30296) = v3;
      return 0;
    }
    result = ZSTD_decompressContinue();
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      goto LABEL_10;
  }
  return result;
}

