__int64 __fastcall sub_19A2DA0(__int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    result = *a1;
    *(_QWORD *)(*a1 + 9944) = a1[1];
  }
  return result;
}
