__int64 __fastcall sub_F05420(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)result == 1 )
  {
    result = sub_971800(*(_QWORD *)(a1 + 1096), " SwiftPrivate");
  }
  else if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 2 )
      result = sub_971800(*(_QWORD *)(a1 + 1096), " NotSwiftPrivate");
  }
  else
  {
    result = sub_971800(*(_QWORD *)(a1 + 1096), " None");
  }
  if ( *(char *)(a2 + 47) < 0 )
  {
    v3 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
    return sub_2257BD0(v3, *(_DWORD *)(a2 + 44) & 0x3FFFFFFF);
  }
  return result;
}

