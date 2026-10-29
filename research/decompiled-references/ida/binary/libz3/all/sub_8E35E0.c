__int64 __fastcall sub_8E35E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 176LL) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 168LL) = a2;
    return 1;
  }
  return result;
}

