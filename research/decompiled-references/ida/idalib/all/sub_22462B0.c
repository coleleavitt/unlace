__int64 __fastcall sub_22462B0(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // r9
  __int64 result; // rax
  unsigned __int8 v7; // di
  unsigned __int8 v8; // cl

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned __int8 **)a1;
  if ( v3 > a3 )
  {
    v5 = &v4[a3];
    if ( &v4[a3] == v4 )
      return v3 < a3 ? -1 : 1;
    while ( 1 )
    {
LABEL_6:
      v7 = *v4;
      if ( (unsigned __int8)(*v4 - 65) < 0x1Au )
        v7 = *v4 + 32;
      v8 = *a2;
      if ( (unsigned __int8)(*a2 - 65) < 0x1Au )
        v8 = *a2 + 32;
      if ( v7 != v8 )
        return v7 < v8 ? -1 : 1;
      ++v4;
      ++a2;
      if ( v5 == v4 )
        goto LABEL_3;
    }
  }
  else
  {
    v5 = &v4[v3];
    if ( &v4[v3] != v4 )
      goto LABEL_6;
LABEL_3:
    result = 0;
    if ( v3 != a3 )
      return v3 < a3 ? -1 : 1;
  }
  return result;
}
