__int64 __fastcall sub_103A80(_QWORD *a1)
{
  __int64 result; // rax

  sub_1550C0();
  result = a1[95];
  if ( *(_BYTE *)(result + 32) )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 384LL))(a1);
  return result;
}

