__int64 __fastcall sub_64BCA0(__int64 a1, __int64 a2)
{
  int v2; // eax
  _DWORD *v3; // r10
  _QWORD *v4; // rax
  __int64 v5; // r10
  __int64 result; // rax

  v2 = sub_1625010(a1 + 56);
  v3 = *(_DWORD **)(a2 + 24);
  if ( !v3 || v2 != *v3 || (result = 1, v3[1] != 2) )
  {
    v4 = sub_64ABC0(*(_QWORD **)(a1 + 2264), *(_DWORD *)(a1 + 2272), a2);
    if ( v4 )
    {
      return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v4[1] + 16LL))(v4[1]);
    }
    else
    {
      result = -1;
      if ( !*(_DWORD *)(v5 + 24) )
        return *(_QWORD *)(v5 + 32);
    }
  }
  return result;
}

