__int64 __fastcall sub_4DAD60(_QWORD *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // rax
  __int64 v3; // rdx

  v1 = a1[1];
  if ( !v1 || *(int *)*a1 >= 0 )
    return 0;
  if ( v1 != 1 )
  {
    v2 = (_BYTE *)(*a1 + 80LL);
    v3 = 1;
    while ( (*v2 & 0x40) != 0 )
    {
      ++v3;
      v2 += 80;
      if ( v1 == v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
