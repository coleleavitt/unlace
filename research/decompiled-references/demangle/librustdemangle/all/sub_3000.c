unsigned __int64 __fastcall sub_3000(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 result; // rax
  char v3; // dl
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 >= *(_QWORD *)(a1 + 8) )
    return sub_2670(a1);
  v3 = *(_BYTE *)(*(_QWORD *)a1 + v1);
  if ( v3 == 76 )
  {
    *(_QWORD *)(a1 + 32) = v1 + 1;
    v4 = sub_1430(a1);
    return sub_1740(a1, v4);
  }
  else
  {
    if ( v3 != 75 )
      return sub_2670(a1);
    *(_QWORD *)(a1 + 32) = v1 + 1;
    result = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)result )
      return sub_2200(a1);
  }
  return result;
}
