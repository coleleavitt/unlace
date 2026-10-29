__int64 __fastcall sub_14DA10(__int64 a1, _DWORD *a2)
{
  int named_type; // edx
  __int64 result; // rax

  named_type = get_named_type();
  result = 0;
  if ( named_type > 0 )
  {
    *a2 = 8;
    return 1;
  }
  return result;
}

