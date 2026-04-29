__int64 __fastcall sub_636C0(__int64 a1, signed int a2)
{
  unsigned int v2; // ebx
  signed int v3; // eax
  unsigned int v4; // r12d

  v2 = a2;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( v3 > a2 )
  {
    v4 = v3;
    while ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v2) )
    {
      if ( v4 == ++v2 )
        return v4;
    }
  }
  return v2;
}
