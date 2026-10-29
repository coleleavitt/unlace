unsigned __int64 __fastcall sub_7821A0(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 144);
  result = 0;
  if ( v1 )
    return *v1 & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}

