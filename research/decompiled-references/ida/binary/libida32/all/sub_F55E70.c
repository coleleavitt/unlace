__int64 __fastcall sub_F55E70(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *a1;
  v2 = a1[1];
  if ( v2 != *a1 )
  {
    do
    {
      if ( *(_QWORD *)result && *(_QWORD *)result != -1 )
        break;
      if ( *(_DWORD *)(result + 8) )
        break;
      result += 48;
      *a1 = result;
    }
    while ( v2 != result );
  }
  return result;
}

