__int64 __fastcall sub_1037F0(_QWORD *a1)
{
  __int64 result; // rax

  sub_1548C0();
  result = a1[94];
  if ( *(_BYTE *)(result + 32) )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 384LL))(a1);
  return result;
}

