__int64 __fastcall sub_371670(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v2 = *(_QWORD **)(a1 + 16);
  v3 = &v2[*(_QWORD *)(a1 + 24)];
  if ( v3 == v2 )
    return 0;
  v4 = *a2 + 40LL * a2[1];
  while ( 1 )
  {
    if ( *a2 != v4 )
    {
      v5 = (_QWORD *)*a2;
      while ( *v2 != *v5 )
      {
        v5 += 5;
        if ( (_QWORD *)v4 == v5 )
          goto LABEL_8;
      }
      if ( v5 )
        return 1;
    }
LABEL_8:
    if ( ++v2 == v3 )
      return 0;
  }
}
